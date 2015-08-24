// s_breguisvc_requestrouter.cpp  -- GENERATED FILE - DO NOT EDIT --  -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(s_breguisvc_requestrouter_cpp,"$Id$ $CSID$")

#include <s_breguisvc_requestrouter.h>
#include <s_breguisvc_requestcontext.h>
#include <s_breguisvc_requestprocessor.h>

#include <basm_metrics.h>
#include <basm_serviceutil.h>

#include <bsct_errorinfo.h>
#include <bsct_requesttrace.h>

#include <bael_log.h>
#include <bael_scopedattribute.h>
#include <baem_metrics.h>
#include <baem_publicationtype.h>

#include <bcem_aggregate.h>

#include <bslalg_scalarprimitives.h>
#include <bslma_allocator.h>
#include <bslma_default.h>
#include <bsls_assert.h>
#include <bsls_stopwatch.h>

#include <bsl_sstream.h>

namespace BloombergLP {
namespace s_breguisvc {

namespace {

const char LOG_CATEGORY[] = "BREGUISVC.REQUESTROUTER";

}  // close unnamed namespace

                            // -------------------
                            // class RequestRouter
                            // -------------------

// PRIVATE MANIPULATORS

inline
void RequestRouter::dispatchRequest(
        bslma::ManagedPtr<Request>& request,
        bslma::ManagedPtr<RequestContext>& context)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    // ---------- CHANGE ONLY ARGUMENTS TO METHOD CALLS IN CODE BELOW ---------
    typedef Request Msg;

    bsls::Stopwatch timer;

