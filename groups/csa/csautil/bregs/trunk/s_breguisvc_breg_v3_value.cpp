#include <s_breguisvc_breg_v3_value.h>
#include <s_breguisvc_helpers_v3.h>

#include <s_brgdvsvc_messages.h>

#include <bael_log.h>
#include <bscapi_basclient.h>

#include <a_basfs_clientutil.h>
#include <basmsg_encodingtype.h>
#include <basmsg_useridentification.h>

#include <bregdb_eval.h>

#include <iostream>

extern "C"
{
#include <breg_shm.h>
#include <bitlib.h>
}


namespace BloombergLP {
namespace s_breguisvc {
namespace bregv3value {

namespace {

    const int EXTSTR_REC_LEN = 81;
    const int EXTINT_REC_LEN = 32;

    s_brgdvsvc::BregValueType::Value dbValTypeToBrgdvsvcValType(int dbValType);
    int dbValTypeToIfmxValType(int dbValType);
    void setBrgdvsvcEntry(s_brgdvsvc::BregdbRegistryEntry *svcEntry, 
                          const bregv3db::EntryDescription& dbEntry,
                          const bregv3db::DevValueAudit& dbAudit);
    void setBrgdvsvcValue(s_brgdvsvc::BregdbEntryTestValue *svcValue,
                          const bregv3db::EntryValue& dbDevValue,
                          const bregv3db::DevValueAudit& dbAudit,
                          int dbValueType);
    void setBrgdvsvcExtValue(
               std::vector<s_brgdvsvc::BregdbEntryExtTvalAry> *svcValue,
               int *actNoOfValues,
               int *version,
               const bregv3db::EntryValue& dbDevValue,
               const bregv3db::DevValueAudit& dbAudit,
               int dbValueType);
    void setBrgdvsvcValueData(s_brgdvsvc::BregValue* svcData,
                              int *actNoOfValues,
                     const bdeut_NullableValue<bregv3db::EntryData>& dbData,
                              int dbValueType);
    void setBrgdvsvcOverrides(
               std::vector<s_brgdvsvc::BregdbEntryTvalOvrd> *overrideVec,
               std::vector<s_brgdvsvc::ExtOvrValList> *extOvrVec,
               const std::vector<bregv3db::EntryOverride>& dbOverrides,
               const bregv3db::DevValueAudit& dbAudit,
               int dbValueType);
    int SendToBrgdvsvc(int uuid,
                       int isOneWay,
                       const s_brgdvsvc::Request& request,
                       s_brgdvsvc::Response* response);
    int dbOvrdTypeToBrgdvsvcOvrdType(int dbOvrdType);
}

bool saveProdInitValue(int *version, int entryId,
                       const s_breguisvc::ValueType::Value& type,
                       const s_breguisvc::EntryValue& svcValue)
{
    BAEL_LOG_SET_CATEGORY("saveProdInitValue");

    // get initial prod value from db to decide whether to add or update;
    // initial value may exist as the result of previous release failure

    bregv3db::EntryValue dbProdValue;
    bregv3db::Audit dbAudit;
    bool add_prod_value = false;

    try {
        bregv3db::DbAccessor db;
        try {
            *version = db.getMaxValueVersion(entryId);
            BAEL_LOG_DEBUG << "max prod version " << entryId << " vers "
                           << *version << BAEL_LOG_END;
            if (*version < 0) {
                *version = 0;
                add_prod_value = true;
            }
            else {
                db.getProdEntryValue(&dbProdValue, &dbAudit, 
                                     entryId, *version);
            }
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            return false;
        }

        helpers_v3::svcValueToDbValue(&dbProdValue, svcValue, type);

        const AuditRecord& svcAudit = svcValue.auditRecord();
        dbAudit.entryId() = entryId;
        dbAudit.version() = *version;
        dbAudit.eventType() = bregv3db::DbAccessor::CHANGE_PROD_VALUE;
        dbAudit.prqsNo() = 0;
        dbAudit.updateUuid() = svcAudit.uuid();
        dbAudit.updateTsp() = helpers_v3::getUpdateTime();
        dbAudit.ticketType() = svcAudit.ticketType();
        dbAudit.ticketNo() = svcAudit.ticketNumber();

        // after release bregv3db and informix should have the same version
        if (add_prod_value) {
            db.insertProdEntryValue(dbProdValue, dbAudit);
        }
        else {
            db.updateProdEntryValue(dbProdValue);
        }
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return false;
    }

    return true;
}

int propagateDevValues(const bregv3db::EntryDescription& dbEntry,
                       const bregv3db::EntryValue& dbDevValue,
                       const bregv3db::DevValueAudit& dbAudit)
{
    BAEL_LOG_SET_CATEGORY("propagateDevValues");

    int special_bits = 0;
    if (dbDevValue.isObsolete())
        bset(special_bits, BREG_OBSOLETE_BIT);
    else
        bclr(special_bits, BREG_OBSOLETE_BIT);
    
    s_brgdvsvc::BregDevelopmentValues devValues;

    s_brgdvsvc::BregValueType::Value brgdvValueType = 
        dbValTypeToBrgdvsvcValType(dbEntry.valueType());

    devValues.valueType() = brgdvValueType;
    devValues.numOverrides() = dbDevValue.entryOverrides().size();

    if (devValues.numOverrides() > 0)
        bset(special_bits, BREG_OVERRIDE_BIT);
    else
        bclr(special_bits, BREG_OVERRIDE_BIT); 
    devValues.specialBits() = special_bits;

    setBrgdvsvcEntry(&(devValues.registryEntry()), dbEntry, dbAudit);

    setBrgdvsvcValue(&(devValues.valueRec()), dbDevValue, dbAudit,
                     dbEntry.valueType());

    if (BREGDB_EXTINTLST == dbEntry.valueType() ||
        BREGDB_EXTSTR == dbEntry.valueType()) {
        setBrgdvsvcExtValue(&(devValues.extRegVal()),
                            &(devValues.valueRec().actNoOfValues()),
                            &(devValues.valueRec().versionNo()),
                            dbDevValue, dbAudit,
                            dbEntry.valueType());
    }

    setBrgdvsvcOverrides(&(devValues.overrideVal()), 
                         &(devValues.extOvrList()),
                         dbDevValue.entryOverrides(),
                         dbAudit,
                         dbEntry.valueType());
                
    BAEL_LOG_DEBUG << devValues << BAEL_LOG_END;

    s_brgdvsvc::Response response;
    s_brgdvsvc::Request  request;

    request.makeBregOneWayPropagateDevValueRequest().bregDevValues() = 
                                                                devValues;

    BAEL_LOG_INFO << "bregv3value propagate dev request " << request
                  << BAEL_LOG_END;

    int rc = SendToBrgdvsvc(dbAudit.updateUuid(),
                            1,           // one way
                            request,
                            &response);

    return rc;
}

void getProdValue(s_breguisvc::EntryValue *svcValue, int dbValueType, 
                  int entryId, int version)
{
    BAEL_LOG_SET_CATEGORY("getProdValue");

    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryValue dbValue;
        bregv3db::Audit dbAudit;
        bregv3db::EntryDescription entryDes;

        try {
            db.getEntry(&entryDes, &dbAudit, entryId);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_INFO << "Can't get entry description for " 
                << entryId << " version:" << e.what() 
                << BAEL_LOG_END;
        }
        // version = -1 when adding a new production version
        // version > 0 when loading a historical version
        int loadVersion = version;        
        if (loadVersion < 0) {
            try {
                loadVersion = db.getCurrentProdVersion(entryId);
            }
            catch (bregv3db::DbException & e) {
                loadVersion = db.getMaxValueVersion(entryId);
            }
        }

        BAEL_LOG_INFO << "load breg " << entryId << " version " 
                      << loadVersion << BAEL_LOG_END;

        db.getProdEntryValue(&dbValue, &dbAudit, entryId, loadVersion);

        helpers_v3::dbValueToSvcValue(svcValue, dbValue, dbValueType);

        svcValue->auditRecord().entryId() = dbAudit.entryId();
        svcValue->auditRecord().prqsNumber() = dbAudit.prqsNo();
        svcValue->auditRecord().prqsStatus() = dbAudit.prqsStatus();
        svcValue->auditRecord().uuid() = dbAudit.updateUuid();
        svcValue->auditRecord().updateTsp() = dbAudit.updateTsp();
        svcValue->auditRecord().ticketType() = dbAudit.ticketType();
        svcValue->auditRecord().ticketNumber() = dbAudit.ticketNo();
    }
    catch(bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
    }
}

void getDevValue(s_breguisvc::EntryValue *svcValue, int dbValueType, 
                 int entryId, int version)
{
    BAEL_LOG_SET_CATEGORY("getDevValue");

    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryValue dbValue;
        bregv3db::DevValueAudit dbAudit;
        bregv3db::Audit entryAudit;
        bregv3db::EntryDescription entryDes;

        try {
            db.getEntry(&entryDes, &entryAudit, entryId);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_INFO << "Can't get entry description for " 
                << entryId << " version:" << e.what() 
                << BAEL_LOG_END;
        }

        db.getDevEntryValue(&dbValue, &dbAudit, entryId, version);

        helpers_v3::dbValueToSvcValue(svcValue, dbValue, dbValueType);

        // use isSharedMemory value in entryDescription. This is until we 
        // save it with each version in entryValue
        svcValue->isSharedMemory() = entryDes.isSharedMemory();

        svcValue->auditRecord().entryId() = dbAudit.entryId();
        svcValue->auditRecord().uuid() = dbAudit.updateUuid();
        svcValue->auditRecord().updateTsp() = dbAudit.updateTsp();
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
    }
}

bool updateDevValue(const bregv3db::EntryValue& dbValue,
                    const bregv3db::DevValueAudit& dbAudit,
                    int entryId)
{
    BAEL_LOG_SET_CATEGORY("updateDevValues");

    try {
        bregv3db::DbAccessor db;
        bregv3db::EntryValue value;
        bregv3db::DevValueAudit audit;
        int version = 0;

        try {
            db.getDevEntryValue(&value, &audit, entryId, version);
        }
        catch (bregv3db::DbException & e) {
            BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
            if (e.getRcode() == bregv3db::DbException::RECORD_NOT_EXIST) {
                db.insertDevEntryValue(dbValue, dbAudit);
                return true;
            }
            return false;
        }

        db.updateDevEntryValue(dbValue, dbAudit);
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return false;
    }

    return true;
}


bool updateProdValue(int *newVersion,
                     const bregv3db::EntryValue& dbValue,
                     const bregv3db::Audit& dbAudit,
                     int entryId)
{
    BAEL_LOG_SET_CATEGORY("updateProdValue");

    try {
        bregv3db::DbAccessor db;
        if (*newVersion < 0) {
            BAEL_LOG_DEBUG << "create new prod version for breg " << entryId
                           << BAEL_LOG_END;
            db.createProdEntryValue(newVersion,
                                    dbValue,
                                    dbAudit);
        }
        else {
            BAEL_LOG_DEBUG << "add prod version for breg " << entryId
                           << " version " << *newVersion << BAEL_LOG_END;
            db.insertProdEntryValue(dbValue,
                                    dbAudit);
        }
    }
    catch (bregv3db::DbException & e) {
        BAEL_LOG_ERROR << e.what() << BAEL_LOG_END;
        return false;
    }

    return true;
}


namespace {

