#include <s_breguisvc_messages.h>
#include <s_breguisvc_breg_v3.h>
#include <s_breguisvc_helpers_v3.h>
#include <s_breguisvc_breg_v3_node.h>
#include <s_breguisvc_breg_v3_entry.h>
#include <s_breguisvc_breg_v3_value.h>
#include <s_breguisvc_breg_v3_prqs.h>

#include <bregv3db_dbaccessor.h>

#include <bregmpdb.h>

#include <bael_log.h>

#include <iostream>
#include <sstream>
#include <map>

extern "C"
{
#include <prqs_rc_api.h>
#include <prqs_api.h>
#include <prqs_approver_api.h>
#include <drqsgpdb_wrap.h>
#include <drqsdb_wrap.h>
#include <treqrqdb_wrap.h>
#include <getuuidname_cw.h>
#include <getuuidname_w.h>
#include <getdeptchain.h>
#include <dept_global.h>
#include <deptdb_global.h>
#include <pn_time_def.h>
#include <pnlistdb_wrap.h>
#include <pntiktdb_wrap.h>
#include <getcustname_w.h>
#include <findterminal.h>
#include <functbl_access.h>
#include <host_api.h>
#include <cfrmf.h>
#include <slen_w.h>
#include <comdb_not_found.h>

void chkprimary_(int *, short*);
int is_valid_firm_(int *);
void treq_get_status_abbr (bbint32_t idx, char *abbr);
}

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3 {
namespace {
    const char LOG_CATEGORY[] = "BREGUISVC.BREGV3";
    const int MAX_STR_LENGTH = 80;

}

void loadRegistry(Response *response, int breg_id, int uuid)
{
    BAEL_LOG_SET_CATEGORY("loadRegistry");

    bregv3db::EntryDescription dbEntry;
    bregv3db::Node dbNode;
    bregv3db::Audit dbAudit;

    ErrorInfoResponse error;
    
    try {
        bregv3db::DbAccessor db;
        bool is_entry = false;

        try {
            if (db.isLeafNode(breg_id)) {
                db.getEntry(&dbEntry, &dbAudit, breg_id);
                is_entry = true;
            }
            else {
                db.getNode(&dbNode, &dbAudit, breg_id);
            }
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            error.code() = -1;
            error.message() = "Load breg failed.";
            response->makeErrorResponse(error);
            return;
        }

        NodeInfo node;
        EntryInfo entry;
        if (is_entry) {
            helpers_v3::dbEntryToSvcEntry(&node, &entry, dbEntry, dbAudit);
            try {
                entry.currentVersion() = db.getCurrentProdVersion(breg_id);
            }
            catch (bregv3db::DbException & e) {
                entry.currentVersion() = db.getMaxValueVersion(breg_id);
            }
        }
        else {
            helpers_v3::dbNodeToSvcNode(&node, dbNode, dbAudit);
        }

        NodePrivilege privilege;
        helpers_v3::getUserPrivilege(&privilege, breg_id, uuid);
        node.privilege() = privilege;

        try {
            bregv3db::Contact dbContacts;
            db.getContacts(&dbContacts, breg_id);
            EntryContacts contacts;
            contacts.primaryUuid() = dbContacts.primaryUuid();
            contacts.backupUuid() = dbContacts.backupUuid();
            contacts.drqsGroup() = dbContacts.drqsGroup();
            node.contacts() = contacts;
        }
        catch (bregv3db::DbException & e) {
            // fail to find contacts doesn't block loading registry
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END; 
        }

        response->makeRegistryInfo();
        response->registryInfo().node() = node;
        if (is_entry) {
            response->registryInfo().entry().makeValue(entry);           
        }        
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        std::ostringstream ss;
        ss << "Fail to load breg " << breg_id << ".";
        error.code() = -1;
        error.message() = ss.str();
        response->makeErrorResponse(error);
    }
}


void updateRegistry(Response *response, const RegistryInfo& request, 
                    int nodeId)
{
    BAEL_LOG_SET_CATEGORY("updateRegistry");

    ErrorInfoResponse error;

    int eventType = request.node().auditRecord().eventType().toInt64();
    // only add an audit record for PRQS RE; 
    // expire_tsp is not updated at this time, it will be updated 
    // when PRQS RE is processed
    if (eventType == helpers_v3::SVC_EXPIRE_DATE_CHANGE_SHORT_EVENT_TYPE ||
        eventType == helpers_v3::SVC_EXPIRE_DATE_CHANGE_LONG_EVENT_TYPE) {
        if (helpers_v3::addExpireDateChangeAudit(request.node())) {
            error.code() = 0;
            error.message() = "Expiration date updated, pending PRQS.";
        }
        else {
            error.code() = -1;
            error.message() = "Updating expiration date failed.";
        }
        response->makeErrorResponse(error);
        return;
    }

    RegistryInfo registry(request);
    AuditRecord& audit = registry.node().auditRecord();

    // add, update node/entry
    if (request.entry().isNull()) {
        if (request.node().nodeId() <= 0) { // add node
            BAEL_LOG_INFO << "add new node" << BAEL_LOG_END;
            audit.eventType().fromInt64(bregv3db::DbAccessor::NEW_NODE_ENTRY);
            bregv3node::addNode(response, registry, nodeId);
        }
        else if (request.node().nodeId() > 0) { // update node
            BAEL_LOG_INFO << "update existing node: " 
                          << request.node().nodeId() << BAEL_LOG_END;
            audit.eventType().fromInt64
                (bregv3db::DbAccessor::UPDATE_DESCRIPTION);
            bregv3node::updateNode(response, registry);
        }
    }
    else {
        if (request.node().nodeId() <= 0) { // add entry
            BAEL_LOG_INFO << "add new entry" << BAEL_LOG_END;
            audit.eventType().fromInt64(bregv3db::DbAccessor::NEW_NODE_ENTRY);
            bregv3entry::addEntry(response, registry, nodeId);
        }
        else if (request.node().nodeId() > 0) { // update entry
            BAEL_LOG_INFO << "update existing entry: " 
                          << request.node().nodeId() << BAEL_LOG_END;
            audit.eventType().fromInt64
                (bregv3db::DbAccessor::UPDATE_DESCRIPTION);
            bregv3entry::updateEntry(response, registry);
        }
    }
}

void deleteRegistry(Response *response, int breg_id, int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse err;

    const int BREG_GENERIC_LOGIN_UUID = 3239580;

    try {
        bregv3db::DbAccessor db;
        bool isLeafNode = false;
        if (db.isLeafNode(breg_id)) {
            isLeafNode = true;
        }

        if (!isLeafNode || uuid != BREG_GENERIC_LOGIN_UUID) {
            NodePrivilege privilege;
            helpers_v3::getUserPrivilege(&privilege, breg_id, uuid);
    
            if (!privilege.isPrivilegeAdmin() && !privilege.canUpdateProd()) {
                err.code() = 1;
                err.message() = 
                    "You don't have the permission to delete this registry.";
                response->makeErrorResponse(err);        
                return;
            }
        }

        if (!isLeafNode) {
            bregv3node::deleteNode(response, breg_id, uuid);
        }
        else {
            bregv3entry::deleteEntry(response, breg_id, uuid);
        }
    }
    catch (BloombergLP::bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "breg_id:" << breg_id << " "
                       << e.what() << BAEL_LOG_END;
        err.code() = 1;
        err.message() = "Error! Registry not deleted.";
        response->makeErrorResponse(err);
        return;
    }
}

void moveRegistry(Response *response, int breg_id, int dest_node_id, int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse err;

    try {
        std::string emsg;
        if (!helpers_v3::isRegistryMovable(breg_id, dest_node_id, uuid,
                                           &emsg)) {
            err.code() = 1;
            err.message() = emsg;
            response->makeErrorResponse(err);
            return;
        }

        bregv3db::DbAccessor db;
        if (!db.isLeafNode(breg_id)) {
            bregv3node::moveNode(response, breg_id, dest_node_id, uuid);
        }
        else {
            bregv3entry::moveEntry(response, breg_id, dest_node_id, uuid);
        }
    }
    catch (BloombergLP::bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "breg_id:" << breg_id << " "
                       << e.what() << BAEL_LOG_END;
        err.code() = 1;
        err.message() = "Error! Registry not moved.";
        response->makeErrorResponse(err);
        return;
    }
}

void loadPrivilegeList(Response *response, int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    std::map<int, s_breguisvc::UserData> user_priv_map;

    try {
        s_breguisvc::PrivilegeList priv_list;
        priv_list.registryId() = breg_id;

        // get privileges of its own
        helpers_v3::getPrivilegesOfAllLevels(&user_priv_map, breg_id);

        // get privileges from ancestors
        bregv3db::DbAccessor db;
        std::list<int> ancestors;
        try {
            db.getEntryAncestors(&ancestors, breg_id);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        }
        std::list<int>::iterator iter;
        for (iter = ancestors.begin(); iter != ancestors.end(); ++iter) {
            helpers_v3::getPrivilegesOfAllLevels(&user_priv_map, *iter);
        }

        std::map<int, UserData>::const_iterator it;
        for (it = user_priv_map.begin(); it != user_priv_map.end(); ++it) {
            priv_list.userDataList().push_back(it->second);
        }

        //std::cout << priv_list << std::endl;

        response->makePrivilegeList(priv_list);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Load privilege failed.";
        response->makeErrorResponse(error);
    }
}

void updatePrivileges(Response *response, const PrivilegeList& priv_list,
                      int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int breg_id = priv_list.registryId();

    std::vector<s_breguisvc::UserData> users = priv_list.userDataList();

    bregv3db::Privilege admin_priv;
    bregv3db::Privilege prod_priv;
    bregv3db::Privilege dev_priv;
    bregv3db::Privilege rels_code_priv;
    bregv3db::Privilege metadata_priv;

    admin_priv.entryId() = prod_priv.entryId() = dev_priv.entryId()
        = rels_code_priv.entryId() = metadata_priv.entryId() = breg_id;

    admin_priv.accessLevel() = bregv3db::DbAccessor::ADMIN_PRIV;
    prod_priv.accessLevel() = bregv3db::DbAccessor::UPDATE_PROD_VALUE_PRIV;
    dev_priv.accessLevel() = bregv3db::DbAccessor::UPDATE_DEV_VALUE_PRIV;    
    rels_code_priv.accessLevel() = bregv3db::DbAccessor::RELEASE_CODE_PRIV;
    metadata_priv.accessLevel() = bregv3db::DbAccessor::UPDATE_METADATA_PRIV;

    admin_priv.updateUuid() = prod_priv.updateUuid() = dev_priv.updateUuid()
        = rels_code_priv.updateUuid() = metadata_priv.updateUuid() = uuid;
    admin_priv.updateTsp() = prod_priv.updateTsp() = dev_priv.updateTsp()
        = rels_code_priv.updateTsp() = metadata_priv.updateTsp() 
        = helpers_v3::getUpdateTime();
    
    helpers_v3::svcPrivUsersToDbPrivUsers(&admin_priv.userList(),
                                          &prod_priv.userList(), 
                                          &dev_priv.userList(),
                                          &rels_code_priv.userList(),
                                          &metadata_priv.userList(),
                                          users, breg_id);

    try {
        bregv3db::DbAccessor db;
        // update privilege user list; delete is privilege record is user
        // list is empty
        db.updatePrivilege(admin_priv);
        db.updatePrivilege(prod_priv);
        db.updatePrivilege(dev_priv);
        db.updatePrivilege(rels_code_priv);
        db.updatePrivilege(metadata_priv);

        ErrorInfoResponse error;
        error.code() = 0;
        error.message() = "Privilege successfully updated.";
        response->makeErrorResponse(error);

    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Privilege update failed.";
        response->makeErrorResponse(error);
    }
}

void updateContact(Response *response, const EntryContacts& contacts,
                   int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse error;
    if (0 == getDrqsGroupDescription(contacts.drqsGroup()).length()) {
        std::ostringstream ss;
        ss << "Invalid DRQS group number " << contacts.drqsGroup()
           << "!";
        error.code() = -1;
        error.message() = ss.str();
        response->makeErrorResponse(error);
        return;
    }

    try {
        bregv3db::DbAccessor db;
        bregv3db::Contact contact_info;

        try {
            db.getContacts(&contact_info, breg_id);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
                try {
                    helpers_v3::setDbContactValue(&contact_info, contacts,
                                                  breg_id);
                    db.insertContacts(contact_info);
                    error.code() = 0;
                    error.message() = "Contacts successfully updated.";
                    response->makeErrorResponse(error);
                    return;
                }
                catch (bregv3db::DbException & e) {
                    BAEL_LOG_ERROR << "fail to add contacts: breg " << breg_id
                                   << ":" << e.what() << BAEL_LOG_END;
                }
            }
            error.code() = -1;
            error.message() = "Contacts update failed.";
            response->makeErrorResponse(error);
            return;
        }

        helpers_v3::setDbContactValue(&contact_info, contacts,
                                      breg_id);
        db.updateContacts(contact_info);
        error.code() = 0;
        error.message() = "Contacts successfully updated.";
        response->makeErrorResponse(error);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Contacts update failed.";
        response->makeErrorResponse(error);
    }
}

