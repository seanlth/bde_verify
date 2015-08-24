#include <s_breguisvc_helpers_v3.h>
#include <s_breguisvc_messages.h>

#include <bregv3db_dbaccessor.h>

#include <bael_log.h>

#include <pvf_checkprvl.h>

#include <iostream>
#include <algorithm>
#include <list>

#include <bregdb_eval.h>

#include <csutil_api.h>

#include <mgpapi_v4_exception.h>
#include <mgpapi_v4_msgbuilder.h>
#include <mgpapi_v4_send.h>
#include <mgpapi_v4_status.h>
#include <mgpapi_v4_errors.h>
#include <mgpapi_v4_attachmentstoreutil.h>
#include <mgpapi_struct.h>

#include <time.h>
#include <str0.h>

#include <paulbitchk.h>
#include <breg_audit.h>
#include <bregv3db_audit.h>

#include <codepages.h>
#include <languages.h>
#include <bloomlang_api.h>

#include <wrktksvc_messages.h> // wrktksvc
#include <a_baslt_basclient.h>

extern "C"
{
#include <drqs_type_util.h>
#include <drqs_status_util.h>
#include <drqsdb_wrap.h>
#include <getuuidname_w.h>
#include <cfrmf.h>
#include <host_api.h>
#include <acc_parmcm6.h>
#include <getdeptchain.h>
#include <systemdate.h>
#include <unpackx_w.h>
#include <bregmpdb_api.h>
#include <bregmpdb.h>
#include <breg_msg.h>
#include <prqs_api.h>
#include <actday_w.h>
}

using namespace std;

namespace BloombergLP {
namespace s_breguisvc {
namespace helpers_v3 {

namespace {
    const bsl::string APPLICATION_ID = "BREGUI_SVC"; // Registered name in DRQS 65652306
    enum {
        BAS_ROUTER           = 28454,
        WRKTKSVC_SERVICE_ID  = 168976
    };

    bool isUserInPrivList(int uuid, const int *deptChain, int deptCount,
                          const std::vector<bregv3db::UserData>& privUsers);
    bool isValidApiName(std::string *emsg, 
                        const std::string& apiName, int entryId);
    bool isValidMaxNumValuesInList(int maxNum, bool inShm, int valueType,
                                   string *emsg);
    int valueTypeStrToNum(const string& typeStr);

    int privLevelToFlag(int accessLevel);
    int subLevelToFlag(int level);

    int svcValueTypeToBregmpdbValueType(
          const s_breguisvc::ValueType::Value& type);

    int sendBregNotifyMessage(int from_uuid, int to_uuid[], int howMany,
                              char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN],
                              char attachment[BREG_ATTACH_LEN]);
    void packProductionChangeMsgText(int entryId, 
                               char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN]);
    void packMetadataChangeMsgText(int entryId,
                               char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN]);
    void packRegistryCreationMsgText(int entryId,
                               char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN]);
    std::string getFullName(int uuid);
    std::string valueTypeToGenString(const ValueType::Value& type);
}


void svcNodeToDbNode(bregv3db::Node* dbNode, 
                     bregv3db::Audit* dbAudit,
                     const s_breguisvc::NodeInfo& node)
{
    BAEL_LOG_SET_CATEGORY("svcNodeToDbNode");

    if (!dbNode || !dbAudit) {
        BAEL_LOG_DEBUG << "null input" << BAEL_LOG_END;
        return;
    }

    dbNode->nodeId() = node.nodeId();
    dbNode->parentId() = node.parentId();
    dbNode->name() = node.name();
    dbNode->description() = node.description();
    dbNode->isLeaf() = node.isLeaf();
    dbNode->isDeleted() = node.isDeleted();
            
    int keyWordCount = node.keywords().size();
    for (int i = 0; i < keyWordCount; ++i) {
        if (node.keywords()[i].length() <= 0)
            continue;
        dbNode->keywords().push_back(node.keywords()[i]);
    }

    dbAudit->entryId() = node.auditRecord().entryId();
    dbAudit->eventType() = node.auditRecord().eventType().toInt64();
    dbAudit->updateUuid() = node.auditRecord().uuid();
    dbAudit->updateTsp() = getUpdateTime();
    dbAudit->prqsNo() = node.auditRecord().prqsNumber();
    dbAudit->prqsStatus() = node.auditRecord().prqsStatus();
    dbAudit->ticketType() = node.auditRecord().ticketType();
    dbAudit->ticketNo() = node.auditRecord().ticketNumber();
    dbAudit->oldValue() = node.auditRecord().oldValue();
    dbAudit->newValue() = node.auditRecord().newValue();
}

void dbNodeToSvcNode(s_breguisvc::NodeInfo *node,
                     const bregv3db::Node dbNode,
                     const bregv3db::Audit dbAudit)
{
    node->nodeId() = dbNode.nodeId();
    node->parentId() = dbNode.parentId();
    node->name() = dbNode.name();
    node->description() = dbNode.description();
    node->isLeaf() = dbNode.isLeaf();
    node->isDeleted() = dbNode.isDeleted();
    node->isToDelete() = dbNode.isToDelete();
    node->keywords() = dbNode.keywords();

    node->auditRecord().entryId() = dbNode.nodeId();
    node->auditRecord().uuid() = dbAudit.updateUuid();
    node->auditRecord().updateTsp() = dbTspToSvcTsp(dbAudit.updateTsp());
    node->auditRecord().oldValue() = dbAudit.oldValue();
    node->auditRecord().newValue() = dbAudit.newValue();
    node->auditRecord().prqsNumber() = dbAudit.prqsNo();
    node->auditRecord().prqsStatus() = dbAudit.prqsStatus();

    node->auditRecord().eventType() = EventTypeEnum(99);

    switch (dbAudit.eventType()) {
    case bregv3db::DbAccessor::CHANGE_SHARED_MEMORY:
        node->auditRecord().eventType() = EventTypeEnum(0);
        break;
    case bregv3db::DbAccessor::CHANGE_EXPIRE_DATE_SHORT:
        node->auditRecord().eventType() =
            EventTypeEnum(SVC_EXPIRE_DATE_CHANGE_SHORT_EVENT_TYPE);
        break;
    case bregv3db::DbAccessor::CHANGE_EXPIRE_DATE_LONG:
        node->auditRecord().eventType() = 
            EventTypeEnum(SVC_EXPIRE_DATE_CHANGE_LONG_EVENT_TYPE);
        break;
    default:
        // node->auditRecord().eventType() = EventTypeEnum(dbAudit.eventType());
        break;
    }
}

bool isValidNode(const bregv3db::Node& node,
                 std::string *emsg)
{
    if (! emsg)
        throw bregv3db::DbException("Null input to isValidNode");

    if (node.name().length() <= 0) {
        *emsg = "Name is mandatory.";
        return false;
    }
 
    if (!strcasecmp(node.name().c_str(), "search")) {
        *emsg = "Name can't be \"SEARCH\"!";
        return false;
    }

    std::list<bregv3db::Node> children;
    std::list<bregv3db::Node>::iterator iter;

    bregv3db::DbAccessor db;
    db.getNodeChildren(&children, node.parentId());
    for (iter = children.begin(); iter != children.end(); ++iter) {
        if (! strcmp(node.name().c_str(), iter->name().c_str()) &&
            iter->nodeId() != node.nodeId()) {
            *emsg = "Can't have the same name under parent node!";
            return false;
        }
    }
    if (node.description().length() <= 0) {
        *emsg = "Description is mandatory.";
        return false;
    }

    if (node.description().length() >=
        bregv3db::DbAccessor::BREGV3DB_ENTRY_DESC_SIZE) {
        *emsg = "Description length exceeds the maximum of "
            "255 characters.";
        return false;
    }
           
    // no duplicate keywords
    std::vector<std::string> keywords = node.keywords();
    int count = keywords.size();
    for (int i = 0; i < count-1; ++i) {
        for (int j = i+1; j < count; ++j) {
            if (! strcasecmp(keywords[i].c_str(), keywords[j].c_str())) {
                *emsg = "No duplicate keywords allowed!";
                return false;
            }

        }
    }    
    return true;
}

bool isRegistryMovable(int srcNodeId, int destNodeId, int uuid,
                       std::string *emsg)
{
    BAEL_LOG_SET_CATEGORY("isRegistryMovable");

    if (!emsg)
        throw std::runtime_error("Null input to isNodeMovable");

    if (srcNodeId == destNodeId) {
        *emsg = "Can not move a registry to itself.";
        return false;
    }

    bregv3db::DbAccessor db;
    bregv3db::Node srcNode, destNode;
    bregv3db::Audit audit;

    try {
        db.getNode(&destNode, &audit, destNodeId);
    } catch (bregv3db::DbException& e) {
        if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
            std::ostringstream str;
            str << "Destination node " << destNodeId << " not found.";
            *emsg = str.str();
            return false;
        }
        throw e;
    }

    try {
        db.getNode(&srcNode, &audit, srcNodeId);
    } catch (bregv3db::DbException& e) {
        if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
            std::ostringstream str;
            str << "Source node " << srcNodeId << " not found.";
            *emsg = str.str();
            return false;
        }
        throw e;
    }

    if (destNode.isLeaf()) {
        *emsg = "Destination is not a node.";
        return false;
    }

    if (destNode.isDeleted()) {
        *emsg = "Cannot move to a deleted node.";
        return false;
    }

    if (srcNode.parentId() == destNodeId) {
        std::ostringstream str;
        str << "BREG  "<< srcNodeId << " is already under destination "
            << "node " << destNodeId << ".";
        *emsg = str.str();
        return false;
    }

    // can't move to node R&D, DELETED and RAPID ROUNTING
    if (destNodeId == 1 || destNodeId == 1597 || destNodeId == 7978) {
        *emsg = "Cannot move to node 1,1597 and 7978 per policy.";
        return false;
    }

    // can't move to a child node
    std::list<bregv3db::Node> children;
    std::list<bregv3db::Node>::iterator chiter;
    db.getNodeChildren(&children, srcNodeId);
    for (chiter = children.begin(); chiter != children.end(); ++chiter) {
        if (chiter->nodeId() == destNodeId) {
            *emsg = "Cannot move a node to its child.";
            return false;
        }
    }
        
    // check if user is the privileging admin for 
    // both src and dest nodes
    BAEL_LOG_DEBUG << "src " << srcNodeId
                   << " dest " << destNodeId << " uuid " << uuid 
                   << BAEL_LOG_END;
    if (!helpers_v3::isUserPrivileged(uuid, srcNodeId,
                                      bregv3db::DbAccessor::ADMIN_PRIV)) {
        *emsg = "Not privileged for current node!";
        return false;
    }
 
    if (!helpers_v3::isUserPrivileged(uuid, destNodeId,
                                      bregv3db::DbAccessor::ADMIN_PRIV)) {
        *emsg = "Not privileged for destination node!";
        return false;
    }
    return true;
}

