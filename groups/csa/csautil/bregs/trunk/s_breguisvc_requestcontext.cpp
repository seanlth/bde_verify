// s_breguisvc_requestcontext.cpp -- GENERATED FILE - DO NOT EDIT --  -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(s_breguisvc_requestcontext_cpp,"$Id$ $CSID$")

#include <s_breguisvc_requestcontext.h>
#include <s_breguisvc_messages.h>

#include <bael_scopedattribute.h>

#include <bslma_allocator.h>
#include <bslma_default.h>
#include <bsls_assert.h>

namespace BloombergLP {
namespace s_breguisvc {

namespace {

const char LOG_CATEGORY[] = "BREGUISVC.REQUESTCONTEXT";

}  // close unnamed namespace

                            // --------------------
                            // class RequestContext
                            // --------------------

// CREATORS

RequestContext::RequestContext(
        bslma::ManagedPtr<BuildOpts::RequestContext>&  context,
        bslma::Allocator                              *basicAllocator)
: d_imp_mp(context)
{
    BSLS_ASSERT(d_imp_mp);
}

RequestContext::~RequestContext()
{
}

// MANIPULATORS

int RequestContext::deliverErrorResponse(
        const ErrorInfoResponse& response,
        bool                     isFinal)
{
    Response rsp;
    rsp.makeErrorResponse(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverNodeTree(
        const bsl::vector<Node>& response,
        bool                     isFinal)
{
    Response rsp;
    rsp.makeNodeTree(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverNodeDetails(
        const NodeDetails& response,
        bool               isFinal)
{
    Response rsp;
    rsp.makeNodeDetails(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverNodeId(
        int response,
        bool isFinal)
{
    Response rsp;
    rsp.makeNodeId(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverValues(
        const bsl::vector<BregValue>& response,
        bool                          isFinal)
{
    Response rsp;
    rsp.makeValues(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverNodeInfo(
        const NodeInfo& response,
        bool            isFinal)
{
    Response rsp;
    rsp.makeNodeInfo(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverEntryInfo(
        const EntryInfo& response,
        bool             isFinal)
{
    Response rsp;
    rsp.makeEntryInfo(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverRegistryInfo(
        const RegistryInfo& response,
        bool                isFinal)
{
    Response rsp;
    rsp.makeRegistryInfo(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverEntryValue(
        const EntryValue& response,
        bool              isFinal)
{
    Response rsp;
    rsp.makeEntryValue(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverEntrySubscribers(
        const EntrySubscribers& response,
        bool                    isFinal)
{
    Response rsp;
    rsp.makeEntrySubscribers(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverVersionHistory(
        const bsl::vector<VersionTsp>& response,
        bool                           isFinal)
{
    Response rsp;
    rsp.makeVersionHistory(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverPrivilegeList(
        const PrivilegeList& response,
        bool                 isFinal)
{
    Response rsp;
    rsp.makePrivilegeList(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverOutGroup(
        const Group& response,
        bool         isFinal)
{
    Response rsp;
    rsp.makeOutGroup(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverDeptChain(
        const bsl::vector<Group>& response,
        bool                      isFinal)
{
    Response rsp;
    rsp.makeDeptChain(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverDrqsGroup(
        const Group& response,
        bool         isFinal)
{
    Response rsp;
    rsp.makeDrqsGroup(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverMachineGroup(
        const bsl::string& response,
        bool               isFinal)
{
    Response rsp;
    rsp.makeMachineGroup(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverTodoList(
        const TodoList& response,
        bool            isFinal)
{
    Response rsp;
    rsp.makeTodoList(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverRelatedTicketSummary(
        const bsl::string& response,
        bool               isFinal)
{
    Response rsp;
    rsp.makeRelatedTicketSummary(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverNodeType(
        const bsl::string& response,
        bool               isFinal)
{
    Response rsp;
    rsp.makeNodeType(response);
    return d_imp_mp->deliverResponse(rsp, isFinal);
}

int RequestContext::deliverResponse(
        const Response& response,
        bool            isFinal)
{
    bael_ScopedAttribute attribute("response", response.selectionName());

    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    BAEL_LOG_DEBUG << "Delivering response: "
                      "userId = "   << userIdentification() << ", "
                      "isFinal = "  << isFinal              << ", "
                      "response = " << response.selectionName()
                   << BAEL_LOG_END;

    int rc = d_imp_mp->deliverResponse(response, isFinal);
    if (0 != rc) {
        BAEL_LOG_ERROR << "Failed to deliver response: "
                          "rc = "     << rc << ", "
                          "userId = " << userIdentification()
                       << BAEL_LOG_END;
    }

    return rc;
}

int RequestContext::deliverAcknowledgment()
{
    bael_ScopedAttribute attribute("response", "ACK");

    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    BAEL_LOG_DEBUG << "Delivering acknowledgment: "
                      "userId = " << userIdentification()
                   << BAEL_LOG_END;

    return d_imp_mp->deliverAcknowledgment();
}

int RequestContext::deliverError(
        const bsct::ErrorInfo& errorInfo,
        bool                   reroutableFlag)
{
    bael_ScopedAttribute attribute("response", "ERROR");

    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    BAEL_LOG_DEBUG << "Delivering error: "
                      "userId = "         << userIdentification() << ", "
                      "reroutableFlag = " << reroutableFlag       << ", "
                      "errorInfo = "      << errorInfo
                   << BAEL_LOG_END;

    return d_imp_mp->deliverError(errorInfo, reroutableFlag);
}

int RequestContext::deliverError(
        const bsct::ErrorInfo&        errorInfo,
        const bsct::RouteDescription& routeOverride)
{
    return d_imp_mp->deliverError(errorInfo, routeOverride);
}

bslma::Allocator *RequestContext::sessionAllocator() const
{
    return d_imp_mp->sessionAllocator();
}

bool RequestContext::setMimeSettings(const bsct::MimeSettings& settings)
{
    return d_imp_mp->setMimeSettings(settings);
}

void RequestContext::suppressRequestResponseLogging()
{
    d_imp_mp->suppressRequestResponseLogging();
}

// ACCESSORS

bsct::EncodingType::Value RequestContext::requestEncoding() const
{
    return d_imp_mp->requestEncoding();
}

bool RequestContext::getMimeSettings(bsct::MimeSettings *result) const
{
    return d_imp_mp->getMimeSettings(result);
}

bool RequestContext::isOneWayRequest() const
{
    return d_imp_mp->isOneWayRequest();
}

bool RequestContext::isAckRequested() const
{
    return d_imp_mp->isAckRequested();
}

void RequestContext::loadRequestTrace(bsct::RequestTrace *result) const
{
    d_imp_mp->loadRequestTrace(result);
}

const bsct::UserIdentification& RequestContext::userIdentification() const
{
    return d_imp_mp->userIdentification();
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
// ------------------------------ END-OF-FILE ---------------------------------