void loadSubscribers(Response *response, int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    std::map<int, s_breguisvc::UserData> user_sub_map;

    try {
        s_breguisvc::EntrySubscribers subs;
        subs.registryId() = breg_id;
        helpers_v3::getSubscribersOfAllTypes(&user_sub_map, breg_id);

        bregv3db::DbAccessor db;
        std::list<int> ancestors;
        try {
            db.getEntryAncestors(&ancestors, breg_id);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        }
        std::list<int>::iterator iter;
        for (iter = ancestors.begin(); iter != ancestors.end(); ++iter) {
            helpers_v3::getSubscribersOfAllTypes(&user_sub_map, *iter);
        }

        std::map<int, UserData>::const_iterator it;
        for (it = user_sub_map.begin(); it != user_sub_map.end(); ++it) {
            subs.userDataList().push_back(it->second);
        }

        response->makeEntrySubscribers(subs);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Load subscriber failed.";
        response->makeErrorResponse(error);
    }
}

void updateSubscribers(Response *response, 
                       const EntrySubscribers& subscribers)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse error;

    try {
        bregv3db::DbAccessor db;
        bregv3db::Subscribe prod_sub;
        bregv3db::Subscribe meta_sub;
        bregv3db::Subscribe create_sub;

        helpers_v3::setDbSubscribeValue(&prod_sub,
                                        &meta_sub,
                                        &create_sub,
                                        subscribers);

        db.updateSubscribe(prod_sub);
        db.updateSubscribe(meta_sub);
        db.updateSubscribe(create_sub);

        error.code() = 0;
        error.message() = "Subscribers successfully updated.";
        response->makeErrorResponse(error);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Subscribers update failed.";
        response->makeErrorResponse(error);
    }    
}