bool isObsoleteTraceOn(const bregv3db::EntryDescription& des)
{
    BAEL_LOG_SET_CATEGORY("isObsoleteTraceOn");

    enum { MIN_OBSOLETE_TRACE_DAYS = 6 };

    if (des.apiStatus() == bregv3db::DbAccessor::API_NEW ||
        des.apiStatus() == bregv3db::DbAccessor::API_STAGED)
        return true;

    bregv3db::DbAccessor db;
    int version = db.getMaxValueVersion(des.entryId());

    int check_count = 0;

    while (version >= 0 && ++check_count <= 10) {
        bregv3db::EntryValue value;
        bregv3db::Audit audit;

        try {
            db.getProdEntryValue(&value, &audit, des.entryId(), version);
        }
        catch (const bregv3db::DbException& e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
            --version;
            continue;
        }

        if (audit.prqsStatus() != "C") {
            --version;
            continue;
        }

        if (!value.isObsolete())
            return false;

        //obsolete trace on, check 6 days
        short year, month, date;
        sscanf(audit.updateTsp().c_str(), "%hd-%02hd-%02hd", 
               &year, &month, &date);
        short trace_i2date[] = {month, date, year};

        gint today = systemdate();
        short today_i2date[3] = {0};
        unpackx(today, today_i2date);

        short datediff = actday(trace_i2date, today_i2date);
        
        //if (datediff > MIN_OBSOLETE_TRACE_DAYS)
        //temporarily set to check 6 days due to timestamp mismatch 
        //with the Informix db, once Informix db is disabled, this should
        //be replaced by the above check
        if (datediff >= MIN_OBSOLETE_TRACE_DAYS)
            return true;

        --version;
    }

    if (version < 0) //found no valid version
        return true;

    return false;
}

bool getHasExpired(const std::string& expireTsp)
{
    if (expireTsp.length() <= 0) return false;

    struct tm storage = {0};
    time_t exp_time = 0;

    string expire_time(expireTsp.substr(0,10));
    if (strptime(expire_time.c_str(),"%Y-%m-%d", &storage))
    {
        // set the dst field to unknown, mktime will correct this
        storage.tm_isdst = -1;
        exp_time = mktime(&storage);
    }
    else 
        return false;

    time_t rawtime = 0;
    time(&rawtime);
    if (rawtime > exp_time)
        return true;

    return false;
}

bool obsoleteTraceEnabled(int bregId)
{
    BAEL_LOG_SET_CATEGORY("obsoleteTraceEnabled");

    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryValue value;
        bregv3db::Audit audit;
        int version = db.getCurrentProdVersion(bregId);
        db.getProdEntryValue(&value, &audit, bregId, version);
        if (value.isObsolete())
            return true;
    }
    catch (bregv3db::DbException &e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
    }

    return false;
}

bool addExpireDateChangeAudit(const s_breguisvc::NodeInfo& node)
{
    BAEL_LOG_SET_CATEGORY("addExpireDateChangeAudit");

    bregv3db::Node dbNode;
    bregv3db::Audit audit;
    svcNodeToDbNode(&dbNode, &audit, node);

    // overwrite svc audit info
    int eventType = node.auditRecord().eventType().toInt64();
    switch (eventType) {
    case SVC_EXPIRE_DATE_CHANGE_SHORT_EVENT_TYPE:
        audit.eventType() = bregv3db::DbAccessor::CHANGE_EXPIRE_DATE_SHORT;
        break;
    case SVC_EXPIRE_DATE_CHANGE_LONG_EVENT_TYPE:
        audit.eventType() = bregv3db::DbAccessor::CHANGE_EXPIRE_DATE_LONG;
        break;
    default:
        BAEL_LOG_ERROR << "wrong svc event type " << eventType
                       << BAEL_LOG_END;
        return false;
    }
    audit.prqsStatus() = "A";

    try {
        bregv3db::DbAccessor db;
        db.updateNode(dbNode, audit);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return false;
    }

    char prqsDes[80], prqsStatus[10];
    prqs_api_rcode prcode = prqs_get_status(audit.prqsNo(), 
                                            sizeof(prqsStatus),
                                            sizeof(prqsDes),
                                            prqsStatus, prqsDes);

    BAEL_LOG_DEBUG << "PRQS " << audit.prqsNo() << ", status " 
                   << prqsStatus << ", rcode " << prcode
                   << BAEL_LOG_END;
    if (prcode == PRQS_API_NO_ERROR)
    {
        if (0 == strncmp(prqsStatus,"C",strlen("C"))) {
            BAEL_LOG_DEBUG << "Updating breg db on self-approval." 
                           << BAEL_LOG_END;
            int rc = bregv3db_audit_process_prqs_status_change(audit.prqsNo(),
                                                               "C");
            if (rc != 0) {
                BAEL_LOG_WARN << "Unable to update bregv3db audit "
                              << "table, prqs_no=" << audit.prqsNo()
                              << " rc=" << rc
                              << BAEL_LOG_END;
            }
        }
    }

    return true;
}

void addEntryTreeInfo(BloombergLP::bregv3db::DbAccessor& db,
                      int nodeId,
                      int parentId)
{
    BAEL_LOG_SET_CATEGORY("addEntryTreeInfo");

    try {
        std::list<int> ancestors;
        try {
            db.getEntryAncestors(&ancestors, parentId);
        }
        catch (BloombergLP::bregv3db::DbException & e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        }
        ancestors.push_back(parentId);

        BAEL_LOG_DEBUG << "node " << nodeId << " ancestors: "
                       << BAEL_LOG_END;
        std::list<int>::iterator iter;
        for (iter=ancestors.begin(); iter!=ancestors.end(); ++iter)
            BAEL_LOG_DEBUG << *iter << BAEL_LOG_END;
 
        db.updateEntryAncestors(nodeId, ancestors);
    }
    catch (BloombergLP::bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
    }
}

void svcEntryToDbEntry(bregv3db::EntryDescription *dbEntry,
                       bregv3db::Audit *dbAudit,
                       const NodeInfo& node, 
                       const EntryInfo& entry)
{
    BAEL_LOG_SET_CATEGORY("svcEntryToDbEntry");

    if (!dbEntry || !dbAudit) {
        BAEL_LOG_DEBUG << "null input" << BAEL_LOG_END;
        return;
    }

    svcNodeToDbNode(&dbEntry->node(), dbAudit, node);
    dbEntry->entryId() = entry.entryId();
    dbEntry->valueType() = 
        valueTypeStrToNum(ValueType::toString(entry.valueType()));
    dbEntry->apiName() = entry.apiName();
    dbEntry->apiStatus() = entry.apiStatus();
    dbEntry->expireTsp() = svcTspToDbTsp(entry.expiryTsp());
    dbEntry->isPermanent() = entry.isPermanent();
    dbEntry->isSharedMemory() = entry.isSharedMemory();
    dbEntry->maxNumValuesInList() = entry.maxNumValuesInList();
    if (!entry.apiDate().isNull())
        dbEntry->apiDate() = entry.apiDate().value();
}

void dbEntryToSvcEntry(s_breguisvc::NodeInfo *node, 
                       s_breguisvc::EntryInfo *entry,
                       const bregv3db::EntryDescription& dbEntry, 
                       const bregv3db::Audit& dbAudit)
{       
    BAEL_LOG_SET_CATEGORY("dbEntryToSvcEntry");

    if (!node || !entry) {
        BAEL_LOG_DEBUG << "null input" << BAEL_LOG_END;
        return;
    }

    dbNodeToSvcNode(node, dbEntry.node(), dbAudit);

    entry->entryId() = dbEntry.entryId();

    ValueType::Value vType;
    ValueType::fromInt(&vType, 
                       dbValueTypeToSvcValueType(dbEntry.valueType())); 
    entry->valueType() = vType;

    entry->apiName() = dbEntry.apiName();

    ApiStatus::Value apiStat;
    ApiStatus::fromInt(&apiStat, dbEntry.apiStatus());
    entry->apiStatus() = apiStat;

    entry->expiryTsp() = dbTspToSvcTsp(dbEntry.expireTsp());
    entry->isPermanent() = dbEntry.isPermanent();
    entry->isSharedMemory() = dbEntry.isSharedMemory();
    entry->maxNumValuesInList() = dbEntry.maxNumValuesInList();
}

bool isValidEntry(const bregv3db::EntryDescription& entry,
                  std::string *emsg)
{
    if (!isValidNode(entry.node(), emsg))
        return false;

    if ((entry.apiStatus() == bregv3db::DbAccessor::API_NEW ||
         entry.apiStatus() == bregv3db::DbAccessor::API_STAGED) &&  
        !isValidApiName(emsg, entry.apiName(), entry.entryId()))
        return false;

    if (!isValidMaxNumValuesInList(entry.maxNumValuesInList(),
                                   entry.isSharedMemory(),
                                   entry.valueType(),
                                   emsg))
        return false;

    return true;
}

bool svcEntryInfoMatchDbEntryInfo(const EntryInfo& svcEntry,
                                  const bregv3db::EntryDescription& dbEntry)
{
    int svcValueType = dbValueTypeToSvcValueType(dbEntry.valueType());
    if (svcValueType != svcEntry.valueType() ||
        dbEntry.apiName() != svcEntry.apiName() ||
        dbEntry.isSharedMemory() != svcEntry.isSharedMemory() ||
        dbEntry.isPermanent() != svcEntry.isPermanent()) {
        return false;
    }

    return true;
}

