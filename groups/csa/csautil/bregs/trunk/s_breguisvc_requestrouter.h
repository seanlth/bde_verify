// s_breguisvc_requestrouter.h   -- GENERATED FILE - DO NOT EDIT --   -*-C++-*-
#ifndef INCLUDED_S_BREGUISVC_REQUESTROUTER
#define INCLUDED_S_BREGUISVC_REQUESTROUTER

#ifndef INCLUDED_BDES_IDENT
#include <bdes_ident.h>
#endif
BDES_IDENT_RCSID(s_breguisvc_requestrouter_h,"$Id$ $CSID$")
BDES_IDENT_PRAGMA_ONCE

//@PURPOSE: Provide a BREGUISVC service request router.
//
//@CLASSES:
// s_breguisvc::RequestRouter: a BREGUISVC service request router
//
//@SEE_ALSO: bassvc_requestrouter
//
//@AUTHOR: Hong SHI (hshi2@bloomberg.net)
//
//@DESCRIPTION: This class provides a concrete implementation of the
// 'bassvc::RequestRouter' protocol to marshall and route breguisvc service
// messages between the BAS framework and the application-level request
// processor.

#ifndef INCLUDED_S_BREGUISVC_VERSION
#include <s_breguisvc_version.h>
#endif

#ifndef INCLUDED_S_BREGUISVC_BUILDOPTS
#include <s_breguisvc_buildopts.h>
#endif

#ifndef INCLUDED_S_BREGUISVC_MESSAGES
#include <s_breguisvc_messages.h>
#endif

#ifndef INCLUDED_BSLMF_NESTEDTRAITDECLARATION
#include <bslmf_nestedtraitdeclaration.h>
#endif

#ifndef INCLUDED_BSLMA_USESBSLMAALLOCATOR
#include <bslma_usesbslmaallocator.h>
#endif

#ifndef INCLUDED_BSLMA_MANAGEDPTR
#include <bslma_managedptr.h>
#endif

#ifndef INCLUDED_BSL_STRING
#include <bsl_string.h>
#endif

#ifndef INCLUDED_BSLFWD_BSLMA_ALLOCATOR
#include <bslfwd_bslma_allocator.h>
#endif

namespace BloombergLP {

class bcem_Aggregate;

namespace basapi { class CodecOptions; }

namespace s_breguisvc { class RequestContext; }
namespace s_breguisvc { class RequestProcessor; }
namespace s_breguisvc {

                            // ===================
                            // class RequestRouter
                            // ===================

class RequestRouter : public BuildOpts::RequestRouter {
    // This class provides a concrete implementation of the
    // 'bassvc::RequestRouter' protocol to marshall and route breguisvc service
    // messages between the BAS framework and the application-level request
    // processor.

    // PRIVATE TYPES
    typedef BuildOpts::RequestRouterImp        RequestRouterImp;
    typedef bslma::ManagedPtr<RequestProcessor> RequestProcessorMptr;

    // INSTANCE DATA
    RequestRouterImp     *d_imp_p;                // implementation (owned)
    RequestProcessorMptr  d_requestProcessor_mp;  // request processor
    bsl::string           d_metricsCategory;      // metrics category name
    bslma::Allocator      *d_allocator_p;          // supply memory (held)

    // PRIVATE MANIPULATORS
    void dispatchRequest(
            bslma::ManagedPtr<Request>& request,
            bslma::ManagedPtr<RequestContext>& context);
        // Dispatch the specified 'request', accompanied by the specified
        // 'context', to the appropriate application-level processing routine.

  private:
    // NOT IMPLEMENTED
    RequestRouter(const RequestRouter&);
    RequestRouter& operator=(const RequestRouter&);

  public:
    // TRAITS
    BSLMF_NESTED_TRAIT_DECLARATION(RequestRouter,
                                   bslma::UsesBslmaAllocator);

    // CREATORS
    RequestRouter(bslma::ManagedPtr<RequestProcessor>&  processor,
                  const bcem_Aggregate&                configuration,
                  bslma::Allocator                    *basicAllocator = 0);
        // Create a request route, configured from the specified
        // 'configuration', that routes requests to the specified 'processor'.
        // Optionally specify a 'basicAllocator' used to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    RequestRouter(bslma::ManagedPtr<RequestProcessor>&  processor,
                  const bsl::string&                   serviceName,
                  const bcem_Aggregate&                configuration,
                  bslma::Allocator                    *basicAllocator = 0);
        // Create a request route, configured from the specified 'serviceName'
        // and 'configuration', that routes requests to the specified
        // 'processor'.  Optionally specify a 'basicAllocator' used to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    ~RequestRouter();
        // Destroy this object.

    // MANIPULATORS
    virtual void processRequest(
            bslma::ManagedPtr<BuildOpts::RawRequest>&      rawRequest,
            bslma::ManagedPtr<BuildOpts::RequestContext>&  context);
        // Process the specified 'rawRequest' and deliver response(s) and/or
        // errors, if any, through the specified 'context'.  If no response
        // and/or errors are delivered through the context and the context
        // is destroyed, the framework will generate a non-reroutable error.

    virtual void processControlEvent(
            const bassvc::RequestProcessorControlEvent& event);
        // Process the specified 'event' in a synchronous fashion.

    RequestProcessor& processor();
        // Return a modifiable reference to the request processor managed by
        // this object.
};

// ============================================================================
//                          INLINE FUNCTION DEFINITIONS
// ============================================================================

// MANIPULATORS
inline
RequestProcessor& RequestRouter::processor()
{
    return *d_requestProcessor_mp;
}

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