    s_brgdvsvc::BregValueType::Value dbValTypeToBrgdvsvcValType(int dbValType)
    {
        BAEL_LOG_SET_CATEGORY("dbValTypeToBrgdvSvcValueType");
    
        switch (dbValType) {
        case BREGDB_BOOL:    
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_BOOLEAN;
        case BREGDB_INT:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_INT;
        case BREGDB_CHAR:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_CHAR;
        case BREGDB_DOUBLE:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_DOUBLE;
        case BREGDB_INTLST:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_INT_ARRAY;
        case BREGDB_STR:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_CHAR_ARRAY;
        case BREGDB_EXTINTLST:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_EXT_INT_ARRAY;
        case BREGDB_EXTSTR:
            return s_brgdvsvc::BregValueType::BREG_VALUE_TYPE_EXT_CHAR_ARRAY;
        default:
            BAEL_LOG_ERROR << "Unsupported db value type " << dbValType
                           << BAEL_LOG_END;
            s_brgdvsvc::BregValueType::Value v;
            s_brgdvsvc::BregValueType::fromInt(&v, -1);
            return v;
        }
    }

    void setBrgdvsvcEntry(s_brgdvsvc::BregdbRegistryEntry *svcEntry, 
                          const bregv3db::EntryDescription& dbEntry,
                          const bregv3db::DevValueAudit& dbAudit)
    {
        svcEntry->entryId() = dbEntry.entryId();
        svcEntry->updateByUuid() = dbAudit.updateUuid();
        svcEntry->updateTsp() = dbAudit.updateTsp();
        svcEntry->expiryTsp() = dbEntry.expireTsp();
        svcEntry->apiName() = dbEntry.apiName();
        svcEntry->valTypeCd() = dbValTypeToIfmxValType(dbEntry.valueType());

        if (dbEntry.isSharedMemory()) {
            svcEntry->isInMemoryCd() = 11; //ref_code in Informix
        }
        else {
            svcEntry->isInMemoryCd() = 10;
        }
       
        //svcEntry->isTemporaryCd() = registry->is_temporary_cd;
        //svcEntry->apiStatusCd() = registry->api_status_cd;
        //svcEntry->switchStatusCd() = registry->switch_status_cd;
        //svcEntry->switchModeCd() = registry->switch_mode_cd;

        svcEntry->maxNoOfValues() = dbEntry.maxNumValuesInList();
    }

