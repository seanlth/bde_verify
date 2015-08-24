// s_breguisvc_entry.cpp      -- GENERATED FILE - DO NOT EDIT --      -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(s_breguisvc_entry_cpp,"$Id$ $CSID$")

#include <s_breguisvc_entry.h>
#include <s_breguisvc_manifest.h>
#include <s_breguisvc_requestprocessor.h>
#include <s_breguisvc_requestrouter.h>

#include <bassvc_aggregaterequestrouter.h>
#include <bassvc_servicemanifest.h>

#ifndef BAS_AGGREGATE_ROUTER
#include <bassvc_requestrouteradapter.h>
#endif

#include <bael_log.h>

#include <bcem_aggregate.h>

#include <bslma_managedptr.h>
#include <bsls_assert.h>
#include <bdema_default.h>

#include <iostream>
#include <stdexcept>

namespace BloombergLP {
namespace s_breguisvc {

namespace {

int createServiceImpl(
        bsl::shared_ptr<RequestRouter> *requestRouter,
        bassvc::ServiceManifest        *manifest,
        const std::string              *serviceName,
        const bcem_Aggregate&           configuration,
        bdema_Allocator                *basicAllocator)
{
    BSLS_ASSERT(requestRouter);

    if (manifest) {
        manifest->reset();
        manifest->majorVersion()    = Manifest::majorVersion();
        manifest->minorVersion()    = Manifest::minorVersion();
        manifest->schemaNamespace() = Manifest::schemaNamespace();
        manifest->requestElement()  = Manifest::requestElement();
        manifest->responseElement() = Manifest::responseElement();
    }

    bdema_Allocator *allocator = bdema_Default::allocator(basicAllocator);

    if (0 != serviceName) {
        RequestProcessor *processor = new (*allocator)
                RequestProcessor(*serviceName, configuration, allocator);

        bslma::ManagedPtr<RequestProcessor>
                processor_mp(processor, allocator);

        requestRouter->load(
                new (*allocator)
                    RequestRouter(processor_mp,
                                  *serviceName,
                                  configuration,
                                  allocator),
                allocator);
    }
    else {
        RequestProcessor *processor = new (*allocator)
                RequestProcessor(configuration, allocator);

        bslma::ManagedPtr<RequestProcessor>
                processor_mp(processor, allocator);

        requestRouter->load(
                new (*allocator)
                    RequestRouter(processor_mp,
                                  configuration,
                                  allocator),
                allocator);
    }

    return 0;
}
}  // close unnamed namespace

                                // ------------
                                // struct Entry
                                // ------------

int Entry::createService(
        bsl::shared_ptr<RequestRouter> *requestRouter,
        bassvc::ServiceManifest        *manifest,
        const std::string&              serviceName,
        const bcem_Aggregate&           configuration,
        bdema_Allocator                *basicAllocator)
{
    return createServiceImpl(requestRouter,
                             manifest,
                             &serviceName,
                             configuration,
                             basicAllocator);
}

int Entry::createService(
        bsl::shared_ptr<BuildOpts::RequestRouter> *requestRouter,
        bassvc::ServiceManifest                   *manifest,
        const bcem_Aggregate&                      configuration,
        bdema_Allocator                           *basicAllocator)
{
    bsl::shared_ptr<RequestRouter> router_sp;
    int rc = createServiceImpl(&router_sp,
                               manifest,
                               0,
                               configuration,
                               basicAllocator);
    if (0 == rc) {
        *requestRouter = router_sp;
    }
    return rc;
}

}  // close namespace s_breguisvc

int s_breguisvc_Entry__createService(
        bsl::shared_ptr<bassvc::AggregateRequestRouter> *requestRouter,
        bassvc::ServiceManifest                         *manifest,
        const bcem_Aggregate&                            configuration,
        bdema_Allocator                                 *basicAllocator)
{
    BAEL_LOG_SET_CATEGORY("BREGUISVC.ENTRY");

    int rc = 0;

    try {
        bsl::shared_ptr<s_breguisvc::BuildOpts::RequestRouter> router_sp;
        rc = s_breguisvc::Entry::createService(&router_sp,
                                               manifest,
                                               configuration,
                                               basicAllocator);
        if (0 == rc) {
#ifndef BAS_AGGREGATE_ROUTER
            bsl::shared_ptr<bassvc::RequestRouterAdapter> adapter_sp;
            adapter_sp.createInplace(basicAllocator, router_sp);
            *requestRouter = adapter_sp;
#else
            *requestRouter = router_sp;
#endif
        }
    }
    catch(std::exception& e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        rc = 1;
    }
    catch(...) {
        BAEL_LOG_ERROR << "Unknown exception occurred" << BAEL_LOG_END;
        rc = 2;
    }

    return rc;
}

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