    BAEM_METRICS_IF_CATEGORY_ENABLED(d_metricsCategory.c_str()) {
        timer.start(true);
    }
    switch (request->selectionId()) {
      case Msg::SELECTION_ID_GET_TREE: {
        int requestValue =
                request->getTree();
        d_requestProcessor_mp->processGetTree(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getTree",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_EXPANDED_TREE: {
        int requestValue =
                request->getExpandedTree();
        d_requestProcessor_mp->processGetExpandedTree(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getExpandedTree",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_DEFAULT_TREE: {
        bslma::ManagedPtr<Void>
            request_mp(request, &request->getDefaultTree());
        d_requestProcessor_mp->processGetDefaultTree(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getDefaultTree",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_CHILDREN: {
        int requestValue =
                request->getChildren();
        d_requestProcessor_mp->processGetChildren(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getChildren",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_DEFAULT_NODE: {
        bslma::ManagedPtr<Void>
            request_mp(request, &request->getDefaultNode());
        d_requestProcessor_mp->processGetDefaultNode(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getDefaultNode",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_NODE_DETAILS: {
        int requestValue =
                request->getNodeDetails();
        d_requestProcessor_mp->processGetNodeDetails(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getNodeDetails",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SET_DEFAULT_NODE: {
        int requestValue =
                request->setDefaultNode();
        d_requestProcessor_mp->processSetDefaultNode(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "setDefaultNode",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SEARCH_BY_NAME: {
        bslma::ManagedPtr<bsl::string>
            request_mp(request, &request->searchByName());
        d_requestProcessor_mp->processSearchByName(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "searchByName",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SEARCH_BY_ID: {
        int requestValue =
                request->searchById();
        d_requestProcessor_mp->processSearchById(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "searchById",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SEARCH_BY_ACCESSOR: {
        bslma::ManagedPtr<bsl::string>
            request_mp(request, &request->searchByAccessor());
        d_requestProcessor_mp->processSearchByAccessor(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "searchByAccessor",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SEARCH_BY_CONTACTS: {
        bslma::ManagedPtr<SearchByContacts>
            request_mp(request, &request->searchByContacts());
        d_requestProcessor_mp->processSearchByContacts(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "searchByContacts",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SEARCH_BY_KEYWORDS: {
        bslma::ManagedPtr<SearchByKeywords>
            request_mp(request, &request->searchByKeywords());
        d_requestProcessor_mp->processSearchByKeywords(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "searchByKeywords",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        int requestValue =
                request->searchByDrqsGroup();
        d_requestProcessor_mp->processSearchByDrqsGroup(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "searchByDrqsGroup",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_IS_DELETED: {
        int requestValue =
                request->isDeleted();
        d_requestProcessor_mp->processIsDeleted(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "isDeleted",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_BREG_VALUES: {
        bslma::ManagedPtr<GetBregValuesRequest>
            request_mp(request, &request->getBregValues());
        d_requestProcessor_mp->processGetBregValues(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getBregValues",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_REGISTRY: {
        int requestValue =
                request->getRegistry();
        d_requestProcessor_mp->processGetRegistry(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getRegistry",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_ENTRY_VALUE: {
        bslma::ManagedPtr<ValueRequest>
            request_mp(request, &request->getEntryValue());
        d_requestProcessor_mp->processGetEntryValue(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getEntryValue",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_SUBSCRIBERS: {
        int requestValue =
                request->getSubscribers();
        d_requestProcessor_mp->processGetSubscribers(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getSubscribers",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_VERSION_HISTORY: {
        int requestValue =
                request->getVersionHistory();
        d_requestProcessor_mp->processGetVersionHistory(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getVersionHistory",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_UPDATE_REGISTRY: {
        bslma::ManagedPtr<RegistryInfo>
            request_mp(request, &request->updateRegistry());
        d_requestProcessor_mp->processUpdateRegistry(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "updateRegistry",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_DELETE_NODE: {
        int requestValue =
                request->deleteNode();
        d_requestProcessor_mp->processDeleteNode(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "deleteNode",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_MOVE_REGISTRY: {
        bslma::ManagedPtr<MoveRequest>
            request_mp(request, &request->moveRegistry());
        d_requestProcessor_mp->processMoveRegistry(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "moveRegistry",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_UPDATE_CONTACT: {
        bslma::ManagedPtr<UpdateContactRequest>
            request_mp(request, &request->updateContact());
        d_requestProcessor_mp->processUpdateContact(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "updateContact",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_PRIVILEGE_LIST: {
        int requestValue =
                request->getPrivilegeList();
        d_requestProcessor_mp->processGetPrivilegeList(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getPrivilegeList",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_UPDATE_SUBSCRIBERS: {
        bslma::ManagedPtr<EntrySubscribers>
            request_mp(request, &request->updateSubscribers());
        d_requestProcessor_mp->processUpdateSubscribers(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "updateSubscribers",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_UPDATE_PRIVILEGES: {
        bslma::ManagedPtr<PrivilegeList>
            request_mp(request, &request->updatePrivileges());
        d_requestProcessor_mp->processUpdatePrivileges(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "updatePrivileges",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_OUT_GROUP: {
        int requestValue =
                request->getOutGroup();
        d_requestProcessor_mp->processGetOutGroup(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getOutGroup",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_DEPT_CHAIN: {
        int requestValue =
                request->getDeptChain();
        d_requestProcessor_mp->processGetDeptChain(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getDeptChain",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_DRQS_GROUP: {
        int requestValue =
                request->getDrqsGroup();
        d_requestProcessor_mp->processGetDrqsGroup(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getDrqsGroup",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_UPDATE_DEV_VALUE: {
        bslma::ManagedPtr<EntryValue>
            request_mp(request, &request->updateDevValue());
        d_requestProcessor_mp->processUpdateDevValue(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "updateDevValue",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        int requestValue =
                request->getMachineGroupName();
        d_requestProcessor_mp->processGetMachineGroupName(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getMachineGroupName",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_VALIDATE_OVERRIDE: {
        bslma::ManagedPtr<OverrideInfo>
            request_mp(request, &request->validateOverride());
        d_requestProcessor_mp->processValidateOverride(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "validateOverride",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GENERATE_CODE: {
        bslma::ManagedPtr<GenerateCodeRequest>
            request_mp(request, &request->generateCode());
        d_requestProcessor_mp->processGenerateCode(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "generateCode",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_RELEASE_CODE: {
        bslma::ManagedPtr<BregChangeRequest>
            request_mp(request, &request->releaseCode());
        d_requestProcessor_mp->processReleaseCode(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "releaseCode",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_TODO_LIST: {
        int requestValue =
                request->getTodoList();
        d_requestProcessor_mp->processGetTodoList(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getTodoList",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_RELATED_TICKET: {
        bslma::ManagedPtr<RelatedTicketRequest>
            request_mp(request, &request->getRelatedTicket());
        d_requestProcessor_mp->processGetRelatedTicket(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getRelatedTicket",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GET_NODE_TYPE: {
        int requestValue =
                request->getNodeType();
        d_requestProcessor_mp->processGetNodeType(requestValue, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "getNodeType",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_CHANGE_BREG: {
        bslma::ManagedPtr<BregChangeRequest>
            request_mp(request, &request->changeBreg());
        d_requestProcessor_mp->processChangeBreg(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "changeBreg",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        bslma::ManagedPtr<BregChangeRequest>
            request_mp(request, &request->validatePrqsApprover());
        d_requestProcessor_mp->processValidatePrqsApprover(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "validatePrqsApprover",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_GENERATE_RELEASE_CODE: {
        bslma::ManagedPtr<BregChangeRequest>
            request_mp(request, &request->generateReleaseCode());
        d_requestProcessor_mp->processGenerateReleaseCode(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "generateReleaseCode",
                                            timer);
      }  break;
      case Msg::SELECTION_ID_MARK_FOR_DELETION: {
        bslma::ManagedPtr<MarkForDeletionRequest>
            request_mp(request, &request->markForDeletion());
        d_requestProcessor_mp->processMarkForDeletion(request_mp, context);
        BASM_METRICS_COLLECT_REQUEST_TIMING(d_metricsCategory.c_str(),
                                            "markForDeletion",
                                            timer);
      }  break;
      default: {
        bsl::ostringstream oss;
        oss << "Could not process request: Unknown request: id = "
            << request->selectionId();
        BAEL_LOG_WARN << context->userIdentification()
                      << oss.str()
                      << BAEL_LOG_END;
        bsct::ErrorInfo errorInfo;
        errorInfo.description() = oss.str();
        context->deliverError(errorInfo);
        return;                                                       // RETURN
      }
    }

    // ---------- CHANGE ONLY ARGUMENTS TO METHOD CALLS IN CODE ABOVE ---------
}

// CREATORS

RequestRouter::RequestRouter(
        bslma::ManagedPtr<RequestProcessor>&  processor,
        const bcem_Aggregate&                configuration,
        bslma::Allocator                     *basicAllocator)
: d_requestProcessor_mp(processor)
, d_metricsCategory(basicAllocator)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BSLS_ASSERT(d_requestProcessor_mp);

    d_imp_p = reinterpret_cast<RequestRouterImp*>(
                  d_allocator_p->allocate(sizeof *d_imp_p));
    bslalg::ScalarPrimitives::defaultConstruct(d_imp_p, d_allocator_p);

    int rc = basm::ServiceUtil::loadCoreMetricsCategory(&d_metricsCategory,
                                                        configuration);
    BSLS_ASSERT(0 == rc);

    // The 'configuration' may be used to further configure this object.
}

RequestRouter::RequestRouter(
        bslma::ManagedPtr<RequestProcessor>&  processor,
        const bsl::string&                   serviceName,
        const bcem_Aggregate&                configuration,
        bslma::Allocator                     *basicAllocator)
: d_requestProcessor_mp(processor)
, d_metricsCategory(basicAllocator)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    BSLS_ASSERT(d_requestProcessor_mp);

    d_imp_p = reinterpret_cast<RequestRouterImp*>(
                  d_allocator_p->allocate(sizeof *d_imp_p));
    bslalg::ScalarPrimitives::defaultConstruct(d_imp_p, d_allocator_p);

    int rc = basm::ServiceUtil::loadCoreMetricsCategory(&d_metricsCategory,
                                                        configuration,
                                                        serviceName);
    BSLS_ASSERT(0 == rc);

    // The 'configuration' may be used to further configure this object.
}

RequestRouter::~RequestRouter()
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    // Explicitly destroy request processor in case it is holding objects
    // allocated by the router imp
    d_requestProcessor_mp.clear();

    bslalg::ScalarPrimitives::destruct(d_imp_p, d_allocator_p);
    d_allocator_p->deallocate(d_imp_p);
}

// MANIPULATORS

void RequestRouter::processRequest(
        bslma::ManagedPtr<BuildOpts::RawRequest>&      rawRequest,
        bslma::ManagedPtr<BuildOpts::RequestContext>&  context)
{
    typedef Request Request;

    bslma::ManagedPtr<Request> request_mp;
    d_imp_p->createRequest(&request_mp);

    int rc = d_imp_p->decodeRequest(request_mp.ptr(), rawRequest, context);
    if (0 != rc) {
        return;
    }

    bslma::ManagedPtr<RequestContext> context_mp;
    d_imp_p->createRequestContext(&context_mp, context);

    bael_ScopedAttribute attribute("request", request_mp->selectionName());

    bsct::RequestTrace requestTrace;

    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    BAEL_LOG_DEBUG << "Received request"
                      ": userId = "       << context_mp->userIdentification()
                   << ", request = "      << request_mp->selectionName();
    context_mp->loadRequestTrace(&requestTrace);
    BAEL_STREAM    << ", requestTrace = " << requestTrace
                   << BAEL_LOG_END;

    dispatchRequest(request_mp, context_mp);
}

void RequestRouter::processControlEvent(
        const bassvc::RequestProcessorControlEvent& event)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    d_requestProcessor_mp->processControlEvent(event);
}

}  // close namespace s_breguisvc
}  // close namespace BloombergLP

// GENERATED BY BLP_BAS_CODEGEN_3.8.4 Wed Apr 22 09:48:00 2015
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2012
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------
