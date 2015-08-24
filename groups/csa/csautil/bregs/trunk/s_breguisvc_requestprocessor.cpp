// s_breguisvc_requestprocessor.cpp   -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(s_breguisvc_requestprocessor_cpp,"$Id$ $CSID$ $CCId$")

#include <s_breguisvc_requestprocessor.h>

#include <s_breguisvc_requestcontext.h>
#include <s_breguisvc_manifest.h>
#include <s_breguisvc_messages.h>

#include <bascfg_configutil.h>
#include <bassvc_requestprocessor.h>
#include <basm_metrics.h>

#include <bsct_errorinfo.h>

#include <bael_log.h>
#include <baem_metrics.h>

#include <bsls_assert.h>

#include <s_breguisvc_value_checker.h>

#include <s_breguisvc_breg_v3.h>
#include <s_breguisvc_breg_v3_checker.h>
#include <s_breguisvc_breg_v3_tree.h>
#include <s_breguisvc_search_v3.h>

#include <bregv3db_dbaccessor.h>

#include <bregdb_api.h>
#include <iostream>

#include <paulbitchk.h>

extern "C" {
#include <deptdb_global.h>
void gettsk_(int *name);
};

namespace BloombergLP {
namespace s_breguisvc {

namespace {

const char LOG_CATEGORY[] = "BREGUISVC.REQUESTPROCESSOR";

}  // close unnamed namespace

                           // ----------------------
                           // class RequestProcessor
                           // ----------------------

// CREATORS

RequestProcessor::RequestProcessor(
        const bcem_Aggregate&  configuration,
        bdema_Allocator       *basicAllocator)
: d_allocator_p(bdema_Default::allocator(basicAllocator))
, d_configuration(configuration)
, d_metricsCategory(basicAllocator)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    bcem_Aggregate serviceId =
        bascfg::ConfigUtil::findServiceId(configuration);
    d_metricsCategory.assign(serviceId.asString()).append("-APP");
    BSLS_ASSERT(!serviceId.isError());
}

RequestProcessor::RequestProcessor(
        const std::string&     serviceName,
        const bcem_Aggregate&  configuration,
        bdema_Allocator       *basicAllocator)
: d_allocator_p(bdema_Default::allocator(basicAllocator))
, d_configuration(configuration)
, d_metricsCategory(basicAllocator)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    bcem_Aggregate serviceId =
        bascfg::ConfigUtil::findServiceId(configuration, serviceName);
    d_metricsCategory.assign(serviceId.asString()).append("-APP");
    BSLS_ASSERT(!serviceId.isError());
}

RequestProcessor::~RequestProcessor()
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
}

// MANIPULATORS

// ------ CHANGE ONLY THE FUNCTION IMPLEMENTATIONS IN THE FOLLOWING CODE ------

void RequestProcessor::processControlEvent(
        const bassvc::RequestProcessorControlEvent& event)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    typedef bassvc::RequestProcessorControlEvent Event;

    switch (event.eventType()) {
      case Event::START: {
        // The service is starting.  At this point, no requests can be
        // forwarded to the request processor yet.

      }  break;
      case Event::READY: {
        // The service is starting.  The request processor is able to receive
        // requests (and might already have).

      }  break;
      case Event::STOP: {
        // The service is stopping.  No more requests will be forwarded to the
        // request processor.  At this point, the request processor must
        // release any request contexts or request objects that it might be
        // holding.

      }  break;
      case Event::RECONFIGURE: {
        // un-used for now
      }  break;
      case Event::EXIT: {
        // Exiting. To be filled if necessary.
      }  break;
    }
}