void getNodeType(Response *response, int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    try {
        bregv3db::DbAccessor db;
        if (db.isLeafNode(breg_id)) {
            response->makeNodeType("ENTRY");
        }
        else {
            response->makeNodeType("NODE");
        }
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Invalid BREG ID.";
        response->makeErrorResponse(error);
    } 
}

void isDeleted(Response * response,
               int breg_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse error;
    try {
        bregv3db::DbAccessor db;
        bregv3db::Node node;
        bregv3db::Audit audit;
        db.getNode(&node, &audit, breg_id);

        error.code() = (node.isDeleted()) ? 1 : 0;
        error.message() = (node.isDeleted()) ? "Breg has been deleted." 
                                        : "Breg is not deleted.";
        response->makeErrorResponse(error);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Invalid BREG ID.";
        response->makeErrorResponse(error);
    } 
}

std::string getDrqsGroupDescription(int group_id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    enum {
        GROUPDESC_LEN = 64
    };

    std::string desc("");

    char group_desc[GROUPDESC_LEN] = {0};
    char group_desc_f[GROUPDESC_LEN-1];
    int level = 0;

    int rcode = drqs_get_group_descr(group_id, &level, group_desc_f,
                                     sizeof(group_desc_f));
    if (rcode) {
        BAEL_LOG_INFO << "drqs_get_group_descr error: " << rcode
                      << ", group " << group_id << BAEL_LOG_END;
        return desc;
    }

    cfrmf(group_desc, sizeof(group_desc), 
          group_desc_f, sizeof(group_desc_f));

    desc.assign(group_desc);
    return desc; 
}

void generateCode(Response *response, const GenerateCodeRequest& request, 
                  int uuid, bool callCsutil, bool propagate)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    RegistryInfo registry(request.registry());
    const EntryInfo& entry = registry.entry().value();
    int entryId = entry.entryId();

    ErrorInfoResponse error;

    bregv3db::EntryDescription dbEntry;
    bregv3db::EntryValue dbDevValue;
    bregv3db::DevValueAudit dbDevAudit;

    try {
        bregv3db::DbAccessor db;
        bregv3db::Audit dbAudit;
        try {
            db.getEntry(&dbEntry, &dbAudit, entryId);
        }
        catch(bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            std::ostringstream ss;
            ss << "BREG " << entryId << " not found!";
            error.code() = -1;
            error.message() = ss.str();
            response->makeErrorResponse(error);
            return;
        }

        if (!helpers_v3::svcEntryInfoMatchDbEntryInfo(entry, dbEntry)) {
            error.code() = -1;
            error.message() = "Please save changes first.";
            response->makeErrorResponse(error);
            return;
        }

        // check if a dev value already exists as the result of a failure in
        // generating code before
        bool add_dev_value = false;
        try {
            int version = 0;
            db.getDevEntryValue(&dbDevValue, &dbDevAudit, entryId, version);
        }
        catch(bregv3db::DbException & e) {
            if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
                add_dev_value = true;
            }
            else {
                BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
                error.code() = -1;
                error.message() = "Fail to generate code!";
                response->makeErrorResponse(error);
                return;
            }
        }
 
        // set initial dev value: override svcValue version -1
        helpers_v3::svcValueToDbValue(&dbDevValue, request.entryValue(), 
                                      entry.valueType());
        dbDevValue.version() = 0;

        const AuditRecord& svcAudit = request.entryValue().auditRecord();
        dbDevAudit.entryId() = entryId;
        dbDevAudit.version() = 0;
        dbDevAudit.updateUuid() = svcAudit.uuid();
        dbDevAudit.updateTsp() = helpers_v3::getUpdateTime();

        // save initial dev value
        if (add_dev_value) {
            db.insertDevEntryValue(dbDevValue, dbDevAudit);
        }
        else {
            db.updateDevEntryValue(dbDevValue, dbDevAudit);
        }
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Fail to generate code!";
        response->makeErrorResponse(error);
        return;
    }

    // generate code
    if (callCsutil) { // if already generated by Informix code, no action
        BAEL_LOG_INFO << "generateCode using bregv3db data: " << entryId
                      << BAEL_LOG_END;
        std::string emsg;
        if (!helpers_v3::generateAccessorCode(&emsg, entry)) {
            error.code() = -1;
            error.message() = emsg;
            response->makeErrorResponse(error);
            return;
        }

        // write/update bregmpdb
        helpers_v3::createBregmpdbRec(entry.entryId(),
                                      entry.valueType(),
                                      entry.apiName(),
                                      BREGMPDB_TEST);
    }

    // save desc page
    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryDescription entryDes;
        bregv3db::Audit audit;
        helpers_v3::svcEntryToDbEntry(&entryDes,
                                      &audit,
                                      registry.node(),
                                      registry.entry().value());
        entryDes.apiStatus() = ApiStatus::STAGED;
        audit.eventType()= bregv3db::DbAccessor::GENERATE_CODE; 
        db.updateEntryOnly(entryDes, audit);
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Fail to change API generate status!";
        response->makeErrorResponse(error);
        return;
    }

    // propagate dev value
    if (propagate) {  // if already propagated by Informix code, no action
        int rc = bregv3value::propagateDevValues(dbEntry,
                                                 dbDevValue,
                                                 dbDevAudit);
        error.code() = 0;
        if (rc) {
            error.message() = "Code generated successfully. "
                "Please propagate dev values. ";
        } else {
            error.message() = "Code generated successfully. ";
        }
    }

    response->makeErrorResponse(error);
    // -- notify subscribers
}


