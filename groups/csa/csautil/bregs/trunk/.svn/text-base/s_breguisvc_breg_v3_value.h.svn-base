#include <s_breguisvc_messages.h>
#include <bregv3db_dbaccessor.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3value {

bool saveProdInitValue(
    int *version, 
    int entryId,
    const s_breguisvc::ValueType::Value& type,
    const s_breguisvc::EntryValue& svcValue
);

int propagateDevValues(
    const bregv3db::EntryDescription& dbEntry,
    const bregv3db::EntryValue& dbDevValue,
    const bregv3db::DevValueAudit& dbAudit
);

void getProdValue(
    s_breguisvc::EntryValue *svcValue,
    int dbValueType, 
    int entryId,
    int version
);

void getDevValue(
    s_breguisvc::EntryValue *svcValue,
    int dbValueType, 
    int entryId,
    int version
);

bool updateDevValue(
    const bregv3db::EntryValue& dbValue,
    const bregv3db::DevValueAudit& dbAudit,
    int entryId
);

bool updateProdValue(
    int *newVersion,
    const bregv3db::EntryValue& dbValue,
    const bregv3db::Audit& dbAudit,
    int entryId
);

} //end namespace bregv3value
} //end namespace s_breguisvc
} //end namespace BloombergLP