bool generateAccessorCode(std::string *emsg, const EntryInfo& entry)
{
    BAEL_LOG_SET_CATEGORY("generateAccessorCode");
    
    const int BREG_REGISTRY_ENTRY_API_NAME_LEN = 81;

    char *command[5] = {0, 0, 0, 0, 0};  // args to bas
    char args[5][BREG_REGISTRY_ENTRY_API_NAME_LEN];  // args to bas
    char errmsg[256] = {0};

    if (entry.isSharedMemory()) {
        snprintf(args[0], BREG_REGISTRY_ENTRY_API_NAME_LEN, "memory");
    } else {
        snprintf(args[0], BREG_REGISTRY_ENTRY_API_NAME_LEN, "comdbg");
    }

    snprintf(args[1], BREG_REGISTRY_ENTRY_API_NAME_LEN, "%s",
             entry.apiName().c_str()); 

    int entryId = entry.entryId();
    snprintf(args[2], BREG_REGISTRY_ENTRY_API_NAME_LEN, "%d", entryId);

    snprintf(args[3], BREG_REGISTRY_ENTRY_API_NAME_LEN, "%s",
            valueTypeToGenString(entry.valueType()).c_str());

    for (int i=0; i<5; ++i) 
        command[i] = args[i];

    BAEL_LOG_DEBUG << "command[0]: " << command[0]
                   << ", command[1]: " << command[1]
                   << ", command[2]: " << command[2]
                   << ", command[3]: " << command[3]
                   << BAEL_LOG_END;

    int count = 4;
    int status = csutil_generate_breg_code_request(command, count,
                                                   errmsg, sizeof(errmsg));

    BAEL_LOG_DEBUG << "status=" << status << ", errmsg: " << errmsg
                   << BAEL_LOG_END;

    if (0 != status) {
        emsg->assign(errmsg);
        return false;
    }

    return true;
}

bool releaseAccessorCode(std::string *emsg, 
                         const std::string& apiName)
{
    BAEL_LOG_SET_CATEGORY("releaseAccessorCode");

    const int BREG_REGISTRY_ENTRY_API_NAME_LEN = 81;

    char command[BREG_REGISTRY_ENTRY_API_NAME_LEN];
    snprintf(command, sizeof(command), "%s", apiName.c_str());

    BAEL_LOG_DEBUG << "release api: " << command << BAEL_LOG_END;

    char errmsg[256] = {0};
    int status = csutil_release_breg_code_request(command, errmsg, 
                                                  sizeof(errmsg));

    BAEL_LOG_DEBUG << "status: " << status << " errmsg: " << errmsg
                   << BAEL_LOG_END;
       
    if (0 != status) {
        emsg->assign(errmsg);
        return false;
    }

    return true;
}

void createBregmpdbRec(int entryId, const s_breguisvc::ValueType::Value& type,
                       const std::string& apiName, int entryStatus)
{       
    BAEL_LOG_SET_CATEGORY("createBregmpdbRec");

    if (entryId < 1 || entryStatus < 0) {
        BAEL_LOG_INFO  << "invalid input: entry " << entryId
                       << " status " << entryStatus << BAEL_LOG_END;
        return;
    }

    if (bregmpdb_create_rec(const_cast<char*>(apiName.c_str()), 
                            entryId,
                            entryStatus, 
                            svcValueTypeToBregmpdbValueType(type)) 
            != BREGMP_COMDB_NO_ERROR) {
            
        BAEL_LOG_INFO << "bregmpdb_create_rec failed for entry id: "
                      << entryId << BAEL_LOG_END;
    }
}

void updateBregmpdbRec(int entryId, const s_breguisvc::ValueType::Value& type,
                       const std::string& apiName, int entryStatus)
{
    BAEL_LOG_SET_CATEGORY("updateBregmpdbRec");

    /* update bregmpdb record by setting bregmpdb status
       if record does not existed in bregmpdb, add it
    */
 
    int oldstatus=0, oldtype=0;
    char oldname[BREGMPDB_API_LEN] = {0};

    if(bregmpdb_get_rec_by_entry_id(entryId,
                                    oldname, &oldstatus, &oldtype, 
                                    BREGMPDB_API_LEN)
       == BREGMP_COMDB_NO_ERROR) {

        bregmpdb_api_rc mpdb_rc = 
            bregmpdb_update_entry_status(const_cast<char*>(apiName.c_str()),
                                         entryStatus);

        if (mpdb_rc!=BREGMP_COMDB_NO_ERROR) {
            BAEL_LOG_INFO << "bregmpdb_update_entry_status failed:id: "
                          << entryId << " rc: " << mpdb_rc
                          << BAEL_LOG_END;
        }
    }
    else { // not found -> add
        createBregmpdbRec(entryId, type, apiName, entryStatus);
    }
}

bool isUserPrivileged(int uuid, int bregId, int accessLevel)
{
    BAEL_LOG_SET_CATEGORY("isUserPrivileged");
    
    int rcode = 0;
    char emsg[81] = {0};
    set_parmcm6_p6uuid(uuid);
    if (pvf_checkprvl_new("BREG", 1001, uuid, &rcode, emsg,
                          strlen("BREG"), sizeof(emsg))) {
        set_parmcm6_p6uuid(0);
        return true;
    }
    set_parmcm6_p6uuid(0);
 
    enum {
        DEPT_CHAIN_LEN = 12
    };

    int deptChain[DEPT_CHAIN_LEN] = {0};
    int deptCount = 0;
    rcode = getDeptChainForUUID(uuid, deptChain, DEPT_CHAIN_LEN,
                                &deptCount);
    if (rcode)  {
        BAEL_LOG_DEBUG << "getDeptChainForUUID:uuid " << uuid 
                       << " rc " << rcode << BAEL_LOG_END;
        deptCount = 0;
    }

    // check node's own privilege user list
    bregv3db::DbAccessor db;
    std::vector<bregv3db::UserData> privUsers;

    db.getPrivilegedUsers(&privUsers, bregId, accessLevel);
    if (privUsers.size() > 0) {
        if (isUserInPrivList(uuid, deptChain, deptCount,
                             privUsers))
            return true;
    }

    // check node's ancestors' privilege user list
    std::list<int> ancestors;

    try {
        db.getEntryAncestors(&ancestors, bregId);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        return false;
    }

    std::list<int>::iterator ait;
    for (ait = ancestors.begin(); ait != ancestors.end(); ++ait) {
        privUsers.clear();
        db.getPrivilegedUsers(&privUsers, *ait, accessLevel);

        if (isUserInPrivList(uuid, deptChain, deptCount,
                             privUsers))
            return true;
    }

    return false;
}

void getPrivilegesOfAllLevels(map<int, s_breguisvc::UserData> *user_priv_map,
                              int breg_id)
{
    BAEL_LOG_SET_CATEGORY("getPrivilegesOfAllLevels");
    
    if (! user_priv_map) {
        BAEL_LOG_ERROR << "Null input" << BAEL_LOG_END;
        return;
    }

    int access_levels[] = {bregv3db::DbAccessor::ADMIN_PRIV,
                           bregv3db::DbAccessor::UPDATE_PROD_VALUE_PRIV,
                           bregv3db::DbAccessor::UPDATE_DEV_VALUE_PRIV,
                           bregv3db::DbAccessor::RELEASE_CODE_PRIV,
                           bregv3db::DbAccessor::UPDATE_METADATA_PRIV};

    bregv3db::DbAccessor db;

    for (unsigned int i = 0; i < sizeof(access_levels)/sizeof(int); ++i) {

        vector<bregv3db::UserData> users;
        db.getPrivilegedUsers(&users, breg_id, access_levels[i]);

        int count = users.size();
        if (0 == count) continue;

        for (int j = 0; j < count; ++j) {

            s_breguisvc::UserData& user = (*user_priv_map)[users[j].userId()];

            // user_flag: bit 0-7 stores bit mask, 
            //            bit 8-31 stores parent_breg_id
            int user_flag = privLevelToFlag(access_levels[i]);

            if (users[j].userType() == bregv3db::DbAccessor::PERSON_CONTACT) {
                user_flag |= USERFLAG_UUID_BITMASK;
            }

            user.userFlags().push_back((breg_id << 8) | user_flag);
            user.userNumber() = users[j].userId();
        }
    }
}

void svcPrivUsersToDbPrivUsers(
    std::vector<bregv3db::UserData> *admin_users,
    std::vector<bregv3db::UserData> *prod_users,
    std::vector<bregv3db::UserData> *dev_users,
    std::vector<bregv3db::UserData> *rels_code_users,
    std::vector<bregv3db::UserData> *metadata_users,
    const std::vector<s_breguisvc::UserData>& svc_users,
    int breg_id)
{
    BAEL_LOG_SET_CATEGORY("svcPrivUsersToDbPrivUsers");

    int count = svc_users.size();

    for (int i = 0; i < count; ++i) {

        bregv3db::UserData user;

        std::vector<bsls_Types::Int64>::const_iterator it;

        for (it = svc_users[i].userFlags().begin();
             it != svc_users[i].userFlags().end(); ++it) {
            
            if (!(*it & (USERFLAG_ACL_UPD_PROD_BITMASK |
                         USERFLAG_ACL_UPD_PRIV_BITMASK |
                         USERFLAG_ACL_REL_CODE_BITMASK |
                         USERFLAG_ACL_UPD_DEV_BITMASK  |
                         USERFLAG_ACL_UPD_DESC_BITMASK)))
                continue;

            int coded_breg_id = ((int) *it) >> 8;
            if (breg_id != coded_breg_id) // inherited
                continue;

            if (0 == (*it & USERFLAG_UUID_BITMASK)) {
                user.userType() = bregv3db::DbAccessor::GROUP_CONTACT;
            }
            else {
                user.userType() = bregv3db::DbAccessor::PERSON_CONTACT;
            }
            user.userId() = svc_users[i].userNumber();

            if (*it & USERFLAG_ACL_UPD_PRIV_BITMASK) {
                admin_users->push_back(user);
                BAEL_LOG_DEBUG << "Adding priv: " << svc_users[i].userNumber() 
                               << BAEL_LOG_END;
            } 
            else if (*it & USERFLAG_ACL_UPD_PROD_BITMASK) {
                prod_users->push_back(user);
                BAEL_LOG_DEBUG << "Adding prod: " << svc_users[i].userNumber() 
                               << BAEL_LOG_END;
            } 
            else  if (*it & USERFLAG_ACL_UPD_DESC_BITMASK) {
                metadata_users->push_back(user);
                BAEL_LOG_DEBUG << "Adding desc: " << svc_users[i].userNumber() 
                               << BAEL_LOG_END;
            } 
            else if (*it & USERFLAG_ACL_REL_CODE_BITMASK) {
                rels_code_users->push_back(user);
                BAEL_LOG_DEBUG << "Adding relCode: " 
                               << svc_users[i].userNumber() << BAEL_LOG_END;
            }
            else if (*it & USERFLAG_ACL_UPD_DEV_BITMASK) {
                dev_users->push_back(user);
                BAEL_LOG_DEBUG << "Adding dev: " << svc_users[i].userNumber() 
                               << BAEL_LOG_END;
            }
        }
    }
}