    void setBrgdvsvcValue(s_brgdvsvc::BregdbEntryTestValue *svcValue,
                          const bregv3db::EntryValue& dbDevValue,
                          const bregv3db::DevValueAudit& dbAudit,
                          int dbValueType)
    {
        svcValue->updateTsp() = dbAudit.updateTsp();
        svcValue->updateByUuid() = dbAudit.updateUuid();

        //svcValue->logNote() = value_rec->log_note;
        //svcValue->entryTvalId()   = value_rec->entry_tval_id;
        //svcValue->valStatusCd() = value_rec->val_status_cd;
   
        svcValue->entryId() = dbDevValue.entryId();
        svcValue->versionNo() = time(NULL) % 1000000000;

        if (dbValueType == BREGDB_EXTINTLST || 
            dbValueType == BREGDB_EXTSTR)
            return;
 
        setBrgdvsvcValueData(&(svcValue->entryValue()),
                             &(svcValue->actNoOfValues()),
                             dbDevValue.entryData(),
                             dbValueType);
    }

    void setBrgdvsvcExtValue(std::vector<s_brgdvsvc::BregdbEntryExtTvalAry> *svcValue,
                             int *actNoOfValues,
                             int *version,
                             const bregv3db::EntryValue& dbDevValue,
                             const bregv3db::DevValueAudit& dbAudit,
                             int dbValueType)
    {
        if (dbDevValue.entryData().isNull())
            return;

        *version = time(NULL) % 1000000000;
        
        // ext integer list needs to be cut into records of 32 values
        // ext string needs to be cut into records of 80 char strings

        if (BREGDB_EXTINTLST == dbValueType) {
            const std::vector<bregv3db::IntegerList> extList = 
                dbDevValue.entryData().value().extIntList();

            *actNoOfValues = extList.size();
            int seq = 0;
            int record_count = (*actNoOfValues/EXTINT_REC_LEN) + 1;

            while (seq < record_count) {
                s_brgdvsvc::BregdbEntryExtTvalAry extArrayElem;
                extArrayElem.updateByUuid() = dbAudit.updateUuid();
                extArrayElem.lookupValue().makeIntegerValue(seq);

                std::vector<int> subList;
                int count = 0;
                for (int i = seq * EXTINT_REC_LEN; i < *actNoOfValues; ++i) {
                    subList.push_back(extList[i].val());

                    if (++count >= EXTINT_REC_LEN)
                        break;
                }

                extArrayElem.returnValue().makeIntegerArray(subList);
                svcValue->push_back(extArrayElem);
                ++seq;
            }
            
        }
        else if (BREGDB_EXTSTR == dbValueType) {
            std::string extStr = dbDevValue.entryData().value().extString();
            *actNoOfValues = extStr.length();
            int seq = 0;
            int record_count = (*actNoOfValues/EXTSTR_REC_LEN) + 1;

            while (seq < record_count) {
                s_brgdvsvc::BregdbEntryExtTvalAry extArrayElem;
                extArrayElem.updateByUuid() = dbAudit.updateUuid();
                extArrayElem.lookupValue().makeIntegerValue(seq);

                std::string subStr = extStr.substr(seq*EXTSTR_REC_LEN, 
                                                     EXTSTR_REC_LEN);

                extArrayElem.returnValue().makeCharacterArray(subStr);
                svcValue->push_back(extArrayElem);                
                ++seq;
            }
        }
    }

