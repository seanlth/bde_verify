#include <s_breguisvc_breg_v3_node.h>
#include <s_breguisvc_helpers_v3.h>

#include <bregv3db_dbaccessor.h>

#include <bael_log.h>

#include <list>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3node {


void addNode(Response *response, const RegistryInfo& registry, int nodeId)
{
    BAEL_LOG_SET_CATEGORY("addNode");

    const s_breguisvc::NodeInfo& svcNode = registry.node();

    bregv3db::Node dbNode;
    bregv3db::Audit dbAudit;
    helpers_v3::svcNodeToDbNode(&dbNode, &dbAudit, svcNode);

    ErrorInfoResponse error;
    std::string emsg;
    if (!helpers_v3::isValidNode(dbNode, &emsg)) {
        error.code() = -1;
        error.message() = emsg;
        response->makeErrorResponse(error);
        return;
    }

    try {
        bregv3db::DbAccessor db;

        int newNodeId = nodeId;
        // add node, keywords, audit
        if (nodeId <= 0) {
            BAEL_LOG_INFO << "create new node" << BAEL_LOG_END;
            db.createNode(&newNodeId, dbNode, dbAudit);
        }
        else {
            BAEL_LOG_INFO << "insert node " << nodeId << BAEL_LOG_END;
            dbNode.nodeId() = nodeId;
            dbAudit.entryId() = nodeId;
            db.insertNode(dbNode, dbAudit);
        }

        // add entrytree
        helpers_v3::addEntryTreeInfo(db, newNodeId, svcNode.parentId());

        // add contacts
        bregv3db::Contact contact_info; 
        contact_info.entryId() = newNodeId;
        contact_info.primaryUuid() = svcNode.contacts().primaryUuid();
        contact_info.backupUuid() = svcNode.contacts().backupUuid();
        contact_info.drqsGroup() = svcNode.contacts().drqsGroup();
        contact_info.updateUuid() = svcNode.auditRecord().uuid();
        contact_info.updateTsp() = svcNode.auditRecord().updateTsp().substr(0, 19);
        db.insertContacts(contact_info);

        error.code() = newNodeId;
        error.message() = "Node added successfully.";
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "fail to add node: " << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Failed to add node!";
    }

    response->makeErrorResponse(error);
}


void updateNode(Response *response,
                const RegistryInfo& registry)
{
    BAEL_LOG_SET_CATEGORY("updateNode");

    const s_breguisvc::NodeInfo& svcNode = registry.node();

    bregv3db::Node dbNode;
    bregv3db::Audit dbAudit;
    helpers_v3::svcNodeToDbNode(&dbNode, &dbAudit, svcNode);

    ErrorInfoResponse error;
    std::string emsg;
    if (!helpers_v3::isValidNode(dbNode, &emsg)) {
        error.code() = -1;
        error.message() = emsg;
        response->makeErrorResponse(error);
        return;
    }

    try {
        bregv3db::DbAccessor db;
        db.updateNode(dbNode, dbAudit);

        error.code() = 0;
        error.message() = "Node has been updated successfully.";
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "fail not update node " << svcNode.nodeId()
                       << ": " << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Failed to update node!";
    }

    response->makeErrorResponse(error);
}

void moveNode(Response *response, int bregId, int movetoNodeId, int uuid)
{
    BAEL_LOG_SET_CATEGORY("moveNode");

    ErrorInfoResponse err;
    std::string emsg;
        
    try {
        bregv3db::DbAccessor db;
        bregv3db::Node node;
        bregv3db::Audit audit;
        db.getNode(&node, &audit, bregId);

        audit.entryId() = bregId;
        audit.updateUuid() = uuid;
        audit.eventType() = bregv3db::DbAccessor::MOVE_ENTRY;
        audit.updateTsp() = helpers_v3::getUpdateTime();
          
        // update node and entry_tree
        db.updateParent(node, audit, movetoNodeId);

        std::ostringstream os;
        os << "Current Id " << bregId << " successfully moved!" 
           << std::ends;
        err.message() = os.str();
        err.code() = 0;
        response->makeErrorResponse(err);
    }
    catch (bregv3db::DbException& e) {
        BAEL_LOG_ERROR << "fail to move node " << bregId << " to "
                       << movetoNodeId << ": " << e.what() << BAEL_LOG_END;
        err.code() = -1;
        err.message() = "Move failed.";
        response->makeErrorResponse(err);
    }
}


void deleteNode(Response *response, int bregId, int uuid)
{
    BAEL_LOG_SET_CATEGORY("deleteNode");

    ErrorInfoResponse err;
    try {
        bregv3db::DbAccessor db;
        bregv3db::Node node;
        bregv3db::Audit audit;
        db.getNode(&node, &audit, bregId);

        //check if node has children
        std::list<bregv3db::Node> children;
        db.getNodeChildren(&children, bregId);

        if (children.size() > 0) {
            err.code() = 1;
            err.message() =
                "Please remove all children before deleting the node.";
            response->makeErrorResponse(err);
            return;
        }

        audit.entryId() = bregId;
        audit.updateUuid() = uuid;
        audit.eventType() = bregv3db::DbAccessor::DELETE_ENTRY;
        audit.updateTsp() = helpers_v3::getUpdateTime();

        int deleteNodeParent = 1597;
        node.isDeleted() = true;
        db.updateParentAndMarkDeleted(node, audit, deleteNodeParent);

        err.code() = 0;
        err.message() = "Registry deleted successfully!";
        response->makeErrorResponse(err);
    }
    catch (bregv3db::DbException& e) {
        BAEL_LOG_ERROR << "fail to delete node " << bregId
                       << ":" << e.what() << BAEL_LOG_END;
        err.code() = -1;
        err.message() = "Error! Registry not deleted.";
        response->makeErrorResponse(err);
        return;
    }
}

} // namespace bregv3node
} // namespace s_breguisvc
} // namespace BloombergLP