void getUserPrivilege(NodePrivilege *privilege, int breg_id, int uuid)
{
    BAEL_LOG_SET_CATEGORY("getUserPrivilege");

    set_parmcm6_p6uuid(uuid);

    privilege->isPrivilegeAdmin() = 
        helpers_v3::isUserPrivileged(uuid, breg_id,
                                     bregv3db::DbAccessor::ADMIN_PRIV);
    privilege->canUpdateProd() = 
        helpers_v3::isUserPrivileged(uuid, breg_id,
                                bregv3db::DbAccessor::UPDATE_PROD_VALUE_PRIV);
    privilege->canUpdateDev() = 
        helpers_v3::isUserPrivileged(uuid, breg_id,
                                bregv3db::DbAccessor::UPDATE_DEV_VALUE_PRIV);
    privilege->canUpdateDesc() = 
        helpers_v3::isUserPrivileged(uuid, breg_id,
                                bregv3db::DbAccessor::UPDATE_METADATA_PRIV);

    privilege->canReleaseCode() = 
        helpers_v3::isUserPrivileged(uuid, breg_id,
                                bregv3db::DbAccessor::RELEASE_CODE_PRIV);

    set_parmcm6_p6uuid(0);
}


void setDbContactValue(bregv3db::Contact *contact_info,
                       const EntryContacts& contacts,
                       int breg_id)
{
    BAEL_LOG_SET_CATEGORY("setDbContactValue");

    if (!contact_info) {
        BAEL_LOG_ERROR << "null input" << BAEL_LOG_END;
        return;
    }

    contact_info->entryId() = breg_id;
    contact_info->primaryUuid() = contacts.primaryUuid();
    contact_info->backupUuid() = contacts.backupUuid();
    contact_info->drqsGroup() = contacts.drqsGroup();
    contact_info->updateUuid() = contacts.auditRecord().uuid();
    contact_info->updateTsp() = 
        svcTspToDbTsp(contacts.auditRecord().updateTsp());    
}

void createContacts(int breg_id, int parent_breg_id, int uuid)
{
    BAEL_LOG_SET_CATEGORY("createContacts");

    bregv3db::Contact contact_info;
    if (getParentContacts(&contact_info, parent_breg_id)) {
        try {
            contact_info.entryId() = breg_id;
            contact_info.updateUuid() = uuid;
            contact_info.updateTsp() = getUpdateTime();
            bregv3db::DbAccessor db;
            db.insertContacts(contact_info);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_ERROR << "fail to add contacts: breg " << breg_id
                           << ": " << e.what() << BAEL_LOG_END;
        }
    }
}

bool getParentContacts(bregv3db::Contact *contact_info, int parent_breg_id)
{
    BAEL_LOG_SET_CATEGORY("getParentContacts");

    try {
        bregv3db::DbAccessor db;
        db.getContacts(contact_info, parent_breg_id);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "fail to get contacts: breg " << parent_breg_id
                       << ": " << e.what() << BAEL_LOG_END;
        return false;
    }

    return true;
}

void setDbSubscribeValue(bregv3db::Subscribe *prod_sub,
                         bregv3db::Subscribe *meta_sub,
                         bregv3db::Subscribe *create_sub,
                         const EntrySubscribers& subs)
{
    BAEL_LOG_SET_CATEGORY("setDbSubscribeValue");
   
    prod_sub->entryId() = subs.registryId();
    prod_sub->type() = bregv3db::DbAccessor::PROD_VALUE_CHANGE_ALERT;
    prod_sub->updateUuid() = subs.auditRecord().uuid();;
    prod_sub->updateTsp() = 
        svcTspToDbTsp(subs.auditRecord().updateTsp());

    meta_sub->entryId() = subs.registryId();
    meta_sub->type() = bregv3db::DbAccessor::METADATA_CHANGE_ALERT;
    meta_sub->updateUuid() = subs.auditRecord().uuid();;
    meta_sub->updateTsp() = 
        svcTspToDbTsp(subs.auditRecord().updateTsp());

    create_sub->entryId() = subs.registryId();
    create_sub->type() = bregv3db::DbAccessor::NEW_NODE_CREATE_ALERT;
    create_sub->updateUuid() = subs.auditRecord().uuid();;
    create_sub->updateTsp() = 
        svcTspToDbTsp(subs.auditRecord().updateTsp());

    std::vector<UserData>::const_iterator it;
    for (it = subs.userDataList().begin();
         it != subs.userDataList().end(); ++it) {

        for (std::vector<bsls_Types::Int64>::const_iterator 
                 it2 = it->userFlags().begin();
             it2 != it->userFlags().end(); ++it2) {

            if (!(*it2) & (USERFLAG_SUBSCRIBER_PROD_DATA_BITMASK |
                           USERFLAG_SUBSCRIBER_METADATA_BITMASK  |
                           USERFLAG_SUBSCRIBER_BREG_CREATION_BITMASK))
                continue;

            int bregId = ((int) *it2) >> 8;
            if (bregId != subs.registryId())
                // inherited
                continue;

            if (*it2 & USERFLAG_SUBSCRIBER_PROD_DATA_BITMASK) {
                prod_sub->userList().push_back(it->userNumber());
                BAEL_LOG_DEBUG << "Adding prod: " << it->userNumber() 
                               << BAEL_LOG_END;
            }
            else if (*it2 & USERFLAG_SUBSCRIBER_METADATA_BITMASK) {
                meta_sub->userList().push_back(it->userNumber());
                BAEL_LOG_DEBUG << "Adding meta: " << it->userNumber() 
                               << BAEL_LOG_END;
            } 
            else if (*it2 & USERFLAG_SUBSCRIBER_BREG_CREATION_BITMASK) {
                create_sub->userList().push_back(it->userNumber());
                BAEL_LOG_DEBUG << "Adding create: " << it->userNumber() 
                               << BAEL_LOG_END;
            }
        }
    }    
}

void getSubscribersOfAllTypes(
    std::map<int, s_breguisvc::UserData> *user_sub_map, int breg_id)
{
    BAEL_LOG_SET_CATEGORY("getSubscribersOfAllTypes");
    
    if (! user_sub_map) {
        BAEL_LOG_ERROR << "Null input" << BAEL_LOG_END;
        return;
    }

    int types[] = {bregv3db::DbAccessor::PROD_VALUE_CHANGE_ALERT,
                   bregv3db::DbAccessor::METADATA_CHANGE_ALERT,
                   bregv3db::DbAccessor::NEW_NODE_CREATE_ALERT};

    bregv3db::DbAccessor db;

    for (unsigned int i = 0; i < sizeof(types)/sizeof(int); ++i) {
        vector<int> users;
        db.getSubscribeUsers(&users, breg_id, types[i]);

        int count = users.size();
        if (0 == count) continue;

        for (int j = 0; j < count; ++j) {
            s_breguisvc::UserData& user = (*user_sub_map)[users[j]];

            int user_flag = subLevelToFlag(types[i]);
            user_flag |= USERFLAG_UUID_BITMASK;

            user.userFlags().push_back((breg_id << 8) | user_flag);
            user.userNumber() = users[j];
        }
    }
}

string svcTspToDbTsp(const string& inTsp)
{
    string comdb2Tsp = inTsp;

    //comdb2 tsp does not understand millisecond tsp -> remove it
    size_t pos = comdb2Tsp.find_last_of('.');
    if (pos != string::npos)
        comdb2Tsp.erase(pos);

    //replace space in "yyyy-mm-dd hh:mm:ss" with T
    if (inTsp[10] == ' ')
        comdb2Tsp[10] = 'T';

    return comdb2Tsp;
}

std::string dbTspToSvcTsp(const std::string& dbTsp)
{
    string svcTsp;
    svcTsp.append(dbTsp.substr(0, 10));
    svcTsp.append(" ");
    svcTsp.append(dbTsp.substr(11, 2));
    svcTsp.append(":");
    svcTsp.append(dbTsp.substr(13, 2));
    svcTsp.append(":");
    svcTsp.append(dbTsp.substr(15, 2));
    return svcTsp;
}

string getUpdateTime(void)
{
    GTimeVal curtime;
    g_get_current_time(&curtime);
    gchar *curtimestr = g_time_val_to_iso8601(&curtime);

    string timeStr = curtimestr;
    if (curtimestr) {
        g_free(curtimestr);
        curtimestr = NULL;
    }

    return timeStr;

    /*
    time_t rawtime = time(NULL);
    struct tm *timeinfo = localtime(&rawtime);
    char updateTsp[32] = {0};
    strftime(updateTsp, sizeof(updateTsp), "%Y-%m-%dT%H:%M:%S",
             timeinfo);
    return updateTsp;
    */
}

void svcValueToDbValue(bregv3db::EntryValue *dbValue,
                       const EntryValue& svcValue,
                       int svcValueType)
{
    BAEL_LOG_SET_CATEGORY("svcValueToDbValue");

    dbValue->entryId() = svcValue.entryId();
    dbValue->version() = svcValue.version();
    dbValue->isObsolete() = svcValue.isObsolete();
    dbValue->isSharedMemory() = svcValue.isSharedMemory();

    svcDataToDbData(&(dbValue->entryData()),
                    svcValue.entryData().value(),
                    svcValueType);
    
    int override_count = svcValue.entryOverrides().size();
    
    for (int i = 0; i < override_count; ++i) {
        const EntryOverride& svcOvrd = svcValue.entryOverrides()[i];

        bregv3db::EntryOverride dbOvrd;
        dbOvrd.seq() = svcOvrd.seq();
        dbOvrd.overrideType() = svcOvrdTypeToDbOvrdType(svcOvrd.type());

        int target = 0;
        if (dbOvrd.overrideType() == bregv3db::DbAccessor::DEPT_OVERRIDE) {
            memcpy(&target, svcOvrd.value().c_str(), sizeof(int));
        }
        else {
            sscanf(svcOvrd.value().c_str(), "%d", &target);
        }
        dbOvrd.overrideTypeValue() = target;
        
        svcDataToDbData(&(dbOvrd.entryData()), 
                        svcOvrd.entryData(), 
                        svcValueType);

        dbValue->entryOverrides().push_back(dbOvrd);
    }
}

