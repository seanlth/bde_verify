#include <s_breguisvc_breg_v3_tree.h>
#include <s_breguisvc_helpers_v3.h>

#include <bregv3db_dbaccessor.h>
#include <bregv3db_dbexception.h>

// log
#include <bael_log.h>

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

#include <bregdb_eval.h>

extern "C"
{
#include <bregcg_api.h>
#include <acc_parmcm6.h> //set_parmcm6_p6uuid
}


namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3tree {

namespace {
    const char LOG_CATEGORY[] = "BREGUISVC.BREGV3_TREE";
    struct nodeNameCmp
    {
        bool operator() (const s_breguisvc::Node& n1, 
                         const s_breguisvc::Node& n2)
        {
            if (strcmp(n1.name().c_str(), n2.name().c_str()) < 0)
                return true;
            return false;
        }
    } nameCmp;

    void build_tree(Node * root, int node_id);
    void get_children(std::vector<Node> * children, int node_id);
    int  get_default_node(int uuid);
    void get_node_details(NodeDetails * details, int breg_id);
    void load_values_comdb2(NodeDetails * details, int breg_id, 
                            int type, bool is_prod);
    int  cdb2ValTypeToIfmxValType(int cdb2_valuetype);
    s_breguisvc::ValueType::Value cdb2ValTypeToSvcValTypeEnum(int cdb2ValType);
} // end anonymous namespace function declaration

/*
 * Load tree that includes breg_id and is only one level deep.
 * If breg_id is a node, load it and it's children.
 * If breg_id is an entry, load the entry's parent with it's children
 */
void loadTree(Response * response, int entryId)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int parentNodeId = 0;
    bregv3db::Node node;
    bregv3db::Audit audit;
    try {
        bregv3db::DbAccessor db;
        db.getNode(&node, &audit, entryId);

        if (node.isDeleted()) {
            throw std::runtime_error("Node has been deleted.");
        }
            
        if (node.isLeaf())
            parentNodeId = node.parentId();
        else
            parentNodeId = entryId;            
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        parentNodeId = 1;
    }

    s_breguisvc::Node root;

    build_tree(&root, parentNodeId);

    std::vector<s_breguisvc::Node> root_children;
    root_children.push_back(root);

    response->makeNodeTree(root_children);
}

/*
 * Load tree expanded up to the breg_id node/entry
 */
void loadExpandedTree(Response * response, int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    if(breg_id == 1) {
        loadTree(response, 1);
        return;
    }

    std::list<int> ancestors;
    try {
        bregv3db::Node node;
        bregv3db::Audit audit;
        bregv3db::DbAccessor db;

        db.getNode(&node, &audit, breg_id);

        if (node.isDeleted()) {
            throw std::runtime_error("Node has been deleted.");
        }

        // get node ancestors in "hierarchy" for building tree by level
        const int MAX_TREE_LEVEL = 100; // to avoid infinite loop by data error
        int level = 0;
        while (node.parentId() != 1 && ++level < MAX_TREE_LEVEL) {
            int parentId = node.parentId();
            ancestors.push_front(parentId);
            db.getNode(&node, &audit, parentId);
        }
    }
    catch (bregv3db::DbException &e) { // error finding node
        BAEL_LOG_ERROR<< e.what() << BAEL_LOG_END;
        return;
    }

    // starting from root R&D, get children of each ancestors
    Node root;
    build_tree(&root, 1);
    std::vector<Node> *current_level = &root.children();

    std::list<int>::iterator iter;
    for (iter = ancestors.begin(); iter != ancestors.end(); ++iter) {

        int current_node_id = *iter;
            
        if (current_node_id <= 1) continue;

        Node * current = NULL;
        for(std::vector<Node>::iterator it = current_level->begin();
            it != current_level->end(); ++it) {
            if(it->id() == current_node_id)
                current = &(*it);
        }

        if(current == NULL) {
            BAEL_LOG_ERROR << "node not found: " << current_node_id
                           << BAEL_LOG_END;
            break;
        }
        get_children(&current->children(), current_node_id);

        current_level = &current->children();
    }

    std::vector<Node> tree;
    tree.push_back(root);
    response->makeNodeTree(tree);
}

/*
 * Load tree one level deep for the user's default.
 */
void loadDefaultTree(
        Response * response,
        int uuid)
{
    int default_node = get_default_node(uuid);
    loadTree(response, default_node);
}

/*
 * Get children for node breg_id
 */
void loadChildren(Response * response, int breg_id)
{
    std::vector<Node> children;
    get_children(&children, breg_id);
    response->makeNodeTree(children);
}

