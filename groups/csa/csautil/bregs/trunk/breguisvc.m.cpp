// s_breguisvc.m.cpp   -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(breguisvc_m_cpp,"$Id$ $CSID$ $CCId$")

#include <s_breguisvc_buildopts.h>
#include <s_breguisvc_entry.h>
#include <s_breguisvc_requestrouter.h>
#include <s_breguisvc_version.h>

#ifndef BAS_NOBBENV
#ifndef INCLUDED_A_BASFS_SERVICEOFFLINE
#include <a_basfs_serviceoffline.h>
#endif
#else
#ifndef INCLUDED_BASSVC_SERVICEOFFLINE
#include <bassvc_serviceoffline.h>
#endif
#endif

#include <bassvc_servicemanifest.h>

#include <baea_commandline.h>
#include <bael_log.h>

#include <bcem_aggregate.h>
#include <bsl_memory.h>
#include <bcema_testallocator.h>

#include <bdesu_processutil.h>

#include <bdema_allocator.h>
#include <bdema_default.h>
#include <bdema_defaultallocatorguard.h>
#include <bsls_assert.h>
#include <bsls_platform.h>

#ifndef BAS_NOBBENV
#include <f77override.h>
#endif

#if defined(BSLS_PLATFORM__OS_UNIX)
#include <signal.h>
#endif

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>

#include <prqstask.h>

using namespace BloombergLP;

const char CONFIG_SCHEMA[] =
"<?xml version='1.0' encoding='UTF-8'?>"
"<schema xmlns='http://www.w3.org/2001/XMLSchema'"
"        xmlns:bdem='http://bloomberg.com/schemas/bdem'"
"        xmlns:tns='urn:x-bloomberg-com:BAS.services.trantsvc'"
"        targetNamespace='urn:x-bloomberg-com:BAS.services.trantsvc'"
"        bdem:configuration='true'"
"        elementFormDefault='qualified'>"
""
"  <include schemaLocation='bascfg.xsd' bdem:inline='0'/>"
""
"  <complexType name='Configuration'>"
"    <sequence>"
"      <element name='BasConfig' type='tns:BasConfig'/>"
""
"<!-- Specify additional application-level configuration elements here. -->"
""
"    </sequence>"
"  </complexType>"
""
"  <element name='Configuration' type='tns:Configuration'/>"
"</schema>"
;

const char LOG_CATEGORY[] = "BREGUISVC";

#ifdef BAS_NOBBENV
typedef bassvc::ServiceOffline  ServiceOffline;
#else
typedef a_basfs::ServiceOffline ServiceOffline;
#endif

static
void ignoreSigpipe()
{
#ifdef BDES_PLATFORM__OS_UNIX
    // Ignore SIGPIPE on Unix platforms.
    struct sigaction sa;
    ::sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sa.sa_handler = SIG_IGN;
    if (0 != ::sigaction(SIGPIPE, &sa, NULL)) {
        std::cerr << "Failed to ignore SIGPIPE!"
                  << std::endl;
    }
#endif
}

static
void printBanner(const char *action, const char **argv)
{
    std::cout << action
              << " BAS SERVICE ["
              << bdesu_ProcessUtil::getProcessId()
              << "]: ";
    const char **arg = argv;
    while (*arg) {
        std::cout << *arg << ' ';
        ++arg;
    }
    std::cout << std::endl;
}

static
void initBBEnvModules(int argc, const char **argv)
{
#ifndef BAS_NOBBENV
    f77override(argc, const_cast<char**>(argv));
#endif
}