void svcDataToDbData(bdeut_NullableValue<bregv3db::EntryData> *dbData,
                     const s_breguisvc::EntryData& svcData,
                     int svcValueType)
{
    BAEL_LOG_SET_CATEGORY("svcDataToDbData");

    switch(svcValueType) {
    case ValueType::BOOLEAN:
        dbData->makeValue().makeBoolValue(svcData.boolValue());
        break;
    case ValueType::INTEGER:
        dbData->makeValue().makeIntValue(svcData.intValue());
        break;
    case ValueType::LIST_OF_INTEGERS:
        {
            if (svcData.intList().empty())
               return;

            std::vector<bregv3db::IntegerList> intList;
            for (unsigned int i = 0; i < svcData.intList().size(); ++i) {
                bregv3db::IntegerList iList;
                iList.val() = svcData.intList()[i];
                iList.seq() = i;
                intList.push_back(iList);
            }
            dbData->makeValue().makeIntList(intList);
        }
        break;
    case ValueType::CHARACTER:
        dbData->makeValue().makeCharValue(svcData.charValue());
        break;
    case ValueType::STRING:
        dbData->makeValue().makeStr(svcData.str());
        break;
    case ValueType::DOUBLE:
        dbData->makeValue().makeDoubleValue(svcData.doubleValue());
        break;
    case ValueType::EXT_LIST_OF_INTEGERS:
        {
            if (svcData.extIntList().empty())
                return;

            std::vector<bregv3db::IntegerList> intList;
 
            for (unsigned int i = 0; i < svcData.extIntList().size(); ++i) {
                bregv3db::IntegerList iList;
                iList.val() = svcData.extIntList()[i];
                iList.seq() = i;
                intList.push_back(iList);
            }
            dbData->makeValue().makeExtIntList(intList);
        }
        break;
    case ValueType::EXTENDED_STRING:
        dbData->makeValue().makeExtString(svcData.extString());
        break;
    default:
        BAEL_LOG_WARN << "Unsupported type " << svcValueType << BAEL_LOG_END;
        break;
    }
}

int svcOvrdTypeToDbOvrdType(int svcOvrdType)
{
    BAEL_LOG_SET_CATEGORY("svcOvrdTypeToDbOvrdType");

// PINDEX is defined somewhere and we're using it as an OverrideType
#undef PINDEX

    switch (svcOvrdType) {
    case s_breguisvc::OverrideType::MACHINE_OR_GROUP:
        return bregv3db::DbAccessor::MACHINE_OVERRIDE;
    case s_breguisvc::OverrideType::UUID:
        return bregv3db::DbAccessor::UUID_OVERRIDE;
    case s_breguisvc::OverrideType::TS_PRICING_NUMBER:
        return bregv3db::DbAccessor::PRICING_NUMBER_OVERRIDE;
    case s_breguisvc::OverrideType::FIRM_NUMBER:
        return bregv3db::DbAccessor::FIRM_OVERRIDE;
    case s_breguisvc::OverrideType::DEPARTMENT_CODE:
        return bregv3db::DbAccessor::DEPT_OVERRIDE;
    case s_breguisvc::OverrideType::CUSTOMER:
        return bregv3db::DbAccessor::CUSTOMER_OVERRIDE;
    case s_breguisvc::OverrideType::SERIAL_NUMBER:
        return bregv3db::DbAccessor::SERIAL_NUMBER_OVERRIDE;
    case s_breguisvc::OverrideType::PINDEX:
        return bregv3db::DbAccessor::PINDEX_OVERRIDE;
    case s_breguisvc::OverrideType::UUID_PERCENT:
        return bregv3db::DbAccessor::UUIDPRC_OVERRIDE;
    default:
        BAEL_LOG_WARN << "Unsupported type " << svcOvrdType << BAEL_LOG_END;
        break;
    }
    return -1;
}

int dbOvrdTypeToSvcOvrdType(int dbOvrdType)
{
    switch(dbOvrdType) {
    case bregv3db::DbAccessor::MACHINE_OVERRIDE:
        return s_breguisvc::OverrideType::MACHINE_OR_GROUP;
    case bregv3db::DbAccessor::UUID_OVERRIDE:
        return s_breguisvc::OverrideType::UUID;
    case bregv3db::DbAccessor::PRICING_NUMBER_OVERRIDE:
        return s_breguisvc::OverrideType::TS_PRICING_NUMBER;
    case bregv3db::DbAccessor::FIRM_OVERRIDE:
        return s_breguisvc::OverrideType::FIRM_NUMBER;
    case bregv3db::DbAccessor::DEPT_OVERRIDE:
        return s_breguisvc::OverrideType::DEPARTMENT_CODE;
    case bregv3db::DbAccessor::CUSTOMER_OVERRIDE:
        return s_breguisvc::OverrideType::CUSTOMER;
    case bregv3db::DbAccessor::SERIAL_NUMBER_OVERRIDE:
        return s_breguisvc::OverrideType::SERIAL_NUMBER;
    case bregv3db::DbAccessor::PINDEX_OVERRIDE:
        return s_breguisvc::OverrideType::PINDEX;
    case bregv3db::DbAccessor::UUIDPRC_OVERRIDE:
        return s_breguisvc::OverrideType::UUID_PERCENT;
    default:
        return s_breguisvc::OverrideType::UNKNOWN;
    }
}

std::string getOverrideSetting(OverrideType::Value ovr_type,
                               int target_ovrd_id)
{
    BAEL_LOG_SET_CATEGORY("getOverrideSetting");

    bbint32_t setting_int = target_ovrd_id;
    std::ostringstream os;
    char key[25] = {0};

    switch(ovr_type)
    {
        case OverrideType::DEPARTMENT_CODE:
            {
                snprintf(key, 5, "%s", 
                         reinterpret_cast<char *>(&target_ovrd_id));
                return key;
            }
        case OverrideType::MACHINE_OR_GROUP:
            {
                host_rc rc = host_get_machine_name_from_id(setting_int, 
                                                           key, sizeof(key));
                if(rc != HOST_RC_OK) {
                    rc = host_get_group_name_from_id(setting_int, 
                                                     key, sizeof(key));
                    if(rc != HOST_RC_OK)
                        BAEL_LOG_INFO << "bad machine/group number: " << setting_int 
                                      << " rcode: " << rc << BAEL_LOG_END;
                }
                return key;
            }
        case OverrideType::CUSTOMER:
        case OverrideType::UUID:
        case OverrideType::FIRM_NUMBER:
        case OverrideType::TS_PRICING_NUMBER:
        case OverrideType::SERIAL_NUMBER:
            //case OverrideType::PINDEX:
            //case OverrideType::UUID_PERCENT:
        default:
            os << setting_int;
            return os.str();
    }
}

std::string getOverrideSettingTooltip(OverrideType::Value ovr_type, 
                                      int target_ovrd_id)
{
    switch(ovr_type)
    {
        case OverrideType::UUID:
            // get fullname from uuid
            return getFullName(target_ovrd_id);
        case OverrideType::DEPARTMENT_CODE:
        case OverrideType::MACHINE_OR_GROUP:
        case OverrideType::CUSTOMER:
        case OverrideType::FIRM_NUMBER:
        case OverrideType::TS_PRICING_NUMBER:
        case OverrideType::SERIAL_NUMBER:
            //        case OverrideType::PINDEX:
            //        case OverrideType::UUID_PERCENT:
        default:
            return getOverrideSetting(ovr_type, target_ovrd_id);
    }
}

void dbValueToSvcValue(s_breguisvc::EntryValue *svcValue,
                       const bregv3db::EntryValue& dbValue,
                       int dbValueType)
{
    BAEL_LOG_SET_CATEGORY("dbValueToSvcValue");

    svcValue->entryId() = dbValue.entryId();
    svcValue->version() = dbValue.version();
    svcValue->isObsolete() = dbValue.isObsolete();
    svcValue->isSharedMemory() = dbValue.isSharedMemory();

    const bregv3db::EntryData& dbData = dbValue.entryData().value();

    dbDataToSvcData(&(svcValue->entryData().makeValue()),
                    dbValue.entryData(),
                    dbValueType);

    int override_count = dbValue.entryOverrides().size();
    for (int i = 0; i < override_count; ++i) {
        const bregv3db::EntryOverride& dbOvrd = dbValue.entryOverrides()[i];

        s_breguisvc::EntryOverride svcOvrd;
        svcOvrd.seq() = dbOvrd.seq();

        s_breguisvc::OverrideType::Value ovrdType;
        OverrideType::fromInt(&ovrdType,
                              dbOvrdTypeToSvcOvrdType(dbOvrd.overrideType()));
        svcOvrd.type() = ovrdType;

        int ovrdTarget = dbOvrd.overrideTypeValue();
        char ovrdTargetStr[24] = {0};
        if (dbOvrd.overrideType() == bregv3db::DbAccessor::DEPT_OVERRIDE)
            memcpy(ovrdTargetStr, &ovrdTarget, sizeof(int));
        else
            snprintf(ovrdTargetStr, sizeof(ovrdTargetStr), "%d", ovrdTarget);
        svcOvrd.value().assign(ovrdTargetStr);

        dbDataToSvcData(&(svcOvrd.entryData()), 
                        dbOvrd.entryData(),
                        dbValueType);

        svcValue->entryOverrides().push_back(svcOvrd);
    }
}

void dbDataToSvcData(s_breguisvc::EntryData *svcData,
                     const bdeut_NullableValue<bregv3db::EntryData>& dbData,
                     int dbValueType)
{
    BAEL_LOG_SET_CATEGORY("dbDataToSvcData");

    int svcValueType = dbValueTypeToSvcValueType(dbValueType);

    switch(svcValueType) {
    case ValueType::BOOLEAN:
        svcData->makeBoolValue();
        if (!dbData.isNull()) {
            svcData->boolValue() = dbData.value().boolValue();
        }
        break;
    case ValueType::INTEGER:
        svcData->makeIntValue();
        if (!dbData.isNull()) {
            svcData->intValue() = dbData.value().intValue();
        }
        break;
    case ValueType::LIST_OF_INTEGERS:
        svcData->makeIntList();
        if (!dbData.isNull()) {
            std::vector<bregv3db::IntegerList> intList = 
                dbData.value().intList();
            for (unsigned int i = 0; i < intList.size(); ++i) {
                svcData->intList().push_back(intList[i].val());
            }
        }
        break;
    case ValueType::CHARACTER:
        svcData->makeCharValue();
        if (!dbData.isNull()) {
            svcData->charValue() = dbData.value().charValue();
        }
        break;
    case ValueType::STRING:
        svcData->makeStr();
        if (!dbData.isNull()) {
            svcData->str() = dbData.value().str();
        }
        break;
    case ValueType::DOUBLE:
        svcData->makeDoubleValue();
        if (!dbData.isNull()) {
            svcData->doubleValue() = dbData.value().doubleValue();
        }
        break;
    case ValueType::EXT_LIST_OF_INTEGERS:
        svcData->makeExtIntList();
        if (!dbData.isNull()) {
            bregv3db::EntryData data = dbData.value();
            for (unsigned int i = 0; i < data.extIntList().size(); ++i) {
                svcData->extIntList().push_back(data.extIntList()[i].val());
            }
        }
        break;
    case ValueType::EXTENDED_STRING:
        svcData->makeExtString();
        if (!dbData.isNull()) {
            svcData->extString() = dbData.value().extString();
        }
        break;
    default:
        BAEL_LOG_WARN << "Unsupported type " << svcValueType << BAEL_LOG_END;
        break;
    }
}