/*
 * Get details for node breg_id
 */
void loadNodeDetails(Response * response, int breg_id, int uuid)
{
    NodeDetails details;      
    get_node_details(&details, breg_id);

    details.canAddNode() = false;
    details.canAddEntry() = false;
    set_parmcm6_p6uuid(uuid);
    if (helpers_v3::isUserPrivileged(uuid, breg_id, 
                                     bregv3db::DbAccessor::ADMIN_PRIV)) {
        details.canAddNode() = true;
        details.canAddEntry() = true;
    }
    if (helpers_v3::isUserPrivileged(uuid, breg_id, 
                            bregv3db::DbAccessor::UPDATE_METADATA_PRIV)) {
        details.canAddEntry() = true;
    }

    response->makeNodeDetails(details);
    set_parmcm6_p6uuid(0);
    return;
}

/*
 * Get default node for user
 */
void loadDefaultNode(Response * response, int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int default_breg_id = 0;
    bregcg_rc rcode = bregcg_get_users_view(uuid, &default_breg_id);

    if (rcode != BREGCG_API_NO_ERROR) {
        default_breg_id = helpers_v3::BREG_ROOT_NODE;
    }
    else {
        try {
            bregv3db::DbAccessor db;
            bregv3db::Node node;
            bregv3db::Audit audit;
            db.getNode(&node, &audit, default_breg_id);

            if (node.isDeleted()) {
                // delete it from bregcgdb for deleted entry/node
                rcode = bregcg_delete_users_view(uuid, 
                                                 default_breg_id);
                if (rcode != BREGCG_API_NO_ERROR)
                    BAEL_LOG_WARN << "bregcg_delete_users_view failed:"
                                  << "rc=" << rcode << " uuid=" << uuid
                                  << " id=" << default_breg_id
                                  <<BAEL_LOG_END;
            }
        }
        catch(bregv3db::DbException & e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        }                              
    }
    
    response->makeNodeId(default_breg_id);
}

/*
 * Set default node for user
 */
void setDefaultNode(Response * response, int uuid, int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int current_default_node = 0;
    bregcg_rc cg_rc = bregcg_get_users_view(uuid, 
                                            &current_default_node);
    // check if the default is already set to this entry id
    if (cg_rc == BREGCG_API_NO_ERROR && 
        current_default_node == breg_id) {
        ErrorInfoResponse err;
        err.code() = 0;
        err.message() = "Default was already set to this node!";
        response->makeErrorResponse(err);
        return;
    }

    // delete old default node
    if (cg_rc == BREGCG_API_NO_ERROR && 
        current_default_node != breg_id) {
        cg_rc = bregcg_delete_users_view(uuid, current_default_node);
        if (cg_rc != BREGCG_API_NO_ERROR)
            BAEL_LOG_WARN << "bregcg_delete_users_view failed:rc=" 
                          << cg_rc << " uuid=" << uuid << " id="
                          << breg_id << BAEL_LOG_END;
    }

    std::string response_msg;

    // add new default node
    cg_rc = bregcg_put_users_view(uuid, breg_id);
    if(cg_rc != BREGCG_API_NO_ERROR) 
    {
        BAEL_LOG_WARN << "bregcg_put_users_view failed:rc=" << cg_rc 
            << " uuid=" << uuid << " id=" << breg_id << BAEL_LOG_END;
        throw std::runtime_error("Could not set your default node.");
    }
    
    ErrorInfoResponse err;
    err.code() = 0;
    err.message() = "Your default node was updated.";
    response->makeErrorResponse(err);
}


