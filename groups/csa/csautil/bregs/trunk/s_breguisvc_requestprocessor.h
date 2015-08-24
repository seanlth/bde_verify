// s_breguisvc_requestprocessor.h                                     -*-C++-*-
#ifndef INCLUDED_S_BREGUISVC_REQUESTPROCESSOR
#define INCLUDED_S_BREGUISVC_REQUESTPROCESSOR

#ifndef INCLUDED_BDES_IDENT
#include <bdes_ident.h>
#endif
BDES_IDENT_RCSID(s_breguisvc_requestprocessor_h,"$Id$ $CSID$")
BDES_IDENT_PRAGMA_ONCE

//@PURPOSE: Provide a BREGUISVC service request processor.
//
//@CLASSES:
// s_breguisvc::RequestProcessor: a request processor for the BREGUISVC service
//
//@AUTHOR: Zheng LIN (zlin1@bloomberg.net)
//
//@DESCRIPTION: Provide a BREGUISVC service request processor.
// Individual application-level requests are handled in like-named 'processXXX'
// methods.  Responses (including application-level errors) are returned
// through the associated 'context'.  Both requests and contexts may be cached
// if asynchronous processing is required.  However, all cached request and
// response data must be released when the STOP event is received.

#ifndef INCLUDED_S_BREGUISVC_VERSION
#include <s_breguisvc_version.h>
#endif

#ifndef INCLUDED_S_BREGUISVC_MESSAGES
#include <s_breguisvc_messages.h>
#endif

#ifndef INCLUDED_BCEM_AGGREGATE
#include <bcem_aggregate.h>
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

#ifndef INCLUDED_STRING
#include <string>
#endif

#ifndef INCLUDED_BSLFWD_BSLMA_ALLOCATOR
#include <bslfwd_bslma_allocator.h>
#endif

namespace BloombergLP {

namespace bassvc { class RequestProcessorControlEvent; }

namespace s_breguisvc { class RequestContext; }
namespace s_breguisvc {

                           // ======================
                           // class RequestProcessor
                           // ======================

class RequestProcessor {
    // This class provides a breguisvc service request processor.  Individual
    // application-level requests are handled in like-named 'processXXX'
    // methods.  Responses (including application-level errors) are returned
    // through the associated 'context'.  Both requests and contexts may be
    // cached if asynchronous processing is required.

    // INSTANCE DATA
    bdema_Allocator *d_allocator_p;      // memory allocator (held)
    bcem_Aggregate   d_configuration;    // configuration object
    std::string      d_metricsCategory;  // metrics category name

  private:
    // NOT IMPLEMENTED
    RequestProcessor(const RequestProcessor&);
    RequestProcessor& operator=(const RequestProcessor&);

  public:
    // TRAITS
    BSLMF_NESTED_TRAIT_DECLARATION(RequestProcessor,
                                   bslma::UsesBslmaAllocator);

    // CREATORS
    explicit
    RequestProcessor(const bcem_Aggregate&  configuration,
                     bdema_Allocator       *basicAllocator = 0);
        // Create a request processor initialized with the specified
        // 'configuration'.  Optionally specify a 'basicAllocator' used to
        // supply memory.  If 'basicAllocator' is 0, the currently-installed
        // default allocator is used.

    RequestProcessor(const std::string&     serviceName,
                     const bcem_Aggregate&  configuration,
                     bdema_Allocator       *basicAllocator = 0);
        // Create a request processor initialized with the specified
        // 'serviceName' and 'configuration'.  Optionally specify a
        // 'basicAllocator' used to supply memory.  If 'basicAllocator' is 0,
        // the currently-installed default allocator is used.

    ~RequestProcessor();
        // Destroy this object.

    // MANIPULATORS
    // ---------- DO NOT EDIT BELOW THIS LINE EXCEPT TO ADD PARAMETERS --------
    // Control Events
    void processControlEvent(
            const bassvc::RequestProcessorControlEvent& event);
        // Process the specified 'event' in a synchronous fashion.  Any state
        // held by the request processor (e.g., requests and request contexts)
        // must be cleaned up when the STOP event is received.

    // Messages
    void processGetTree(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetExpandedTree(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetDefaultTree(
            bslma::ManagedPtr<Void>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetChildren(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetDefaultNode(
            bslma::ManagedPtr<Void>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetNodeDetails(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSetDefaultNode(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSearchByName(
            bslma::ManagedPtr<bsl::string>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSearchById(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSearchByAccessor(
            bslma::ManagedPtr<bsl::string>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSearchByContacts(
            bslma::ManagedPtr<SearchByContacts>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSearchByKeywords(
            bslma::ManagedPtr<SearchByKeywords>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processSearchByDrqsGroup(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processIsDeleted(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetBregValues(
            bslma::ManagedPtr<GetBregValuesRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetRegistry(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetEntryValue(
            bslma::ManagedPtr<ValueRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetSubscribers(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetVersionHistory(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processUpdateRegistry(
            bslma::ManagedPtr<RegistryInfo>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processDeleteNode(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processMoveRegistry(
            bslma::ManagedPtr<MoveRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processUpdateContact(
            bslma::ManagedPtr<UpdateContactRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetPrivilegeList(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processUpdateSubscribers(
            bslma::ManagedPtr<EntrySubscribers>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processUpdatePrivileges(
            bslma::ManagedPtr<PrivilegeList>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetOutGroup(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetDeptChain(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetDrqsGroup(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processUpdateDevValue(
            bslma::ManagedPtr<EntryValue>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetMachineGroupName(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processValidateOverride(
            bslma::ManagedPtr<OverrideInfo>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGenerateCode(
            bslma::ManagedPtr<GenerateCodeRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processReleaseCode(
            bslma::ManagedPtr<BregChangeRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetTodoList(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetRelatedTicket(
            bslma::ManagedPtr<RelatedTicketRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGetNodeType(
            int                               request,
            bslma::ManagedPtr<RequestContext>& context);
    void processChangeBreg(
            bslma::ManagedPtr<BregChangeRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processValidatePrqsApprover(
            bslma::ManagedPtr<BregChangeRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processGenerateReleaseCode(
            bslma::ManagedPtr<BregChangeRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
    void processMarkForDeletion(
            bslma::ManagedPtr<MarkForDeletionRequest>& request,
            bslma::ManagedPtr<RequestContext>& context);
        // Process the specified 'request'.  Return any responses via the
        // specified 'context'.
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
// ------------------------------- END-OF-FILE --------------------------------
