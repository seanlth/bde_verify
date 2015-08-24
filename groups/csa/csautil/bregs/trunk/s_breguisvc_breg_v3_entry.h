#ifndef INCLUDED_S_BREGUISVC_BREG_V3_ENTRY
#define INCLUDED_S_BREGUISVC_BREG_V3_ENTRY

#include <sysutil_ident.h>
SYSUTIL_IDENT_RCSID(s_breguisvc_breg_v3_entry_h,"$Id$ $CSID$")
SYSUTIL_PRAGMA_ONCE

#include <s_breguisvc_messages.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3entry {

void addEntry(
    Response *response,
    const RegistryInfo& registry,
    int entryId
);
void updateEntry(
    Response *response,
    const RegistryInfo& registry
);
void moveEntry(
    Response *response,
    int bregId,
    int movetoNodeId,
    int uuid
);
void deleteEntry(
    Response *response,
    int bregId,
    int uuid
);

} // namespace bregv3entry
} // namespace s_breguisvc
} // namespace BloombergLP

#endif
