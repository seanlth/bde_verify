#ifndef INCLUDED_S_BREGUISVC_BREG_V3_NODE
#define INCLUDED_S_BREGUISVC_BREG_V3_NODE

#include <sysutil_ident.h>
SYSUTIL_IDENT_RCSID(s_breguisvc_breg_v2_node_h,"$Id$ $CSID$")
SYSUTIL_PRAGMA_ONCE

#include <s_breguisvc_messages.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3node {

void addNode(
    Response *response,
    const RegistryInfo& registry,
    int nodeId
);
void updateNode(
    Response *response,
    const RegistryInfo& registry
);
void moveNode(
    Response *response,
    int bregId,
    int movetoNodeId,
    int uuid
);
void deleteNode(
    Response *response,
    int bregId,
    int uuid
);

} // namespace bregv3node
} // namespace s_breguisvc
} // namespace BloombergLP

#endif