int dbValueTypeToSvcValueType(int dbValueType) 
{
    switch (dbValueType) {
    case BREGDB_BOOL:
        return ValueType::BOOLEAN;
    case BREGDB_INT:
        return ValueType::INTEGER;
    case BREGDB_INTLST:
        return ValueType::LIST_OF_INTEGERS;
    case BREGDB_CHAR:
        return ValueType::CHARACTER;
    case BREGDB_STR:
        return ValueType::STRING;
    case BREGDB_DOUBLE:
        return ValueType::DOUBLE;
    case BREGDB_EXTINTLST:
        return ValueType::EXT_LIST_OF_INTEGERS;
    case BREGDB_EXTSTR:
        return ValueType::EXTENDED_STRING;
    default:
        return ValueType::UNKNOWN;
    }
}

std::string valueToString(int type, const bregv3db::EntryData& value)
{
    std::ostringstream prodValue;
    switch(type) {
    case BREGDB_BOOL:
        if (value.boolValue())
            prodValue << "TRUE";
        else
            prodValue << "FALSE";
            break;
        case BREGDB_CHAR:
            prodValue << value.charValue();
            break;
        case BREGDB_DOUBLE:
            prodValue << value.doubleValue();
            break;
        case BREGDB_INT:
            prodValue << value.intValue();
            break;
        case BREGDB_INTLST:
            {
                int count = value.intList().size();
                for (int i = 0; i < count; ++i) {
                    prodValue << value.intList()[i].val();
                    if (i < (count - 1))
                        prodValue << ", ";
                }
            }
            break;
        case BREGDB_EXTINTLST:
            {
                int count = value.extIntList().size();
                for (int i = 0; i < count; ++i) {
                    prodValue << value.extIntList()[i].val();
                    if (i < (count - 1))
                        prodValue << ", ";
                }
            }
            break;
        case BREGDB_STR:
            prodValue << value.str();
            break;
        case BREGDB_EXTSTR:
            prodValue << value.extString();
            break;
        default:
            break;
    }
    
    return prodValue.str();
}

void svcAuditToDbAudit(bregv3db::Audit *dbAudit,
                       const s_breguisvc::AuditRecord& svcAudit,
                       int version,
                       int eventType)
{
    dbAudit->entryId() = svcAudit.entryId();
    dbAudit->eventType() = eventType;
    dbAudit->prqsNo() = svcAudit.prqsNumber();
    dbAudit->prqsStatus() = svcAudit.prqsStatus();
    dbAudit->updateUuid() = svcAudit.uuid();
    dbAudit->updateTsp() = svcTspToDbTsp(svcAudit.updateTsp());
    dbAudit->ticketType() = svcAudit.ticketType();
    dbAudit->ticketNo() = svcAudit.ticketNumber();
    dbAudit->version() = version;
}

void notifySubscribers(int bregId, int type, int curUuid)
{
    BAEL_LOG_SET_CATEGORY("notifySubscribers");
       
    char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN];
    char attachment[BREG_ATTACH_LEN] = {0};

    for (int i = 0; i < BREG_MSG_LINES; i++)
        memset(msg[i], 0, BREG_MSG_LINE_LEN);

    snprintf(attachment, BREG_ATTACH_LEN, "BREG %d", bregId);

    switch (type) {
    case bregv3db::DbAccessor::PROD_VALUE_CHANGE_ALERT:
        packProductionChangeMsgText(bregId, msg);
        break;
    case bregv3db::DbAccessor::METADATA_CHANGE_ALERT:
        packMetadataChangeMsgText(bregId, msg);
        break;
    case bregv3db::DbAccessor::NEW_NODE_CREATE_ALERT:
        packRegistryCreationMsgText(bregId, msg);
        break;
    default:    
        BAEL_LOG_INFO << "Unknown level: " << type
                      << BAEL_LOG_END;
        return;
    }

    for (int i=0; i<3; ++i)
        BAEL_LOG_DEBUG << "msg " << i << ":" << msg[i] << BAEL_LOG_END;

    vector<int> users;
    try {
        bregv3db::DbAccessor db;
        db.getSubscribeUsers(&users, bregId, type);

        bregv3db::Contact contacts;
        if (bregv3db::DbAccessor::PROD_VALUE_CHANGE_ALERT == type) {
            db.getContacts(&contacts, bregId);

            users.push_back(contacts.primaryUuid());
            users.push_back(contacts.backupUuid());
        }

        std::list<int> ancestors;
        try {
            db.getEntryAncestors(&ancestors, bregId);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        }

        std::list<int>::iterator iter;
        for (iter = ancestors.begin(); iter != ancestors.end(); ++iter) {
            vector<int> ausers;
            db.getSubscribeUsers(&ausers, *iter, type);

            users.insert(users.end(), ausers.begin(), ausers.end());
        }
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }

    sort(users.begin(), users.end());
    vector<int>::iterator it = unique(users.begin(), users.end());
    users.resize(it - users.begin());

    // remove current user & wanmin xin's uuid
    users.erase(std::remove(users.begin(), users.end(), curUuid), users.end());
    users.erase(std::remove(users.begin(), users.end(), 918502), users.end());

    int userCount = users.size();
    BAEL_LOG_DEBUG << "size: " << userCount << BAEL_LOG_END;
    if (userCount > 0)
        sendBregNotifyMessage(curUuid, &users[0], userCount, 
                              msg, attachment);
}

std::string valueTypeNumToStr(int valueType)
{
    switch(valueType) {
    case BREGDB_BOOL:
        return "Boolean";
    case BREGDB_INT:
        return "Integer";
    case BREGDB_INTLST:
        return "List of Integers";
    case BREGDB_CHAR:
        return "Character";
    case BREGDB_STR:
        return "String";
    case BREGDB_DOUBLE:
        return "Double";
    case BREGDB_EXTINTLST:
        return "Extended List of Integers";
    case BREGDB_EXTSTR:
        return "Extended String";
    default:
        return "Unknown";
    }
}


void get_drqs_type_status_info(int  other_id,
                char* drqs_type,
                int  drqs_type_len,
                char *drqs_status,
                int drqs_status_len,
                int* rcode)
{
    enum { 
        FORCE_LOADING_DATA = 1,
        DRQS_TYPE_LEN    = 3
    };
    int drqs_type_id;
    int drqs_status_id;

    *rcode = 0;
    memset(drqs_type, '\0', drqs_type_len);
    memset(drqs_status, '\0', drqs_status_len);

    *rcode= drqs_get_ticket_type2(FORCE_LOADING_DATA, other_id, &drqs_type_id);
    if(*rcode) {
        *rcode = (*rcode)*10 + 1;
        return;
    }

        switch(drqs_type_id)
        {
            case EN_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"EN");
                break;
            case WP_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"WP");
                break;
            case OU_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"OU");
                snprintf0(drqs_type,DRQS_TYPE_LEN,"OU");
                break;
            case IW_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"IW");
                break;
            case PP_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"PP");
                break;
            case BB_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"BB");
                break;
            case BF_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"BF");
                break;
            case CR_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"CR");
                break;
            case PM_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"PM");
                break;
            case MM_DRQS_TYPE:
                snprintf0(drqs_type,drqs_type_len,"MM");
                break;
            default:
                memset(drqs_type, '*', drqs_type_len);
        }



    *rcode = drqs_get_ticket_status(other_id, &drqs_status_id);
    if(*rcode) {
        *rcode = (*rcode)*10 + 3;
        return;
    }

    drqs_get_status_descr_c(drqs_status_id,
            drqs_status,drqs_status_len);
}

std::string convertBlpfontToUtf8(const char *blpfont_text, 
                                 int language, bool trace_on)
{
    BAEL_LOG_SET_CATEGORY("convertBlpfontToUtf8");

    using namespace std;
    std::string outstr;
    outstr.clear();
    const char DUMMY = '^';
    enum {  BUF_SIZE = 1024 };
    char buf[BUF_SIZE] = {0};

    int len = strlen(blpfont_text);
    if (len >= BUF_SIZE) len = BUF_SIZE-1;
    if (len == 0) return outstr;

    strncpy0(buf, blpfont_text, len+1);
    BAEL_LOG_TRACE << "Before: [" << buf << "]" << BAEL_LOG_END;
    int nl = '\n';
    char *p = buf;
    std::vector<int> pos;
    while ((p = strchr(p, nl))) {
        pos.push_back(p - buf);
        *p = DUMMY;
        ++p;
    }
    BAEL_LOG_TRACE << "after: [" << buf << "]" << BAEL_LOG_END;

    enum bloomlanguages blplang = 
        static_cast<enum bloomlanguages>(language);
    BlpTerminal_CodePageID_T codepage = bloomlang_2_CodePageID(blplang);

    const gchar * blpconv = CodePageID_2_IconvStr_Convert(codepage);
    const gchar * utf8conv = CodePageID_2_IconvStr_Convert(
            BLPTRM_CPID_UTF8);
    gsize in_bytes = 0, out_bytes = 0;
    GError * error = NULL;

    //cout << "blp->utf8" << endl;
    //fsnapf(stdout, blpfont_text, len);

    gchar * utf8_text = g_convert(buf, 
            len,
            utf8conv, blpconv, 
            &in_bytes, &out_bytes,
            &error);

    //fsnapf(stdout, utf8_text, strlen(utf8_text));

    if (utf8_text == NULL && trace_on) {         
        std::ostringstream emsg;
        emsg << "Failed to convert from blpfont lang " << language
         << "("<<blpconv<<") to utf8 for text: '" 
         << blpfont_text << "', in_bytes:" << in_bytes
         << ", out_bytes:" << out_bytes;
        if (error)
        emsg << ", error:" << error->message;

        BAEL_LOG_DEBUG << emsg.str() << BAEL_LOG_END;
    }

    if (error)
        g_error_free(error);

    if (utf8_text) {
        for (unsigned int i = 0; i < pos.size(); ++i) {
            BAEL_LOG_TRACE << "restore new line at " << pos[i]
                << BAEL_LOG_END;
            if (utf8_text[pos[i]] == DUMMY)
                utf8_text[pos[i]] = '\n';
            else {
                p = strchr(&utf8_text[pos[i]], DUMMY);
                if (0 == p) break;
                *p = '\n';
            }
        }
        outstr = utf8_text;
        g_free(utf8_text);
    }

    return outstr;
}