void RequestProcessor::processGetTree(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        BAEL_LOG_INFO << "getTree " << request << BAEL_LOG_END; 
        bregv3tree::loadTree(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_DEBUG << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetChildren(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        BAEL_LOG_INFO << "getChildren " << request << BAEL_LOG_END;
        bregv3tree::loadChildren(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetExpandedTree(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        BAEL_LOG_INFO << "getExpandedTree " << request << BAEL_LOG_END;
        bregv3tree::loadExpandedTree(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetDefaultTree(
        bslma::ManagedPtr<Void>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int uuid = context->userIdentification().uuid();
    Response response;

    try
    {
        BAEL_LOG_INFO << "getDefaultTree " << request << BAEL_LOG_END;
        bregv3tree::loadDefaultTree(&response, uuid);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetNodeDetails(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int uuid = context->userIdentification().uuid();
    Response response;

    try
    {
        BAEL_LOG_INFO << "getNodeDetails " << request << BAEL_LOG_END;
        bregv3tree::loadNodeDetails(&response, request, uuid);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetDefaultNode(
        bslma::ManagedPtr<Void>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    int uuid = context->userIdentification().uuid();
    Response response;
    try
    {
        BAEL_LOG_INFO << "getDefaultNode " << request << BAEL_LOG_END;
        bregv3tree::loadDefaultNode(&response, uuid);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processSetDefaultNode(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "setDefaultNode " << request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3tree::setDefaultNode(&response, 
                                   context->userIdentification().uuid(), 
                                   request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processSearchByAccessor(
        bslma::ManagedPtr<bsl::string>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "searchByAccessor " << *request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3search::searchByAccessor(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processSearchByKeywords(
        bslma::ManagedPtr<SearchByKeywords>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "searchByKeywords " << *request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3search::searchByKeywords(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processSearchById(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "searchById " << request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3search::searchById(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processSearchByName(
        bslma::ManagedPtr<bsl::string>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "searchByName " << *request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3search::searchByName(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processSearchByDrqsGroup(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    /* not implemented

    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        BAEL_LOG_INFO << "searchByDrqsGroup " << request << BAEL_LOG_END;
        search::searchByDrqsGroup(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
    */
}

void RequestProcessor::processSearchByContacts(
        bslma::ManagedPtr<SearchByContacts>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    /* not implemented

    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        search::searchByContacts(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
    */
}

void RequestProcessor::processIsDeleted(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "isDeleted request: " << request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3::isDeleted(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetSubscribers(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "getSubscribers request: " << request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3::loadSubscribers(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetEntryValue(
        bslma::ManagedPtr<ValueRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    
    BAEL_LOG_DEBUG << "getEntryValue request: " << *request << BAEL_LOG_END;

    Response response;
    s_breguisvc::EntryValue cdb2Value;
    
    try
    {
        bregv3::loadBregValues(&cdb2Value,
                               request->entryId(),
                               request->version());
        response.makeEntryValue(cdb2Value);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetRegistry(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG<<"getRegistry request: " << request << BAEL_LOG_END;

    Response response(d_allocator_p);

    bregv3::loadRegistry(&response, request,
                         context->userIdentification().uuid());

    BAEL_LOG_DEBUG << response << BAEL_LOG_END;

    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetVersionHistory(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "getVersionHistory request: " << request << BAEL_LOG_END;

    Response response(d_allocator_p);

    int entry_id = request;
    bregv3::getVersionHistory(&response, entry_id);

    BAEL_LOG_DEBUG << response << BAEL_LOG_END;

    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processUpdateRegistry(
        bslma::ManagedPtr<RegistryInfo>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "updateRegistry request: " << *request << BAEL_LOG_END;

    Response response;
    try
    {
        // -1 is used to tell addNode/addEntry whether to generate a new nodeId
        // or use the nodeId genereated from Informix; this is no longer needed
        // should be removed because Informix database no longer exists
        bregv3::updateRegistry(&response, *request, -1);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = "Updated failed.";
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processDeleteNode(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "deleteNode request: " << request << BAEL_LOG_END;

    int uuid = context->userIdentification().uuid();
    Response response;

    try
    {
        bregv3::deleteRegistry(&response, request, uuid);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processMoveRegistry(
        bslma::ManagedPtr<MoveRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "moveRegistry request: " << *request << BAEL_LOG_END;

    Response response;

    try
    {
         bregv3::moveRegistry(&response, 
                             request->registryId(),
                             request->moveToNodeId(),
                             context->userIdentification().uuid());
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processUpdateContact(
        bslma::ManagedPtr<UpdateContactRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        BAEL_LOG_INFO << "updateContact request: " << request->registryId() 
                      << BAEL_LOG_END;
        bregv3::updateContact(&response,
                              request->contacts(),
                              request->registryId());
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetPrivilegeList(
        int request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {        
        BAEL_LOG_INFO << "getPrivilegeList request: " << request << BAEL_LOG_END;
        bregv3::loadPrivilegeList(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processUpdateSubscribers(
        bslma::ManagedPtr<EntrySubscribers>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "updateSubscribers request: " << *request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3::updateSubscribers(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processUpdatePrivileges(
        bslma::ManagedPtr<PrivilegeList>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "updatePrivileges request: " << *request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3::updatePrivileges(&response, 
                                 *request,
                                 context->userIdentification().uuid());
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetDeptChain(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_INFO << "getDeptChain request: " << request << BAEL_LOG_END;

    Response response;

    try
    {
        bregv3::loadDeptChain(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetOutGroup(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "getOutGroup request: " << request << BAEL_LOG_END;

    Response response;
    enum {
        OUTDEPTDESC_LEN = 40
    };
    char outdeptdesc[OUTDEPTDESC_LEN+1];


    int rcode = deptdb_deptcode2desc(request, outdeptdesc,
                         sizeof(outdeptdesc));

    if(rcode != 0) {
        BAEL_LOG_INFO << "deptdb_deptcode2desc for " << request
            << " failed, rc = " << rcode
            << BAEL_LOG_END;
        ErrorInfoResponse err;
        err.code() = -1;
        std::ostringstream os;
        os << "Invalid out group number " << request << std::ends;
        err.message() = os.str();
        response.makeErrorResponse(err);
    } else {
        Group group;
        group.groupId() = request;
        group.groupDescription() = outdeptdesc;
        response.makeOutGroup(group);
        BAEL_LOG_DEBUG << "response: " << response
                << BAEL_LOG_END;
    }

    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetDrqsGroup(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    BAEL_LOG_DEBUG << "getDrqsGroup request: " << request << BAEL_LOG_END;

    std::string desc = bregv3::getDrqsGroupDescription(request);
 
    if(0 == desc.length()) {
        ErrorInfoResponse err;
        err.code() = -1;
        std::ostringstream os;
        os << "Invalid DRQS group number " << request << std::ends;
        err.message() = os.str();
        response.makeErrorResponse(err);
    } else {
        Group group;
        group.groupId() = request;
        group.groupDescription() = desc;
        response.makeDrqsGroup(group);
        BAEL_LOG_DEBUG << "response: " << response
                << BAEL_LOG_END;
    }

    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processUpdateDevValue(
        bslma::ManagedPtr<EntryValue>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "updateDevValue request: " << *request << BAEL_LOG_END;

    int uuid = context->userIdentification().uuid();
    Response response;

    try
    {
        bregv3::updateDevValues(&response, *request, uuid, true);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }

}

void RequestProcessor::processGetMachineGroupName(
        int request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    try
    {
        bregv3::getMachineGroupNameFromId(&response, request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processValidateOverride(
        bslma::ManagedPtr<OverrideInfo>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);


    BAEL_LOG_DEBUG << "validateOverride request: " << *request << BAEL_LOG_END;
    Response response;

    try
    {
        bregv3::validateOverride(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGenerateCode(
        bslma::ManagedPtr<GenerateCodeRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "generateCode request: " << *request << BAEL_LOG_END;

    Response response;

    bregv3::generateCode(&response, *request,
                         context->userIdentification().uuid(),
                         true, true);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processReleaseCode(
        bslma::ManagedPtr<BregChangeRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "releaseCode request: " << *request << BAEL_LOG_END;

    Response response;

    int uuid = context->userIdentification().uuid();
    int cdb2Version = 0;
    int prqs = 0;
    bool isGenRelease = false;

    bregv3::releaseCode(&response, &cdb2Version,
                        *request, prqs, true, isGenRelease, uuid);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetTodoList(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "getTodoList request: " << request << BAEL_LOG_END;
    Response response;

    bregv3::getTodoList(&response, request);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetRelatedTicket(
        bslma::ManagedPtr<RelatedTicketRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "getRelatedTicket request: " << *request << BAEL_LOG_END;
    Response response;

    bregv3::getRelatedTicket(&response, *request);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetNodeType(
        int                               request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    Response response;

    BAEL_LOG_INFO << "getNodeType request: " << request << BAEL_LOG_END;

    bregv3::getNodeType(&response, request);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processChangeBreg(
        bslma::ManagedPtr<BregChangeRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "updateProdValue request: " << *request << BAEL_LOG_END;

    int uuid = context->userIdentification().uuid();
    Response response;

    int version = -1;
    int prqs = 0;
    int old_val_status_cd = 0;

    bregv3::updateProdValue(&response, *request,
                            version, prqs, old_val_status_cd, uuid,
                            true, false);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processValidatePrqsApprover(
        bslma::ManagedPtr<BregChangeRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "validatePrqsApprover request: " << *request
                   << BAEL_LOG_END;
    Response response;

    bregv3::validateApprover(&response, *request,
                           context->userIdentification().uuid());

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGetBregValues(
        bslma::ManagedPtr<GetBregValuesRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "getBregValues " << *request << BAEL_LOG_END;

    Response response;

    try
    {
        value_checker::getValues(&response, *request);
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_TRACE << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = 1;
        error.message() = e.what();
        response.makeErrorResponse(error);
    }

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

void RequestProcessor::processGenerateReleaseCode(
        bslma::ManagedPtr<BregChangeRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "generateReleaseCode requst: " << *request << BAEL_LOG_END;

    Response response;
    
    int uuid = context->userIdentification().uuid();
    int entryId = request->registry().entry().value().entryId();

    bool ifmxCallCsutil = false;
    bool ifmxPropagateValue = false;
    bool isGenRelease = true;
    int cdb2Version = 0;

    GenerateCodeRequest genCodeRequest;
    genCodeRequest.registry() = request->registry();
    genCodeRequest.entryValue() = request->entryValue();

    try
    {
        BAEL_LOG_INFO << "generateReleaseCode: generateCode: " << entryId 
                      << BAEL_LOG_END;

        bregv3::generateCode(&response, genCodeRequest, uuid,
                             !ifmxCallCsutil, !ifmxPropagateValue);

        if (response.errorResponse().code()!= 0) {
            BAEL_LOG_DEBUG << "generateCode:response " << response 
                           << BAEL_LOG_END;

            if (context->deliverResponse(response) != 0) {
                BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
            }
            return;
        }

        // release code
        bool ifmxCreatePrqs = false;
        int prqs = 0;
        BAEL_LOG_INFO << "generateReleaseCode: releaseCode: " << entryId 
                      << BAEL_LOG_END;

        bregv3::releaseCode(&response, &cdb2Version,
                            *request, prqs, !ifmxCreatePrqs,
                            isGenRelease, uuid);
 
        if (response.errorResponse().code()!= 0) {
            BAEL_LOG_DEBUG << "releaseCode:bregv3Response " << response
                           << BAEL_LOG_END;
        }

        if (context->deliverResponse(response) != 0) {
            BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
        }
    }
    catch(const std::runtime_error& e)
    {
        // make error
        BAEL_LOG_INFO << "Error: " << e.what() << BAEL_LOG_END;
        ErrorInfoResponse error;
        error.code() = -1;
        error.message() = e.what();
        response.makeErrorResponse(error);
        context->deliverResponse(response);
    }
}

void RequestProcessor::processMarkForDeletion(
        bslma::ManagedPtr<MarkForDeletionRequest>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BAEL_LOG_DEBUG << "markForDeletion request: " << *request << BAEL_LOG_END;

    Response response;

    int entryId = request->entryId();
    int uuid = request->updateUuid();

    bregv3::markForDeletion(&response, entryId, uuid);

    // deliver the response to the user
    if (context->deliverResponse(response) != 0)
    {
        BAEL_LOG_ERROR << "Failed to deliver response" << BAEL_LOG_END;
    }
}

}  // close namespace s_breguisvc
}  // close namespace BloombergLP

// GENERATED BY BLP_BAS_CODEGEN_3.8.4 Wed Apr 22 09:48:00 2015
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2010
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------
