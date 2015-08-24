#include <s_breguisvc_breg_v3_entry.h>
#include <s_breguisvc_helpers_v3.h>

#include <bregv3db_dbaccessor.h>

#include <bael_log.h>

extern "C" {
#include <bregmpdb.h>
#include <bregmpdb_api.h>
}

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3entry {


void addEntry(Response *response, const RegistryInfo& registry, int entryId)
{
    BAEL_LOG_SET_CATEGORY("addEntry");

    ErrorInfoResponse error;
    const s_breguisvc::NodeInfo& node = registry.node();
    bregv3db::EntryDescription dbEntry;
    bregv3db::Audit dbAudit;
    if (!registry.entry().isNull()) {
        const s_breguisvc::EntryInfo& entry = registry.entry().value();
        helpers_v3::svcEntryToDbEntry(&dbEntry, &dbAudit, node, entry);
    }
    else {
        error.code() = -1;
        error.message() = "Null entry value.";
        response->makeErrorResponse(error);
        return;
    }
 
    std::string emsg;
    if (! helpers_v3::isValidEntry(dbEntry, &emsg)) {
        BAEL_LOG_INFO << " entryId " << entryId << emsg << BAEL_LOG_END;
        error.code() = -1;
        error.message() = emsg;
        response->makeErrorResponse(error);
        return;
    }

    try {
        bregv3db::DbAccessor db;

        int newEntryId = entryId;
        // add node, keywords, audit
        if (entryId <= 0) {
            BAEL_LOG_INFO << "create new entry" << BAEL_LOG_END;
            db.createEntry(&newEntryId, dbEntry, dbAudit);
        }
        else {
            BAEL_LOG_INFO << "insert entry " << entryId << BAEL_LOG_END;
            dbEntry.entryId() = entryId;
            dbEntry.node().nodeId() = entryId;
            dbAudit.entryId() = entryId;
            bool is_insert_node = true;
            db.insertEntry(dbEntry, dbAudit, is_insert_node);
        }

        // add entrytree
        helpers_v3::addEntryTreeInfo(db, newEntryId, node.parentId());

        // add contacts
        bregv3db::Contact contact_info; 
        contact_info.entryId() = newEntryId;
        contact_info.primaryUuid() = node.contacts().primaryUuid();
        contact_info.backupUuid() = node.contacts().backupUuid();
        contact_info.drqsGroup() = node.contacts().drqsGroup();
        contact_info.updateUuid() = node.auditRecord().uuid();
        contact_info.updateTsp() = node.auditRecord().updateTsp().substr(0, 19);
        db.insertContacts(contact_info);

        error.code() = newEntryId;
        error.message() = "Entry added successfully.";
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "fail to add entry: " << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Failed to add entry!";
    }

    response->makeErrorResponse(error);
}

void updateEntry(Response *response, const RegistryInfo& registry)
{
    BAEL_LOG_SET_CATEGORY("updateEntry");

    ErrorInfoResponse error;
    const NodeInfo& node = registry.node();
    bregv3db::EntryDescription dbEntry;
    bregv3db::Audit dbAudit;
    if (!registry.entry().isNull()) {
        const EntryInfo& entry = registry.entry().value();
        helpers_v3::svcEntryToDbEntry(&dbEntry, &dbAudit, node, entry);
    }
    else {
        error.code() = -1;
        error.message() = "Null entry value.";
        response->makeErrorResponse(error);
        return;
    }

    std::string emsg;
    if (!helpers_v3::isValidEntry(dbEntry, &emsg)) {
        error.code() = -1;
        error.message() = emsg;
        response->makeErrorResponse(error);
        return;
    }

    try {
        bregv3db::DbAccessor db;

        db.updateEntry(dbEntry, dbAudit);
        
        error.code() = 0;
        error.message() = "Entry has been updated successfully.";
    }
    catch (bregv3db::DbException & e) {
        bregv3db::DbAccessor db;
        BAEL_LOG_ERROR << "fail to update entry " << node.nodeId()
                       << ": " << e.what() << BAEL_LOG_END;
        error.code() = -1;
        error.message() = "Failed to update entry.";
    }

    response->makeErrorResponse(error);
}

void moveEntry(Response *response, int bregId, int movetoNodeId, int uuid)
{
    BAEL_LOG_SET_CATEGORY("moveEntry");

    ErrorInfoResponse err;

    try {
        bregv3db::DbAccessor db;
        bregv3db::Node node;
        bregv3db::Audit audit;
        db.getNode(&node, &audit, bregId);

        audit.entryId() = bregId;
        audit.updateUuid() = uuid;
        audit.eventType() = bregv3db::DbAccessor::MOVE_ENTRY;
        audit.updateTsp() = helpers_v3::getUpdateTime();
        audit.oldValue() = node.parentId();
        audit.newValue() = movetoNodeId;
          
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

void deleteEntry(Response *response, int bregId, int uuid)
{
    BAEL_LOG_SET_CATEGORY("deleteEntry");

    ErrorInfoResponse err;

    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryDescription des;
        bregv3db::Audit audit;
        db.getEntry(&des, &audit, bregId);
        
        if (des.apiStatus() == bregv3db::DbAccessor::API_RELEASED && 
            !helpers_v3::isObsoleteTraceOn(des)) {
            err.code() = 1;
            err.message() = "Obsolete trace has to be ON for at least "
                "7 days before deletion.";
            response->makeErrorResponse(err);
            return;
        }

        audit.entryId() = bregId;
        audit.updateUuid() = uuid;
        audit.eventType() = bregv3db::DbAccessor::DELETE_ENTRY;
        audit.updateTsp() = helpers_v3::getUpdateTime();

        // update parent node, entry_tree
        int deleteNodeParent = 1597;
        des.node().isDeleted() = true;

        const int RETRY_MAX = 3;
        int count = 0;
        while (count++ < 3) {
            try {
                db.updateParentAndMarkDeleted(des.node(), audit,
                                              deleteNodeParent);
            } 
            catch(bregv3db::DbException & e) {
                BAEL_LOG_ERROR << "deleteEntry:updateParentAndMarkDeleted retry "
                               << count << BAEL_LOG_END;
                if (RETRY_MAX == count)
                    throw e;
            }
        }
        
        // change storage to db type
        des.isSharedMemory() = false;
        db.updateEntry(des);

        // update bregmpdb
        char api_name[50] = {0};
        snprintf(api_name, sizeof(api_name), "%s", des.apiName().c_str());

        bregmpdb_api_rc mprc = bregmpdb_update_entry_status(api_name,
                                                            BREGMPDB_DELE);
        if (mprc != BREGMP_COMDB_NO_ERROR) {
            BAEL_LOG_INFO << "bregmpdb update failed for [" 
                          << des.apiName() << "], rc=" << mprc
                          << BAEL_LOG_END;
        }

        err.code() = 0;
        err.message() = "Registry deleted successfully!";
        response->makeErrorResponse(err);

    }
    catch (BloombergLP::bregv3db::DbException & e) {
        BAEL_LOG_ERROR << "fail to delete node " << bregId
                       << ":" << e.what() << BAEL_LOG_END;
        err.code() = -1;
        err.message() = "Error! Registry not deleted.";
        response->makeErrorResponse(err);
        return;
    }
}

} // namespace bregv3entry
} // namespace s_breguisvc
} // namespace BloombergLP
