#include <s_breguisvc_messages.h>
#include <bregv3db_dbaccessor.h>
#include <vector>
#include <string>

namespace BloombergLP {
namespace s_breguisvc {
namespace helpers_v3 {

const int BREG_ROOT_NODE = 1;
const int DEPT_CHAIN_LEN = 12;

enum {
    USERFLAG_UUID_BITMASK  = 1,
    USERFLAG_GROUP_BITMASK = 2,

    USERFLAG_ACL_UPD_PROD_BITMASK = 4,
    USERFLAG_ACL_UPD_PRIV_BITMASK = 8,
    USERFLAG_ACL_REL_CODE_BITMASK = 16,
    USERFLAG_ACL_UPD_DEV_BITMASK = 32,
    USERFLAG_ACL_UPD_DESC_BITMASK = 64,

    USERFLAG_SUBSCRIBER_PROD_DATA_BITMASK = 4,
    USERFLAG_SUBSCRIBER_METADATA_BITMASK = 8,
    USERFLAG_SUBSCRIBER_BREG_CREATION_BITMASK = 16,
    USERFLAG_SUBSCRIBER_STORAGE_TYPE_BITMASK = 32,
    USERFLAG_SUBSCRIBER_EXPIRY_BITMASK = 64,
    USERFLAG_SUBSCRIBER_OBSOLETE_BIT_BITMASK  = 128,
    USERFLAG_SUBSCRIBER_DELETE_BITMASK  = 256,
    