    void setBrgdvsvcValueData(s_brgdvsvc::BregValue* svcData,
                              int *actNoOfValues,
                     const bdeut_NullableValue<bregv3db::EntryData>& dbData,
                              int dbValueType)
    {
        BAEL_LOG_SET_CATEGORY("setBrgdvsvcValueData");

        *actNoOfValues = 0;

        switch (dbValueType) {
        case BREGDB_BOOL:    
            svcData->makeBooleanValue(dbData.value().boolValue());
            if (!dbData.isNull())
                *actNoOfValues = 1;
            return;

        case BREGDB_INT:
            svcData->makeIntegerValue(dbData.value().intValue());
            *actNoOfValues = 1;
            return;

        case BREGDB_CHAR:
            svcData->makeCharacterValue() = dbData.value().charValue();
            if (!dbData.isNull())
                *actNoOfValues = 1;
            return;

        case BREGDB_DOUBLE:
            svcData->makeDoubleValue(dbData.value().doubleValue());
            if (!dbData.isNull())
                *actNoOfValues = 1;
            return;

        case BREGDB_INTLST:
            svcData->makeIntegerArray();
            if (!dbData.isNull()) {
                std::vector<bregv3db::IntegerList> intList = 
                    dbData.value().intList();
                for (unsigned int i = 0; i < intList.size(); ++i) {
                    int value = intList[i].val();
                    svcData->integerArray().push_back(value);
                }
                *actNoOfValues = intList.size();
            }
            return;

        case BREGDB_STR:
            svcData->makeCharacterArray();
            if (dbData.isNull()) return;
            svcData->characterArray() = dbData.value().str();
            *actNoOfValues = dbData.value().str().length();
            return;

        case BREGDB_EXTINTLST:
            if (dbData.isNull()) return;
            *actNoOfValues = dbData.value().extIntList().size();
            return;

        case BREGDB_EXTSTR:
            if (dbData.isNull()) return;
            *actNoOfValues = dbData.value().extString().length();
            return;

        default:
            BAEL_LOG_WARN << "Unsupported db value type " << dbValueType 
                          << BAEL_LOG_END;
        }
    }