void updateTreqDrqs(int prqsNumber, int wktkNumber, int wktkType, int entryId, int uuid)
{
    BAEL_LOG_SET_CATEGORY("updateTreqDrqs");

    if (0 == prqsNumber || 0 == wktkNumber)   // nothing to do
        return;

    a_baslt::BasClient basClient(BAS_ROUTER);
    bsct::ErrorInfo errorInfo;
    a_baslt::CodecConfiguration codecConfiguration;
    bsct::ServiceInformation serviceInformation;
    serviceInformation.setServiceId(WRKTKSVC_SERVICE_ID);
    serviceInformation.setServiceVersion(1, 0, 0);

    wrktksvc::Request request;
    wrktksvc::Response response;

    wrktksvc::LinkActionTicketToWorkTicketRequestType& updateReq =
        request.makeLinkActionTicketToWorkTicketRequest();

    int typeId = 0;
    if (44 == wktkType) typeId = 1;  // DRQS    
    else if (45 == wktkType) typeId = 2;  // TREQ

    wrktksvc::ActionTicketType actionTicket;
    actionTicket.type()     = 1;        // PRQS
    actionTicket.category() = "RC";
    actionTicket.intId()    = prqsNumber;
    actionTicket.stringId() = "";

    updateReq.actionTicket().push_back(actionTicket);
    updateReq.workTicket().type() = typeId;
    updateReq.workTicket().id()   = wktkNumber;
    updateReq.creatorUuid()       = uuid;
    updateReq.entryMethod()       = 1;
    updateReq.logType()           = 0;  // no note and no message for DRQS

    if (2 == typeId) { // TREQ
        updateReq.logType() = 1;  // add log note but not send messages
        std::ostringstream note;
        note << "{NXTW PRQS " << prqsNumber << "<GO>} is created";
        updateReq.logNote().push_back(note.str());
        note.str("");  // clear stream
        note << "to update {NXTW BREG " << entryId << " DESCRIPTION<GO>}";
        updateReq.logNote().push_back(note.str());
    }

    bscmsg::UserIdentification userIdentification;
    userIdentification.setUuid(uuid);

    int rc = basClient.executeRequest(&response, &errorInfo,
        serviceInformation, codecConfiguration, userIdentification, request);

    BAEL_LOG_DEBUG << "update related ticket request: " << request << std::endl
                   << "response: " << response << ", rc = " << rc
                   << BAEL_LOG_END;

    if(rc)
    {
        BAEL_LOG_INFO << "Update failed: rc " << rc 
                      << " errorInfo " << errorInfo
                      << BAEL_LOG_END;
        return;
    }

    if(response.isLinkActionTicketToWorkTicketResponseValue())
    {
        if (0 == response.linkActionTicketToWorkTicketResponse().result().returnCode())
            return;

        BAEL_LOG_INFO << "Failed update: " << response << BAEL_LOG_END;
        return;
    }

    BAEL_LOG_INFO << "unexpected response type: " << response << BAEL_LOG_END;
}




