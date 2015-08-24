// s_breguisvc_requestcontext.h  -- GENERATED FILE - DO NOT EDIT --   -*-C++-*-
#ifndef INCLUDED_S_BREGUISVC_REQUESTCONTEXT
#define INCLUDED_S_BREGUISVC_REQUESTCONTEXT

#ifndef INCLUDED_BDES_IDENT
#include <bdes_ident.h>
#endif
BDES_IDENT_RCSID(s_breguisvc_requestcontext_h,"$Id$ $CSID$")
BDES_IDENT_PRAGMA_ONCE

//@PURPOSE: Provide a context for processing BREGUISVC service requests.
//
//@CLASSES:
// s_breguisvc::RequestContext: a context for processing BREGUISVC service requests
//
//@SEE_ALSO: bassvc_aggregaterequestcontext, bassvc_requestcontext
//
//@AUTHOR: Hong SHI (hshi2@bloomberg.net)
//
///Usage Examples
///--------------
// TBD
//..
//..

#ifndef INCLUDED_S_BREGUISVC_VERSION
#include <s_breguisvc_version.h>
#endif

#ifndef INCLUDED_S_BREGUISVC_BUILDOPTS
#include <s_breguisvc_buildopts.h>
#endif

#ifndef INCLUDED_S_BREGUISVC_MESSAGES
#include <s_breguisvc_messages.h>
#endif

#ifndef INCLUDED_BSCT_ENCODINGTYPE
#include <bsct_encodingtype.h>
#endif

#ifndef INCLUDED_BSLMA_MANAGEDPTR
#include <bslma_managedptr.h>
#endif

#ifndef INCLUDED_BSLMF_NESTEDTRAITDECLARATION
#include <bslmf_nestedtraitdeclaration.h>
#endif

#ifndef INCLUDED_BSLMA_USESBSLMAALLOCATOR
#include <bslma_usesbslmaallocator.h>
#endif

#ifndef INCLUDED_BSLFWD_BSLMA_ALLOCATOR
#include <bslfwd_bslma_allocator.h>
#endif

namespace BloombergLP {

namespace bsct { class ErrorInfo; }
namespace bsct { class MimeSettings; }
namespace bsct { class RouteDescription; }
namespace bsct { class UserIdentification; }

namespace s_breguisvc {

                            // ====================
                            // class RequestContext
                            // ====================

class RequestContext {
    // This class defines a context for processing requests.  It contains
    // information about the request originator, available through the
    // 'userInformation' method, as well as information about the request
    // itself, such as the request encoding type, the type of response
    // expected, and so on.  The class also provides various "delivery"
    // methods, which are used to deliver a particular type of response.  Each
    // delivery method takes an optional 'isFinal' argument, which, if set to
    // 'false', allows the request processor to deliver multiple responses (the
    // last of which must be sent with 'isFinal' set to 'true').

    // INSTANCE DATA
    bslma::ManagedPtr<BuildOpts::RequestContext> d_imp_mp;  // implementation

  private:
    // NOT IMPLEMENTED
    RequestContext(const RequestContext& original);
    RequestContext& operator=(const RequestContext& rhs);

  public:
    // TRAITS
    BSLMF_NESTED_TRAIT_DECLARATION(RequestContext,
                                   bslma::UsesBslmaAllocator);

    // CREATORS
    explicit
    RequestContext(
            bslma::ManagedPtr<BuildOpts::RequestContext>&  context,
            bslma::Allocator                              *basicAllocator = 0);
        // Create a request context implemented with the specified 'context'.
        // Optionally specify a 'basicAllocator', used to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    ~RequestContext();
        // Destroy this object.

    // MANIPULATORS 
    int deliverErrorResponse(
            const ErrorInfoResponse& response,
            bool                     isFinal = true);

    int deliverNodeTree(
            const bsl::vector<Node>& response,
            bool                     isFinal = true);

    int deliverNodeDetails(
            const NodeDetails& response,
            bool               isFinal = true);

    int deliverNodeId(
            int response,
            bool isFinal = true);

    int deliverValues(
            const bsl::vector<BregValue>& response,
            bool                          isFinal = true);

    int deliverNodeInfo(
            const NodeInfo& response,
            bool            isFinal = true);

    int deliverEntryInfo(
            const EntryInfo& response,
            bool             isFinal = true);

    int deliverRegistryInfo(
            const RegistryInfo& response,
            bool                isFinal = true);

    int deliverEntryValue(
            const EntryValue& response,
            bool              isFinal = true);