void releaseCode(Response *response, int *version,
                 const BregChangeRequest& request, 
                 int ifmxPrqs, bool callCsutil, bool isGenRelease, int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse error;

    int entryId = request.registry().entry().value().entryId();
    s_breguisvc::ValueType::Value type = 
        request.registry().entry().value().valueType();
    int prqsNo = ifmxPrqs;

    if (!bregv3value::saveProdInitValue(version, entryId, type,
                                        request.entryValue())) {
        error.code() = -1;
        error.message() = "Fail to release code!";
        response->makeErrorResponse(error);
        return;
    }

    if (callCsutil) {
        BAEL_LOG_INFO << "releaseCode: propagate using bregv3db: "
                      << entryId << " ifmxPrqs " << ifmxPrqs 
                      << BAEL_LOG_END;
        std::string emsg;
        const std::string apiName = 
            request.registry().entry().value().apiName();
        if (!helpers_v3::releaseAccessorCode(&emsg, apiName)) {
            error.code() = -1;
            error.message() = "Fail to release code!";
            response->makeErrorResponse(error);
            return;
        }

        helpers_v3::updateBregmpdbRec(entryId, type, apiName,
                                      BREGMPDB_PROD);

        // create prqs
        int rc = bregv3prqs::createPrqs(&prqsNo, request, 
                                        *version, uuid,
                                        bregv3prqs::RELEASE_CODE_PRQS);
        if (PRQS_REGISTRY_NO_ERROR != rc)
        {
            ErrorInfoResponse error;
            error.code() = -1;
            if (PRQS_REGISTRY_INVALID_APPROVER == rc) {
                error.message() = "Invalid Approver.";
            } else {
                error.message() = "Error creating PRQS, rc " + rc;
            }
            response->makeErrorResponse(error);
            try {
                bregv3db::DbAccessor db;
                db.deleteProdVersion(entryId, *version);
            } catch(bregv3db::DbException & e) {
                BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
                error.code() = -1;
                error.message() = "Fail to update prod audit record!";
                response->makeErrorResponse(error);
                BAEL_LOG_WARN << "releaseCode: failed to create PRQS. "
                    << "Breg " << entryId << ", version " << *version
                    << ", rc " << rc << ". Failed to delete bad version: "
                    << e.what()
                    << BAEL_LOG_END;
            }
            BAEL_LOG_INFO << "updateProdValue: failed to create PRQS. "
                << "Breg " << entryId << ", version " << *version
                << ", rc " << rc
                << BAEL_LOG_END;
            return;
        }
    }

    // update entry info: two audit records for releasing code
    // 1) update_desc; 2) change_prod_value
    RegistryInfo registry(request.registry());
    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryDescription entryDes;
        bregv3db::Audit audit;
        helpers_v3::svcEntryToDbEntry(&entryDes,
                                      &audit,
                                      registry.node(),
                                      registry.entry().value());
        entryDes.apiStatus() = ApiStatus::RELEASED;
        audit.eventType() = bregv3db::DbAccessor::RELEASE_CODE;
        db.updateEntryOnly(entryDes, audit);
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Fail to change API release status!";
        response->makeErrorResponse(error);
        return;
    }
     
    // update prod audit record's PRQS info
    try {
        bregv3db::DbAccessor db;
        bregv3db::Audit audit;
        audit.entryId() = entryId;
        audit.version() = *version;
        audit.eventType() = bregv3db::DbAccessor::CHANGE_PROD_VALUE;
        audit.prqsNo() = prqsNo;
        audit.prqsStatus() = 'A';
        char prqs_status[5] = {0};
        char prqs_des[30] = {0};
        prqs_api_rcode prc = prqs_get_status(prqsNo, sizeof(prqs_status),
                                                 sizeof(prqs_des),
                                                 prqs_status, prqs_des);

        BAEL_LOG_DEBUG << "prqs_get_status: " << prqsNo 
                       << " rc " << prc << " status " << prqs_status
                       << BAEL_LOG_END;

        if (prc == PRQS_API_NO_ERROR) {
            if (strncmp(prqs_status,"S",strlen("S")) == 0 ||
                strncmp(prqs_status,"P",strlen("P")) == 0) {
                audit.prqsStatus() = "P";
            }
            else if (strncmp(prqs_status,"C",strlen("C")) == 0) {
                audit.prqsStatus() = "C";
            }
        }
        audit.updateUuid() = uuid;
        audit.updateTsp() = helpers_v3::getUpdateTime();
        audit.ticketType() = registry.node().auditRecord().ticketType();
        audit.ticketNo() = registry.node().auditRecord().ticketNumber();

        const int RETRY_MAX = 3;
        int count = 0;
        while (count++ < RETRY_MAX) {
            try {
                db.updateProdValueAudit(entryId, *version, audit);
            } 
            catch(bregv3db::DbException & e) {
                BAEL_LOG_ERROR << "releaseCode:updateProdValueAudit retry "
                               << count << BAEL_LOG_END;
                if (RETRY_MAX == count)
                    throw e;
            }
        }
    } catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Fail to update prod audit record!";
        response->makeErrorResponse(error);
        return;
    }

    // update work ticket tracking system
    helpers_v3::updateTreqDrqs(prqsNo,
                               registry.node().auditRecord().ticketNumber(),
                               registry.node().auditRecord().ticketType(),
                               entryId,
                               uuid);

    std::ostringstream oss;
    if (isGenRelease) {
        oss << "Generated code successfully, "
            << "{PRQS " << prqsNo << "<GO>} was created for releasing "
            << "the BREG to production." << std::ends;
    }
    else {
        oss << "Release successful, {PRQS " << prqsNo << "<GO>} was created." 
            << std::ends;
    }
    error.code() = 0;
    error.message() = oss.str();
    response->makeErrorResponse(error);
}



void loadBregValues(s_breguisvc::EntryValue *entry, int entryId, int version)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse error;

    entry->entryId() = entryId;
    entry->version() = version;

    bregv3db::EntryDescription dbEntry;
    bregv3db::Audit dbAudit;

    try {
        bregv3db::DbAccessor db;
        db.getEntry(&dbEntry, &dbAudit, entryId);
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        throw std::runtime_error("Could not load node details.");
    }

    if (version >= -1) {
        bregv3value::getProdValue(entry, dbEntry.valueType(), entryId,
                                  version);
    }
    else {
        int devVersion = 0;
        bregv3value::getDevValue(entry, dbEntry.valueType(), entryId,
                                 devVersion);
    }

    BAEL_LOG_DEBUG << *entry << BAEL_LOG_END;
}