int main(int argc, const char *argv[]) {
    ignoreSigpipe();
    printBanner("STARTING", argv);
    initBBEnvModules(argc, argv);

    typedef baea_CommandLineOptionType OptionType;
    try {
        std::string configFilename;
        bool        debugMemoryFlag = false;
        bool        debugFlag       = false;
        baea_CommandLineOptionInfo specTable[] = {
            {
                "l|logfile",
                "logfile",
                "logging file name",
                baea_CommandLineTypeInfo(OptionType::BAEA_STRING)
            },
            {
                "t|taskname",
                "taskname",
                "BENV taskname to accept M traps",
                baea_CommandLineTypeInfo(OptionType::BAEA_STRING),
            },
            {
                "r|routingInstance",
                "routingInstance",
                "instance number",
                baea_CommandLineTypeInfo(baea_CommandLineOptionType::BAEA_INT),
            },
            {
                "v|verbosity",
                "verbosity",
                "initial verbosity for the logger",
                baea_CommandLineTypeInfo(OptionType::BAEA_INT),
            },
            {
                "M|debugMemory",
                "debugMemory",
                "use test allocator to detect memory leaks",
                baea_CommandLineTypeInfo(&debugMemoryFlag),
            },
            {
                "d|debug",
                "debug",
                "set BREGUISVC logging categories to DEBUG",
                baea_CommandLineTypeInfo(&debugFlag),
            },
            {
                "",
                "filename",
                "configuration file name",
                baea_CommandLineTypeInfo(&configFilename),
                baea_CommandLineOccurrenceInfo::REQUIRED,
            },
        };

        baea_CommandLine commandLine(specTable);
        if (commandLine.parse(argc, argv)) {
            commandLine.printUsage();
            return 1;
        }

        bcema_TestAllocator  sa("breguisvc.allocator", 0);
        bcema_TestAllocator  da("default.allocator", 0);
        bdema_Allocator     *serviceAllocator = (debugMemoryFlag)
                                          ? &sa
                                          : bdema_Default::defaultAllocator();
        bdema_Allocator     *defaultAllocator = (debugMemoryFlag)
                                          ? &da
                                          : bdema_Default::defaultAllocator();
        bdema_DefaultAllocatorGuard allocatorGuard(defaultAllocator);

        ServiceOffline serviceOffline(serviceAllocator);

        if (serviceOffline.configure(configFilename.c_str(),
                                     CONFIG_SCHEMA,
                                     commandLine))
        {
            return 2;
        }
        BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

        if (debugFlag) {
            serviceOffline.offline().loggerManager().setStdoutThreshold(4);
            serviceOffline.offline()
                          .setCategoryVerbosityLevel("BREGUISVC", 4);
        }

        bcem_Aggregate configuration = serviceOffline.configuration();

        bcem_Aggregate services = configuration.field("BasConfig",
                                                      "ServiceInstance");
        for (int i = 0; i < services.length(); ++i) {
            bcem_Aggregate service = services[i];

            const std::string SERVICE_NAME = service.field("Name").asString();

            bsl::shared_ptr<s_breguisvc::RequestRouter> router_sp;
            bassvc::ServiceManifest                     manifest;
            int rc = s_breguisvc::Entry::createService(&router_sp,
                                                       &manifest,
                                                       SERVICE_NAME,
                                                       configuration,
                                                       serviceAllocator);
            if (0 != rc) {
                BAEL_LOG_ERROR << "Failed to create service "
                                  "'"       << SERVICE_NAME << "'"
                                  ": rc = " << rc
                               << BAEL_LOG_END;
                return 3;
            }

            rc = serviceOffline.registerService(SERVICE_NAME,
                                                manifest,
                                                router_sp);
            if (0 != rc) {
                BAEL_LOG_ERROR << "Failed to register service "
                                  "'"       << SERVICE_NAME << "'"
                                  ": rc = " << rc
                               << BAEL_LOG_END;
                return 4;
            }
        }

        prqs_isgrabber(PRQS_TASK_IS_OFFLINE);
        int rc = serviceOffline.run();
        if (0 != rc) {
            BAEL_LOG_ERROR << "Failed to start service: "
                           << "rc = " << rc
                           << BAEL_LOG_END;
            return 5;
        }
    }
    catch (std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
        return 6;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred" << std::endl;
        return 7;
    }
    printBanner("STOPPING", argv);
    return 0;
}

// GENERATED BY BLP_BAS_CODEGEN_3.8.4 Wed Apr 22 09:48:00 2015
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2010
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------ END-OF-FILE ---------------------------------
