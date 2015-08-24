#include <s_breguisvc_messages.h>
#include <bregv3db_dbaccessor.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3prqs {

enum PRQS_EVENT {
    RELEASE_CODE_PRQS = 1,
    PROD_CHANGE_PRQS = 2
};

int createPrqs(
    int *prqsNo, 
    const s_breguisvc::BregChangeRequest& request, 
    int version, 
    int uuid,
    int prqs_event
);


} //end namespace bregv3prqs
} //end namespace s_breguisvc
} //end namespace BloombergLP