// start anonymous space
namespace {

bool isUserInPrivList(int uuid,
                      const int *deptChain,
                      int deptCount,
                      const std::vector<bregv3db::UserData>& privUsers)
{
    std::vector<bregv3db::UserData>::const_iterator iter;
    for (iter = privUsers.begin(); iter != privUsers.end(); ++iter) {

        if (bregv3db::DbAccessor::PERSON_CONTACT == iter->userType() &&
            uuid == iter->userId()) {
            return true;
        }

        if (bregv3db::DbAccessor::GROUP_CONTACT == iter->userType()) {
            for (int i = 0; i < deptCount; ++i) {
                if (iter->userId() == deptChain[i]) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool isValidApiName(std::string *emsg, 
                    const std::string& apiName, int entryId)
{
    int api_length = apiName.length();

    if (0 == api_length) {
        *emsg = "Accessor name is mandatory!";
        return false;
    }

    const int BREG_MAX_API_NAME = 50;
    
    if (api_length > BREG_MAX_API_NAME) {
        *emsg = "Accessor name should not be longer than 50 characters!";
        return false;
    }

    if (strstr(apiName.c_str(), "__")) {
        *emsg = "Accessor name should not contain consecutive underscores!";
        return false;
    }

    if (strncmp(apiName.c_str(), "bbit_", strlen("bbit_"))) {
        *emsg = "Accessor name must start with \"bbit_\".";
        return false;
    }

    for (int i = 0; i < api_length; ++i) {
        if (!isalnum(apiName.at(i)) && apiName.at(i) != '_') {
            *emsg = "Invalid API name, no metachracters allowed!";
            return false;
        }
    }

    char first = apiName.at(0);
    char last = apiName.at(api_length-1);
    if (first == '_' || last == '_' || isdigit((int)first)) {
        *emsg = "Invalid API name, no leading/trailing placement/numbers!";
        return false;
    }

    try {
        bregv3db::DbAccessor db;
        if (db.isApiNameFoundInDb(apiName, entryId)) {
            *emsg = "This API name already exists!";
            return false;
        }
    }
    catch (bregv3db::DbException & e) {
        *emsg = e.what();
        return false;
    }
    
    return true;
}

bool isValidMaxNumValuesInList(int maxNum, bool inShm, int valueType,
                               string *emsg)
{
    if (maxNum < 0) {
        *emsg = "The max length should be greater than 0!";
        return false;
    }

    if (valueType == BREGDB_STR && maxNum > 80) {
        *emsg = "The maximum length for string is 80 characters!";
        return false;
    }

    if (valueType == BREGDB_EXTSTR) {
        if (inShm && maxNum > 127) {
            *emsg = "The max_len for extended string in shm is 127 characters!";
            return false;
        }
        else if (maxNum > 512) {
            *emsg = "The maximum length for ext string is 512 characters!";
            return false;
        }
    }

    if (valueType == BREGDB_EXTINTLST) {
        if (inShm && maxNum > 128) {
            *emsg = "The maximum length for ext arr in shm is 128!";
            return false;
        }
        else if (maxNum > 256) {
            *emsg = "The maximum length for ext arr is 256!";
            return false;
        }
    }

    if (valueType == BREGDB_INTLST) {
        if (maxNum > 32) {
            *emsg = "The maximum number of elements is 32!";
            return false;
        }
    }

    return true;
}

int valueTypeStrToNum(const string& typeStr)
{
    if (typeStr == "Boolean")
        return BREGDB_BOOL;
    else if (typeStr == "Integer")
        return BREGDB_INT;
    else if (typeStr == "List of Integers")
        return BREGDB_INTLST;
    else if (typeStr == "Character")
        return BREGDB_CHAR;
    else if (typeStr == "String")
        return BREGDB_STR;
    else if (typeStr == "Double")
        return BREGDB_DOUBLE;
    else if (typeStr == "Ext List of Integers")
        return BREGDB_EXTINTLST;
    else if (typeStr == "Extended String")
        return BREGDB_EXTSTR;
    else
        return BREGDB_UNSPEC;
}

int privLevelToFlag(int accessLevel)
{
    static int init = 0;
    static std::map<int, int> levelMaskMap;
 
    if (!init) {
        levelMaskMap[bregv3db::DbAccessor::ADMIN_PRIV]
            = USERFLAG_ACL_UPD_PRIV_BITMASK;
        levelMaskMap[bregv3db::DbAccessor::UPDATE_PROD_VALUE_PRIV]
            = USERFLAG_ACL_UPD_PROD_BITMASK;
        levelMaskMap[bregv3db::DbAccessor::UPDATE_DEV_VALUE_PRIV]
            = USERFLAG_ACL_UPD_DEV_BITMASK;
        levelMaskMap[bregv3db::DbAccessor::RELEASE_CODE_PRIV]
            = USERFLAG_ACL_REL_CODE_BITMASK;
        levelMaskMap[bregv3db::DbAccessor::UPDATE_METADATA_PRIV]
            = USERFLAG_ACL_UPD_DESC_BITMASK;
        ++init;
    }

    return levelMaskMap[accessLevel];
}

int subLevelToFlag(int level)
{
    static int init = 0;
    static std::map<int, int> levelMaskMap;

    if (!init) {
        levelMaskMap[bregv3db::DbAccessor::PROD_VALUE_CHANGE_ALERT]
            = USERFLAG_SUBSCRIBER_PROD_DATA_BITMASK;
        levelMaskMap[bregv3db::DbAccessor::METADATA_CHANGE_ALERT]
            = USERFLAG_SUBSCRIBER_METADATA_BITMASK;
        levelMaskMap[bregv3db::DbAccessor::NEW_NODE_CREATE_ALERT]
            = USERFLAG_SUBSCRIBER_BREG_CREATION_BITMASK;
        ++init;
    }
    
    return levelMaskMap[level];
}

int svcValueTypeToBregmpdbValueType(const s_breguisvc::ValueType::Value& type)
{
    BAEL_LOG_SET_CATEGORY("svcValueTypeToBregmpdbValueType");

    switch (type) {
      case ValueType::BOOLEAN:
        return BREGMPDB_BOOLEAN_ENTRY;
      case ValueType::INTEGER:
        return BREGMPDB_INTEGER_ENTRY;
      case ValueType::STRING:
        return BREGMPDB_STRING_ENTRY;
      case ValueType::CHARACTER:
        return BREGMPDB_CHARACTER_ENTRY;
      case ValueType::DOUBLE:
        return BREGMPDB_DOUBLE_ENTRY;
      case ValueType::LIST_OF_INTEGERS:
        return BREGMPDB_INTEGER_LIST_ENTRY;
      case ValueType::EXTENDED_STRING:
        return BREGMPDB_EXT_STRING_ENTRY;
      case ValueType::EXT_LIST_OF_INTEGERS:
        return BREGMPDB_EXT_INT_LIST_ENTRY;
      case ValueType::INTEGER_TABLE:
        return BREGMPDB_TB_INTEGER_ENTRY;
      case ValueType::CHARACTER_TABLE:
        return BREGMPDB_TB_CHARACTER_ENTRY;
      case ValueType::BOOLEAN_TABLE:
        return BREGMPDB_TB_BOOLEAN_ENTRY;
      case ValueType::STRING_TABLE:
        return BREGMPDB_TB_STRING_ENTRY;
      case ValueType::LIST_OF_INTEGERS_TABLE:
        return BREGMPDB_TB_INTEGER_LIST_ENTRY;
      case ValueType::DOUBLE_TABLE:
        return BREGMPDB_TB_DOUBLE_ENTRY;
      default:
        BAEL_LOG_WARN << "Unsupported type " << type << BAEL_LOG_END;
        return -1;
        break;
    }
}

int sendBregNotifyMessage(int from_uuid, int to_uuid[], int howMany,
                          char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN],
                          char attachment[BREG_ATTACH_LEN])
{
    BAEL_LOG_SET_CATEGORY("sendBregNotifyMessage");
       
    if (msg == NULL)
        return BREG_MAIL_INPUT_ERROR;

    try {
        mgpapi::V4::MsgBuilder msgBuilder(APPLICATION_ID);
        msgBuilder.start();
        mgpapi::V4::MessageId messageId = msgBuilder.createMessageId();
        if (!messageId.validated())
            return mgpapi::V4::MESSAGE_IS_NOT_VALID;

        msgBuilder.setStyle(mgpapi_MSG_STYLE_LONG_c);
        msgBuilder.setLanguage(mgpapi_LANGUAGE_ENGLISH_c);
        msgBuilder.setType(mgpapi_MSG_TYPE_BREG_NOTIFY_c);

        std::ostringstream os_body, os_title;

        os_title << msg[0];
        for (int i=1; i < BREG_MSG_LINES; ++i)
            os_body << msg[i];

        msgBuilder.setBody(os_body.str());
        msgBuilder.setSubject(os_title.str());
        msgBuilder.setSender(from_uuid, mgpapi_CONSTANT_DFLT_WORKSTATION_c, mgpapi_CONSTANT_DFLT_TERMINAL_c);

        try {
            for (int i=0; i < howMany; ++i)
                msgBuilder.addRecipientUuid(to_uuid[i], mgpapi_RECIPIENT_TYPE_EMAIL_BCC_c);
        }
        catch (const mgpapi::V4::Exception& ex)
        {
            BAEL_LOG_ERROR << "Adding recipients failed -- RC: "
                           << ex.getExceptCode() << "\n" << ex.what()
                           << BAEL_LOG_END;
            return ex.getExceptCode();
        }

        try
        {
            mgpapi::V4::AttachmentStoreUtil::addFunctionToMessage(&msgBuilder,
                                                                  attachment);
        }
        catch (const mgpapi::V4::Exception& ex)
        {
            BAEL_LOG_ERROR << "Invalid function with tail-- RC: "
                      << ex.getExceptCode() << "\n" << ex.what()
                      << BAEL_LOG_END;
            return ex.getExceptCode();
        }

        try {
            msgBuilder.end();
        }
        catch (const mgpapi::V4::Exception& ex)
        {
            BAEL_LOG_ERROR << "Message validation failed -- RC: "
                           << ex.getExceptCode() << "\n" << ex.what()
                           << BAEL_LOG_END;
            return ex.getExceptCode();
        }

        mgpapi::V4::Send send;
        mgpapi::V4::ActionStatusPtr sendStatus;
        sendStatus = send.submitMessage(msgBuilder, APPLICATION_ID);
        if (!sendStatus->success()) {
            BAEL_LOG_ERROR << "Send message failed, errorcode = "
                           << sendStatus->errorCode()
                           << ", errorDescription = "
                           << sendStatus->errorDescription()
                           << BAEL_LOG_END;
        }
    }
    catch (const mgpapi::V4::Exception& ex)
    {
        BAEL_LOG_ERROR << "SubmitMessage failed -- RC: "
                       << ex.getExceptCode() << "\n" << ex.what()
                       << BAEL_LOG_END;
        return ex.getExceptCode();
    }

    return BREG_MAIL_SUCCESS;
}

void packProductionChangeMsgText(int entryId, 
                                 char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN])
{
    BAEL_LOG_SET_CATEGORY("packProductionChangeMsgText");

    char tmpmsg[BREG_MSG_LINE_LEN*2] = {0};
 
    bregv3db::Node node;
    try {
        bregv3db::DbAccessor db;
        bregv3db::Audit audit;
        db.getNode(&node, &audit, entryId);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }

    for (int i = 0; i < BREG_MSG_LINES; i++)
    memset(msg[i], 0, BREG_MSG_LINE_LEN);

    snprintf(msg[0], BREG_MSG_LINE_LEN,
             "BREG %d NOTIFICATION: Production Value Changes\n", entryId);

    snprintf(msg[1], BREG_MSG_LINE_LEN, "Entry Name: %s\n",
             node.name().c_str());

    snprintf(msg[2], BREG_MSG_LINE_LEN, "Entry Id: %d\n", entryId);

    snprintf(msg[3], sizeof(tmpmsg), "{NXTW BREG %d PROD <GO>}.\n", entryId); 
}

void packMetadataChangeMsgText(int entryId,
                               char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN])
{
    BAEL_LOG_SET_CATEGORY("packMetadataChangeMsgText");

    enum {
        BREG_NODE_MODE = 3,
        BREG_ENTRY_MODE = 4
    };

    int mode = BREG_NODE_MODE;
    bregv3db::Node node;
    try {
        bregv3db::DbAccessor db;
        bregv3db::Audit audit;

        db.getNode(&node, &audit, entryId);

        if (db.isLeafNode(entryId))
            mode = BREG_ENTRY_MODE;
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }

    for (int i = 0; i < BREG_MSG_LINES; i++)
        memset(msg[i], 0, BREG_MSG_LINE_LEN);

    if (mode == BREG_NODE_MODE)
        snprintf(msg[0], BREG_MSG_LINE_LEN,
                 "BREG NOTIFICATION: Node Changes. \n");
    else if (mode == BREG_ENTRY_MODE)
        snprintf(msg[0], BREG_MSG_LINE_LEN,
                 "BREG NOTIFICATION: Entry Changes. \n");

    if (mode == BREG_NODE_MODE)
        snprintf(msg[1], BREG_MSG_LINE_LEN, "Node Name: %s\n",
                 node.name().c_str());
    else if (mode == BREG_ENTRY_MODE)
        snprintf(msg[1], BREG_MSG_LINE_LEN, "Entry Name: %s\n",
                  node.name().c_str());

    if (mode == BREG_NODE_MODE)
        snprintf(msg[2], BREG_MSG_LINE_LEN, "Node Id: %d\n", entryId);
    else if (mode == BREG_ENTRY_MODE)
        snprintf(msg[2], BREG_MSG_LINE_LEN, "Entry Id: %d\n", entryId);
}

void packRegistryCreationMsgText(int entryId,
                                 char msg[BREG_MSG_LINES][BREG_MSG_LINE_LEN])
{
    BAEL_LOG_SET_CATEGORY("packRegistryCreationMsgText");

    enum {
        BREG_NODE_MODE = 3,
        BREG_ENTRY_MODE = 4
    };

    int mode = BREG_NODE_MODE;
    bregv3db::Node node;
    bregv3db::Audit audit;
    try {
        bregv3db::DbAccessor db;

        db.getNode(&node, &audit, entryId);

        if (db.isLeafNode(entryId))
            mode = BREG_ENTRY_MODE;
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }
 
    for (int i = 0; i < BREG_MSG_LINES; i++)
        memset(msg[i], 0, BREG_MSG_LINE_LEN);

    if (mode == BREG_NODE_MODE)
        snprintf(msg[0], BREG_MSG_LINE_LEN,
                 "BREG NOTIFICATION: Registry Node Creation.\n");
    else if (mode == BREG_ENTRY_MODE)
        snprintf(msg[0], BREG_MSG_LINE_LEN,
                 "BREG NOTIFICATION: Registry Entry Creation.\n");

    if(mode == BREG_NODE_MODE)
        snprintf(msg[1], BREG_MSG_LINE_LEN, "Node Name: %s\n",
                 node.name().c_str());
    else if(mode == BREG_ENTRY_MODE)
        snprintf(msg[1], BREG_MSG_LINE_LEN, "Entry Name: %s\n",
                 node.name().c_str());

    if(mode == BREG_NODE_MODE)
        snprintf(msg[2], BREG_MSG_LINE_LEN, "Node Id: %d\n", entryId);
    else if(mode == BREG_ENTRY_MODE)
        snprintf(msg[2], BREG_MSG_LINE_LEN, "Entry Id: %d\n", entryId);

    int parentId = node.parentId();
    try {
        bregv3db::DbAccessor db;
        db.getNode(&node, &audit, parentId);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return;
    }

    snprintf(msg[3], BREG_MSG_LINE_LEN, "Parent Node Name: %s\n",
             node.name().c_str());

    snprintf(msg[4], BREG_MSG_LINE_LEN, "Parent Node Id: %d\n",
             parentId);
}

std::string getFullName(int uuid)
{
    char fullname[42] = {0};
    char f_fullname[41] = {' '};

    int  rc = getuuidname(f_fullname, sizeof(f_fullname), uuid);

    if (rc) {
        return std::string("");
    }

    cfrmf(fullname, sizeof(fullname), f_fullname, sizeof(f_fullname));
    return fullname;
}

std::string valueTypeToGenString(const ValueType::Value& type)
{
    using namespace std;
    static std::map<ValueType::Value, std::string> valueTypeMap;
    static bool initialized = false;
    if (!initialized) {
        valueTypeMap.insert(make_pair(ValueType::UNKNOWN, string("others")));
        valueTypeMap.insert(make_pair(ValueType::BOOLEAN, string("boolean")));
        valueTypeMap.insert(make_pair(ValueType::INTEGER, string("integer")));
        valueTypeMap.insert(make_pair(ValueType::CHARACTER, string("character")));
        valueTypeMap.insert(make_pair(ValueType::DOUBLE, string("double")));
        valueTypeMap.insert(make_pair(ValueType::LIST_OF_INTEGERS, 
                                       string("int_list")));
        valueTypeMap.insert(make_pair(ValueType::STRING, string("string")));
        valueTypeMap.insert(make_pair(ValueType::EXT_LIST_OF_INTEGERS, 
                                       string("ext_int_list")));
        valueTypeMap.insert(make_pair(ValueType::EXTENDED_STRING, 
                                       string("ext_string")));
        valueTypeMap.insert(make_pair(ValueType::INTEGER_TABLE, 
                                       string("tbl_integer")));
        valueTypeMap.insert(make_pair(ValueType::CHARACTER_TABLE, 
                                       string("tbl_character")));
        valueTypeMap.insert(make_pair(ValueType::BOOLEAN_TABLE, 
                                       string("tbl_boolean")));
        valueTypeMap.insert(make_pair(ValueType::STRING_TABLE, 
                                       string("tbl_string")));
        valueTypeMap.insert(make_pair(ValueType::LIST_OF_INTEGERS_TABLE, 
                                       string("tbl_int_list")));
        valueTypeMap.insert(make_pair(ValueType::DOUBLE_TABLE, 
                                       string("tbl_double")));

        initialized = true;
    }
    return valueTypeMap[type];
}


} // end anonymous namespace

} // namespace helpers_v3
} // namespace s_breguisvc
} // namespace BloombergLP