void getVersionHistory(Response *response, int entryId)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    try {
        bregv3db::DbAccessor db;
        std::vector<bregv3db::VersionTsp> dbVersHistory;
        db.getVersionHistory(&dbVersHistory, entryId);
        
        int count = dbVersHistory.size();
        std::vector<s_breguisvc::VersionTsp> svcVersHistory;
        for (int i = 0; i < count; ++i) {
            s_breguisvc::VersionTsp svcVers;
            svcVers.version() = dbVersHistory[i].version();
            svcVers.updateTsp() = 
                helpers_v3::dbTspToSvcTsp(dbVersHistory[i].updateTsp());
            svcVers.prqsNumber() = dbVersHistory[i].prqsNo();
            svcVers.prqsStatus() = dbVersHistory[i].prqsStatus();

            svcVersHistory.push_back(svcVers);
        }

        response->makeVersionHistory(svcVersHistory);
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Error getting version list.";
        response->makeErrorResponse(error);
    }
}

void updateDevValues(Response *response, 
                     const s_breguisvc::EntryValue& svcValue,
                     int uuid,
                     bool propagate)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    bregv3db::EntryDescription dbEntry;
    int entryId = svcValue.entryId();

    ErrorInfoResponse error;

    try {
        bregv3db::DbAccessor db;
        try {
            bregv3db::Audit dbAudit;
            db.getEntry(&dbEntry, &dbAudit, entryId);
        }
        catch(bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            std::ostringstream ss;
            ss << "BREG " << entryId << " not found!";
            error.code() = -1;
            error.message() = ss.str();
            response->makeErrorResponse(error);
            return;
        }
  
        int svcValueType = 
            helpers_v3::dbValueTypeToSvcValueType(dbEntry.valueType());

        bregv3db::EntryValue dbValue;
        bregv3db::DevValueAudit dbDevAudit;
        helpers_v3::svcValueToDbValue(&dbValue, svcValue, svcValueType);
        dbValue.version() = 0;

        dbDevAudit.entryId() = entryId;
        dbDevAudit.version() = 0;
        dbDevAudit.updateUuid() = uuid;
        dbDevAudit.updateTsp() = helpers_v3::getUpdateTime();

        if (bregv3value::updateDevValue(dbValue, dbDevAudit, entryId)) {
            
            int rc = 0;
            if (propagate) {
                BAEL_LOG_INFO << "propagate dev value using bregv3db: "
                              << entryId << BAEL_LOG_END;
                rc = bregv3value::propagateDevValues(dbEntry,
                                                     dbValue,
                                                     dbDevAudit);
            }
            error.code() = 0;
            if (rc) {
                error.message() = "Dev values updated but some propagation "
                    "may have failed.";
            }
            else {
                error.message() = 
                    "Dev values successfully updated and propagated."; 
            }
        }
        else {
            error.code() = -1;
            error.message() = "Dev values update failed.";
        }
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Dev values update failed.";
    }
    
    response->makeErrorResponse(error);
}

