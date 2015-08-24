#include <s_breguisvc_breg_v3_checker.h>
#include <sstream>
#include <string>
#include <algorithm>

namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3checker{

    bool isValueSame(std::string *diff,
                     const s_breguisvc::EntryValue& ifmxVal,
                     const s_breguisvc::EntryValue& cdb2Val,
                     bool isProdValue)
    {
        bool same = true;
        std::ostringstream ss;
        if (ifmxVal.entryId() != cdb2Val.entryId()) {
            ss << "entryId(ifmx " << ifmxVal.entryId() << ",cdb2 "
               << cdb2Val.entryId() << ")";
            same = false;
        }
        else if (ifmxVal.version() != cdb2Val.version() && isProdValue) {
            ss << "version(ifmx " << ifmxVal.version() << ",cdb2 "
               << cdb2Val.version() << ")";
            same = false;
        }
        else if (ifmxVal.isObsolete() != cdb2Val.isObsolete()) {
            ss << "isObsolete(ifmx " << ifmxVal.isObsolete() << ",cdb2 "
               << cdb2Val.isObsolete() << ")";
            same = false;
        }
        /*
        else if (ifmxVal.isSharedMemory() != cdb2Val.isSharedMemory()) {
            ss << "isSharedMemory(ifmx " << ifmxVal.isSharedMemory() 
               << ",cdb2 " << cdb2Val.isSharedMemory() << ")";
            same = false;
        }
        */
        else if (ifmxVal.entryData() != cdb2Val.entryData()) {
                ss << "entryData(ifmx " << ifmxVal.entryData() 
                   << ",cdb2 " << cdb2Val.entryData() << ")";
                same = false;
        }
        else {
            int ifmx_overrides_count = ifmxVal.entryOverrides().size();
            int cdb2_overrides_count = cdb2Val.entryOverrides().size();
            if (ifmx_overrides_count != cdb2_overrides_count) {
                ss << "overrideCount(ifmx " << ifmx_overrides_count
                   << ",cdb2 " << cdb2_overrides_count << ")";
                same = false;
            }
            else {
                for (int i = 0; i < ifmx_overrides_count; ++i) {
                    if (std::find(cdb2Val.entryOverrides().begin(),
                                  cdb2Val.entryOverrides().end(),
                                  ifmxVal.entryOverrides()[i]) ==  
                        cdb2Val.entryOverrides().end()) {
                        ss << "override(ifmx " << ifmxVal.entryOverrides()[i]
                           << ") not found in cdb2";
                        same = false;
                        break;
                    }

                    if (std::find(ifmxVal.entryOverrides().begin(),
                                  ifmxVal.entryOverrides().end(),
                                  cdb2Val.entryOverrides()[i]) ==  
                        ifmxVal.entryOverrides().end()) {
                        ss << "override(cdb2 " << ifmxVal.entryOverrides()[i]
                           << ") not found in ifmx";
                        same = false;
                        break;
                    }
                }
            }
        }

        if (!same || !isProdValue) {
            *diff = ss.str();
            return same;
        }

        /*
        const s_breguisvc::AuditRecord& ifmxAudit = ifmxVal.auditRecord();
        const s_breguisvc::AuditRecord& cdb2Audit = cdb2Val.auditRecord();

        if (ifmxAudit.prqsNumber() != cdb2Audit.prqsNumber()) {
            ss << "prqsNum(ifmx " << ifmxAudit.prqsNumber() << ",cdb2 "
               << cdb2Audit.prqsNumber() << ")";
            same = false;
        }
        else if (ifmxAudit.prqsStatus() != cdb2Audit.prqsStatus()) {
            ss << "prqsStatus(ifmx " << ifmxAudit.prqsStatus() << ",cdb2 "
               << cdb2Audit.prqsStatus() << ")";
            same = false;
        }
        else if (ifmxAudit.uuid() != cdb2Audit.uuid()) {
            ss << "updateUuid(ifmx " << ifmxAudit.uuid() << ",cdb2 "
               << cdb2Audit.uuid() << ")";
            same = false;
        }
        else if (ifmxAudit.ticketType() != cdb2Audit.ticketType()) {
            ss << "ticketType(ifmx " << ifmxAudit.ticketType() << ",cdb2 "
               << cdb2Audit.ticketType() << ")";
            same = false;
        }
        else if (ifmxAudit.ticketNumber() != cdb2Audit.ticketNumber()) {
            ss << "ticketNum(ifmx " << ifmxAudit.ticketNumber() << ",cdb2 "
               << cdb2Audit.ticketNumber() << ")";
            same = false;
        }
        */

        *diff = ss.str();
        return same;
    }


} //end namespace bregv3checker
} //end namespace s_breguisvc
} //end namespace BloombergLP