// anonymous namespace
namespace {
void build_tree(Node * root, int node_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    bregv3db::Node node;
    bregv3db::Audit audit;
    try {
        bregv3db::DbAccessor db;
        db.getNode(&node, &audit, node_id);
        root->id() = node.nodeId();
        root->name() = node.name();
        root->type() = node.isLeaf();
        root->description() = node.description();

        if (node.isLeaf()) {
            try {
                bregv3db::EntryDescription entryDes;
                bregv3db::Audit audit;
                db.getEntry(&entryDes, &audit, node_id);

                root->expiryTsp() = entryDes.expireTsp();
                root->hasExpired() = 
                    helpers_v3::getHasExpired(entryDes.expireTsp());

                root->obsoleteTraceEnabled() = 
                    helpers_v3::obsoleteTraceEnabled(node_id);
            }
            catch(bregv3db::DbException & e) {
                BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            }                              
            return;
        }
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }
        
    get_children(&root->children(), node_id);
}

void get_children(std::vector<Node> * children, int node_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    std::list<bregv3db::Node> dbChildren; 
    bregv3db::DbAccessor db;
    try {
        db.getNodeChildren(&dbChildren, node_id);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }

    std::list<bregv3db::Node>::iterator iter;
    for (iter = dbChildren.begin(); iter != dbChildren.end(); ++iter) {

        s_breguisvc::Node node;
        node.id() = iter->nodeId();
        node.name() = iter->name();
        node.type() = iter->isLeaf();
        node.description() = iter->description();
        
        if (iter->isLeaf()) {
            bregv3db::EntryDescription entryDes;
            bregv3db::Audit audit;
            try {
                db.getEntry(&entryDes, &audit, iter->nodeId());
                if (entryDes.isPermanent())
                    node.hasExpired() = false;
                else {
                    node.hasExpired() = 
                        helpers_v3::getHasExpired(entryDes.expireTsp());
                }
                node.obsoleteTraceEnabled() = 
                    helpers_v3::obsoleteTraceEnabled(iter->nodeId());
            }
            catch (bregv3db::DbException & e) {
                BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
            }      
        }

        children->push_back(node);
    }

    std::sort(children->begin(),children->end(), nameCmp);
} 

int get_default_node(int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int breg_id = 0;
    bregcg_rc rcode = bregcg_get_users_view(uuid, &breg_id);

    if (rcode == BREGCG_API_NO_ERROR) {

        bregv3db::DbAccessor db;
        bregv3db::Node node;
        bregv3db::Audit audit;
        try {
            db.getNode(&node, &audit, breg_id);

            if (! node.isDeleted())
                return breg_id;
            else {
               rcode = bregcg_delete_users_view(uuid, breg_id);
               if (rcode != BREGCG_API_NO_ERROR)
                   BAEL_LOG_WARN << "bregcg_delete_users_view failed:"
                                 << " rc=" << rcode << " uuid=" << uuid
                                 << " id=" << breg_id <<BAEL_LOG_END;
            }
        }
        catch(bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        }                              
    }

    return helpers_v3::BREG_ROOT_NODE;
}

void get_node_details(NodeDetails * details, int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    bregv3db::Node dbNode;
    bregv3db::Audit audit;
    bregv3db::EntryDescription entryDes;
    
    try {
        bregv3db::DbAccessor db;

        try {
            db.getNode(&dbNode, &audit, breg_id);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            throw std::runtime_error("Could not load node details.");
        }

        details->id() = breg_id;
        details->name() = dbNode.name();
        details->type() = dbNode.isLeaf(); // used for set Node/Entry
                                           // label on the screen
        details->description() = dbNode.description();

        std::ostringstream keywords;
        int keywords_count = dbNode.keywords().size();
        for (int i = 0; i < keywords_count; ++i) {
            keywords << dbNode.keywords()[i];
            if (i < (keywords_count - 1))
                keywords << ", ";
        }
        details->keywords() = keywords.str();

        if (dbNode.isLeaf()) {
            try {
                db.getEntry(&entryDes, &audit, breg_id);
            }
            catch (bregv3db::DbException & e) {
                BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
                throw std::runtime_error("Could not load entry details.");
            }
        }
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        throw std::runtime_error("bregv3db error");
    }

    details->inProd() = (entryDes.apiStatus() ==
             bregv3db::DbAccessor::API_RELEASED);

    details->inTest() = (entryDes.apiStatus() >=
             bregv3db::DbAccessor::API_STAGED);

    details->valueType() = cdb2ValTypeToIfmxValType(entryDes.valueType());
    details->valueTypeString() = 
            helpers_v3::valueTypeNumToStr(entryDes.valueType());
    details->valueTypeEnum() = 
        cdb2ValTypeToSvcValTypeEnum(entryDes.valueType());
    details->accessor() = entryDes.apiName();
    details->isInMemory() = entryDes.isSharedMemory();
    if (entryDes.isSharedMemory()) {
        details->isInMemoryString() = "Yes";
    }
    else {
        details->isInMemoryString() = "No";
    }

    details->isPermanent() = entryDes.isPermanent();
    if (entryDes.isPermanent()) {
        details->isPermanentString() = "Yes";
        details->hasExpired() = false;
    }
    else {
        details->isPermanentString() = "No";
        details->expiryTsp() = entryDes.expireTsp().substr(0, 10);
        details->hasExpired() = 
                helpers_v3::getHasExpired(entryDes.expireTsp());
    }

    details->updateTsp() = audit.updateTsp().substr(0, 10);
      
    if(details->inProd())
        load_values_comdb2(details, breg_id, entryDes.valueType(),
                           true);

    if(details->inTest())
        load_values_comdb2(details, breg_id, entryDes.valueType(),
                           false);
}

void load_values_comdb2(NodeDetails * details, int breg_id, int type, 
                        bool is_prod)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int version = 0;
    if (is_prod) {
        try {
            bregv3db::DbAccessor db;
            version = db.getCurrentProdVersion(breg_id);
        }
        catch (bregv3db::DbException & e) {
            bregv3db::DbAccessor db;
            version = db.getMaxValueVersion(breg_id);
        }

        details->prodVersion() = version;
    }
    else {
        version = 0;
    }
    