void updateProdValue(Response *response,
                     const BregChangeRequest& request,
                     int ifmxVersion,
                     int ifmxPrqs,
                     int ifmxValStatusCd,
                     int uuid,
                     bool propagate,
                     bool isUpdateIfmx)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    bregv3db::EntryDescription dbEntry;
    int entryId = request.registry().entry().value().entryId();
    bool isSharedMemory_svc = 
        request.registry().entry().value().isSharedMemory();

    ErrorInfoResponse error;

    try {
        bregv3db::DbAccessor db;
        try {
            bregv3db::Audit dbAudit;

            // check if a new change is submitted while we are looking
            int rc = db.getLastProdValueAudit(entryId, &dbAudit);
            if (0 == rc) {
                BAEL_LOG_DEBUG << "Rechecking audit: " << dbAudit
                    << BAEL_LOG_END;
                if (dbAudit.prqsStatus().length() > 0 && 
                    (dbAudit.prqsStatus()[0] == 'A' || 
                     dbAudit.prqsStatus()[0] == 'S' ||
                     dbAudit.prqsStatus()[0] == 'P'))
                {
                    error.code() = -1;
                    error.message() = "BREG is being updated, "
                                      "please try again later.";
                    response->makeErrorResponse(error);

                    BAEL_LOG_INFO << "Found concurrent update for breg " 
                        << entryId << ", audit: " << dbAudit
                        << BAEL_LOG_END;
                    return;
                }
            }

            db.getEntry(&dbEntry, &dbAudit, entryId);
        }
        catch(bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            std::ostringstream ss;
            ss << "BREG " << entryId << " not found!";
            error.code() = -1;
            error.message() = ss.str();
            response->makeErrorResponse(error);
            return;
        }

        // set db values
        int svcValueType = 
            helpers_v3::dbValueTypeToSvcValueType(dbEntry.valueType());
        bregv3db::EntryValue dbValue;
        bregv3db::Audit dbProdAudit;
        helpers_v3::svcValueToDbValue(&dbValue, request.entryValue(), 
                                      svcValueType);
        dbValue.version() = ifmxVersion;

        const s_breguisvc::AuditRecord& svcAudit = 
            request.entryValue().auditRecord();
        helpers_v3::svcAuditToDbAudit(&dbProdAudit, svcAudit, ifmxVersion,
                                      bregv3db::DbAccessor::CHANGE_PROD_VALUE);

        // update bregv3db prod_value record
        int newVersion = ifmxVersion;
        if (!bregv3value::updateProdValue(&newVersion, dbValue, dbProdAudit,
                                          entryId)) {
            error.code() = -1;
            error.message() = "Prod value update failed!";
            response->makeErrorResponse(error);
            return;
        }         

        int prqsNo = ifmxPrqs;
        if (propagate) {
            BAEL_LOG_INFO << "updateProdValue: propagate using bregv3db: "
                          << entryId << " ifmxPrqs " << ifmxPrqs 
                          << BAEL_LOG_END;
            int rc = bregv3prqs::createPrqs(&prqsNo, request, 
                                            newVersion, uuid,
                                            bregv3prqs::PROD_CHANGE_PRQS);
            if (PRQS_REGISTRY_NO_ERROR != rc)
            {
                error.code() = -1;
                if (PRQS_REGISTRY_INVALID_APPROVER == rc) {
                    error.message() = "Invalid Approver.";
                } else {
                    error.message() = "Error creating PRQS, rc " + rc;
                }
                response->makeErrorResponse(error);
                db.deleteProdVersion(entryId, newVersion);
                BAEL_LOG_INFO << "updateProdValue: failed to create PRQS. "
                    << "Breg " << entryId << ", version " << newVersion
                    << ", rc " << rc
                    << BAEL_LOG_END;
                return;
            }

            //if (isUpdateIfmx) {
            //    BAEL_LOG_INFO << "updateProdValue: update ifmx: "
            //                << entryId << BAEL_LOG_END;
            //  helpers::prod_value_change_update_ifmx_prqs(entryId, request,
            //                                                ifmxValStatusCd,
            //                                                prqsNo, uuid);
            //}
        }
               
        // update prod audit table
        dbProdAudit.version() = newVersion;
        dbProdAudit.prqsNo() = prqsNo;
        dbProdAudit.prqsStatus() = "A";

        /* there is an timing issue when ifmx code creates prqs
           by the time prqs status is checked the ticket is already marked
           complete */
        // sometimes the approver is the creator as well and 
        // the PRQS is directly created in S state.
        // If prqs is in S state then let shmem change go through
        // otherwise prevent the change in shmem from going
        // through. It will be updated from audit tables 
        // when PRQS is approved.
        char prqs_status[5] = {0};
        char prqs_des[30] = {0};
        prqs_api_rcode prc = prqs_get_status(prqsNo, sizeof(prqs_status),
                                                 sizeof(prqs_des),
                                                 prqs_status, prqs_des);

        BAEL_LOG_DEBUG << "prqs_get_status: " << prqsNo 
                       << " rc " << prc << " status " << prqs_status
                       << BAEL_LOG_END;

        if (prc == PRQS_API_NO_ERROR) {
            if (strncmp(prqs_status,"S",strlen("S")) == 0 ||
                strncmp(prqs_status,"P",strlen("P")) == 0) {
                dbProdAudit.prqsStatus() = "P";
            }
            else if (strncmp(prqs_status,"C",strlen("C")) == 0) {
                dbProdAudit.prqsStatus() = "C";
            }
        }

        const int RETRY_MAX = 3;
        int count = 0;
        while (count++ < RETRY_MAX) {
            try {
                db.updateProdValueAudit(entryId, newVersion, dbProdAudit);
            } 
            catch(bregv3db::DbException & e) {
                BAEL_LOG_ERROR << "updateProdValue:updateProdValueAudit retry "
                               << count << BAEL_LOG_END;
                if (RETRY_MAX == count)
                    throw e;
            }
        }

        // if shared memory setting is changed, create an audit record
        BAEL_LOG_DEBUG << "updateProdValue: " << entryId
                       << " dbShm " << dbEntry.isSharedMemory()
                       << " svcShm " << isSharedMemory_svc << BAEL_LOG_END;
        if (dbEntry.isSharedMemory() != isSharedMemory_svc) {
            s_breguisvc::RegistryInfo registry(request.registry());

            registry.node().auditRecord().eventType() =
                EventTypeEnum(bregv3db::DbAccessor::CHANGE_SHARED_MEMORY);
            registry.node().auditRecord().prqsNumber() = prqsNo;
            registry.node().auditRecord().prqsStatus() =
                dbProdAudit.prqsStatus();
            registry.node().auditRecord().oldValue() = 
                dbEntry.isSharedMemory();
            registry.node().auditRecord().newValue() = isSharedMemory_svc;

            BAEL_LOG_DEBUG << "updateProdValue: updateEntry " << entryId
                           << " request " << registry << BAEL_LOG_END;
            bregv3entry::updateEntry(response, registry);

            BAEL_LOG_DEBUG << "updateProdValue: updateEntry " << entryId
                           << " response " << *response << BAEL_LOG_END;

            if (response->errorResponse().code() != 0) {
                BAEL_LOG_ERROR << "updateProdValue: fail to update entry: "
                               << entryId << " " << *response << BAEL_LOG_END;
                error.code() = -1;
                error.message() = response->errorResponse().message();
                response->makeErrorResponse(error);
                return;
            }
            else {
                bregv3db::Audit dbAudit;
                db.getEntry(&dbEntry, &dbAudit, entryId);
                BAEL_LOG_DEBUG << "updateProdValue: updateEntry retrieve "
                               << dbEntry << BAEL_LOG_END;               
            }
        }

        if (propagate) {
            // notify_susbscribers
            helpers_v3::notifySubscribers(entryId,
                         bregv3db::DbAccessor::PROD_VALUE_CHANGE_ALERT,
                                          uuid);
        }

        // update work ticket tracking system
        helpers_v3::updateTreqDrqs(prqsNo, 
                                   svcAudit.ticketNumber(),
                                   svcAudit.ticketType(),
                                   entryId,
                                   svcAudit.uuid());

        std::ostringstream os;
        os << "{PRQS " << prqsNo << "<GO>} created.";
        error.code() = 0;
        error.message() = os.str();
        response->makeErrorResponse(error);
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Prod value update failed!";
        response->makeErrorResponse(error);
    }
}

void markForDeletion(Response *response, int entryId, int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    ErrorInfoResponse error;

    char username[41] = {0};
    if (getuuidname_c(uuid, username, sizeof(username))) {
        BAEL_LOG_ERROR << "invalid uuid " << uuid << BAEL_LOG_END;
        error.code() = 1;
        error.message() = "invalid uuid";
        response->makeErrorResponse(error);
        return;        
    }

    try {
        bregv3db::DbAccessor db;
        bregv3db::Node node;
        bregv3db::Audit audit;
        db.getNode(&node, &audit, entryId);

        if (node.isToDelete()) {
            BAEL_LOG_INFO << "breg " << entryId 
                          << " is already marked for deletion"
                          << BAEL_LOG_END;
            error.code() = 0;
            response->makeErrorResponse(error);
            return;
        }

        node.isToDelete() = true;

        audit.entryId() = entryId;
        audit.eventType() = bregv3db::DbAccessor::MARK_ENTRY_FOR_DELETION;
        audit.updateUuid() = uuid;
        audit.updateTsp() = helpers_v3::getUpdateTime();

        db.updateNode(node, audit);
    }
    catch (const bregv3db::DbException& e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        error.code() = 2;
        error.message() = e.what();
        response->makeErrorResponse(error);        
    }
}

void loadDeptChain(Response *response, int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    enum {
        DEPTDESC_LEN = 40
    };

    char outdeptdesc[DEPTDESC_LEN+1];
    int ii = 0, rcode, out_rc, out_size;
    int dept_chain[helpers_v3::DEPT_CHAIN_LEN];

    out_rc = getRndBottomUpDeptChainForUUID(uuid, dept_chain,
                    helpers_v3::DEPT_CHAIN_LEN, &out_size);
    if(out_rc != 0) {
        BAEL_LOG_INFO << "getRndBottomUpDeptChainForUUID for " << uuid
            << " failed, rc = " << out_rc
            << BAEL_LOG_END;
        ErrorInfoResponse err;
        err.code() = -1;
        err.message() = "Getting department chain failed.";
        response->makeErrorResponse(err);
        return;
    }

    response->makeDeptChain();
    ii = out_size - 1;
    while(ii >= 0) {
        if(dept_chain[ii] > 0) {
            rcode = deptdb_deptcode2desc(dept_chain[ii], outdeptdesc,
                         sizeof(outdeptdesc));

            if (rcode) {
                ErrorInfoResponse err;
                err.code() = -1;
                err.message() = "Getting department description failed.";
                response->makeErrorResponse(err);
                return;
            }
            Group group;
            group.groupId() = dept_chain[ii];
            group.groupDescription() = outdeptdesc;
            response->deptChain().push_back(group);
        }
        ii--;
    }
}

