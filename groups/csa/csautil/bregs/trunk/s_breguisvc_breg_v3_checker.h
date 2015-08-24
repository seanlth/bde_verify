#ifndef INCLUDED_S_BREGUISVC_BREG_V3_CHECKER
#define INCLUDED_S_BREGUISVC_BREG_V3_CHECKER

#include <sysutil_ident.h>
SYSUTIL_IDENT_RCSID(s_breguisvc_breg_v3_checker_h,"$Id$ $CSID$")
SYSUTIL_PRAGMA_ONCE

#include <s_breguisvc_messages.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3checker{

    bool isValueSame(std::string *diff,
                     const s_breguisvc::EntryValue& ifmxVal,
                     const s_breguisvc::EntryValue& cdb2Val,
                     bool isProdValue);

} //end namespace bregv3checker
} //end namespace s_breguisvc
} //end namespace BloombergLP


#endif