    bregv3db::EntryValue value;
    try {
        bregv3db::DbAccessor db;
        bregv3db::Audit audit;
        bregv3db::DevValueAudit devAudit;
        if (is_prod) {
            db.getProdEntryValue(&value, &audit, breg_id, version);
        }
        else {
            db.getDevEntryValue(&value, &devAudit, breg_id, version);
        }
    } 
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }
    
    BAEL_LOG_INFO << value << BAEL_LOG_END;

    if (! value.entryData().isNull()) {
        if (is_prod) {
            details->prodValue() =
                helpers_v3::valueToString(type, 
                                          value.entryData().value());
            details->prodObsoleteTraceEnabled() = value.isObsolete();
        }
        else {
            details->testValue() = 
                helpers_v3::valueToString(type, 
                                          value.entryData().value());
            details->devObsoleteTraceEnabled() = value.isObsolete();
        }
    }

    // load overrides
    int override_count = value.entryOverrides().size();

    BAEL_LOG_INFO << "OverrideCount " << override_count 
                  << BAEL_LOG_END;

    for (int i = 0; i < override_count; ++i) {

        int ovrd_type = value.entryOverrides()[i].overrideType(); 
        int target_ovrd_id = value.entryOverrides()[i].overrideTypeValue();

        OverrideSummary ovr;
        OverrideType::Value result;
        OverrideType::fromInt(&result, 
                              helpers_v3::dbOvrdTypeToSvcOvrdType(ovrd_type));
        ovr.typeEnum() = result;
        ovr.type() =  ovr.typeEnum();
        ovr.typeString() = OverrideType::toString(ovr.typeEnum());
        ovr.setting() = helpers_v3::getOverrideSetting(ovr.typeEnum(), 
                                                       target_ovrd_id);
        ovr.settingTooltip() = 
            helpers_v3::getOverrideSettingTooltip(ovr.typeEnum(),
                                                  target_ovrd_id);

        if (! value.entryOverrides()[i].entryData().isNull()) {
            ovr.value() =  helpers_v3::valueToString
                (type, value.entryOverrides()[i].entryData().value());
        }

        if (is_prod)
            details->prodOverrides().push_back(ovr);
        else
            details->testOverrides().push_back(ovr);
    }
}
    
int cdb2ValTypeToIfmxValType(int cdb2_valuetype)
{
    switch (cdb2_valuetype) {
    case BREGDB_BOOL:
        return 4;
    case BREGDB_INT:
        return 5;
    case BREGDB_CHAR:
        return 6;
    case BREGDB_DOUBLE:
        return 7;
    case BREGDB_INTLST:
        return 8;
    case BREGDB_STR:
        return 9;
    case BREGDB_EXTINTLST:
        return 76;
    case BREGDB_EXTSTR:
        return 77;
    default:
        return -1;
    }
}

s_breguisvc::ValueType::Value cdb2ValTypeToSvcValTypeEnum(int cdb2ValType)
{
    switch(cdb2ValType) {
    case BREGDB_BOOL:
        return ValueType::BOOLEAN;
    case BREGDB_INT:
        return ValueType::INTEGER;
    case BREGDB_CHAR:
        return ValueType::CHARACTER;
    case BREGDB_DOUBLE:
        return ValueType::DOUBLE;
    case BREGDB_INTLST:
        return ValueType::LIST_OF_INTEGERS;
    case BREGDB_STR:
        return ValueType::STRING;
    case BREGDB_EXTINTLST:
        return ValueType::EXT_LIST_OF_INTEGERS;
    case BREGDB_EXTSTR:
        return ValueType::EXTENDED_STRING;
    default:
        return ValueType::UNKNOWN;
    }
}

} // end anonymous namespace

} // end namespace bregv3tree
} // end namespace s_breguisvc
} // end namespace BloombergLP
