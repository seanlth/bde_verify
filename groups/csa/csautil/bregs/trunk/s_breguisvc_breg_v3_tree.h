#ifndef INCLUDED_S_BREGUISVC_BREG_V3_TREE
#define INCLUDED_S_BREGUISVC_BREG_V3_TREE

#include <sysutil_ident.h>
SYSUTIL_IDENT_RCSID(s_breguisvc_breg_v3_tree_h,"$Id$ $CSID$")
SYSUTIL_PRAGMA_ONCE

#include <s_breguisvc_messages.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3tree {

/*
 * Load tree that includes breg_id and is only one level deep.
 *    If breg_id is a node, load it and it's children.
 *    If breg_id is an entry, load the entry's parent with it's children
 */
void loadTree(
        Response * response,
        int breg_id);

/*
 * Load tree expanded up to the breg_id node/entry
 */
void loadExpandedTree(
        Response * response,
        int breg_id);

/*
 * Load tree one level deep for the user's default.
 */
void loadDefaultTree(
        Response * response,
        int uuid);

/*
 * Get children for node breg_id
 */
void loadChildren(
        Response * response,
        int breg_id);

/*
 * Get details for node breg_id
 */
void loadNodeDetails(
        Response * response,
        int breg_id,
        int uuid);

/*
 * Get default node for user
 */
void loadDefaultNode(
        Response * response,
        int uuid);

/*
 * Set default node for user
 */
void setDefaultNode(
        Response * response,
        int uuid,
        int breg_id);

/*
 * Check if a node is deleted
 */
void isDeleted(
        Response * response,
        int breg_id);

} // namespace bregv3tree
} // namespace s_breguisvc
} // namespace BloombergLP

#endif

