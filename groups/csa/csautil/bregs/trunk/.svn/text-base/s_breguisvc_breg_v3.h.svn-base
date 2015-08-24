#include <s_breguisvc_messages.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3 {

void loadRegistry(
    Response *response, 
    int breg_id,
    int uuid
);

void updateRegistry(
    Response *response,
    const RegistryInfo& registry,
    int nodeId
);

void deleteRegistry(
    Response *response,
    int breg_id,
    int uuid
);

void moveRegistry(
    Response *response,
    int breg_id,
    int dest_node_id,
    int uuid
);

void loadPrivilegeList(
    Response *response,
    int breg_id
);

void updatePrivileges(
    Response *response, 
    const PrivilegeList& priv_list,
    int uuid
);

void updateContact(
    Response *response,
    const EntryContacts& contacts,
    int breg_id
);

void loadSubscribers(
    Response *response, 
    int breg_id
);

void updateSubscribers(
    Response *response,
    const EntrySubscribers& subscribers
);

void getNodeType(
    Response *response,
    int breg_id
);

void isDeleted(
    Response * response,
    int breg_id
);

std::string getDrqsGroupDescription(
    int group_id
);

void generateCode(
    Response *response,
    const GenerateCodeRequest& request,
    int uuid,
    bool callCsutil,
    bool propagate
); 

void releaseCode(
    Response *response,
    int *version,
    const BregChangeRequest& request, 
    int prqs, 
    bool callCsutil,
    bool isGenRelease,
    int uuid
);

void loadBregValues(
    s_breguisvc::EntryValue *entry,
    int entryId, 
    int version
);

void getVersionHistory(
    Response *response, 
    int entryId
);

void updateDevValues(
    Response *response, 
    const s_breguisvc::EntryValue& svcValue,
    int uuid,
    bool propagate
);

void updateProdValue(
    Response *response,
    const BregChangeRequest& request, 
    int version,
    int prqs,
    int ifmxValStatusCd,
    int uuid,
    bool propagate,
    bool isUpdateIfmx
);

void markForDeletion(
    Response *response,
    int entryId,
    int uuid
);

void loadDeptChain(
    Response *response,
    int uuid
);

void getMachineGroupNameFromId(
    Response *response,
    int id
);

void validateOverride(
    Response *response,
    const OverrideInfo& override
);

void getTodoList(
    Response *response,
    int uuid
);

void getRelatedTicket(
    Response *response, 
    const RelatedTicketRequest& request
);

void validateApprover(
    Response *response,
    const BregChangeRequest& request, 
    int uuid
);

} // namespace bregv3
} // namespace s_breguisvc
} // namespace BloombergLP