void getMachineGroupNameFromId(Response *response,  int id)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    host_rc rc;
    char name[80];
    std::ostringstream os;

    os << "Invalid machine or group ID " << id << std::ends;
    
    if (id <= 0) {
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = os.str();
        response->makeErrorResponse(error);
    } else {
        // first check machine id
        rc = host_get_machine_name_from_id(id, name, sizeof(name));
        if (HOST_RC_OK == rc) {
            response->makeMachineGroup(name);
        }
        else {
            // if not machine id, then check group id
            rc = host_get_group_name_from_id(id, name, sizeof(name));
            if (HOST_RC_OK == rc) {
                response->makeMachineGroup(name);
            } else {
                ErrorInfoResponse error;
                error.code() = -1;
                error.message() = os.str();
                response->makeErrorResponse(error);
            }
        }
    }
}

void validateOverride(Response *response,
                      const OverrideInfo& override)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    ErrorInfoResponse err;
    int intSetting = atoi(override.setting().c_str());
    char customerName[80] = {0};
    char userName[80] = {0};
    char errMsg[MAX_STR_LENGTH] = {0};
    int isValid = 0, rc = 0;
    int ws = 0, found = 0;
    short tmp = 0;
    terminalrecord_t record;
    FTBL_ERROR ftbrc;
    functbl_attr_block block;