    void setBrgdvsvcOverrides(
               std::vector<s_brgdvsvc::BregdbEntryTvalOvrd> *overrideVec,
               std::vector<s_brgdvsvc::ExtOvrValList> *extOvrList,
               const std::vector<bregv3db::EntryOverride>& dbOverrides,
               const bregv3db::DevValueAudit& dbAudit,
               int dbValueType)
    {
        int dbOverridesCount = dbOverrides.size();
        for (int i = 0; i < dbOverridesCount; ++i) {

            s_brgdvsvc::BregdbEntryTvalOvrd overrideRec;
                
            overrideRec.updateTsp()     = dbAudit.updateTsp();
            overrideRec.testValOvrdId() = 0;
            overrideRec.updateByUuid()  = dbAudit.updateUuid();
            overrideRec.entryId()       = dbAudit.entryId();
            overrideRec.overrideSeq()   = dbOverrides[i].seq();
            overrideRec.targetTypeCd()  = 
                dbOvrdTypeToBrgdvsvcOvrdType(dbOverrides[i].overrideType());
            overrideRec.versionNo()     = 0;
            overrideRec.targetOvrdId()  = 
                dbOverrides[i].overrideTypeValue();

            if (BREGDB_EXTINTLST != dbValueType &&
                BREGDB_EXTSTR != dbValueType) {
                int actNoOfValues = 0;
                setBrgdvsvcValueData(&(overrideRec.ovrdValue()), 
                                     &actNoOfValues,
                                     dbOverrides[i].entryData(),
                                     dbValueType);

                overrideRec.actNoOfValues() = actNoOfValues;
                overrideVec->push_back(overrideRec);

                continue;
            }

            // set extOvrList
            int actNoOfValues = 0;
            s_brgdvsvc::ExtOvrValList extOvrValList;
            const bdeut_NullableValue<bregv3db::EntryData>& data =
                dbOverrides[i].entryData();
            
            if (BREGDB_EXTINTLST == dbValueType) {
                if (data.isNull()) {
                    actNoOfValues = 0;
                }
                else {
                    actNoOfValues = data.value().extIntList().size();
                }
                int seq = 0;
                int record_count = (actNoOfValues/EXTINT_REC_LEN) + 1;

                while (seq < record_count) {
                    s_brgdvsvc::BregdbEntryExtTvalOvrd extOvrValue;
                    extOvrValue.tvalaOvrdId()   = i;
                    extOvrValue.updateByUuid()  = dbAudit.updateUuid();
                    extOvrValue.testValOvrdId() = seq;
                    extOvrValue.lookupValue().makeIntegerValue(seq);
                    extOvrValue.testValOvrdId() = seq;

                    std::vector<int> subList;
                    int count = 0;
                    for (int i = seq*EXTINT_REC_LEN; i < actNoOfValues; ++i) {
                   
                        subList.push_back(data.value().extIntList()[i].val());

                        if (++count >= EXTINT_REC_LEN)
                            break;
                    }

                    extOvrValue.returnValue().makeIntegerArray(subList);
                    extOvrValList.extOvrVal().push_back(extOvrValue); 
                    ++seq;
                }
            }
            else if (BREGDB_EXTSTR == dbValueType) {
                std::string extStr("");
                if (!data.isNull()) {
                    extStr = data.value().extString();
                }
                actNoOfValues = extStr.length();
                int seq = 0;
                int record_count = (actNoOfValues/EXTSTR_REC_LEN) + 1;

                while (seq < record_count) {
                    s_brgdvsvc::BregdbEntryExtTvalOvrd extOvrValue;
                    extOvrValue.tvalaOvrdId()   = i;
                    extOvrValue.updateByUuid()  = dbAudit.updateUuid();
                    extOvrValue.testValOvrdId() = seq;
                    extOvrValue.lookupValue().makeIntegerValue(seq);
                    extOvrValue.testValOvrdId() = seq;

                    std::string subStr = extStr.substr(seq*EXTSTR_REC_LEN, 
                                                       EXTSTR_REC_LEN);

                    extOvrValue.returnValue().makeCharacterArray(subStr);
                    extOvrValList.extOvrVal().push_back(extOvrValue);  
                    ++seq;
                }
            }
            
            extOvrList->push_back(extOvrValList);
            overrideRec.actNoOfValues() = actNoOfValues;
            overrideVec->push_back(overrideRec);

        } // end override list for loop
    }
 
