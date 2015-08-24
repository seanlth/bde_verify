#include <s_breguisvc_search_v3.h>
#include <s_breguisvc_helpers_v3.h>
#include <bregv3db_dbaccessor.h>

#include <bael_log.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3search {
namespace {
    void loadResultList(Response *response, const std::vector<int>& bregs);
}

void searchByAccessor(Response *response,
                      const std::string& accessor)
{
    BAEL_LOG_SET_CATEGORY("searchByAccessor");
    ErrorInfoResponse error;
    error.code() = 0;

    try {
        bregv3db::DbAccessor db;
        int entryId = 0;
        try {
            entryId = db.findBregByAccessor(accessor);
        }
        catch (const bregv3db::DbException& e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
            if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
                error.message() = "No results found.";
                response->makeErrorResponse(error);
                return;
            }
            throw std::runtime_error("Failed to search.");            
        }

        if (entryId <= 0) {
            error.message() = "No results found.";
            response->makeErrorResponse(error);
            return;
        }

        std::vector<int> bregs;
        bregs.push_back(entryId);
        loadResultList(response, bregs);
    }
    catch (const bregv3db::DbException& e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        throw std::runtime_error("Failed to search.");            
    }
}

void searchByName(Response *response, const std::string& name)
{
    BAEL_LOG_SET_CATEGORY("searchByName");
    ErrorInfoResponse error;
    error.code() = 0;

    try {
        bregv3db::DbAccessor db;
        int entryId = 0;
        try {
            entryId = db.findBregByName(name);
        }
        catch (const bregv3db::DbException& e) {
            BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
            if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
                error.message() = "No results found.";
                response->makeErrorResponse(error);
                return;
            }
            throw std::runtime_error("Failed to search.");            
        }

        if (entryId <= 0) {
            error.message() = "No results found.";
            response->makeErrorResponse(error);
            return;
        }

        std::vector<int> bregs;
        bregs.push_back(entryId);
        loadResultList(response, bregs);
    }
    catch (const bregv3db::DbException& e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        throw std::runtime_error("Failed to search.");            
    }
}

void searchById(Response *response, int node_id)
{
    std::vector<int> bregs;
    bregs.push_back(node_id);
    loadResultList(response, bregs);
}

void searchByKeywords(Response *response,
                      const SearchByKeywords& keywords_request)
{
    BAEL_LOG_SET_CATEGORY("searchByKeywords");

    std::vector<int> bregs;
    try {
        bregv3db::DbAccessor db;
        std::vector<std::string> keywords;

        std::vector<std::string>::const_iterator it;
        for (it = keywords_request.keywords().begin();
             it != keywords_request.keywords().end(); ++it) {
            if (0 == it->length()) continue;

            keywords.push_back(*it);
        }

        db.findBregByKeyWords(&bregs, keywords);
    }
    catch (const bregv3db::DbException& e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
            ErrorInfoResponse error;
            error.message() = "No results found.";
            response->makeErrorResponse(error);
            return;
        }
        throw std::runtime_error("Failed to search.");            
    }

    loadResultList(response, bregs);
}

// anonymous namespace
namespace {

void loadResultList(Response *response, const std::vector<int>& bregs)
{
    BAEL_LOG_SET_CATEGORY("loadResultList");

    std::vector<s_breguisvc::Node> nodes;
    
    try {
        bregv3db::DbAccessor db;
        int count = bregs.size();
        for (int i = 0; i < count; ++i) {
            try {
                s_breguisvc::Node svcNode;
                if (!db.isLeafNode(bregs[i])) {
                    svcNode.type() = 0;
                    bregv3db::Node dbNode;
                    bregv3db::Audit audit;
                    db.getNode(&dbNode, &audit, bregs[i]);
                    if (!dbNode.isDeleted()) {
                        svcNode.name() = dbNode.name();
                        svcNode.id() = bregs[i];
                        svcNode.description() = dbNode.description();
                        nodes.push_back(svcNode);
                    }
                }
                else {
                    svcNode.type() = 1;
                    bregv3db::EntryDescription dbEntry;
                    bregv3db::Audit audit;
                    db.getEntry(&dbEntry, &audit, bregs[i]);

                    if (!dbEntry.node().isDeleted()) {
                        svcNode.name() = dbEntry.node().name();
                        svcNode.id() = bregs[i];
                        svcNode.description() = dbEntry.node().description();
                        svcNode.expiryTsp() = dbEntry.expireTsp();
                        svcNode.hasExpired() = 
                            helpers_v3::getHasExpired(dbEntry.expireTsp());
                        nodes.push_back(svcNode);
                    }
                }
            }
            catch (const bregv3db::DbException& e) {
                BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
            }        
        }
    }
    catch (const bregv3db::DbException& e) {
        BAEL_LOG_DEBUG << e.what() << BAEL_LOG_END;
        throw std::runtime_error("Error in search.");
    }
            
    if (nodes.empty()) {
        ErrorInfoResponse error;
        error.code() = 0;
        error.message() = "No results found.";
        response->makeErrorResponse(error);
    }
    else {
        response->makeNodeTree(nodes);
    }
}

} // end anonymous namespace

} // end namespace bregv3search
} // end namespace s_breguisvc
} // end namespace BloombergLP