#undef PINDEX
    switch (override.type()) {
        case OverrideType::MACHINE_OR_GROUP:
            err.code() = 0;
            err.message() = customerName;
            response->makeErrorResponse(err);
            return;
        case OverrideType::CUSTOMER:
            if (intSetting <= 0) {
                err.code() = -1;
                err.message() = "Invalid customer " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            if (getcustname(customerName, 
                            sizeof(customerName), 
                            &intSetting) != 0) {
                err.code() = -1;
                err.message() = "Invalid customer " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = customerName;
            response->makeErrorResponse(err);
            return;
        case OverrideType::UUID:
            if (intSetting <= 0) {
                err.code() = -1;
                err.message() = "Invalid uuid " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            if (getuuidname(userName, sizeof(userName), intSetting) != 0) {
                err.code() = -1;
                err.message() = "Invalid UUID " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = userName;
            response->makeErrorResponse(err);
            return;
        case OverrideType::FIRM_NUMBER:
            if (intSetting <= 0) {
                err.code() = -1;
                err.message() = "Invalid firm number " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            if (!is_valid_firm_(&intSetting)) {
                err.code() = -1;
                err.message() = "Invalid firm number " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = "";
            response->makeErrorResponse(err);
            return;
        case OverrideType::TS_PRICING_NUMBER:
            if (intSetting <= 0) {
                err.code() = -1;
                err.message() = "Invalid Pricing Number " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            chkprimary_(&intSetting, &tmp);
            if (tmp < 1) {
                err.code() = -1;
                err.message() = "Invalid Pricing Number " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = "";
            response->makeErrorResponse(err);
            return;
        case OverrideType::DEPARTMENT_CODE:
            if (override.setting().length() > DEPT_DEPT_LEN) {
                BAEL_LOG_DEBUG << "Code too long: [" << override.setting()
                    << "]" << BAEL_LOG_END;
                err.code() = -1;
                err.message() = "Invalid department code " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            rc = dept_verify_dept(const_cast<char*>(override.setting().c_str()),
                                  &isValid, errMsg, sizeof(errMsg));
            if (rc != DEPT_SUCCESS || 0 == isValid) {
                BAEL_LOG_DEBUG << "dept check: rc=" << rc 
                    << ", valid=" << isValid
                    << BAEL_LOG_END;
                err.code() = -1;
                err.message() = "Invalid department code " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = "";
            response->makeErrorResponse(err);
            return;
        case OverrideType::SERIAL_NUMBER:
            if (intSetting <= 0) {
                err.code() = -1;
                err.message() = "Invalid serial number " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            rc = findterminalprom(intSetting, ws, &record, &found);
            if (rc != 0 || found == 0) {
                err.code() = -1;
                err.message() = "Invalid serial number " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = "";
            response->makeErrorResponse(err);
            return;
        case OverrideType::PINDEX:
            if (intSetting <= 0) {
                err.code() = -1;
                err.message() = "Invalid Pindex " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            ftbrc = functbl_get_data(NULL, NULL, intSetting, &block);
            if (ftbrc != FTBL_SUCCESS) {
                err.code() = -1;
                err.message() = "Invalid Pindex " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = "";
            response->makeErrorResponse(err);
            return;
        case OverrideType::UUID_PERCENT:
            if (intSetting<0 || intSetting>100) {
                err.code() = -1;
                err.message() = "Invalid UUID Perctnt " + override.setting();
                response->makeErrorResponse(err);
                return;
            }
            err.code() = 0;
            err.message() = "";
            response->makeErrorResponse(err);
            return;
        default:
            err.code() = -1;
            err.message() = "Invalid override type " + override.type();
            response->makeErrorResponse(err);
            return;
    }
}

void getTodoList(Response *response, int uuid) 
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    enum { MAX_TODO_RECORDS = 1000, 
           TODO_TICKET_LEN  = 20,
           TICKET_SUMMARY_LEN = 60,
           TREQ_TYPE        = 1,
           DRQS_TYPE        = 2,
           NON_BILLABLE_TYPE= 4,
           TICKET_TYPE_INFO_LEN = 5,
           DRQS_TYPE_LEN    = 3,
           DRQS_STATUS_LEN  = 2
    };


    int ticket_ids[MAX_TODO_RECORDS];
    int skip=0;
    int num_found;
    int rcode;
    int idx;
    pntiktdb_t buf;
    gboolean found;
    treqrqdb_rec_t treqrqdb_rec;
    char summary[TICKET_SUMMARY_LEN];
    char ticket_type_info[TICKET_TYPE_INFO_LEN + 1];
    char drqs_status[DRQS_STATUS_LEN+1];

    memset(ticket_ids, 0, sizeof(ticket_ids));

    get_ticket_ids_from_sticky_list(uuid,
            skip,
            ticket_ids,
            MAX_TODO_RECORDS,
            &num_found,
            &rcode);

    if( rcode ) {
        BAEL_LOG_INFO << "get_ticket_ids_from_sticky_list() failed: rc="
            << rcode << " uuid=" << uuid
            << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Error getting todo list.";
        response->makeErrorResponse(error);
        return;
    }

    TodoList todoList;
    for( idx = 0; idx < num_found; idx++ ) {
        TodoListItem item;

        pntiktdb_find(ticket_ids[idx], &buf, &found, &rcode);
        if (!found) {
            BAEL_LOG_INFO << "pntiktdb_find() failed: rc=" << rcode 
                << " uuid=" << uuid << " ticket_id="  << ticket_ids[idx]
                << BAEL_LOG_END;
        }

        item.ticketNumber() = buf.other_id;
        if( buf.other_type == TREQ_TYPE ) {
            treqrqdb_find_by_comp_id(buf.other_id, &treqrqdb_rec, 
                                     &found, &rcode);

            if(!found) {
                item.summary() = "Error!";
            } else {
                std::string desc = helpers_v3::convertBlpfontToUtf8(
                                            treqrqdb_rec.summary, 1, false);
                item.summary() = desc;
            }

            item.ticketType() = "TREQ";

            treq_get_status_abbr(treqrqdb_rec.status, ticket_type_info);
            item.status() = ticket_type_info;
        }
        else if(buf.other_type == DRQS_TYPE) {
            item.ticketType() = "DRQS";
            drqs_get_summary_clean(buf.other_id, summary, 
                                   TICKET_SUMMARY_LEN, &rcode);

            if(rcode) {
                BAEL_LOG_INFO << "drqs_get_summary_clean() failed: rc=" 
                    << rcode << " drqs= " << buf.other_id
                    << BAEL_LOG_END;
                item.summary() = "Error!";
            } else {
                std::string desc = helpers_v3::convertBlpfontToUtf8(
                                                summary, 1, false);
                item.summary() = desc;
            }

            helpers_v3::get_drqs_type_status_info(buf.other_id, ticket_type_info, 
                                      TICKET_TYPE_INFO_LEN,
                                      drqs_status, DRQS_STATUS_LEN+1, 
                                      &rcode);
            if(rcode) {
                BAEL_LOG_INFO << "get_drqs_type_status_info() failed: rc="
                    << rcode << " drqs=" << buf.other_id
                    << BAEL_LOG_END;
                item.drqsType() = "ERR!";
                item.status() = "!";
            } else {
                item.drqsType() = ticket_type_info;
                item.status() = drqs_status;
            }
        }
        todoList.list().push_back(item);
    }

    response->makeTodoList(todoList);
    return;
}

void getRelatedTicket(Response *response, 
                      const RelatedTicketRequest& request)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    enum { SUMMARY_LENGTH = 80 };
    int ticket_id=0;
    char summary[SUMMARY_LENGTH] = {0}; 
    int summary_len=SUMMARY_LENGTH;
    int rcode=0;

    if (request.type() == "TREQ") {
        treq_get_summary(request.number(), summary, sizeof(summary), &rcode);
        BAEL_LOG_DEBUG << "rcode=" << rcode << BAEL_LOG_END;
        if (comdb_not_found(rcode)) {
            ErrorInfoResponse error;
            error.code() = -1;
            error.message() = "Ticket not found.";
            response->makeErrorResponse(error);
            return;
        } else if(comdb_found(rcode)) {
            unsigned int fsummary_len = slen(summary, sizeof(summary));
            if (sizeof(summary) <= fsummary_len)
                summary[sizeof(summary) - 1] = '\0';
            else
                summary[slen(summary, sizeof(summary))] = '\0';

            std::string msg = helpers_v3::convertBlpfontToUtf8(summary, 1, false);
            BAEL_LOG_DEBUG << msg << BAEL_LOG_END;
            response->makeRelatedTicketSummary(msg);
            return;
        }
    } else if (request.type() == "DRQS") {
        ticket_id = request.number();
        drqs_get_summary_(&ticket_id, summary, &summary_len, &rcode);
        BAEL_LOG_DEBUG << "rcode=" << rcode << BAEL_LOG_END;
        if (comdb_not_found(rcode)) {
            ErrorInfoResponse error;
            error.code() = -1;
            error.message() = "Ticket not found.";
            response->makeErrorResponse(error);
            return;
        } else if(comdb_found(rcode)) {
            if(summary_len <= slen(summary, summary_len))
                summary[summary_len - 1] = '\0';
            else
                summary[slen(summary, summary_len)] = '\0';
            std::string msg = helpers_v3::convertBlpfontToUtf8(summary, 1, false);
            BAEL_LOG_DEBUG << msg << BAEL_LOG_END;
            response->makeRelatedTicketSummary(msg);
            return;
        }
    } 
    ErrorInfoResponse error;
    error.code() = -1;
    error.message() = "Ticket not found.";
    response->makeErrorResponse(error);
    return;
}

void validateApprover(Response *response,
                     const BregChangeRequest& request, 
                     int uuid)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int checkLockdown = 1;

    // new switch release is not subject to lockdown
    if (request.registry().entry().value().apiStatus() != ApiStatus::RELEASED)
        checkLockdown = 0;

    char errMsg[PRQS_APPROVER_API_ERR_MSG_LEN + 1] = {0};
    int rc = is_prqs_rc_approver_and_group_same(uuid, request.approverUuid(), 
                                                checkLockdown, errMsg,
                                                PRQS_APPROVER_API_ERR_MSG_LEN+1);

    BAEL_LOG_DEBUG << "Approver check rc = " << rc 
        << ", error msg: " << errMsg
        << ", bregid: " << request.registry().node().nodeId()
        << ", requester: " << uuid
        << ", approver: " << request.approverUuid()
        << ", priority: " << request.prqsPriority()
        << BAEL_LOG_END;

    int type = PRQS_RC, subtype = 0;
    int lockdown = 0;
    prqsct_pvf pvf_rec;
    prqsct_rc ct_rc=get_prqsct_pvf(type,subtype,&pvf_rec);

    if(0 == ct_rc)
    {
        if (pvf_rec.lock_value=='Y') ++lockdown;
    }

    ErrorInfoResponse error;
    if (PRQS_APPROVER_API_IS_APPROVER == rc) {
        error.code() = 0;
        error.message() = "Approver validated.";
    } else {
        error.code() = -1;
        if (PRQS_APPROVER_API_WRONG_GROUP == rc)
            error.message() = "Approver not in the same group.";
        else if (checkLockdown && lockdown)
            error.message() = "Invalid Approver, PRQS is in lockdown.";
        else
            error.message() = "Invalid Approver.";
    }
    response->makeErrorResponse(error);
    return;
}

} // namespace bregv3
} // namespace s_breguisvc
} // namespace BloombergLP