    int SendToBrgdvsvc(int uuid,
                       int isOneWay,
                       const s_brgdvsvc::Request& request,
                       s_brgdvsvc::Response* response)
    {
        BAEL_LOG_SET_CATEGORY("SENDTOBRGDVSVC");
        basmsg::ServiceInformation serviceInfo;
        basapi::CodecConfiguration codecConfiguration;
        basmsg::UserIdentification userIdentification;

        serviceInfo.setServiceId(65370);
        serviceInfo.setServiceVersionMajor(1);
        serviceInfo.setServiceVersionMinor(0);
        userIdentification.setUuid(uuid);

        codecConfiguration.encodingType() = basmsg::EncodingType::BER;
        e_ipcfs_Address address(28454, 0); // send this to router

        bscapi::FullTemplateExpansionEnvelope<s_brgdvsvc::Request> 
            requestFTEE(request);
        bscapi::FullTemplateExpansionEnvelope<s_brgdvsvc::Response> 
            responseFTEE(*response);

        if (isOneWay)
            return a_basfs::ClientUtil::executeOneWayRequestAsUser(
                                                       address,
                                                       serviceInfo,
                                                       codecConfiguration,
                                                       userIdentification,
                                                       requestFTEE);
        else 
            return a_basfs::ClientUtil::executeRequestAsUser(
                                                       &responseFTEE,
                                                       address,
                                                       serviceInfo,
                                                       codecConfiguration,
                                                       userIdentification,
                                                       requestFTEE);
    }