    int deliverEntrySubscribers(
            const EntrySubscribers& response,
            bool                    isFinal = true);

    int deliverVersionHistory(
            const bsl::vector<VersionTsp>& response,
            bool                           isFinal = true);

    int deliverPrivilegeList(
            const PrivilegeList& response,
            bool                 isFinal = true);

    int deliverOutGroup(
            const Group& response,
            bool         isFinal = true);

    int deliverDeptChain(
            const bsl::vector<Group>& response,
            bool                      isFinal = true);

    int deliverDrqsGroup(
            const Group& response,
            bool         isFinal = true);

    int deliverMachineGroup(
            const bsl::string& response,
            bool               isFinal = true);

    int deliverTodoList(
            const TodoList& response,
            bool            isFinal = true);

    int deliverRelatedTicketSummary(
            const bsl::string& response,
            bool               isFinal = true);

    int deliverNodeType(
            const bsl::string& response,
            bool               isFinal = true);

    int deliverResponse(
            const Response& response,
            bool            isFinal = true);
        // Translate the specified 'response' into an abstraction understood by
        // the underlying I/O layer (e.g., 'bcema_Blob'), and deliver it to the
        // underlying raw data handler.  Optionally specify 'isFinal', used to
        // identify whether this response is the final response to the request
        // associated with this context.  Return 0 on success, and a non-zero
        // value otherwise.  If 'isFinal' is 'false', then the specified
        // 'payload' is considered to be one of a series of responses, and this
        // object can be used in the future to send another response to the
        // associated request.  Otherwise, a user cannot call any flavor of
        // 'deliverResponse'.

    int deliverAcknowledgment();
       // Deliver to the client an acknowledgment that the request was
       // processed.  Return 0 on success, and a non-zero value otherwise.
       // Note that this method will fail unless the client requested an
       // acknowledgment.

    int deliverError(const bsct::ErrorInfo& errorInfo,
                     bool                   reroutableFlag = false);
        // Deliver the specified 'errorInfo' error message to the client with
        // the optionally specified 'reroutableFlag' value.  Return 0 on
        // success, and a non-zero value otherwise.

    int deliverError(const bsct::ErrorInfo&        errorInfo,
                     const bsct::RouteDescription& routeOverride);
        // Deliver the specified 'errorInfo' error message to the client and
        // include the specified 'routeOverride' in the message, to be used
        // by the client to control the rerouting.  The reroutable flag will be
        // set to 'true'.  Return 0 on success, and a non-zero value otherwise.

    bslma::Allocator *sessionAllocator() const;
        // Return the allocator used to allocate this object.  The allocator
        // returned by this method is guaranteed to remain valid for the
        // lifetime of this object.  In particular, the returned allocator may
        // be used to allocate storage for this request context object, which
        // may then be associated with a callback method provided to an
        // asynchronous API.

    bool setMimeSettings(const bsct::MimeSettings& settings);
        // Set the MIME related information associated with the current
        // request to 'settings'.  Return 'true' on success, or 'false'
        // otherwise.  On failure, the context's MIME settings are undefined.

    void suppressRequestResponseLogging();
        // Suppress debug (RSTATS) logging of request/response data in all
        // responses and acknowledgements subsequently sent through this
        // context.

    // ACCESSORS
    bsct::EncodingType::Value requestEncoding() const;
        // Return the encoding of the request described this context.

    bool getMimeSettings(bsct::MimeSettings *result) const;
        // Load into the specified 'result' the MIME related information
        // associated with the current request.  Return 'true' on success, or
        // 'false', with no effect on 'result', if the request has no MIME
        // information.

    bool isOneWayRequest() const;
        // Return 'true' if the request described by this context is a one way
        // request, or 'false' otherwise.

    bool isAckRequested() const;
        // Returns true if and only if the request is a one-way request, and
        // the client has requested that an acknowledgment be sent.

    void loadRequestTrace(bsct::RequestTrace *result) const;
    // Load into the specified 'result' the request trace data associated
    // with the current request.

    const bsct::UserIdentification& userIdentification() const;
        // Return a reference to the non-modifiable information about the
        // originator of the request.
};

// ============================================================================
//                          INLINE FUNCTION DEFINITIONS
// ============================================================================

}  // close namespace s_breguisvc
}  // close namespace BloombergLP
#endif

// GENERATED BY BLP_BAS_CODEGEN_3.8.4 Wed Apr 22 09:48:00 2015
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2012
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------ END-OF-FILE ---------------------------------