    USERFLAG_USE_PARENT_MASK = 0x00FF,
    USERFLAG_USE_LOCAL_MASK = 0xFF00
};

const int SVC_EXPIRE_DATE_CHANGE_SHORT_EVENT_TYPE = 4;
const int SVC_EXPIRE_DATE_CHANGE_LONG_EVENT_TYPE = 5;

// node
void svcNodeToDbNode(
    bregv3db::Node* dbNode,
    bregv3db::Audit* dbAudit,
    const s_breguisvc::NodeInfo& node
);

void dbNodeToSvcNode(
    s_breguisvc::NodeInfo *node,
    const bregv3db::Node dbNode,
    const bregv3db::Audit dbAudit
);

bool isValidNode(
    const bregv3db::Node& node,
    std::string *emsg
);

void addEntryTreeInfo(
    BloombergLP::bregv3db::DbAccessor& db,
    int nodeId,
    int parentId
);

bool isRegistryMovable(
    int srcNodeId, 
    int destNodeId, 
    int uuid,
    std::string *emsg
);

// entry
bool isValidEntry(
    const bregv3db::EntryDescription& entry,
    std::string *emsg
);

void svcEntryToDbEntry(
    bregv3db::EntryDescription *dbEntry, 
    bregv3db::Audit *dbAudit,
    const s_breguisvc::NodeInfo& node, 
    const s_breguisvc::EntryInfo& entry
);

void dbEntryToSvcEntry(
    s_breguisvc::NodeInfo *node, 
    s_breguisvc::EntryInfo *entry,
    const bregv3db::EntryDescription& dbEntry, 
    const bregv3db::Audit& dbAudit
);

bool isObsoleteTraceOn(
    const bregv3db::EntryDescription& des
);

bool addExpireDateChangeAudit(
     const s_breguisvc::NodeInfo& node
);

bool svcEntryInfoMatchDbEntryInfo(
    const s_breguisvc::EntryInfo& svcEntry,
    const bregv3db::EntryDescription& dbEntry
);

bool getHasExpired(
    const std::string& expireTsp
);

bool generateAccessorCode(
    std::string *emsg,
    const s_breguisvc::EntryInfo& entry
);

bool releaseAccessorCode(
    std::string *emsg,
    const std::string& apiName
);

void createBregmpdbRec(
    int entryId, 
    const s_breguisvc::ValueType::Value& type,
    const std::string& apiName, 
    int entryStatus
);

void updateBregmpdbRec(
    int entryId, 
    const s_breguisvc::ValueType::Value& type,
    const std::string& apiName, 
    int entryStatus
);

// privilege
bool isUserPrivileged(
    int uuid,
    int bregId,
    int accessLevel
);

void getPrivilegesOfAllLevels(
    std::map<int, s_breguisvc::UserData> *priv_users,
    int breg_id
);


void getUserPrivilege(
    NodePrivilege *privilege,
    int breg_id, 
    int uuid
);

void svcPrivUsersToDbPrivUsers(
    std::vector<bregv3db::UserData> *admin_users,
    std::vector<bregv3db::UserData> *prod_users,
    std::vector<bregv3db::UserData> *dev_users,
    std::vector<bregv3db::UserData> *rels_code_users,
    std::vector<bregv3db::UserData> *metadata_users,
    const std::vector<s_breguisvc::UserData>& svc_users,
    int breg_id
); 

// contacts
void setDbContactValue(
    bregv3db::Contact *contact_info,
    const s_breguisvc::EntryContacts& contacts,
    int breg_id
);

void createContacts(
    int breg_id,
    int parent_breg_id,
    int uuid
);

bool getParentContacts(
    bregv3db::Contact *contact_info, 
    int parent_breg_id
);

// subscription
void setDbSubscribeValue(
    bregv3db::Subscribe *prod_sub,
    bregv3db::Subscribe *meta_sub,
    bregv3db::Subscribe *create_sub,
    const s_breguisvc::EntrySubscribers& sub
);

void getSubscribersOfAllTypes(
    std::map<int, s_breguisvc::UserData> *sub_users,
    int breg_id
);

// value
void svcValueToDbValue(
    bregv3db::EntryValue *dbValue,
    const s_breguisvc::EntryValue& svcValue,
    int svcValueType
);

void svcDataToDbData(
    bdeut_NullableValue<bregv3db::EntryData> *dbData,
    const s_breguisvc::EntryData& svcData,
    int svcValueType
);

int svcOvrdTypeToDbOvrdType(
    int svcOvrdType
);

int dbOvrdTypeToSvcOvrdType(
    int dbOvrdType
);

std::string getOverrideSetting(
    OverrideType::Value ovr_type,
    int target_ovrd_id
);

std::string getOverrideSettingTooltip(
    OverrideType::Value ovr_type, 
    int target_ovrd_id
);

void dbValueToSvcValue(
    s_breguisvc::EntryValue *svcValue,
    const bregv3db::EntryValue& dbValue,
    int dbValueType
);
void dbDataToSvcData(
    s_breguisvc::EntryData *svcData,
    const bdeut_NullableValue<bregv3db::EntryData>& dbData,
    int dbValueType
);

void svcAuditToDbAudit(
    bregv3db::Audit *dbAudit,
    const s_breguisvc::AuditRecord& svcAudit,
    int version,
    int dbEventType
);

// auxiliary
std::string svcTspToDbTsp(
    const std::string& inTsp
);
 
std::string dbTspToSvcTsp(
    const std::string& dbTsp
);

std::string getUpdateTime(void);

int dbValueTypeToSvcValueType(
    int dbValueType
);

std::string valueTypeNumToStr(
    int valueType
);

std::string valueToString(
    int type, 
    const bregv3db::EntryData& value
);

void notifySubscribers(
    int bregId,
    int level, 
    int curUuid
);

bool obsoleteTraceEnabled(
    int bregId
);

std::string convertBlpfontToUtf8(
    const char *blpfont_text, 
    int language,
    bool trace_on
);

void get_drqs_type_status_info(
    int  other_id,
    char* drqs_type,
    int  drqs_type_len,
    char *drqs_status,
    int drqs_status_len,
    int* rcode
);

void updateTreqDrqs(
    int prqsNumber,
    int wktkNumber,
    int wktkType,
    int entryId,
    int uuid
);

} // namespace helpers_v3
} // namespace s_breguisvc
} // namespace BloombergLP