    int dbValTypeToIfmxValType(int dbValType)
    {
        BAEL_LOG_SET_CATEGORY("dbValTypeToIfmxValType");
    
        switch (dbValType) {
        case BREGDB_BOOL:    
            return 4;
        case BREGDB_INT:
            return 5;
        case BREGDB_CHAR:
            return 6;
        case BREGDB_DOUBLE:
            return 7;
        case BREGDB_INTLST:
            return 8;
        case BREGDB_STR:
            return 9;
        case BREGDB_EXTINTLST:
            return 76; 
        case BREGDB_EXTSTR:
            return 77;
        default:
            BAEL_LOG_ERROR << "Unsupported db value type " << dbValType
                           << BAEL_LOG_END;
            return -1;
        }
    }

    int dbOvrdTypeToBrgdvsvcOvrdType(int dbOvrdType)
    {
        BAEL_LOG_SET_CATEGORY("dbOvrdTypeToBrgdvsvcOvrdType");
    
        //brgdvsvc uses Informix db's override type

        switch (dbOvrdType) {
        case bregv3db::DbAccessor::MACHINE_OVERRIDE:
            return 26;
        case bregv3db::DbAccessor::UUID_OVERRIDE:
            return 28;
        case bregv3db::DbAccessor::PRICING_NUMBER_OVERRIDE:
            return 30;
        case bregv3db::DbAccessor::FIRM_OVERRIDE:
            return 29;
        case bregv3db::DbAccessor::DEPT_OVERRIDE:
            return 74;
        case bregv3db::DbAccessor::CUSTOMER_OVERRIDE:
            return 27;
        case bregv3db::DbAccessor::SERIAL_NUMBER_OVERRIDE:
            return 75;
        case bregv3db::DbAccessor::PINDEX_OVERRIDE:
            return 78;
        default:
            BAEL_LOG_ERROR << "Unsupported db value type " << dbOvrdType
                           << BAEL_LOG_END;
            return -1;            
        }
    }

} //end anonymous namespace

} //end namespace bregv3value
} //end namespace s_breguisvc
} //end namespace BloombergLP
