// s_breguisvc_schema.cpp       *GENERATED FILE - DO NOT EDIT*        -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(s_breguisvc_schema_cpp,"$Id$ $CSID$")

#include <s_breguisvc_schema.h>

#include <bcem_aggregate.h>
#include <bcem_aggregateutil.h>

#include <bdeat_formattingmode.h>
#include <bdeat_valuetypefunctions.h>
#include <bdede_utf8util.h>
#include <bdeu_print.h>
#include <bdeu_printmethods.h>
#include <bdeu_string.h>

#include <bdeut_nullablevalue.h>
#include <bsl_string.h>
#include <bsl_vector.h>
#include <bsls_types.h>

#include <bslim_printer.h>
#include <bsls_assert.h>

#include <bsl_iomanip.h>
#include <bsl_limits.h>
#include <bsl_ostream.h>

namespace BloombergLP {
namespace s_breguisvc {

                               // -------------                                
                               // class AclType                                
                               // -------------                                

// CONSTANTS

const char AclType::CLASS_NAME[] = "AclType";

const bdeat_EnumeratorInfo AclType::ENUMERATOR_INFO_ARRAY[] = {
    {
        AclType::UPDATE_DESCRIPTION,
        "Update Description",
        sizeof("Update Description") - 1,
        ""
    },
    {
        AclType::RELEASE_CODE,
        "Release Code",
        sizeof("Release Code") - 1,
        ""
    },
    {
        AclType::PRIVILEGING_ADMIN,
        "Privileging Admin",
        sizeof("Privileging Admin") - 1,
        ""
    },
    {
        AclType::UPDATE_PRODUCTION_VALUES,
        "Update Production Values",
        sizeof("Update Production Values") - 1,
        ""
    },
    {
        AclType::UPDATE_DEV_VALUES,
        "Update Dev Values",
        sizeof("Update Dev Values") - 1,
        ""
    }
};

// CLASS METHODS

int AclType::fromInt(AclType::Value *result, int number)
{
    switch (number) {
      case AclType::UPDATE_DESCRIPTION:
      case AclType::RELEASE_CODE:
      case AclType::PRIVILEGING_ADMIN:
      case AclType::UPDATE_PRODUCTION_VALUES:
      case AclType::UPDATE_DEV_VALUES:
        *result = (AclType::Value)number;
        return 0;
      default:
        return -1;
    }
}

int AclType::fromString(
        AclType::Value *result,
        const char         *string,
        int                 stringLength)
{
    for (int i = 0; i < 5; ++i) {
        const bdeat_EnumeratorInfo& enumeratorInfo =
                    AclType::ENUMERATOR_INFO_ARRAY[i];

        if (stringLength == enumeratorInfo.d_nameLength
        &&  0 == bsl::memcmp(enumeratorInfo.d_name_p, string, stringLength))
        {
            *result = (AclType::Value)enumeratorInfo.d_value;
            return 0;
        }
    }

    return -1;
}

const char *AclType::toString(AclType::Value value)
{
    switch (value) {
      case UPDATE_DESCRIPTION: {
        return "Update Description";
      } break;
      case RELEASE_CODE: {
        return "Release Code";
      } break;
      case PRIVILEGING_ADMIN: {
        return "Privileging Admin";
      } break;
      case UPDATE_PRODUCTION_VALUES: {
        return "Update Production Values";
      } break;
      case UPDATE_DEV_VALUES: {
        return "Update Dev Values";
      } break;
    }

    BSLS_ASSERT(!"invalid enumerator");
    return 0;
}


                              // ---------------                               
                              // class ApiStatus                               
                              // ---------------                               

// CONSTANTS

const char ApiStatus::CLASS_NAME[] = "ApiStatus";

const bdeat_EnumeratorInfo ApiStatus::ENUMERATOR_INFO_ARRAY[] = {
    {
        ApiStatus::NEW,
        "New",
        sizeof("New") - 1,
        ""
    },
    {
        ApiStatus::STAGED,
        "Staged",
        sizeof("Staged") - 1,
        ""
    },
    {
        ApiStatus::RELEASED,
        "Released",
        sizeof("Released") - 1,
        ""
    }
};

// CLASS METHODS

int ApiStatus::fromInt(ApiStatus::Value *result, int number)
{
    switch (number) {
      case ApiStatus::NEW:
      case ApiStatus::STAGED:
      case ApiStatus::RELEASED:
        *result = (ApiStatus::Value)number;
        return 0;
      default:
        return -1;
    }
}

int ApiStatus::fromString(
        ApiStatus::Value *result,
        const char         *string,
        int                 stringLength)
{
    for (int i = 0; i < 3; ++i) {
        const bdeat_EnumeratorInfo& enumeratorInfo =
                    ApiStatus::ENUMERATOR_INFO_ARRAY[i];

        if (stringLength == enumeratorInfo.d_nameLength
        &&  0 == bsl::memcmp(enumeratorInfo.d_name_p, string, stringLength))
        {
            *result = (ApiStatus::Value)enumeratorInfo.d_value;
            return 0;
        }
    }

    return -1;
}

const char *ApiStatus::toString(ApiStatus::Value value)
{
    switch (value) {
      case NEW: {
        return "New";
      } break;
      case STAGED: {
        return "Staged";
      } break;
      case RELEASED: {
        return "Released";
      } break;
    }

    BSLS_ASSERT(!"invalid enumerator");
    return 0;
}


                              // ---------------                               
                              // class BregValue                               
                              // ---------------                               

// CONSTANTS

const char BregValue::CLASS_NAME[] = "BregValue";

const bdeat_AttributeInfo BregValue::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ID,
        "id",
        sizeof("id") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VALUE_TYPE,
        "valueType",
        sizeof("valueType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VALUE_TYPE_STRING,
        "valueTypeString",
        sizeof("valueTypeString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_TYPE_STRING,
        "typeString",
        sizeof("typeString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_ACCESSOR,
        "accessor",
        sizeof("accessor") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_VALUE,
        "value",
        sizeof("value") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregValue::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 6; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    BregValue::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *BregValue::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID];
      case ATTRIBUTE_ID_VALUE_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE];
      case ATTRIBUTE_ID_VALUE_TYPE_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING];
      case ATTRIBUTE_ID_TYPE_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING];
      case ATTRIBUTE_ID_ACCESSOR:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR];
      case ATTRIBUTE_ID_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE];
      default:
        return 0;
    }
}

// CREATORS

BregValue::BregValue(bslma::Allocator *basicAllocator)
: d_valueTypeString(basicAllocator)
, d_typeString(basicAllocator)
, d_accessor(basicAllocator)
, d_value(basicAllocator)
, d_id()
, d_valueType()
{
}

BregValue::BregValue(const BregValue& original,
                     bslma::Allocator *basicAllocator)
: d_valueTypeString(original.d_valueTypeString, basicAllocator)
, d_typeString(original.d_typeString, basicAllocator)
, d_accessor(original.d_accessor, basicAllocator)
, d_value(original.d_value, basicAllocator)
, d_id(original.d_id)
, d_valueType(original.d_valueType)
{
}

BregValue::~BregValue()
{
}

// MANIPULATORS

BregValue&
BregValue::operator=(const BregValue& rhs)
{
    if (this != &rhs) {
        d_id = rhs.d_id;
        d_valueType = rhs.d_valueType;
        d_valueTypeString = rhs.d_valueTypeString;
        d_typeString = rhs.d_typeString;
        d_accessor = rhs.d_accessor;
        d_value = rhs.d_value;
    }

    return *this;
}

int BregValue::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_id,
                       aggregate,
                       ATTRIBUTE_ID_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueType,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueTypeString,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE_STRING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_typeString,
                       aggregate,
                       ATTRIBUTE_ID_TYPE_STRING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_accessor,
                       aggregate,
                       ATTRIBUTE_ID_ACCESSOR)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_value,
                       aggregate,
                       ATTRIBUTE_ID_VALUE)))
    {
        return rc;
    }
    return 0;
}

void BregValue::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_id);
    bdeat_ValueTypeFunctions::reset(&d_valueType);
    bdeat_ValueTypeFunctions::reset(&d_valueTypeString);
    bdeat_ValueTypeFunctions::reset(&d_typeString);
    bdeat_ValueTypeFunctions::reset(&d_accessor);
    bdeat_ValueTypeFunctions::reset(&d_value);
}

// ACCESSORS

bsl::ostream& BregValue::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("id", d_id);
    printer.printAttribute("valueType", d_valueType);
    printer.printAttribute("valueTypeString", d_valueTypeString);
    printer.printAttribute("typeString", d_typeString);
    printer.printAttribute("accessor", d_accessor);
    printer.printAttribute("value", d_value);
    printer.end();
    return stream;
}

int BregValue::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ID,
                       d_id);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_TYPE,
                       d_valueType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_TYPE_STRING,
                       d_valueTypeString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE_STRING,
                       d_typeString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ACCESSOR,
                       d_accessor);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE,
                       d_value);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                           // ---------------------                            
                           // class BregValueObject                            
                           // ---------------------                            

// CONSTANTS

const char BregValueObject::CLASS_NAME[] = "BregValueObject";

const bdeat_SelectionInfo BregValueObject::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_ID,
        "id",
        sizeof("id") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GOBXML,
        "gobxml",
        sizeof("gobxml") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *BregValueObject::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_SelectionInfo& selectionInfo =
                    BregValueObject::SELECTION_INFO_ARRAY[i];

        if (nameLength == selectionInfo.d_nameLength
        &&  0 == bsl::memcmp(selectionInfo.d_name_p, name, nameLength))
        {
            return &selectionInfo;
        }
    }

    return 0;
}

const bdeat_SelectionInfo *BregValueObject::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_ID:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_ID];
      case SELECTION_ID_GOBXML:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GOBXML];
      default:
        return 0;
    }
}

// CREATORS

BregValueObject::BregValueObject(
    const BregValueObject& original,
    bslma::Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_ID: {
        new (d_id.buffer())
            int(original.d_id.object());
      } break;
      case SELECTION_ID_GOBXML: {
        new (d_gobxml.buffer())
            bsl::string(
                original.d_gobxml.object(), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

// MANIPULATORS

BregValueObject&
BregValueObject::operator=(const BregValueObject& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_ID: {
            makeId(rhs.d_id.object());
          } break;
          case SELECTION_ID_GOBXML: {
            makeGobxml(rhs.d_gobxml.object());
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }

    return *this;
}

int BregValueObject::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc = 0;

    int selectorId = aggregate.selectorId();
    switch (selectorId) {
      case SELECTION_ID_ID: {
        rc = bcem_AggregateUtil::fromAggregate(&makeId(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GOBXML: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGobxml(),
                                               aggregate,
                                               selectorId);
      } break;
      default: {
        rc = bcem_Aggregate::BCEM_ERR_BAD_CONVERSION;
      }
    }

    return rc;
}

void BregValueObject::reset()
{
    switch (d_selectionId) {
      case SELECTION_ID_ID: {
        // no destruction required
      } break;
      case SELECTION_ID_GOBXML: {
        typedef bsl::string Type;
        d_gobxml.object().~Type();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int BregValueObject::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_ID: {
        makeId();
      } break;
      case SELECTION_ID_GOBXML: {
        makeGobxml();
      } break;
      case SELECTION_ID_UNDEFINED: {
        reset();
      } break;
      default:
        return -1;
    }
    return 0;
}

int BregValueObject::makeSelection(const char *name, int nameLength)
{
    const bdeat_SelectionInfo *selectionInfo =
           lookupSelectionInfo(name, nameLength);
    if (0 == selectionInfo) {
       return -1;
    }

    return makeSelection(selectionInfo->d_id);
}

int& BregValueObject::makeId()
{
    if (SELECTION_ID_ID == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_id.object());
    }
    else {
        reset();
        new (d_id.buffer())
            int();
    
        d_selectionId = SELECTION_ID_ID;
    }

    return d_id.object();
}

int& BregValueObject::makeId(int value)
{
    if (SELECTION_ID_ID == d_selectionId) {
        d_id.object() = value;
    }
    else {
        reset();
        new (d_id.buffer())
                int(value);
        d_selectionId = SELECTION_ID_ID;
    }

    return d_id.object();
}

bsl::string& BregValueObject::makeGobxml()
{
    if (SELECTION_ID_GOBXML == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_gobxml.object());
    }
    else {
        reset();
        new (d_gobxml.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_GOBXML;
    }

    return d_gobxml.object();
}

bsl::string& BregValueObject::makeGobxml(const bsl::string& value)
{
    if (SELECTION_ID_GOBXML == d_selectionId) {
        d_gobxml.object() = value;
    }
    else {
        reset();
        new (d_gobxml.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_GOBXML;
    }

    return d_gobxml.object();
}

// ACCESSORS

bsl::ostream& BregValueObject::print(
    bsl::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    switch (d_selectionId) {
      case SELECTION_ID_ID: {
        printer.printAttribute("id", d_id.object());

      }  break;
      case SELECTION_ID_GOBXML: {
        printer.printAttribute("gobxml", d_gobxml.object());

      }  break;
      default:
        stream << "SELECTION UNDEFINED\n";
    }
    printer.end();
    return stream;
}

int BregValueObject::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_ID: {
        const int& source = this->id();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GOBXML: {
        const bsl::string& source = this->gobxml();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    return rc;
}

const char *BregValueObject::selectionName() const
{
    switch (d_selectionId) {
      case SELECTION_ID_ID:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_ID].name();
      case SELECTION_ID_GOBXML:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GOBXML].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}

                              // ---------------                               
                              // class EntryData                               
                              // ---------------                               

// CONSTANTS

const char EntryData::CLASS_NAME[] = "EntryData";

const bdeat_SelectionInfo EntryData::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_BOOL_VALUE,
        "Bool",
        sizeof("Bool") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_DOUBLE_VALUE,
        "Double",
        sizeof("Double") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_INT_VALUE,
        "Int",
        sizeof("Int") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_INT_LIST,
        "IntList",
        sizeof("IntList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_CHAR_VALUE,
        "Char",
        sizeof("Char") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_STR,
        "Str",
        sizeof("Str") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_EXT_INT_LIST,
        "ExtIntList",
        sizeof("ExtIntList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_EXT_STRING,
        "ExtString",
        sizeof("ExtString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *EntryData::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 8; ++i) {
        const bdeat_SelectionInfo& selectionInfo =
                    EntryData::SELECTION_INFO_ARRAY[i];

        if (nameLength == selectionInfo.d_nameLength
        &&  0 == bsl::memcmp(selectionInfo.d_name_p, name, nameLength))
        {
            return &selectionInfo;
        }
    }

    return 0;
}

const bdeat_SelectionInfo *EntryData::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_BOOL_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOL_VALUE];
      case SELECTION_ID_DOUBLE_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE];
      case SELECTION_ID_INT_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_VALUE];
      case SELECTION_ID_INT_LIST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_LIST];
      case SELECTION_ID_CHAR_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_CHAR_VALUE];
      case SELECTION_ID_STR:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_STR];
      case SELECTION_ID_EXT_INT_LIST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_INT_LIST];
      case SELECTION_ID_EXT_STRING:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_STRING];
      default:
        return 0;
    }
}

// CREATORS

EntryData::EntryData(
    const EntryData& original,
    bslma::Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOL_VALUE: {
        new (d_bool.buffer())
            bool(original.d_bool.object());
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        new (d_double.buffer())
            double(original.d_double.object());
      } break;
      case SELECTION_ID_INT_VALUE: {
        new (d_int.buffer())
            bsls::Types::Int64(original.d_int.object());
      } break;
      case SELECTION_ID_INT_LIST: {
        new (d_intList.buffer())
            bsl::vector<bsls::Types::Int64>(
                original.d_intList.object(), d_allocator_p);
      } break;
      case SELECTION_ID_CHAR_VALUE: {
        new (d_char.buffer())
            bsl::string(
                original.d_char.object(), d_allocator_p);
      } break;
      case SELECTION_ID_STR: {
        new (d_str.buffer())
            bsl::string(
                original.d_str.object(), d_allocator_p);
      } break;
      case SELECTION_ID_EXT_INT_LIST: {
        new (d_extIntList.buffer())
            bsl::vector<bsls::Types::Int64>(
                original.d_extIntList.object(), d_allocator_p);
      } break;
      case SELECTION_ID_EXT_STRING: {
        new (d_extString.buffer())
            bsl::string(
                original.d_extString.object(), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

// MANIPULATORS

EntryData&
EntryData::operator=(const EntryData& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_BOOL_VALUE: {
            makeBoolValue(rhs.d_bool.object());
          } break;
          case SELECTION_ID_DOUBLE_VALUE: {
            makeDoubleValue(rhs.d_double.object());
          } break;
          case SELECTION_ID_INT_VALUE: {
            makeIntValue(rhs.d_int.object());
          } break;
          case SELECTION_ID_INT_LIST: {
            makeIntList(rhs.d_intList.object());
          } break;
          case SELECTION_ID_CHAR_VALUE: {
            makeCharValue(rhs.d_char.object());
          } break;
          case SELECTION_ID_STR: {
            makeStr(rhs.d_str.object());
          } break;
          case SELECTION_ID_EXT_INT_LIST: {
            makeExtIntList(rhs.d_extIntList.object());
          } break;
          case SELECTION_ID_EXT_STRING: {
            makeExtString(rhs.d_extString.object());
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }

    return *this;
}

int EntryData::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc = 0;

    int selectorId = aggregate.selectorId();
    switch (selectorId) {
      case SELECTION_ID_BOOL_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeBoolValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeDoubleValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_INT_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeIntValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_INT_LIST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeIntList(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_CHAR_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeCharValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_STR: {
        rc = bcem_AggregateUtil::fromAggregate(&makeStr(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_EXT_INT_LIST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeExtIntList(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_EXT_STRING: {
        rc = bcem_AggregateUtil::fromAggregate(&makeExtString(),
                                               aggregate,
                                               selectorId);
      } break;
      default: {
        rc = bcem_Aggregate::BCEM_ERR_BAD_CONVERSION;
      }
    }

    return rc;
}

void EntryData::reset()
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOL_VALUE: {
        // no destruction required
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        // no destruction required
      } break;
      case SELECTION_ID_INT_VALUE: {
        // no destruction required
      } break;
      case SELECTION_ID_INT_LIST: {
        typedef bsl::vector<bsls::Types::Int64> Type;
        d_intList.object().~Type();
      } break;
      case SELECTION_ID_CHAR_VALUE: {
        typedef bsl::string Type;
        d_char.object().~Type();
      } break;
      case SELECTION_ID_STR: {
        typedef bsl::string Type;
        d_str.object().~Type();
      } break;
      case SELECTION_ID_EXT_INT_LIST: {
        typedef bsl::vector<bsls::Types::Int64> Type;
        d_extIntList.object().~Type();
      } break;
      case SELECTION_ID_EXT_STRING: {
        typedef bsl::string Type;
        d_extString.object().~Type();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int EntryData::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_BOOL_VALUE: {
        makeBoolValue();
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        makeDoubleValue();
      } break;
      case SELECTION_ID_INT_VALUE: {
        makeIntValue();
      } break;
      case SELECTION_ID_INT_LIST: {
        makeIntList();
      } break;
      case SELECTION_ID_CHAR_VALUE: {
        makeCharValue();
      } break;
      case SELECTION_ID_STR: {
        makeStr();
      } break;
      case SELECTION_ID_EXT_INT_LIST: {
        makeExtIntList();
      } break;
      case SELECTION_ID_EXT_STRING: {
        makeExtString();
      } break;
      case SELECTION_ID_UNDEFINED: {
        reset();
      } break;
      default:
        return -1;
    }
    return 0;
}

int EntryData::makeSelection(const char *name, int nameLength)
{
    const bdeat_SelectionInfo *selectionInfo =
           lookupSelectionInfo(name, nameLength);
    if (0 == selectionInfo) {
       return -1;
    }

    return makeSelection(selectionInfo->d_id);
}

bool& EntryData::makeBoolValue()
{
    if (SELECTION_ID_BOOL_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_bool.object());
    }
    else {
        reset();
        new (d_bool.buffer())
            bool();
    
        d_selectionId = SELECTION_ID_BOOL_VALUE;
    }

    return d_bool.object();
}

bool& EntryData::makeBoolValue(bool value)
{
    if (SELECTION_ID_BOOL_VALUE == d_selectionId) {
        d_bool.object() = value;
    }
    else {
        reset();
        new (d_bool.buffer())
                bool(value);
        d_selectionId = SELECTION_ID_BOOL_VALUE;
    }

    return d_bool.object();
}

double& EntryData::makeDoubleValue()
{
    if (SELECTION_ID_DOUBLE_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_double.object());
    }
    else {
        reset();
        new (d_double.buffer())
            double();
    
        d_selectionId = SELECTION_ID_DOUBLE_VALUE;
    }

    return d_double.object();
}

double& EntryData::makeDoubleValue(double value)
{
    if (SELECTION_ID_DOUBLE_VALUE == d_selectionId) {
        d_double.object() = value;
    }
    else {
        reset();
        new (d_double.buffer())
                double(value);
        d_selectionId = SELECTION_ID_DOUBLE_VALUE;
    }

    return d_double.object();
}

bsls::Types::Int64& EntryData::makeIntValue()
{
    if (SELECTION_ID_INT_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_int.object());
    }
    else {
        reset();
        new (d_int.buffer())
            bsls::Types::Int64();
    
        d_selectionId = SELECTION_ID_INT_VALUE;
    }

    return d_int.object();
}

bsls::Types::Int64& EntryData::makeIntValue(bsls::Types::Int64 value)
{
    if (SELECTION_ID_INT_VALUE == d_selectionId) {
        d_int.object() = value;
    }
    else {
        reset();
        new (d_int.buffer())
                bsls::Types::Int64(value);
        d_selectionId = SELECTION_ID_INT_VALUE;
    }

    return d_int.object();
}

bsl::vector<bsls::Types::Int64>& EntryData::makeIntList()
{
    if (SELECTION_ID_INT_LIST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_intList.object());
    }
    else {
        reset();
        new (d_intList.buffer())
                bsl::vector<bsls::Types::Int64>(d_allocator_p);

        d_selectionId = SELECTION_ID_INT_LIST;
    }

    return d_intList.object();
}

bsl::vector<bsls::Types::Int64>& EntryData::makeIntList(const bsl::vector<bsls::Types::Int64>& value)
{
    if (SELECTION_ID_INT_LIST == d_selectionId) {
        d_intList.object() = value;
    }
    else {
        reset();
        new (d_intList.buffer())
                bsl::vector<bsls::Types::Int64>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_INT_LIST;
    }

    return d_intList.object();
}

bsl::string& EntryData::makeCharValue()
{
    if (SELECTION_ID_CHAR_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_char.object());
    }
    else {
        reset();
        new (d_char.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_CHAR_VALUE;
    }

    return d_char.object();
}

bsl::string& EntryData::makeCharValue(const bsl::string& value)
{
    if (SELECTION_ID_CHAR_VALUE == d_selectionId) {
        d_char.object() = value;
    }
    else {
        reset();
        new (d_char.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_CHAR_VALUE;
    }

    return d_char.object();
}

bsl::string& EntryData::makeStr()
{
    if (SELECTION_ID_STR == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_str.object());
    }
    else {
        reset();
        new (d_str.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_STR;
    }

    return d_str.object();
}

bsl::string& EntryData::makeStr(const bsl::string& value)
{
    if (SELECTION_ID_STR == d_selectionId) {
        d_str.object() = value;
    }
    else {
        reset();
        new (d_str.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_STR;
    }

    return d_str.object();
}

bsl::vector<bsls::Types::Int64>& EntryData::makeExtIntList()
{
    if (SELECTION_ID_EXT_INT_LIST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_extIntList.object());
    }
    else {
        reset();
        new (d_extIntList.buffer())
                bsl::vector<bsls::Types::Int64>(d_allocator_p);

        d_selectionId = SELECTION_ID_EXT_INT_LIST;
    }

    return d_extIntList.object();
}

bsl::vector<bsls::Types::Int64>& EntryData::makeExtIntList(const bsl::vector<bsls::Types::Int64>& value)
{
    if (SELECTION_ID_EXT_INT_LIST == d_selectionId) {
        d_extIntList.object() = value;
    }
    else {
        reset();
        new (d_extIntList.buffer())
                bsl::vector<bsls::Types::Int64>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_EXT_INT_LIST;
    }

    return d_extIntList.object();
}

bsl::string& EntryData::makeExtString()
{
    if (SELECTION_ID_EXT_STRING == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_extString.object());
    }
    else {
        reset();
        new (d_extString.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_EXT_STRING;
    }

    return d_extString.object();
}

bsl::string& EntryData::makeExtString(const bsl::string& value)
{
    if (SELECTION_ID_EXT_STRING == d_selectionId) {
        d_extString.object() = value;
    }
    else {
        reset();
        new (d_extString.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_EXT_STRING;
    }

    return d_extString.object();
}

// ACCESSORS

bsl::ostream& EntryData::print(
    bsl::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    switch (d_selectionId) {
      case SELECTION_ID_BOOL_VALUE: {
        printer.printAttribute("boolValue", d_bool.object());

      }  break;
      case SELECTION_ID_DOUBLE_VALUE: {
        printer.printAttribute("doubleValue", d_double.object());

      }  break;
      case SELECTION_ID_INT_VALUE: {
        printer.printAttribute("intValue", d_int.object());

      }  break;
      case SELECTION_ID_INT_LIST: {
        printer.printAttribute("intList", d_intList.object());

      }  break;
      case SELECTION_ID_CHAR_VALUE: {
        printer.printAttribute("charValue", d_char.object());

      }  break;
      case SELECTION_ID_STR: {
        printer.printAttribute("str", d_str.object());

      }  break;
      case SELECTION_ID_EXT_INT_LIST: {
        printer.printAttribute("extIntList", d_extIntList.object());

      }  break;
      case SELECTION_ID_EXT_STRING: {
        printer.printAttribute("extString", d_extString.object());

      }  break;
      default:
        stream << "SELECTION UNDEFINED\n";
    }
    printer.end();
    return stream;
}

int EntryData::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_BOOL_VALUE: {
        const bool& source = this->boolValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        const double& source = this->doubleValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_INT_VALUE: {
        const bsls::Types::Int64& source = this->intValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_INT_LIST: {
        const bsl::vector<bsls::Types::Int64>& source = this->intList();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_CHAR_VALUE: {
        const bsl::string& source = this->charValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_STR: {
        const bsl::string& source = this->str();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_EXT_INT_LIST: {
        const bsl::vector<bsls::Types::Int64>& source = this->extIntList();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_EXT_STRING: {
        const bsl::string& source = this->extString();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    return rc;
}

const char *EntryData::selectionName() const
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOL_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOL_VALUE].name();
      case SELECTION_ID_DOUBLE_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE].name();
      case SELECTION_ID_INT_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_VALUE].name();
      case SELECTION_ID_INT_LIST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_LIST].name();
      case SELECTION_ID_CHAR_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_CHAR_VALUE].name();
      case SELECTION_ID_STR:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_STR].name();
      case SELECTION_ID_EXT_INT_LIST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_INT_LIST].name();
      case SELECTION_ID_EXT_STRING:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_STRING].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}

                          // -----------------------                           
                          // class ErrorInfoResponse                           
                          // -----------------------                           

// CONSTANTS

const char ErrorInfoResponse::CLASS_NAME[] = "ErrorInfoResponse";

const bdeat_AttributeInfo ErrorInfoResponse::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_CODE,
        "code",
        sizeof("code") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_MESSAGE,
        "message",
        sizeof("message") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *ErrorInfoResponse::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    ErrorInfoResponse::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *ErrorInfoResponse::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_CODE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CODE];
      case ATTRIBUTE_ID_MESSAGE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MESSAGE];
      default:
        return 0;
    }
}

// CREATORS

ErrorInfoResponse::ErrorInfoResponse(bslma::Allocator *basicAllocator)
: d_message(basicAllocator)
, d_code()
{
}

ErrorInfoResponse::ErrorInfoResponse(const ErrorInfoResponse& original,
                                     bslma::Allocator *basicAllocator)
: d_message(original.d_message, basicAllocator)
, d_code(original.d_code)
{
}

ErrorInfoResponse::~ErrorInfoResponse()
{
}

// MANIPULATORS

ErrorInfoResponse&
ErrorInfoResponse::operator=(const ErrorInfoResponse& rhs)
{
    if (this != &rhs) {
        d_code = rhs.d_code;
        d_message = rhs.d_message;
    }

    return *this;
}

int ErrorInfoResponse::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_code,
                       aggregate,
                       ATTRIBUTE_ID_CODE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_message,
                       aggregate,
                       ATTRIBUTE_ID_MESSAGE)))
    {
        return rc;
    }
    return 0;
}

void ErrorInfoResponse::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_code);
    bdeat_ValueTypeFunctions::reset(&d_message);
}

// ACCESSORS

bsl::ostream& ErrorInfoResponse::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("code", d_code);
    printer.printAttribute("message", d_message);
    printer.end();
    return stream;
}

int ErrorInfoResponse::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CODE,
                       d_code);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_MESSAGE,
                       d_message);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                          // -----------------------                           
                          // class EvaluateOverrides                           
                          // -----------------------                           

// CONSTANTS

const char EvaluateOverrides::CLASS_NAME[] = "EvaluateOverrides";

const bdeat_AttributeInfo EvaluateOverrides::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_P6UUID,
        "p6uuid",
        sizeof("p6uuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_P3FIRM,
        "p3firm",
        sizeof("p3firm") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_P3CUST,
        "p3cust",
        sizeof("p3cust") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_P3PRCNUM,
        "p3prcnum",
        sizeof("p3prcnum") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_P3SN,
        "p3sn",
        sizeof("p3sn") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_P9DEPARTMENTCODE,
        "p9departmentcode",
        sizeof("p9departmentcode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_PINDEX,
        "pindex",
        sizeof("pindex") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UUIDPRC,
        "uuidprc",
        sizeof("uuidprc") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *EvaluateOverrides::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 8; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    EvaluateOverrides::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *EvaluateOverrides::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_P6UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P6UUID];
      case ATTRIBUTE_ID_P3FIRM:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3FIRM];
      case ATTRIBUTE_ID_P3CUST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3CUST];
      case ATTRIBUTE_ID_P3PRCNUM:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3PRCNUM];
      case ATTRIBUTE_ID_P3SN:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3SN];
      case ATTRIBUTE_ID_P9DEPARTMENTCODE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P9DEPARTMENTCODE];
      case ATTRIBUTE_ID_PINDEX:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PINDEX];
      case ATTRIBUTE_ID_UUIDPRC:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUIDPRC];
      default:
        return 0;
    }
}

// CREATORS

EvaluateOverrides::EvaluateOverrides(bslma::Allocator *basicAllocator)
: d_p9departmentcode(basicAllocator)
, d_p6uuid()
, d_p3firm()
, d_p3cust()
, d_p3prcnum()
, d_p3sn()
, d_pindex()
, d_uuidprc()
{
}

EvaluateOverrides::EvaluateOverrides(const EvaluateOverrides& original,
                                     bslma::Allocator *basicAllocator)
: d_p9departmentcode(original.d_p9departmentcode, basicAllocator)
, d_p6uuid(original.d_p6uuid)
, d_p3firm(original.d_p3firm)
, d_p3cust(original.d_p3cust)
, d_p3prcnum(original.d_p3prcnum)
, d_p3sn(original.d_p3sn)
, d_pindex(original.d_pindex)
, d_uuidprc(original.d_uuidprc)
{
}

EvaluateOverrides::~EvaluateOverrides()
{
}

// MANIPULATORS

EvaluateOverrides&
EvaluateOverrides::operator=(const EvaluateOverrides& rhs)
{
    if (this != &rhs) {
        d_p6uuid = rhs.d_p6uuid;
        d_p3firm = rhs.d_p3firm;
        d_p3cust = rhs.d_p3cust;
        d_p3prcnum = rhs.d_p3prcnum;
        d_p3sn = rhs.d_p3sn;
        d_p9departmentcode = rhs.d_p9departmentcode;
        d_pindex = rhs.d_pindex;
        d_uuidprc = rhs.d_uuidprc;
    }

    return *this;
}

int EvaluateOverrides::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_p6uuid,
                       aggregate,
                       ATTRIBUTE_ID_P6UUID);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_p3firm,
                       aggregate,
                       ATTRIBUTE_ID_P3FIRM);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_p3cust,
                       aggregate,
                       ATTRIBUTE_ID_P3CUST);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_p3prcnum,
                       aggregate,
                       ATTRIBUTE_ID_P3PRCNUM);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_p3sn,
                       aggregate,
                       ATTRIBUTE_ID_P3SN);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_p9departmentcode,
                       aggregate,
                       ATTRIBUTE_ID_P9DEPARTMENTCODE);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_pindex,
                       aggregate,
                       ATTRIBUTE_ID_PINDEX);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_uuidprc,
                       aggregate,
                       ATTRIBUTE_ID_UUIDPRC);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void EvaluateOverrides::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_p6uuid);
    bdeat_ValueTypeFunctions::reset(&d_p3firm);
    bdeat_ValueTypeFunctions::reset(&d_p3cust);
    bdeat_ValueTypeFunctions::reset(&d_p3prcnum);
    bdeat_ValueTypeFunctions::reset(&d_p3sn);
    bdeat_ValueTypeFunctions::reset(&d_p9departmentcode);
    bdeat_ValueTypeFunctions::reset(&d_pindex);
    bdeat_ValueTypeFunctions::reset(&d_uuidprc);
}

// ACCESSORS

bsl::ostream& EvaluateOverrides::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("p6uuid", d_p6uuid);
    printer.printAttribute("p3firm", d_p3firm);
    printer.printAttribute("p3cust", d_p3cust);
    printer.printAttribute("p3prcnum", d_p3prcnum);
    printer.printAttribute("p3sn", d_p3sn);
    printer.printAttribute("p9departmentcode", d_p9departmentcode);
    printer.printAttribute("pindex", d_pindex);
    printer.printAttribute("uuidprc", d_uuidprc);
    printer.end();
    return stream;
}

int EvaluateOverrides::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_P6UUID,
                       d_p6uuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_P3FIRM,
                       d_p3firm);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_P3CUST,
                       d_p3cust);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_P3PRCNUM,
                       d_p3prcnum);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_P3SN,
                       d_p3sn);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_P9DEPARTMENTCODE,
                       d_p9departmentcode);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PINDEX,
                       d_pindex);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UUIDPRC,
                       d_uuidprc);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // -------------------                             
                            // class EventTypeEnum                             
                            // -------------------                             

// PRIVATE CLASS METHODS

int EventTypeEnum::checkRestrictions(const bsls::Types::Int64& value)
{
    if (0 > value) {
        return -1;
    }

    if (99 < value) {
        return -1;
    }

    return 0;
}

// CONSTANTS

const char EventTypeEnum::CLASS_NAME[] = "EventTypeEnum";



                                // -----------                                 
                                // class Group                                 
                                // -----------                                 

// CONSTANTS

const char Group::CLASS_NAME[] = "Group";

const bdeat_AttributeInfo Group::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_GROUP_ID,
        "groupId",
        sizeof("groupId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_GROUP_DESCRIPTION,
        "groupDescription",
        sizeof("groupDescription") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *Group::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    Group::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *Group::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_GROUP_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_ID];
      case ATTRIBUTE_ID_GROUP_DESCRIPTION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_DESCRIPTION];
      default:
        return 0;
    }
}

// CREATORS

Group::Group(bslma::Allocator *basicAllocator)
: d_groupDescription(basicAllocator)
, d_groupId()
{
}

Group::Group(const Group& original,
             bslma::Allocator *basicAllocator)
: d_groupDescription(original.d_groupDescription, basicAllocator)
, d_groupId(original.d_groupId)
{
}

Group::~Group()
{
}

// MANIPULATORS

Group&
Group::operator=(const Group& rhs)
{
    if (this != &rhs) {
        d_groupId = rhs.d_groupId;
        d_groupDescription = rhs.d_groupDescription;
    }

    return *this;
}

int Group::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_groupId,
                       aggregate,
                       ATTRIBUTE_ID_GROUP_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_groupDescription,
                       aggregate,
                       ATTRIBUTE_ID_GROUP_DESCRIPTION)))
    {
        return rc;
    }
    return 0;
}

void Group::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_groupId);
    bdeat_ValueTypeFunctions::reset(&d_groupDescription);
}

// ACCESSORS

bsl::ostream& Group::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("groupId", d_groupId);
    printer.printAttribute("groupDescription", d_groupDescription);
    printer.end();
    return stream;
}

int Group::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_GROUP_ID,
                       d_groupId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_GROUP_DESCRIPTION,
                       d_groupDescription);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                           // ---------------------                            
                           // class InheritanceType                            
                           // ---------------------                            

// CONSTANTS

const char InheritanceType::CLASS_NAME[] = "InheritanceType";

const bdeat_EnumeratorInfo InheritanceType::ENUMERATOR_INFO_ARRAY[] = {
    {
        InheritanceType::USE_PARENT_NODE,
        "Use Parent Node",
        sizeof("Use Parent Node") - 1,
        ""
    },
    {
        InheritanceType::USE_INSTEAD_OF_PARENT_NODE,
        "Use Instead of Parent Node",
        sizeof("Use Instead of Parent Node") - 1,
        ""
    },
    {
        InheritanceType::USE_IN_ADDITION_TO_PARENT_NODE,
        "Use in Addition to Parent Node",
        sizeof("Use in Addition to Parent Node") - 1,
        ""
    }
};

// CLASS METHODS

int InheritanceType::fromInt(InheritanceType::Value *result, int number)
{
    switch (number) {
      case InheritanceType::USE_PARENT_NODE:
      case InheritanceType::USE_INSTEAD_OF_PARENT_NODE:
      case InheritanceType::USE_IN_ADDITION_TO_PARENT_NODE:
        *result = (InheritanceType::Value)number;
        return 0;
      default:
        return -1;
    }
}

int InheritanceType::fromString(
        InheritanceType::Value *result,
        const char         *string,
        int                 stringLength)
{
    for (int i = 0; i < 3; ++i) {
        const bdeat_EnumeratorInfo& enumeratorInfo =
                    InheritanceType::ENUMERATOR_INFO_ARRAY[i];

        if (stringLength == enumeratorInfo.d_nameLength
        &&  0 == bsl::memcmp(enumeratorInfo.d_name_p, string, stringLength))
        {
            *result = (InheritanceType::Value)enumeratorInfo.d_value;
            return 0;
        }
    }

    return -1;
}

const char *InheritanceType::toString(InheritanceType::Value value)
{
    switch (value) {
      case USE_PARENT_NODE: {
        return "Use Parent Node";
      } break;
      case USE_INSTEAD_OF_PARENT_NODE: {
        return "Use Instead of Parent Node";
      } break;
      case USE_IN_ADDITION_TO_PARENT_NODE: {
        return "Use in Addition to Parent Node";
      } break;
    }

    BSLS_ASSERT(!"invalid enumerator");
    return 0;
}


                        // ----------------------------                        
                        // class MarkForDeletionRequest                        
                        // ----------------------------                        

// CONSTANTS

const char MarkForDeletionRequest::CLASS_NAME[] = "MarkForDeletionRequest";

const bdeat_AttributeInfo MarkForDeletionRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_UUID,
        "updateUuid",
        sizeof("updateUuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *MarkForDeletionRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    MarkForDeletionRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *MarkForDeletionRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_UPDATE_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_UUID];
      default:
        return 0;
    }
}

// CREATORS

MarkForDeletionRequest::MarkForDeletionRequest()
: d_entryId()
, d_updateUuid()
{
}

MarkForDeletionRequest::MarkForDeletionRequest(const MarkForDeletionRequest& original)
: d_entryId(original.d_entryId)
, d_updateUuid(original.d_updateUuid)
{
}

MarkForDeletionRequest::~MarkForDeletionRequest()
{
}

// MANIPULATORS

MarkForDeletionRequest&
MarkForDeletionRequest::operator=(const MarkForDeletionRequest& rhs)
{
    if (this != &rhs) {
        d_entryId = rhs.d_entryId;
        d_updateUuid = rhs.d_updateUuid;
    }

    return *this;
}

int MarkForDeletionRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateUuid,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_UUID)))
    {
        return rc;
    }
    return 0;
}

void MarkForDeletionRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_updateUuid);
}

// ACCESSORS

bsl::ostream& MarkForDeletionRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("entryId", d_entryId);
    printer.printAttribute("updateUuid", d_updateUuid);
    printer.end();
    return stream;
}

int MarkForDeletionRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_UUID,
                       d_updateUuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // -----------------                              
                             // class MoveRequest                              
                             // -----------------                              

// CONSTANTS

const char MoveRequest::CLASS_NAME[] = "MoveRequest";

const bdeat_AttributeInfo MoveRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_REGISTRY_ID,
        "registryId",
        sizeof("registryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_MOVE_TO_NODE_ID,
        "moveToNodeId",
        sizeof("moveToNodeId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *MoveRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    MoveRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *MoveRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID];
      case ATTRIBUTE_ID_MOVE_TO_NODE_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MOVE_TO_NODE_ID];
      default:
        return 0;
    }
}

// CREATORS

MoveRequest::MoveRequest()
: d_registryId()
, d_moveToNodeId()
{
}

MoveRequest::MoveRequest(const MoveRequest& original)
: d_registryId(original.d_registryId)
, d_moveToNodeId(original.d_moveToNodeId)
{
}

MoveRequest::~MoveRequest()
{
}

// MANIPULATORS

MoveRequest&
MoveRequest::operator=(const MoveRequest& rhs)
{
    if (this != &rhs) {
        d_registryId = rhs.d_registryId;
        d_moveToNodeId = rhs.d_moveToNodeId;
    }

    return *this;
}

int MoveRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_registryId,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_moveToNodeId,
                       aggregate,
                       ATTRIBUTE_ID_MOVE_TO_NODE_ID)))
    {
        return rc;
    }
    return 0;
}

void MoveRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_registryId);
    bdeat_ValueTypeFunctions::reset(&d_moveToNodeId);
}

// ACCESSORS

bsl::ostream& MoveRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("registryId", d_registryId);
    printer.printAttribute("moveToNodeId", d_moveToNodeId);
    printer.end();
    return stream;
}

int MoveRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY_ID,
                       d_registryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_MOVE_TO_NODE_ID,
                       d_moveToNodeId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                                 // ----------                                 
                                 // class Node                                 
                                 // ----------                                 

// CONSTANTS

const char Node::CLASS_NAME[] = "Node";

const bdeat_AttributeInfo Node::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_NAME,
        "name",
        sizeof("name") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_ID,
        "id",
        sizeof("id") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TYPE,
        "type",
        sizeof("type") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_DESCRIPTION,
        "description",
        sizeof("description") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_HAS_EXPIRED,
        "hasExpired",
        sizeof("hasExpired") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_EXPIRY_TSP,
        "expiryTsp",
        sizeof("expiryTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_CHILDREN,
        "children",
        sizeof("children") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED,
        "obsoleteTraceEnabled",
        sizeof("obsoleteTraceEnabled") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *Node::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 8; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    Node::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *Node::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_NAME:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME];
      case ATTRIBUTE_ID_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID];
      case ATTRIBUTE_ID_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE];
      case ATTRIBUTE_ID_DESCRIPTION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION];
      case ATTRIBUTE_ID_HAS_EXPIRED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED];
      case ATTRIBUTE_ID_EXPIRY_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP];
      case ATTRIBUTE_ID_CHILDREN:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CHILDREN];
      case ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBSOLETE_TRACE_ENABLED];
      default:
        return 0;
    }
}

// CREATORS

Node::Node(bslma::Allocator *basicAllocator)
: d_children(basicAllocator)
, d_name(basicAllocator)
, d_description(basicAllocator)
, d_expiryTsp(basicAllocator)
, d_id()
, d_type()
, d_hasExpired()
, d_obsoleteTraceEnabled()
{
}

Node::Node(const Node& original,
           bslma::Allocator *basicAllocator)
: d_children(original.d_children, basicAllocator)
, d_name(original.d_name, basicAllocator)
, d_description(original.d_description, basicAllocator)
, d_expiryTsp(original.d_expiryTsp, basicAllocator)
, d_id(original.d_id)
, d_type(original.d_type)
, d_hasExpired(original.d_hasExpired)
, d_obsoleteTraceEnabled(original.d_obsoleteTraceEnabled)
{
}

Node::~Node()
{
}

// MANIPULATORS

Node&
Node::operator=(const Node& rhs)
{
    if (this != &rhs) {
        d_name = rhs.d_name;
        d_id = rhs.d_id;
        d_type = rhs.d_type;
        d_description = rhs.d_description;
        d_hasExpired = rhs.d_hasExpired;
        d_expiryTsp = rhs.d_expiryTsp;
        d_children = rhs.d_children;
        d_obsoleteTraceEnabled = rhs.d_obsoleteTraceEnabled;
    }

    return *this;
}

int Node::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_name,
                       aggregate,
                       ATTRIBUTE_ID_NAME)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_id,
                       aggregate,
                       ATTRIBUTE_ID_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_type,
                       aggregate,
                       ATTRIBUTE_ID_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_description,
                       aggregate,
                       ATTRIBUTE_ID_DESCRIPTION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_hasExpired,
                       aggregate,
                       ATTRIBUTE_ID_HAS_EXPIRED)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_expiryTsp,
                       aggregate,
                       ATTRIBUTE_ID_EXPIRY_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_obsoleteTraceEnabled,
                       aggregate,
                       ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_children,
                       aggregate,
                       ATTRIBUTE_ID_CHILDREN);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void Node::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_name);
    bdeat_ValueTypeFunctions::reset(&d_id);
    bdeat_ValueTypeFunctions::reset(&d_type);
    bdeat_ValueTypeFunctions::reset(&d_description);
    bdeat_ValueTypeFunctions::reset(&d_hasExpired);
    bdeat_ValueTypeFunctions::reset(&d_expiryTsp);
    bdeat_ValueTypeFunctions::reset(&d_children);
    bdeat_ValueTypeFunctions::reset(&d_obsoleteTraceEnabled);
}

// ACCESSORS

bsl::ostream& Node::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("name", d_name);
    printer.printAttribute("id", d_id);
    printer.printAttribute("type", d_type);
    printer.printAttribute("description", d_description);
    printer.printAttribute("hasExpired", d_hasExpired);
    printer.printAttribute("expiryTsp", d_expiryTsp);
    printer.printAttribute("children", d_children);
    printer.printAttribute("obsoleteTraceEnabled", d_obsoleteTraceEnabled);
    printer.end();
    return stream;
}

int Node::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NAME,
                       d_name);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ID,
                       d_id);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE,
                       d_type);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_DESCRIPTION,
                       d_description);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_HAS_EXPIRED,
                       d_hasExpired);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EXPIRY_TSP,
                       d_expiryTsp);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CHILDREN,
                       d_children);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED,
                       d_obsoleteTraceEnabled);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // -------------------                             
                            // class NodePrivilege                             
                            // -------------------                             

// CONSTANTS

const char NodePrivilege::CLASS_NAME[] = "NodePrivilege";

const bdeat_AttributeInfo NodePrivilege::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN,
        "isPrivilegeAdmin",
        sizeof("isPrivilegeAdmin") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_CAN_UPDATE_PROD,
        "canUpdateProd",
        sizeof("canUpdateProd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_CAN_UPDATE_DESC,
        "canUpdateDesc",
        sizeof("canUpdateDesc") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_CAN_RELEASE_CODE,
        "canReleaseCode",
        sizeof("canReleaseCode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_CAN_UPDATE_DEV,
        "canUpdateDev",
        sizeof("canUpdateDev") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *NodePrivilege::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 5; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    NodePrivilege::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *NodePrivilege::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRIVILEGE_ADMIN];
      case ATTRIBUTE_ID_CAN_UPDATE_PROD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_PROD];
      case ATTRIBUTE_ID_CAN_UPDATE_DESC:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DESC];
      case ATTRIBUTE_ID_CAN_RELEASE_CODE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_RELEASE_CODE];
      case ATTRIBUTE_ID_CAN_UPDATE_DEV:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DEV];
      default:
        return 0;
    }
}

// CREATORS

NodePrivilege::NodePrivilege()
: d_isPrivilegeAdmin()
, d_canUpdateProd()
, d_canUpdateDesc()
, d_canReleaseCode()
, d_canUpdateDev()
{
}

NodePrivilege::NodePrivilege(const NodePrivilege& original)
: d_isPrivilegeAdmin(original.d_isPrivilegeAdmin)
, d_canUpdateProd(original.d_canUpdateProd)
, d_canUpdateDesc(original.d_canUpdateDesc)
, d_canReleaseCode(original.d_canReleaseCode)
, d_canUpdateDev(original.d_canUpdateDev)
{
}

NodePrivilege::~NodePrivilege()
{
}

// MANIPULATORS

NodePrivilege&
NodePrivilege::operator=(const NodePrivilege& rhs)
{
    if (this != &rhs) {
        d_isPrivilegeAdmin = rhs.d_isPrivilegeAdmin;
        d_canUpdateProd = rhs.d_canUpdateProd;
        d_canUpdateDesc = rhs.d_canUpdateDesc;
        d_canReleaseCode = rhs.d_canReleaseCode;
        d_canUpdateDev = rhs.d_canUpdateDev;
    }

    return *this;
}

int NodePrivilege::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_isPrivilegeAdmin,
                       aggregate,
                       ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_canUpdateProd,
                       aggregate,
                       ATTRIBUTE_ID_CAN_UPDATE_PROD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_canUpdateDesc,
                       aggregate,
                       ATTRIBUTE_ID_CAN_UPDATE_DESC)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_canReleaseCode,
                       aggregate,
                       ATTRIBUTE_ID_CAN_RELEASE_CODE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_canUpdateDev,
                       aggregate,
                       ATTRIBUTE_ID_CAN_UPDATE_DEV)))
    {
        return rc;
    }
    return 0;
}

void NodePrivilege::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_isPrivilegeAdmin);
    bdeat_ValueTypeFunctions::reset(&d_canUpdateProd);
    bdeat_ValueTypeFunctions::reset(&d_canUpdateDesc);
    bdeat_ValueTypeFunctions::reset(&d_canReleaseCode);
    bdeat_ValueTypeFunctions::reset(&d_canUpdateDev);
}

// ACCESSORS

bsl::ostream& NodePrivilege::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("isPrivilegeAdmin", d_isPrivilegeAdmin);
    printer.printAttribute("canUpdateProd", d_canUpdateProd);
    printer.printAttribute("canUpdateDesc", d_canUpdateDesc);
    printer.printAttribute("canReleaseCode", d_canReleaseCode);
    printer.printAttribute("canUpdateDev", d_canUpdateDev);
    printer.end();
    return stream;
}

int NodePrivilege::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN,
                       d_isPrivilegeAdmin);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CAN_UPDATE_PROD,
                       d_canUpdateProd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CAN_UPDATE_DESC,
                       d_canUpdateDesc);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CAN_RELEASE_CODE,
                       d_canReleaseCode);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CAN_UPDATE_DEV,
                       d_canUpdateDev);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // ------------------                             
                             // class OverrideType                             
                             // ------------------                             

// CONSTANTS

const char OverrideType::CLASS_NAME[] = "OverrideType";

const bdeat_EnumeratorInfo OverrideType::ENUMERATOR_INFO_ARRAY[] = {
    {
        OverrideType::UNKNOWN,
        "Unknown",
        sizeof("Unknown") - 1,
        ""
    },
    {
        OverrideType::MACHINE_OR_GROUP,
        "Machine or Group",
        sizeof("Machine or Group") - 1,
        ""
    },
    {
        OverrideType::CUSTOMER,
        "Customer",
        sizeof("Customer") - 1,
        ""
    },
    {
        OverrideType::UUID,
        "UUID",
        sizeof("UUID") - 1,
        ""
    },
    {
        OverrideType::FIRM_NUMBER,
        "Firm Number",
        sizeof("Firm Number") - 1,
        ""
    },
    {
        OverrideType::TS_PRICING_NUMBER,
        "TS Pricing Number",
        sizeof("TS Pricing Number") - 1,
        ""
    },
    {
        OverrideType::DEPARTMENT_CODE,
        "Department Code",
        sizeof("Department Code") - 1,
        ""
    },
    {
        OverrideType::SERIAL_NUMBER,
        "Serial Number",
        sizeof("Serial Number") - 1,
        ""
    },
    {
        OverrideType::PINDEX,
        "Pindex",
        sizeof("Pindex") - 1,
        ""
    },
    {
        OverrideType::UUID_PERCENT,
        "UUID Percent",
        sizeof("UUID Percent") - 1,
        ""
    }
};

// CLASS METHODS

int OverrideType::fromInt(OverrideType::Value *result, int number)
{
    switch (number) {
      case OverrideType::UNKNOWN:
      case OverrideType::MACHINE_OR_GROUP:
      case OverrideType::CUSTOMER:
      case OverrideType::UUID:
      case OverrideType::FIRM_NUMBER:
      case OverrideType::TS_PRICING_NUMBER:
      case OverrideType::DEPARTMENT_CODE:
      case OverrideType::SERIAL_NUMBER:
      case OverrideType::PINDEX:
      case OverrideType::UUID_PERCENT:
        *result = (OverrideType::Value)number;
        return 0;
      default:
        return -1;
    }
}

int OverrideType::fromString(
        OverrideType::Value *result,
        const char         *string,
        int                 stringLength)
{
    for (int i = 0; i < 10; ++i) {
        const bdeat_EnumeratorInfo& enumeratorInfo =
                    OverrideType::ENUMERATOR_INFO_ARRAY[i];

        if (stringLength == enumeratorInfo.d_nameLength
        &&  0 == bsl::memcmp(enumeratorInfo.d_name_p, string, stringLength))
        {
            *result = (OverrideType::Value)enumeratorInfo.d_value;
            return 0;
        }
    }

    return -1;
}

const char *OverrideType::toString(OverrideType::Value value)
{
    switch (value) {
      case UNKNOWN: {
        return "Unknown";
      } break;
      case MACHINE_OR_GROUP: {
        return "Machine or Group";
      } break;
      case CUSTOMER: {
        return "Customer";
      } break;
      case UUID: {
        return "UUID";
      } break;
      case FIRM_NUMBER: {
        return "Firm Number";
      } break;
      case TS_PRICING_NUMBER: {
        return "TS Pricing Number";
      } break;
      case DEPARTMENT_CODE: {
        return "Department Code";
      } break;
      case SERIAL_NUMBER: {
        return "Serial Number";
      } break;
      case PINDEX: {
        return "Pindex";
      } break;
      case UUID_PERCENT: {
        return "UUID Percent";
      } break;
    }

    BSLS_ASSERT(!"invalid enumerator");
    return 0;
}


                         // --------------------------                         
                         // class RelatedTicketRequest                         
                         // --------------------------                         

// CONSTANTS

const char RelatedTicketRequest::CLASS_NAME[] = "RelatedTicketRequest";

const bdeat_AttributeInfo RelatedTicketRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_TYPE,
        "type",
        sizeof("type") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_NUMBER,
        "number",
        sizeof("number") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *RelatedTicketRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    RelatedTicketRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *RelatedTicketRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE];
      case ATTRIBUTE_ID_NUMBER:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUMBER];
      default:
        return 0;
    }
}

// CREATORS

RelatedTicketRequest::RelatedTicketRequest(bslma::Allocator *basicAllocator)
: d_type(basicAllocator)
, d_number()
{
}

RelatedTicketRequest::RelatedTicketRequest(const RelatedTicketRequest& original,
                                           bslma::Allocator *basicAllocator)
: d_type(original.d_type, basicAllocator)
, d_number(original.d_number)
{
}

RelatedTicketRequest::~RelatedTicketRequest()
{
}

// MANIPULATORS

RelatedTicketRequest&
RelatedTicketRequest::operator=(const RelatedTicketRequest& rhs)
{
    if (this != &rhs) {
        d_type = rhs.d_type;
        d_number = rhs.d_number;
    }

    return *this;
}

int RelatedTicketRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_type,
                       aggregate,
                       ATTRIBUTE_ID_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_number,
                       aggregate,
                       ATTRIBUTE_ID_NUMBER)))
    {
        return rc;
    }
    return 0;
}

void RelatedTicketRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_type);
    bdeat_ValueTypeFunctions::reset(&d_number);
}

// ACCESSORS

bsl::ostream& RelatedTicketRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("type", d_type);
    printer.printAttribute("number", d_number);
    printer.end();
    return stream;
}

int RelatedTicketRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE,
                       d_type);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NUMBER,
                       d_number);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                           // ----------------------                           
                           // class SearchByContacts                           
                           // ----------------------                           

// CONSTANTS

const char SearchByContacts::CLASS_NAME[] = "SearchByContacts";

const bdeat_AttributeInfo SearchByContacts::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_UUID,
        "uuid",
        sizeof("uuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_CONTACT_TYPE,
        "contactType",
        sizeof("contactType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *SearchByContacts::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    SearchByContacts::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *SearchByContacts::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID];
      case ATTRIBUTE_ID_CONTACT_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACT_TYPE];
      default:
        return 0;
    }
}

// CREATORS

SearchByContacts::SearchByContacts()
: d_uuid()
, d_contactType()
{
}

SearchByContacts::SearchByContacts(const SearchByContacts& original)
: d_uuid(original.d_uuid)
, d_contactType(original.d_contactType)
{
}

SearchByContacts::~SearchByContacts()
{
}

// MANIPULATORS

SearchByContacts&
SearchByContacts::operator=(const SearchByContacts& rhs)
{
    if (this != &rhs) {
        d_uuid = rhs.d_uuid;
        d_contactType = rhs.d_contactType;
    }

    return *this;
}

int SearchByContacts::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_uuid,
                       aggregate,
                       ATTRIBUTE_ID_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_contactType,
                       aggregate,
                       ATTRIBUTE_ID_CONTACT_TYPE)))
    {
        return rc;
    }
    return 0;
}

void SearchByContacts::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_uuid);
    bdeat_ValueTypeFunctions::reset(&d_contactType);
}

// ACCESSORS

bsl::ostream& SearchByContacts::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("uuid", d_uuid);
    printer.printAttribute("contactType", d_contactType);
    printer.end();
    return stream;
}

int SearchByContacts::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UUID,
                       d_uuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CONTACT_TYPE,
                       d_contactType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                           // ----------------------                           
                           // class SearchByKeywords                           
                           // ----------------------                           

// CONSTANTS

const char SearchByKeywords::CLASS_NAME[] = "SearchByKeywords";

const bdeat_AttributeInfo SearchByKeywords::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_KEYWORDS,
        "keywords",
        sizeof("keywords") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *SearchByKeywords::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 1; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    SearchByKeywords::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *SearchByKeywords::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_KEYWORDS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS];
      default:
        return 0;
    }
}

// CREATORS

SearchByKeywords::SearchByKeywords(bslma::Allocator *basicAllocator)
: d_keywords(basicAllocator)
{
}

SearchByKeywords::SearchByKeywords(const SearchByKeywords& original,
                                   bslma::Allocator *basicAllocator)
: d_keywords(original.d_keywords, basicAllocator)
{
}

SearchByKeywords::~SearchByKeywords()
{
}

// MANIPULATORS

SearchByKeywords&
SearchByKeywords::operator=(const SearchByKeywords& rhs)
{
    if (this != &rhs) {
        d_keywords = rhs.d_keywords;
    }

    return *this;
}

int SearchByKeywords::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_keywords,
                       aggregate,
                       ATTRIBUTE_ID_KEYWORDS)))
    {
        return rc;
    }
    return 0;
}

void SearchByKeywords::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_keywords);
}

// ACCESSORS

bsl::ostream& SearchByKeywords::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("keywords", d_keywords);
    printer.end();
    return stream;
}

int SearchByKeywords::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_KEYWORDS,
                       d_keywords);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // ------------------                             
                             // class TodoListItem                             
                             // ------------------                             

// CONSTANTS

const char TodoListItem::CLASS_NAME[] = "TodoListItem";

const bdeat_AttributeInfo TodoListItem::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_TICKET_NUMBER,
        "ticketNumber",
        sizeof("ticketNumber") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TICKET_TYPE,
        "ticketType",
        sizeof("ticketType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_DRQS_TYPE,
        "drqsType",
        sizeof("drqsType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_STATUS,
        "status",
        sizeof("status") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_SUMMARY,
        "summary",
        sizeof("summary") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *TodoListItem::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 5; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    TodoListItem::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *TodoListItem::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_TICKET_NUMBER:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER];
      case ATTRIBUTE_ID_TICKET_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE];
      case ATTRIBUTE_ID_DRQS_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_TYPE];
      case ATTRIBUTE_ID_STATUS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS];
      case ATTRIBUTE_ID_SUMMARY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SUMMARY];
      default:
        return 0;
    }
}

// CREATORS

TodoListItem::TodoListItem(bslma::Allocator *basicAllocator)
: d_ticketType(basicAllocator)
, d_drqsType(basicAllocator)
, d_status(basicAllocator)
, d_summary(basicAllocator)
, d_ticketNumber()
{
}

TodoListItem::TodoListItem(const TodoListItem& original,
                           bslma::Allocator *basicAllocator)
: d_ticketType(original.d_ticketType, basicAllocator)
, d_drqsType(original.d_drqsType, basicAllocator)
, d_status(original.d_status, basicAllocator)
, d_summary(original.d_summary, basicAllocator)
, d_ticketNumber(original.d_ticketNumber)
{
}

TodoListItem::~TodoListItem()
{
}

// MANIPULATORS

TodoListItem&
TodoListItem::operator=(const TodoListItem& rhs)
{
    if (this != &rhs) {
        d_ticketNumber = rhs.d_ticketNumber;
        d_ticketType = rhs.d_ticketType;
        d_drqsType = rhs.d_drqsType;
        d_status = rhs.d_status;
        d_summary = rhs.d_summary;
    }

    return *this;
}

int TodoListItem::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_ticketNumber,
                       aggregate,
                       ATTRIBUTE_ID_TICKET_NUMBER)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_ticketType,
                       aggregate,
                       ATTRIBUTE_ID_TICKET_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_drqsType,
                       aggregate,
                       ATTRIBUTE_ID_DRQS_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_status,
                       aggregate,
                       ATTRIBUTE_ID_STATUS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_summary,
                       aggregate,
                       ATTRIBUTE_ID_SUMMARY)))
    {
        return rc;
    }
    return 0;
}

void TodoListItem::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_ticketNumber);
    bdeat_ValueTypeFunctions::reset(&d_ticketType);
    bdeat_ValueTypeFunctions::reset(&d_drqsType);
    bdeat_ValueTypeFunctions::reset(&d_status);
    bdeat_ValueTypeFunctions::reset(&d_summary);
}

// ACCESSORS

bsl::ostream& TodoListItem::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("ticketNumber", d_ticketNumber);
    printer.printAttribute("ticketType", d_ticketType);
    printer.printAttribute("drqsType", d_drqsType);
    printer.printAttribute("status", d_status);
    printer.printAttribute("summary", d_summary);
    printer.end();
    return stream;
}

int TodoListItem::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TICKET_NUMBER,
                       d_ticketNumber);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TICKET_TYPE,
                       d_ticketType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_DRQS_TYPE,
                       d_drqsType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_STATUS,
                       d_status);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SUMMARY,
                       d_summary);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                               // --------------                               
                               // class UserData                               
                               // --------------                               

// CONSTANTS

const char UserData::CLASS_NAME[] = "UserData";

const bdeat_AttributeInfo UserData::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_USER_FLAGS,
        "userFlags",
        sizeof("userFlags") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_USER_NUMBER,
        "userNumber",
        sizeof("userNumber") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *UserData::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    UserData::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *UserData::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_USER_FLAGS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_FLAGS];
      case ATTRIBUTE_ID_USER_NUMBER:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_NUMBER];
      default:
        return 0;
    }
}

// CREATORS

UserData::UserData(bslma::Allocator *basicAllocator)
: d_userNumber()
, d_userFlags(basicAllocator)
{
}

UserData::UserData(const UserData& original,
                   bslma::Allocator *basicAllocator)
: d_userNumber(original.d_userNumber)
, d_userFlags(original.d_userFlags, basicAllocator)
{
}

UserData::~UserData()
{
}

// MANIPULATORS

UserData&
UserData::operator=(const UserData& rhs)
{
    if (this != &rhs) {
        d_userFlags = rhs.d_userFlags;
        d_userNumber = rhs.d_userNumber;
    }

    return *this;
}

int UserData::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_userFlags,
                       aggregate,
                       ATTRIBUTE_ID_USER_FLAGS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_userNumber,
                       aggregate,
                       ATTRIBUTE_ID_USER_NUMBER)))
    {
        return rc;
    }
    return 0;
}

void UserData::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_userFlags);
    bdeat_ValueTypeFunctions::reset(&d_userNumber);
}

// ACCESSORS

bsl::ostream& UserData::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("userFlags", d_userFlags);
    printer.printAttribute("userNumber", d_userNumber);
    printer.end();
    return stream;
}

int UserData::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_USER_FLAGS,
                       d_userFlags);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_USER_NUMBER,
                       d_userNumber);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // ------------------                             
                             // class ValueRequest                             
                             // ------------------                             

// CONSTANTS

const char ValueRequest::CLASS_NAME[] = "ValueRequest";

const bdeat_AttributeInfo ValueRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VERSION,
        "version",
        sizeof("version") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *ValueRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    ValueRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *ValueRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_VERSION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION];
      default:
        return 0;
    }
}

// CREATORS

ValueRequest::ValueRequest()
: d_entryId()
, d_version()
{
}

ValueRequest::ValueRequest(const ValueRequest& original)
: d_entryId(original.d_entryId)
, d_version(original.d_version)
{
}

ValueRequest::~ValueRequest()
{
}

// MANIPULATORS

ValueRequest&
ValueRequest::operator=(const ValueRequest& rhs)
{
    if (this != &rhs) {
        d_entryId = rhs.d_entryId;
        d_version = rhs.d_version;
    }

    return *this;
}

int ValueRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_version,
                       aggregate,
                       ATTRIBUTE_ID_VERSION)))
    {
        return rc;
    }
    return 0;
}

void ValueRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_version);
}

// ACCESSORS

bsl::ostream& ValueRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("entryId", d_entryId);
    printer.printAttribute("version", d_version);
    printer.end();
    return stream;
}

int ValueRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VERSION,
                       d_version);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                              // ---------------                               
                              // class ValueType                               
                              // ---------------                               

// CONSTANTS

const char ValueType::CLASS_NAME[] = "ValueType";

const bdeat_EnumeratorInfo ValueType::ENUMERATOR_INFO_ARRAY[] = {
    {
        ValueType::UNKNOWN,
        "Unknown",
        sizeof("Unknown") - 1,
        ""
    },
    {
        ValueType::BOOLEAN,
        "Boolean",
        sizeof("Boolean") - 1,
        ""
    },
    {
        ValueType::INTEGER,
        "Integer",
        sizeof("Integer") - 1,
        ""
    },
    {
        ValueType::CHARACTER,
        "Character",
        sizeof("Character") - 1,
        ""
    },
    {
        ValueType::DOUBLE,
        "Double",
        sizeof("Double") - 1,
        ""
    },
    {
        ValueType::LIST_OF_INTEGERS,
        "List of Integers",
        sizeof("List of Integers") - 1,
        ""
    },
    {
        ValueType::STRING,
        "String",
        sizeof("String") - 1,
        ""
    },
    {
        ValueType::EXT_LIST_OF_INTEGERS,
        "Ext List of Integers",
        sizeof("Ext List of Integers") - 1,
        ""
    },
    {
        ValueType::EXTENDED_STRING,
        "Extended String",
        sizeof("Extended String") - 1,
        ""
    },
    {
        ValueType::INTEGER_TABLE,
        "Integer Table",
        sizeof("Integer Table") - 1,
        ""
    },
    {
        ValueType::CHARACTER_TABLE,
        "Character Table",
        sizeof("Character Table") - 1,
        ""
    },
    {
        ValueType::BOOLEAN_TABLE,
        "Boolean Table",
        sizeof("Boolean Table") - 1,
        ""
    },
    {
        ValueType::STRING_TABLE,
        "String Table",
        sizeof("String Table") - 1,
        ""
    },
    {
        ValueType::LIST_OF_INTEGERS_TABLE,
        "List of Integers Table",
        sizeof("List of Integers Table") - 1,
        ""
    },
    {
        ValueType::DOUBLE_TABLE,
        "Double Table",
        sizeof("Double Table") - 1,
        ""
    }
};

// CLASS METHODS

int ValueType::fromInt(ValueType::Value *result, int number)
{
    switch (number) {
      case ValueType::UNKNOWN:
      case ValueType::BOOLEAN:
      case ValueType::INTEGER:
      case ValueType::CHARACTER:
      case ValueType::DOUBLE:
      case ValueType::LIST_OF_INTEGERS:
      case ValueType::STRING:
      case ValueType::EXT_LIST_OF_INTEGERS:
      case ValueType::EXTENDED_STRING:
      case ValueType::INTEGER_TABLE:
      case ValueType::CHARACTER_TABLE:
      case ValueType::BOOLEAN_TABLE:
      case ValueType::STRING_TABLE:
      case ValueType::LIST_OF_INTEGERS_TABLE:
      case ValueType::DOUBLE_TABLE:
        *result = (ValueType::Value)number;
        return 0;
      default:
        return -1;
    }
}

int ValueType::fromString(
        ValueType::Value *result,
        const char         *string,
        int                 stringLength)
{
    for (int i = 0; i < 15; ++i) {
        const bdeat_EnumeratorInfo& enumeratorInfo =
                    ValueType::ENUMERATOR_INFO_ARRAY[i];

        if (stringLength == enumeratorInfo.d_nameLength
        &&  0 == bsl::memcmp(enumeratorInfo.d_name_p, string, stringLength))
        {
            *result = (ValueType::Value)enumeratorInfo.d_value;
            return 0;
        }
    }

    return -1;
}

const char *ValueType::toString(ValueType::Value value)
{
    switch (value) {
      case UNKNOWN: {
        return "Unknown";
      } break;
      case BOOLEAN: {
        return "Boolean";
      } break;
      case INTEGER: {
        return "Integer";
      } break;
      case CHARACTER: {
        return "Character";
      } break;
      case DOUBLE: {
        return "Double";
      } break;
      case LIST_OF_INTEGERS: {
        return "List of Integers";
      } break;
      case STRING: {
        return "String";
      } break;
      case EXT_LIST_OF_INTEGERS: {
        return "Ext List of Integers";
      } break;
      case EXTENDED_STRING: {
        return "Extended String";
      } break;
      case INTEGER_TABLE: {
        return "Integer Table";
      } break;
      case CHARACTER_TABLE: {
        return "Character Table";
      } break;
      case BOOLEAN_TABLE: {
        return "Boolean Table";
      } break;
      case STRING_TABLE: {
        return "String Table";
      } break;
      case LIST_OF_INTEGERS_TABLE: {
        return "List of Integers Table";
      } break;
      case DOUBLE_TABLE: {
        return "Double Table";
      } break;
    }

    BSLS_ASSERT(!"invalid enumerator");
    return 0;
}


                              // ----------------                              
                              // class VersionTsp                              
                              // ----------------                              

// CONSTANTS

const char VersionTsp::CLASS_NAME[] = "VersionTsp";

const bdeat_AttributeInfo VersionTsp::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_VERSION,
        "version",
        sizeof("version") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_EPOCH,
        "updateEpoch",
        sizeof("updateEpoch") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PRQS_NUMBER,
        "prqsNumber",
        sizeof("prqsNumber") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PRQS_STATUS,
        "prqsStatus",
        sizeof("prqsStatus") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_UPDATE_TSP,
        "updateTsp",
        sizeof("updateTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *VersionTsp::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 5; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    VersionTsp::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *VersionTsp::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_VERSION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION];
      case ATTRIBUTE_ID_UPDATE_EPOCH:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_EPOCH];
      case ATTRIBUTE_ID_PRQS_NUMBER:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER];
      case ATTRIBUTE_ID_PRQS_STATUS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      default:
        return 0;
    }
}

// CREATORS

VersionTsp::VersionTsp(bslma::Allocator *basicAllocator)
: d_version()
, d_prqsStatus(basicAllocator)
, d_updateTsp(basicAllocator)
, d_updateEpoch()
, d_prqsNumber()
{
}

VersionTsp::VersionTsp(const VersionTsp& original,
                       bslma::Allocator *basicAllocator)
: d_version(original.d_version)
, d_prqsStatus(original.d_prqsStatus, basicAllocator)
, d_updateTsp(original.d_updateTsp, basicAllocator)
, d_updateEpoch(original.d_updateEpoch)
, d_prqsNumber(original.d_prqsNumber)
{
}

VersionTsp::~VersionTsp()
{
}

// MANIPULATORS

VersionTsp&
VersionTsp::operator=(const VersionTsp& rhs)
{
    if (this != &rhs) {
        d_version = rhs.d_version;
        d_updateEpoch = rhs.d_updateEpoch;
        d_prqsNumber = rhs.d_prqsNumber;
        d_prqsStatus = rhs.d_prqsStatus;
        d_updateTsp = rhs.d_updateTsp;
    }

    return *this;
}

int VersionTsp::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_version,
                       aggregate,
                       ATTRIBUTE_ID_VERSION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateEpoch,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_EPOCH)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prqsNumber,
                       aggregate,
                       ATTRIBUTE_ID_PRQS_NUMBER)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prqsStatus,
                       aggregate,
                       ATTRIBUTE_ID_PRQS_STATUS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)))
    {
        return rc;
    }
    return 0;
}

void VersionTsp::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_version);
    bdeat_ValueTypeFunctions::reset(&d_updateEpoch);
    bdeat_ValueTypeFunctions::reset(&d_prqsNumber);
    bdeat_ValueTypeFunctions::reset(&d_prqsStatus);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
}

// ACCESSORS

bsl::ostream& VersionTsp::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("version", d_version);
    printer.printAttribute("updateEpoch", d_updateEpoch);
    printer.printAttribute("prqsNumber", d_prqsNumber);
    printer.printAttribute("prqsStatus", d_prqsStatus);
    printer.printAttribute("updateTsp", d_updateTsp);
    printer.end();
    return stream;
}

int VersionTsp::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VERSION,
                       d_version);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_EPOCH,
                       d_updateEpoch);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRQS_NUMBER,
                       d_prqsNumber);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRQS_STATUS,
                       d_prqsStatus);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_TSP,
                       d_updateTsp);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                                 // ----------                                 
                                 // class Void                                 
                                 // ----------                                 

// CONSTANTS

const char Void::CLASS_NAME[] = "Void";


// CLASS METHODS

const bdeat_AttributeInfo *Void::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    return 0;
}

const bdeat_AttributeInfo *Void::lookupAttributeInfo(int id)
{
    switch (id) {
      default:
        return 0;
    }
}

// CREATORS

Void::Void()
{
}

Void::Void(const Void& original)
{
}

Void::~Void()
{
}

// MANIPULATORS

Void&
Void::operator=(const Void& rhs)
{
    return *this;
}

int Void::fromAggregate(const bcem_Aggregate& aggregate)
{
    return 0;
}

void Void::reset()
{
}

// ACCESSORS

bsl::ostream& Void::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    return stream;
}

int Void::toAggregate(bcem_Aggregate *result) const
{
    return 0;
}


                             // -----------------                              
                             // class AuditRecord                              
                             // -----------------                              

// CONSTANTS

const char AuditRecord::CLASS_NAME[] = "AuditRecord";

const bdeat_AttributeInfo AuditRecord::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PRQS_NUMBER,
        "prqsNumber",
        sizeof("prqsNumber") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PRQS_STATUS,
        "prqsStatus",
        sizeof("prqsStatus") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_UUID,
        "uuid",
        sizeof("uuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_TSP,
        "updateTsp",
        sizeof("updateTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_EVENT_TYPE,
        "eventType",
        sizeof("eventType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_OLD_VALUE,
        "oldValue",
        sizeof("oldValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_NEW_VALUE,
        "newValue",
        sizeof("newValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TICKET_TYPE,
        "ticketType",
        sizeof("ticketType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TICKET_NUMBER,
        "ticketNumber",
        sizeof("ticketNumber") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_LOG_NOTE,
        "logNote",
        sizeof("logNote") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *AuditRecord::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 11; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    AuditRecord::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *AuditRecord::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_PRQS_NUMBER:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER];
      case ATTRIBUTE_ID_PRQS_STATUS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS];
      case ATTRIBUTE_ID_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_EVENT_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EVENT_TYPE];
      case ATTRIBUTE_ID_OLD_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OLD_VALUE];
      case ATTRIBUTE_ID_NEW_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NEW_VALUE];
      case ATTRIBUTE_ID_TICKET_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE];
      case ATTRIBUTE_ID_TICKET_NUMBER:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER];
      case ATTRIBUTE_ID_LOG_NOTE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE];
      default:
        return 0;
    }
}

// CREATORS

AuditRecord::AuditRecord(bslma::Allocator *basicAllocator)
: d_entryId()
, d_prqsNumber()
, d_uuid()
, d_oldValue()
, d_newValue()
, d_ticketType()
, d_ticketNumber()
, d_prqsStatus(basicAllocator)
, d_updateTsp(basicAllocator)
, d_logNote(basicAllocator)
, d_eventType()
{
}

AuditRecord::AuditRecord(const AuditRecord& original,
                         bslma::Allocator *basicAllocator)
: d_entryId(original.d_entryId)
, d_prqsNumber(original.d_prqsNumber)
, d_uuid(original.d_uuid)
, d_oldValue(original.d_oldValue)
, d_newValue(original.d_newValue)
, d_ticketType(original.d_ticketType)
, d_ticketNumber(original.d_ticketNumber)
, d_prqsStatus(original.d_prqsStatus, basicAllocator)
, d_updateTsp(original.d_updateTsp, basicAllocator)
, d_logNote(original.d_logNote, basicAllocator)
, d_eventType(original.d_eventType)
{
}

AuditRecord::~AuditRecord()
{
}

// MANIPULATORS

AuditRecord&
AuditRecord::operator=(const AuditRecord& rhs)
{
    if (this != &rhs) {
        d_entryId = rhs.d_entryId;
        d_prqsNumber = rhs.d_prqsNumber;
        d_prqsStatus = rhs.d_prqsStatus;
        d_uuid = rhs.d_uuid;
        d_updateTsp = rhs.d_updateTsp;
        d_eventType = rhs.d_eventType;
        d_oldValue = rhs.d_oldValue;
        d_newValue = rhs.d_newValue;
        d_ticketType = rhs.d_ticketType;
        d_ticketNumber = rhs.d_ticketNumber;
        d_logNote = rhs.d_logNote;
    }

    return *this;
}

int AuditRecord::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prqsNumber,
                       aggregate,
                       ATTRIBUTE_ID_PRQS_NUMBER)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prqsStatus,
                       aggregate,
                       ATTRIBUTE_ID_PRQS_STATUS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_uuid,
                       aggregate,
                       ATTRIBUTE_ID_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_eventType,
                       aggregate,
                       ATTRIBUTE_ID_EVENT_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_oldValue,
                       aggregate,
                       ATTRIBUTE_ID_OLD_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_newValue,
                       aggregate,
                       ATTRIBUTE_ID_NEW_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_ticketType,
                       aggregate,
                       ATTRIBUTE_ID_TICKET_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_ticketNumber,
                       aggregate,
                       ATTRIBUTE_ID_TICKET_NUMBER)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_logNote,
                       aggregate,
                       ATTRIBUTE_ID_LOG_NOTE)))
    {
        return rc;
    }
    return 0;
}

void AuditRecord::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_prqsNumber);
    bdeat_ValueTypeFunctions::reset(&d_prqsStatus);
    bdeat_ValueTypeFunctions::reset(&d_uuid);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_eventType);
    bdeat_ValueTypeFunctions::reset(&d_oldValue);
    bdeat_ValueTypeFunctions::reset(&d_newValue);
    bdeat_ValueTypeFunctions::reset(&d_ticketType);
    bdeat_ValueTypeFunctions::reset(&d_ticketNumber);
    bdeat_ValueTypeFunctions::reset(&d_logNote);
}

// ACCESSORS

bsl::ostream& AuditRecord::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("entryId", d_entryId);
    printer.printAttribute("prqsNumber", d_prqsNumber);
    printer.printAttribute("prqsStatus", d_prqsStatus);
    printer.printAttribute("uuid", d_uuid);
    printer.printAttribute("updateTsp", d_updateTsp);
    printer.printAttribute("eventType", d_eventType);
    printer.printAttribute("oldValue", d_oldValue);
    printer.printAttribute("newValue", d_newValue);
    printer.printAttribute("ticketType", d_ticketType);
    printer.printAttribute("ticketNumber", d_ticketNumber);
    printer.printAttribute("logNote", d_logNote);
    printer.end();
    return stream;
}

int AuditRecord::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRQS_NUMBER,
                       d_prqsNumber);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRQS_STATUS,
                       d_prqsStatus);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UUID,
                       d_uuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_TSP,
                       d_updateTsp);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EVENT_TYPE,
                       d_eventType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OLD_VALUE,
                       d_oldValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NEW_VALUE,
                       d_newValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TICKET_TYPE,
                       d_ticketType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TICKET_NUMBER,
                       d_ticketNumber);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_LOG_NOTE,
                       d_logNote);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                              // ---------------                               
                              // class EntryInfo                               
                              // ---------------                               

// CONSTANTS

const char EntryInfo::CLASS_NAME[] = "EntryInfo";

const bdeat_AttributeInfo EntryInfo::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_CURRENT_VERSION,
        "currentVersion",
        sizeof("currentVersion") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VALUE_TYPE,
        "valueType",
        sizeof("valueType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_API_NAME,
        "apiName",
        sizeof("apiName") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_API_STATUS,
        "apiStatus",
        sizeof("apiStatus") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_EXPIRY_TSP,
        "expiryTsp",
        sizeof("expiryTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_PERMANENT,
        "isPermanent",
        sizeof("isPermanent") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_SHARED_MEMORY,
        "isSharedMemory",
        sizeof("isSharedMemory") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST,
        "maxNumValuesInList",
        sizeof("maxNumValuesInList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PWHO_ID,
        "pwhoId",
        sizeof("pwhoId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_API_DATE,
        "apiDate",
        sizeof("apiDate") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *EntryInfo::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 11; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    EntryInfo::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *EntryInfo::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_CURRENT_VERSION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CURRENT_VERSION];
      case ATTRIBUTE_ID_VALUE_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE];
      case ATTRIBUTE_ID_API_NAME:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME];
      case ATTRIBUTE_ID_API_STATUS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS];
      case ATTRIBUTE_ID_EXPIRY_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP];
      case ATTRIBUTE_ID_IS_PERMANENT:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT];
      case ATTRIBUTE_ID_IS_SHARED_MEMORY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY];
      case ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NUM_VALUES_IN_LIST];
      case ATTRIBUTE_ID_PWHO_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PWHO_ID];
      case ATTRIBUTE_ID_API_DATE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_DATE];
      default:
        return 0;
    }
}

// CREATORS

EntryInfo::EntryInfo(bslma::Allocator *basicAllocator)
: d_entryId()
, d_currentVersion()
, d_maxNumValuesInList()
, d_pwhoId()
, d_apiName(basicAllocator)
, d_expiryTsp(basicAllocator)
, d_apiDate()
, d_valueType(static_cast<ValueType::Value>(0))
, d_apiStatus(static_cast<ApiStatus::Value>(0))
, d_isPermanent()
, d_isSharedMemory()
{
}

EntryInfo::EntryInfo(const EntryInfo& original,
                     bslma::Allocator *basicAllocator)
: d_entryId(original.d_entryId)
, d_currentVersion(original.d_currentVersion)
, d_maxNumValuesInList(original.d_maxNumValuesInList)
, d_pwhoId(original.d_pwhoId)
, d_apiName(original.d_apiName, basicAllocator)
, d_expiryTsp(original.d_expiryTsp, basicAllocator)
, d_apiDate(original.d_apiDate)
, d_valueType(original.d_valueType)
, d_apiStatus(original.d_apiStatus)
, d_isPermanent(original.d_isPermanent)
, d_isSharedMemory(original.d_isSharedMemory)
{
}

EntryInfo::~EntryInfo()
{
}

// MANIPULATORS

EntryInfo&
EntryInfo::operator=(const EntryInfo& rhs)
{
    if (this != &rhs) {
        d_entryId = rhs.d_entryId;
        d_currentVersion = rhs.d_currentVersion;
        d_valueType = rhs.d_valueType;
        d_apiName = rhs.d_apiName;
        d_apiStatus = rhs.d_apiStatus;
        d_expiryTsp = rhs.d_expiryTsp;
        d_isPermanent = rhs.d_isPermanent;
        d_isSharedMemory = rhs.d_isSharedMemory;
        d_maxNumValuesInList = rhs.d_maxNumValuesInList;
        d_pwhoId = rhs.d_pwhoId;
        d_apiDate = rhs.d_apiDate;
    }

    return *this;
}

int EntryInfo::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_currentVersion,
                       aggregate,
                       ATTRIBUTE_ID_CURRENT_VERSION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueType,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_apiName,
                       aggregate,
                       ATTRIBUTE_ID_API_NAME)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_apiStatus,
                       aggregate,
                       ATTRIBUTE_ID_API_STATUS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_expiryTsp,
                       aggregate,
                       ATTRIBUTE_ID_EXPIRY_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isPermanent,
                       aggregate,
                       ATTRIBUTE_ID_IS_PERMANENT)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isSharedMemory,
                       aggregate,
                       ATTRIBUTE_ID_IS_SHARED_MEMORY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_maxNumValuesInList,
                       aggregate,
                       ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_pwhoId,
                       aggregate,
                       ATTRIBUTE_ID_PWHO_ID)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_apiDate,
                       aggregate,
                       ATTRIBUTE_ID_API_DATE);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void EntryInfo::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_currentVersion);
    bdeat_ValueTypeFunctions::reset(&d_valueType);
    bdeat_ValueTypeFunctions::reset(&d_apiName);
    bdeat_ValueTypeFunctions::reset(&d_apiStatus);
    bdeat_ValueTypeFunctions::reset(&d_expiryTsp);
    bdeat_ValueTypeFunctions::reset(&d_isPermanent);
    bdeat_ValueTypeFunctions::reset(&d_isSharedMemory);
    bdeat_ValueTypeFunctions::reset(&d_maxNumValuesInList);
    bdeat_ValueTypeFunctions::reset(&d_pwhoId);
    bdeat_ValueTypeFunctions::reset(&d_apiDate);
}

// ACCESSORS

bsl::ostream& EntryInfo::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("entryId", d_entryId);
    printer.printAttribute("currentVersion", d_currentVersion);
    printer.printAttribute("valueType", d_valueType);
    printer.printAttribute("apiName", d_apiName);
    printer.printAttribute("apiStatus", d_apiStatus);
    printer.printAttribute("expiryTsp", d_expiryTsp);
    printer.printAttribute("isPermanent", d_isPermanent);
    printer.printAttribute("isSharedMemory", d_isSharedMemory);
    printer.printAttribute("maxNumValuesInList", d_maxNumValuesInList);
    printer.printAttribute("pwhoId", d_pwhoId);
    printer.printAttribute("apiDate", d_apiDate);
    printer.end();
    return stream;
}

int EntryInfo::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CURRENT_VERSION,
                       d_currentVersion);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_TYPE,
                       d_valueType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_API_NAME,
                       d_apiName);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_API_STATUS,
                       d_apiStatus);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EXPIRY_TSP,
                       d_expiryTsp);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_PERMANENT,
                       d_isPermanent);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_SHARED_MEMORY,
                       d_isSharedMemory);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST,
                       d_maxNumValuesInList);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PWHO_ID,
                       d_pwhoId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_API_DATE,
                       d_apiDate);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // -------------------                             
                            // class EntryOverride                             
                            // -------------------                             

// CONSTANTS

const char EntryOverride::CLASS_NAME[] = "EntryOverride";

const bdeat_AttributeInfo EntryOverride::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_SEQ,
        "seq",
        sizeof("seq") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TYPE,
        "type",
        sizeof("type") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_VALUE,
        "value",
        sizeof("value") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_ENTRY_DATA,
        "entryData",
        sizeof("entryData") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *EntryOverride::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 4; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    EntryOverride::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *EntryOverride::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_SEQ:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SEQ];
      case ATTRIBUTE_ID_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE];
      case ATTRIBUTE_ID_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE];
      case ATTRIBUTE_ID_ENTRY_DATA:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA];
      default:
        return 0;
    }
}

// CREATORS

EntryOverride::EntryOverride(bslma::Allocator *basicAllocator)
: d_seq()
, d_value(basicAllocator)
, d_entryData(basicAllocator)
, d_type(static_cast<OverrideType::Value>(0))
{
}

EntryOverride::EntryOverride(const EntryOverride& original,
                             bslma::Allocator *basicAllocator)
: d_seq(original.d_seq)
, d_value(original.d_value, basicAllocator)
, d_entryData(original.d_entryData, basicAllocator)
, d_type(original.d_type)
{
}

EntryOverride::~EntryOverride()
{
}

// MANIPULATORS

EntryOverride&
EntryOverride::operator=(const EntryOverride& rhs)
{
    if (this != &rhs) {
        d_seq = rhs.d_seq;
        d_type = rhs.d_type;
        d_value = rhs.d_value;
        d_entryData = rhs.d_entryData;
    }

    return *this;
}

int EntryOverride::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_seq,
                       aggregate,
                       ATTRIBUTE_ID_SEQ)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_type,
                       aggregate,
                       ATTRIBUTE_ID_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_value,
                       aggregate,
                       ATTRIBUTE_ID_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryData,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_DATA)))
    {
        return rc;
    }
    return 0;
}

void EntryOverride::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_seq);
    bdeat_ValueTypeFunctions::reset(&d_type);
    bdeat_ValueTypeFunctions::reset(&d_value);
    bdeat_ValueTypeFunctions::reset(&d_entryData);
}

// ACCESSORS

bsl::ostream& EntryOverride::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("seq", d_seq);
    printer.printAttribute("type", d_type);
    printer.printAttribute("value", d_value);
    printer.printAttribute("entryData", d_entryData);
    printer.end();
    return stream;
}

int EntryOverride::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SEQ,
                       d_seq);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE,
                       d_type);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE,
                       d_value);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_DATA,
                       d_entryData);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                         // --------------------------                         
                         // class GetBregValuesRequest                         
                         // --------------------------                         

// CONSTANTS

const char GetBregValuesRequest::CLASS_NAME[] = "GetBregValuesRequest";

const bdeat_AttributeInfo GetBregValuesRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_OBJECT,
        "object",
        sizeof("object") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_OVERRIDES,
        "overrides",
        sizeof("overrides") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *GetBregValuesRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    GetBregValuesRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *GetBregValuesRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_OBJECT:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBJECT];
      case ATTRIBUTE_ID_OVERRIDES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDES];
      default:
        return 0;
    }
}

// CREATORS

GetBregValuesRequest::GetBregValuesRequest(bslma::Allocator *basicAllocator)
: d_overrides(basicAllocator)
, d_object(basicAllocator)
{
}

GetBregValuesRequest::GetBregValuesRequest(const GetBregValuesRequest& original,
                                           bslma::Allocator *basicAllocator)
: d_overrides(original.d_overrides, basicAllocator)
, d_object(original.d_object, basicAllocator)
{
}

GetBregValuesRequest::~GetBregValuesRequest()
{
}

// MANIPULATORS

GetBregValuesRequest&
GetBregValuesRequest::operator=(const GetBregValuesRequest& rhs)
{
    if (this != &rhs) {
        d_object = rhs.d_object;
        d_overrides = rhs.d_overrides;
    }

    return *this;
}

int GetBregValuesRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_object,
                       aggregate,
                       ATTRIBUTE_ID_OBJECT)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_overrides,
                       aggregate,
                       ATTRIBUTE_ID_OVERRIDES)))
    {
        return rc;
    }
    return 0;
}

void GetBregValuesRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_object);
    bdeat_ValueTypeFunctions::reset(&d_overrides);
}

// ACCESSORS

bsl::ostream& GetBregValuesRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("object", d_object);
    printer.printAttribute("overrides", d_overrides);
    printer.end();
    return stream;
}

int GetBregValuesRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OBJECT,
                       d_object);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OVERRIDES,
                       d_overrides);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // ------------------                             
                             // class OverrideInfo                             
                             // ------------------                             

// CONSTANTS

const char OverrideInfo::CLASS_NAME[] = "OverrideInfo";

const bdeat_AttributeInfo OverrideInfo::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_IS_PRODUCTION,
        "isProduction",
        sizeof("isProduction") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_TYPE,
        "type",
        sizeof("type") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_SETTING,
        "setting",
        sizeof("setting") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *OverrideInfo::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 3; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    OverrideInfo::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *OverrideInfo::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_IS_PRODUCTION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRODUCTION];
      case ATTRIBUTE_ID_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE];
      case ATTRIBUTE_ID_SETTING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING];
      default:
        return 0;
    }
}

// CREATORS

OverrideInfo::OverrideInfo(bslma::Allocator *basicAllocator)
: d_setting(basicAllocator)
, d_type(static_cast<OverrideType::Value>(0))
, d_isProduction()
{
}

OverrideInfo::OverrideInfo(const OverrideInfo& original,
                           bslma::Allocator *basicAllocator)
: d_setting(original.d_setting, basicAllocator)
, d_type(original.d_type)
, d_isProduction(original.d_isProduction)
{
}

OverrideInfo::~OverrideInfo()
{
}

// MANIPULATORS

OverrideInfo&
OverrideInfo::operator=(const OverrideInfo& rhs)
{
    if (this != &rhs) {
        d_isProduction = rhs.d_isProduction;
        d_type = rhs.d_type;
        d_setting = rhs.d_setting;
    }

    return *this;
}

int OverrideInfo::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_isProduction,
                       aggregate,
                       ATTRIBUTE_ID_IS_PRODUCTION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_type,
                       aggregate,
                       ATTRIBUTE_ID_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_setting,
                       aggregate,
                       ATTRIBUTE_ID_SETTING)))
    {
        return rc;
    }
    return 0;
}

void OverrideInfo::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_isProduction);
    bdeat_ValueTypeFunctions::reset(&d_type);
    bdeat_ValueTypeFunctions::reset(&d_setting);
}

// ACCESSORS

bsl::ostream& OverrideInfo::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("isProduction", d_isProduction);
    printer.printAttribute("type", d_type);
    printer.printAttribute("setting", d_setting);
    printer.end();
    return stream;
}

int OverrideInfo::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_PRODUCTION,
                       d_isProduction);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE,
                       d_type);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SETTING,
                       d_setting);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                           // ---------------------                            
                           // class OverrideSummary                            
                           // ---------------------                            

// CONSTANTS

const char OverrideSummary::CLASS_NAME[] = "OverrideSummary";

const bdeat_AttributeInfo OverrideSummary::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_TYPE,
        "type",
        sizeof("type") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TYPE_STRING,
        "typeString",
        sizeof("typeString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_TYPE_ENUM,
        "typeEnum",
        sizeof("typeEnum") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_SETTING,
        "setting",
        sizeof("setting") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_SETTING_TOOLTIP,
        "settingTooltip",
        sizeof("settingTooltip") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_VALUE,
        "value",
        sizeof("value") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *OverrideSummary::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 6; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    OverrideSummary::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *OverrideSummary::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE];
      case ATTRIBUTE_ID_TYPE_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING];
      case ATTRIBUTE_ID_TYPE_ENUM:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_ENUM];
      case ATTRIBUTE_ID_SETTING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING];
      case ATTRIBUTE_ID_SETTING_TOOLTIP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING_TOOLTIP];
      case ATTRIBUTE_ID_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE];
      default:
        return 0;
    }
}

// CREATORS

OverrideSummary::OverrideSummary(bslma::Allocator *basicAllocator)
: d_typeString(basicAllocator)
, d_setting(basicAllocator)
, d_settingTooltip(basicAllocator)
, d_value(basicAllocator)
, d_type()
, d_typeEnum(static_cast<OverrideType::Value>(0))
{
}

OverrideSummary::OverrideSummary(const OverrideSummary& original,
                                 bslma::Allocator *basicAllocator)
: d_typeString(original.d_typeString, basicAllocator)
, d_setting(original.d_setting, basicAllocator)
, d_settingTooltip(original.d_settingTooltip, basicAllocator)
, d_value(original.d_value, basicAllocator)
, d_type(original.d_type)
, d_typeEnum(original.d_typeEnum)
{
}

OverrideSummary::~OverrideSummary()
{
}

// MANIPULATORS

OverrideSummary&
OverrideSummary::operator=(const OverrideSummary& rhs)
{
    if (this != &rhs) {
        d_type = rhs.d_type;
        d_typeString = rhs.d_typeString;
        d_typeEnum = rhs.d_typeEnum;
        d_setting = rhs.d_setting;
        d_settingTooltip = rhs.d_settingTooltip;
        d_value = rhs.d_value;
    }

    return *this;
}

int OverrideSummary::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_type,
                       aggregate,
                       ATTRIBUTE_ID_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_typeString,
                       aggregate,
                       ATTRIBUTE_ID_TYPE_STRING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_typeEnum,
                       aggregate,
                       ATTRIBUTE_ID_TYPE_ENUM)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_setting,
                       aggregate,
                       ATTRIBUTE_ID_SETTING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_settingTooltip,
                       aggregate,
                       ATTRIBUTE_ID_SETTING_TOOLTIP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_value,
                       aggregate,
                       ATTRIBUTE_ID_VALUE)))
    {
        return rc;
    }
    return 0;
}

void OverrideSummary::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_type);
    bdeat_ValueTypeFunctions::reset(&d_typeString);
    bdeat_ValueTypeFunctions::reset(&d_typeEnum);
    bdeat_ValueTypeFunctions::reset(&d_setting);
    bdeat_ValueTypeFunctions::reset(&d_settingTooltip);
    bdeat_ValueTypeFunctions::reset(&d_value);
}

// ACCESSORS

bsl::ostream& OverrideSummary::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("type", d_type);
    printer.printAttribute("typeString", d_typeString);
    printer.printAttribute("typeEnum", d_typeEnum);
    printer.printAttribute("setting", d_setting);
    printer.printAttribute("settingTooltip", d_settingTooltip);
    printer.printAttribute("value", d_value);
    printer.end();
    return stream;
}

int OverrideSummary::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE,
                       d_type);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE_STRING,
                       d_typeString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE_ENUM,
                       d_typeEnum);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SETTING,
                       d_setting);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SETTING_TOOLTIP,
                       d_settingTooltip);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE,
                       d_value);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // -------------------                             
                            // class PrivilegeList                             
                            // -------------------                             

// CONSTANTS

const char PrivilegeList::CLASS_NAME[] = "PrivilegeList";

const bdeat_AttributeInfo PrivilegeList::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_REGISTRY_ID,
        "registryId",
        sizeof("registryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_USER_DATA_LIST,
        "userDataList",
        sizeof("userDataList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *PrivilegeList::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    PrivilegeList::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *PrivilegeList::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID];
      case ATTRIBUTE_ID_USER_DATA_LIST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST];
      default:
        return 0;
    }
}

// CREATORS

PrivilegeList::PrivilegeList(bslma::Allocator *basicAllocator)
: d_userDataList(basicAllocator)
, d_registryId()
{
}

PrivilegeList::PrivilegeList(const PrivilegeList& original,
                             bslma::Allocator *basicAllocator)
: d_userDataList(original.d_userDataList, basicAllocator)
, d_registryId(original.d_registryId)
{
}

PrivilegeList::~PrivilegeList()
{
}

// MANIPULATORS

PrivilegeList&
PrivilegeList::operator=(const PrivilegeList& rhs)
{
    if (this != &rhs) {
        d_registryId = rhs.d_registryId;
        d_userDataList = rhs.d_userDataList;
    }

    return *this;
}

int PrivilegeList::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_registryId,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_userDataList,
                       aggregate,
                       ATTRIBUTE_ID_USER_DATA_LIST)))
    {
        return rc;
    }
    return 0;
}

void PrivilegeList::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_registryId);
    bdeat_ValueTypeFunctions::reset(&d_userDataList);
}

// ACCESSORS

bsl::ostream& PrivilegeList::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("registryId", d_registryId);
    printer.printAttribute("userDataList", d_userDataList);
    printer.end();
    return stream;
}

int PrivilegeList::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY_ID,
                       d_registryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_USER_DATA_LIST,
                       d_userDataList);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                               // --------------                               
                               // class TodoList                               
                               // --------------                               

// CONSTANTS

const char TodoList::CLASS_NAME[] = "TodoList";

const bdeat_AttributeInfo TodoList::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_LIST,
        "list",
        sizeof("list") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *TodoList::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 1; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    TodoList::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *TodoList::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_LIST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LIST];
      default:
        return 0;
    }
}

// CREATORS

TodoList::TodoList(bslma::Allocator *basicAllocator)
: d_list(basicAllocator)
{
}

TodoList::TodoList(const TodoList& original,
                   bslma::Allocator *basicAllocator)
: d_list(original.d_list, basicAllocator)
{
}

TodoList::~TodoList()
{
}

// MANIPULATORS

TodoList&
TodoList::operator=(const TodoList& rhs)
{
    if (this != &rhs) {
        d_list = rhs.d_list;
    }

    return *this;
}

int TodoList::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_list,
                       aggregate,
                       ATTRIBUTE_ID_LIST)))
    {
        return rc;
    }
    return 0;
}

void TodoList::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_list);
}

// ACCESSORS

bsl::ostream& TodoList::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("list", d_list);
    printer.end();
    return stream;
}

int TodoList::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_LIST,
                       d_list);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // --------------------                            
                            // class VersionHistory                            
                            // --------------------                            

// CONSTANTS

const char VersionHistory::CLASS_NAME[] = "VersionHistory";

const bdeat_AttributeInfo VersionHistory::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_VERSION_HISTORY,
        "versionHistory",
        sizeof("versionHistory") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *VersionHistory::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 1; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    VersionHistory::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *VersionHistory::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_VERSION_HISTORY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_HISTORY];
      default:
        return 0;
    }
}

// CREATORS

VersionHistory::VersionHistory(bslma::Allocator *basicAllocator)
: d_versionHistory(basicAllocator)
{
}

VersionHistory::VersionHistory(const VersionHistory& original,
                               bslma::Allocator *basicAllocator)
: d_versionHistory(original.d_versionHistory, basicAllocator)
{
}

VersionHistory::~VersionHistory()
{
}

// MANIPULATORS

VersionHistory&
VersionHistory::operator=(const VersionHistory& rhs)
{
    if (this != &rhs) {
        d_versionHistory = rhs.d_versionHistory;
    }

    return *this;
}

int VersionHistory::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_versionHistory,
                       aggregate,
                       ATTRIBUTE_ID_VERSION_HISTORY);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void VersionHistory::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_versionHistory);
}

// ACCESSORS

bsl::ostream& VersionHistory::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("versionHistory", d_versionHistory);
    printer.end();
    return stream;
}

int VersionHistory::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VERSION_HISTORY,
                       d_versionHistory);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // -------------------                             
                            // class EntryContacts                             
                            // -------------------                             

// CONSTANTS

const char EntryContacts::CLASS_NAME[] = "EntryContacts";

const bdeat_AttributeInfo EntryContacts::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_PRIMARY_UUID,
        "primaryUuid",
        sizeof("primaryUuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_BACKUP_UUID,
        "backupUuid",
        sizeof("backupUuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_OPERATIONAL_UUID,
        "operationalUuid",
        sizeof("operationalUuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_DRQS_GROUP,
        "drqsGroup",
        sizeof("drqsGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_AUDIT_RECORD,
        "auditRecord",
        sizeof("auditRecord") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *EntryContacts::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 5; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    EntryContacts::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *EntryContacts::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_PRIMARY_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIMARY_UUID];
      case ATTRIBUTE_ID_BACKUP_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BACKUP_UUID];
      case ATTRIBUTE_ID_OPERATIONAL_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OPERATIONAL_UUID];
      case ATTRIBUTE_ID_DRQS_GROUP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_GROUP];
      case ATTRIBUTE_ID_AUDIT_RECORD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD];
      default:
        return 0;
    }
}

// CREATORS

EntryContacts::EntryContacts(bslma::Allocator *basicAllocator)
: d_primaryUuid()
, d_backupUuid()
, d_operationalUuid()
, d_drqsGroup()
, d_auditRecord(basicAllocator)
{
}

EntryContacts::EntryContacts(const EntryContacts& original,
                             bslma::Allocator *basicAllocator)
: d_primaryUuid(original.d_primaryUuid)
, d_backupUuid(original.d_backupUuid)
, d_operationalUuid(original.d_operationalUuid)
, d_drqsGroup(original.d_drqsGroup)
, d_auditRecord(original.d_auditRecord, basicAllocator)
{
}

EntryContacts::~EntryContacts()
{
}

// MANIPULATORS

EntryContacts&
EntryContacts::operator=(const EntryContacts& rhs)
{
    if (this != &rhs) {
        d_primaryUuid = rhs.d_primaryUuid;
        d_backupUuid = rhs.d_backupUuid;
        d_operationalUuid = rhs.d_operationalUuid;
        d_drqsGroup = rhs.d_drqsGroup;
        d_auditRecord = rhs.d_auditRecord;
    }

    return *this;
}

int EntryContacts::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_primaryUuid,
                       aggregate,
                       ATTRIBUTE_ID_PRIMARY_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_backupUuid,
                       aggregate,
                       ATTRIBUTE_ID_BACKUP_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_operationalUuid,
                       aggregate,
                       ATTRIBUTE_ID_OPERATIONAL_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_drqsGroup,
                       aggregate,
                       ATTRIBUTE_ID_DRQS_GROUP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_auditRecord,
                       aggregate,
                       ATTRIBUTE_ID_AUDIT_RECORD)))
    {
        return rc;
    }
    return 0;
}

void EntryContacts::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_primaryUuid);
    bdeat_ValueTypeFunctions::reset(&d_backupUuid);
    bdeat_ValueTypeFunctions::reset(&d_operationalUuid);
    bdeat_ValueTypeFunctions::reset(&d_drqsGroup);
    bdeat_ValueTypeFunctions::reset(&d_auditRecord);
}

// ACCESSORS

bsl::ostream& EntryContacts::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("primaryUuid", d_primaryUuid);
    printer.printAttribute("backupUuid", d_backupUuid);
    printer.printAttribute("operationalUuid", d_operationalUuid);
    printer.printAttribute("drqsGroup", d_drqsGroup);
    printer.printAttribute("auditRecord", d_auditRecord);
    printer.end();
    return stream;
}

int EntryContacts::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRIMARY_UUID,
                       d_primaryUuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_BACKUP_UUID,
                       d_backupUuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OPERATIONAL_UUID,
                       d_operationalUuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_DRQS_GROUP,
                       d_drqsGroup);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_AUDIT_RECORD,
                       d_auditRecord);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                           // ----------------------                           
                           // class EntrySubscribers                           
                           // ----------------------                           

// CONSTANTS

const char EntrySubscribers::CLASS_NAME[] = "EntrySubscribers";

const bdeat_AttributeInfo EntrySubscribers::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_REGISTRY_ID,
        "registryId",
        sizeof("registryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_USER_DATA_LIST,
        "userDataList",
        sizeof("userDataList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_AUDIT_RECORD,
        "auditRecord",
        sizeof("auditRecord") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *EntrySubscribers::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 3; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    EntrySubscribers::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *EntrySubscribers::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID];
      case ATTRIBUTE_ID_USER_DATA_LIST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST];
      case ATTRIBUTE_ID_AUDIT_RECORD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD];
      default:
        return 0;
    }
}

// CREATORS

EntrySubscribers::EntrySubscribers(bslma::Allocator *basicAllocator)
: d_registryId()
, d_userDataList(basicAllocator)
, d_auditRecord(basicAllocator)
{
}

EntrySubscribers::EntrySubscribers(const EntrySubscribers& original,
                                   bslma::Allocator *basicAllocator)
: d_registryId(original.d_registryId)
, d_userDataList(original.d_userDataList, basicAllocator)
, d_auditRecord(original.d_auditRecord, basicAllocator)
{
}

EntrySubscribers::~EntrySubscribers()
{
}

// MANIPULATORS

EntrySubscribers&
EntrySubscribers::operator=(const EntrySubscribers& rhs)
{
    if (this != &rhs) {
        d_registryId = rhs.d_registryId;
        d_userDataList = rhs.d_userDataList;
        d_auditRecord = rhs.d_auditRecord;
    }

    return *this;
}

int EntrySubscribers::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_registryId,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_userDataList,
                       aggregate,
                       ATTRIBUTE_ID_USER_DATA_LIST)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_auditRecord,
                       aggregate,
                       ATTRIBUTE_ID_AUDIT_RECORD)))
    {
        return rc;
    }
    return 0;
}

void EntrySubscribers::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_registryId);
    bdeat_ValueTypeFunctions::reset(&d_userDataList);
    bdeat_ValueTypeFunctions::reset(&d_auditRecord);
}

// ACCESSORS

bsl::ostream& EntrySubscribers::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("registryId", d_registryId);
    printer.printAttribute("userDataList", d_userDataList);
    printer.printAttribute("auditRecord", d_auditRecord);
    printer.end();
    return stream;
}

int EntrySubscribers::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY_ID,
                       d_registryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_USER_DATA_LIST,
                       d_userDataList);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_AUDIT_RECORD,
                       d_auditRecord);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                              // ----------------                              
                              // class EntryValue                              
                              // ----------------                              

// CONSTANTS

const char EntryValue::CLASS_NAME[] = "EntryValue";

const bdeat_AttributeInfo EntryValue::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VERSION,
        "version",
        sizeof("version") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_ENTRY_DATA,
        "entryData",
        sizeof("entryData") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ENTRY_OVERRIDES,
        "entryOverrides",
        sizeof("entryOverrides") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_IS_OBSOLETE,
        "isObsolete",
        sizeof("isObsolete") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_SHARED_MEMORY,
        "isSharedMemory",
        sizeof("isSharedMemory") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_AUDIT_RECORD,
        "auditRecord",
        sizeof("auditRecord") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *EntryValue::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 7; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    EntryValue::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *EntryValue::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_VERSION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION];
      case ATTRIBUTE_ID_ENTRY_DATA:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA];
      case ATTRIBUTE_ID_ENTRY_OVERRIDES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_OVERRIDES];
      case ATTRIBUTE_ID_IS_OBSOLETE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_OBSOLETE];
      case ATTRIBUTE_ID_IS_SHARED_MEMORY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY];
      case ATTRIBUTE_ID_AUDIT_RECORD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD];
      default:
        return 0;
    }
}

// CREATORS

EntryValue::EntryValue(bslma::Allocator *basicAllocator)
: d_entryId()
, d_version()
, d_entryOverrides(basicAllocator)
, d_entryData(basicAllocator)
, d_auditRecord(basicAllocator)
, d_isObsolete()
, d_isSharedMemory()
{
}

EntryValue::EntryValue(const EntryValue& original,
                       bslma::Allocator *basicAllocator)
: d_entryId(original.d_entryId)
, d_version(original.d_version)
, d_entryOverrides(original.d_entryOverrides, basicAllocator)
, d_entryData(original.d_entryData, basicAllocator)
, d_auditRecord(original.d_auditRecord, basicAllocator)
, d_isObsolete(original.d_isObsolete)
, d_isSharedMemory(original.d_isSharedMemory)
{
}

EntryValue::~EntryValue()
{
}

// MANIPULATORS

EntryValue&
EntryValue::operator=(const EntryValue& rhs)
{
    if (this != &rhs) {
        d_entryId = rhs.d_entryId;
        d_version = rhs.d_version;
        d_entryData = rhs.d_entryData;
        d_entryOverrides = rhs.d_entryOverrides;
        d_isObsolete = rhs.d_isObsolete;
        d_isSharedMemory = rhs.d_isSharedMemory;
        d_auditRecord = rhs.d_auditRecord;
    }

    return *this;
}

int EntryValue::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_version,
                       aggregate,
                       ATTRIBUTE_ID_VERSION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isObsolete,
                       aggregate,
                       ATTRIBUTE_ID_IS_OBSOLETE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isSharedMemory,
                       aggregate,
                       ATTRIBUTE_ID_IS_SHARED_MEMORY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_auditRecord,
                       aggregate,
                       ATTRIBUTE_ID_AUDIT_RECORD)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryData,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_DATA);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryOverrides,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_OVERRIDES);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void EntryValue::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_version);
    bdeat_ValueTypeFunctions::reset(&d_entryData);
    bdeat_ValueTypeFunctions::reset(&d_entryOverrides);
    bdeat_ValueTypeFunctions::reset(&d_isObsolete);
    bdeat_ValueTypeFunctions::reset(&d_isSharedMemory);
    bdeat_ValueTypeFunctions::reset(&d_auditRecord);
}

// ACCESSORS

bsl::ostream& EntryValue::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("entryId", d_entryId);
    printer.printAttribute("version", d_version);
    printer.printAttribute("entryData", d_entryData);
    printer.printAttribute("entryOverrides", d_entryOverrides);
    printer.printAttribute("isObsolete", d_isObsolete);
    printer.printAttribute("isSharedMemory", d_isSharedMemory);
    printer.printAttribute("auditRecord", d_auditRecord);
    printer.end();
    return stream;
}

int EntryValue::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VERSION,
                       d_version);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_DATA,
                       d_entryData);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_OVERRIDES,
                       d_entryOverrides);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_OBSOLETE,
                       d_isObsolete);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_SHARED_MEMORY,
                       d_isSharedMemory);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_AUDIT_RECORD,
                       d_auditRecord);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // -----------------                              
                             // class NodeDetails                              
                             // -----------------                              

// CONSTANTS

const char NodeDetails::CLASS_NAME[] = "NodeDetails";

const bdeat_AttributeInfo NodeDetails::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_NAME,
        "name",
        sizeof("name") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_ID,
        "id",
        sizeof("id") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TYPE,
        "type",
        sizeof("type") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_DESCRIPTION,
        "description",
        sizeof("description") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_ACCESSOR,
        "accessor",
        sizeof("accessor") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_UPDATE_TSP,
        "updateTsp",
        sizeof("updateTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_VALUE_TYPE,
        "valueType",
        sizeof("valueType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VALUE_TYPE_STRING,
        "valueTypeString",
        sizeof("valueTypeString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_VALUE_TYPE_ENUM,
        "valueTypeEnum",
        sizeof("valueTypeEnum") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_IS_IN_MEMORY,
        "isInMemory",
        sizeof("isInMemory") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_IN_MEMORY_STRING,
        "isInMemoryString",
        sizeof("isInMemoryString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_HAS_EXPIRED,
        "hasExpired",
        sizeof("hasExpired") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_EXPIRY_TSP,
        "expiryTsp",
        sizeof("expiryTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_PERMANENT,
        "isPermanent",
        sizeof("isPermanent") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_PERMANENT_STRING,
        "isPermanentString",
        sizeof("isPermanentString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_KEYWORDS,
        "keywords",
        sizeof("keywords") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IN_PROD,
        "inProd",
        sizeof("inProd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_PROD_VALUE,
        "prodValue",
        sizeof("prodValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_PROD_VERSION,
        "prodVersion",
        sizeof("prodVersion") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PROD_OVERRIDES,
        "prodOverrides",
        sizeof("prodOverrides") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_IN_TEST,
        "inTest",
        sizeof("inTest") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_TEST_VALUE,
        "testValue",
        sizeof("testValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_TEST_OVERRIDES,
        "testOverrides",
        sizeof("testOverrides") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_CAN_ADD_NODE,
        "canAddNode",
        sizeof("canAddNode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_CAN_ADD_ENTRY,
        "canAddEntry",
        sizeof("canAddEntry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED,
        "prodObsoleteTraceEnabled",
        sizeof("prodObsoleteTraceEnabled") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED,
        "devObsoleteTraceEnabled",
        sizeof("devObsoleteTraceEnabled") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *NodeDetails::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 27; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    NodeDetails::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *NodeDetails::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_NAME:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME];
      case ATTRIBUTE_ID_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID];
      case ATTRIBUTE_ID_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE];
      case ATTRIBUTE_ID_DESCRIPTION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION];
      case ATTRIBUTE_ID_ACCESSOR:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_VALUE_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE];
      case ATTRIBUTE_ID_VALUE_TYPE_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING];
      case ATTRIBUTE_ID_VALUE_TYPE_ENUM:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_ENUM];
      case ATTRIBUTE_ID_IS_IN_MEMORY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY];
      case ATTRIBUTE_ID_IS_IN_MEMORY_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_STRING];
      case ATTRIBUTE_ID_HAS_EXPIRED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED];
      case ATTRIBUTE_ID_EXPIRY_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP];
      case ATTRIBUTE_ID_IS_PERMANENT:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT];
      case ATTRIBUTE_ID_IS_PERMANENT_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT_STRING];
      case ATTRIBUTE_ID_KEYWORDS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS];
      case ATTRIBUTE_ID_IN_PROD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_PROD];
      case ATTRIBUTE_ID_PROD_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VALUE];
      case ATTRIBUTE_ID_PROD_VERSION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VERSION];
      case ATTRIBUTE_ID_PROD_OVERRIDES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OVERRIDES];
      case ATTRIBUTE_ID_IN_TEST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_TEST];
      case ATTRIBUTE_ID_TEST_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VALUE];
      case ATTRIBUTE_ID_TEST_OVERRIDES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_OVERRIDES];
      case ATTRIBUTE_ID_CAN_ADD_NODE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_NODE];
      case ATTRIBUTE_ID_CAN_ADD_ENTRY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_ENTRY];
      case ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OBSOLETE_TRACE_ENABLED];
      case ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DEV_OBSOLETE_TRACE_ENABLED];
      default:
        return 0;
    }
}

// CREATORS

NodeDetails::NodeDetails(bslma::Allocator *basicAllocator)
: d_prodOverrides(basicAllocator)
, d_testOverrides(basicAllocator)
, d_name(basicAllocator)
, d_description(basicAllocator)
, d_accessor(basicAllocator)
, d_updateTsp(basicAllocator)
, d_valueTypeString(basicAllocator)
, d_isInMemoryString(basicAllocator)
, d_expiryTsp(basicAllocator)
, d_isPermanentString(basicAllocator)
, d_keywords(basicAllocator)
, d_prodValue(basicAllocator)
, d_testValue(basicAllocator)
, d_id()
, d_type()
, d_valueType()
, d_prodVersion()
, d_valueTypeEnum(static_cast<ValueType::Value>(0))
, d_isInMemory()
, d_hasExpired()
, d_isPermanent()
, d_inProd()
, d_inTest()
, d_canAddNode()
, d_canAddEntry()
, d_prodObsoleteTraceEnabled()
, d_devObsoleteTraceEnabled()
{
}

NodeDetails::NodeDetails(const NodeDetails& original,
                         bslma::Allocator *basicAllocator)
: d_prodOverrides(original.d_prodOverrides, basicAllocator)
, d_testOverrides(original.d_testOverrides, basicAllocator)
, d_name(original.d_name, basicAllocator)
, d_description(original.d_description, basicAllocator)
, d_accessor(original.d_accessor, basicAllocator)
, d_updateTsp(original.d_updateTsp, basicAllocator)
, d_valueTypeString(original.d_valueTypeString, basicAllocator)
, d_isInMemoryString(original.d_isInMemoryString, basicAllocator)
, d_expiryTsp(original.d_expiryTsp, basicAllocator)
, d_isPermanentString(original.d_isPermanentString, basicAllocator)
, d_keywords(original.d_keywords, basicAllocator)
, d_prodValue(original.d_prodValue, basicAllocator)
, d_testValue(original.d_testValue, basicAllocator)
, d_id(original.d_id)
, d_type(original.d_type)
, d_valueType(original.d_valueType)
, d_prodVersion(original.d_prodVersion)
, d_valueTypeEnum(original.d_valueTypeEnum)
, d_isInMemory(original.d_isInMemory)
, d_hasExpired(original.d_hasExpired)
, d_isPermanent(original.d_isPermanent)
, d_inProd(original.d_inProd)
, d_inTest(original.d_inTest)
, d_canAddNode(original.d_canAddNode)
, d_canAddEntry(original.d_canAddEntry)
, d_prodObsoleteTraceEnabled(original.d_prodObsoleteTraceEnabled)
, d_devObsoleteTraceEnabled(original.d_devObsoleteTraceEnabled)
{
}

NodeDetails::~NodeDetails()
{
}

// MANIPULATORS

NodeDetails&
NodeDetails::operator=(const NodeDetails& rhs)
{
    if (this != &rhs) {
        d_name = rhs.d_name;
        d_id = rhs.d_id;
        d_type = rhs.d_type;
        d_description = rhs.d_description;
        d_accessor = rhs.d_accessor;
        d_updateTsp = rhs.d_updateTsp;
        d_valueType = rhs.d_valueType;
        d_valueTypeString = rhs.d_valueTypeString;
        d_valueTypeEnum = rhs.d_valueTypeEnum;
        d_isInMemory = rhs.d_isInMemory;
        d_isInMemoryString = rhs.d_isInMemoryString;
        d_hasExpired = rhs.d_hasExpired;
        d_expiryTsp = rhs.d_expiryTsp;
        d_isPermanent = rhs.d_isPermanent;
        d_isPermanentString = rhs.d_isPermanentString;
        d_keywords = rhs.d_keywords;
        d_inProd = rhs.d_inProd;
        d_prodValue = rhs.d_prodValue;
        d_prodVersion = rhs.d_prodVersion;
        d_prodOverrides = rhs.d_prodOverrides;
        d_inTest = rhs.d_inTest;
        d_testValue = rhs.d_testValue;
        d_testOverrides = rhs.d_testOverrides;
        d_canAddNode = rhs.d_canAddNode;
        d_canAddEntry = rhs.d_canAddEntry;
        d_prodObsoleteTraceEnabled = rhs.d_prodObsoleteTraceEnabled;
        d_devObsoleteTraceEnabled = rhs.d_devObsoleteTraceEnabled;
    }

    return *this;
}

int NodeDetails::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_name,
                       aggregate,
                       ATTRIBUTE_ID_NAME)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_id,
                       aggregate,
                       ATTRIBUTE_ID_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_type,
                       aggregate,
                       ATTRIBUTE_ID_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_description,
                       aggregate,
                       ATTRIBUTE_ID_DESCRIPTION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_accessor,
                       aggregate,
                       ATTRIBUTE_ID_ACCESSOR)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueType,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueTypeString,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE_STRING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueTypeEnum,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE_ENUM)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isInMemory,
                       aggregate,
                       ATTRIBUTE_ID_IS_IN_MEMORY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isInMemoryString,
                       aggregate,
                       ATTRIBUTE_ID_IS_IN_MEMORY_STRING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_hasExpired,
                       aggregate,
                       ATTRIBUTE_ID_HAS_EXPIRED)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_expiryTsp,
                       aggregate,
                       ATTRIBUTE_ID_EXPIRY_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isPermanent,
                       aggregate,
                       ATTRIBUTE_ID_IS_PERMANENT)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isPermanentString,
                       aggregate,
                       ATTRIBUTE_ID_IS_PERMANENT_STRING)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_keywords,
                       aggregate,
                       ATTRIBUTE_ID_KEYWORDS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_inProd,
                       aggregate,
                       ATTRIBUTE_ID_IN_PROD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prodValue,
                       aggregate,
                       ATTRIBUTE_ID_PROD_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prodVersion,
                       aggregate,
                       ATTRIBUTE_ID_PROD_VERSION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_inTest,
                       aggregate,
                       ATTRIBUTE_ID_IN_TEST)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_testValue,
                       aggregate,
                       ATTRIBUTE_ID_TEST_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_canAddNode,
                       aggregate,
                       ATTRIBUTE_ID_CAN_ADD_NODE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_canAddEntry,
                       aggregate,
                       ATTRIBUTE_ID_CAN_ADD_ENTRY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prodObsoleteTraceEnabled,
                       aggregate,
                       ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_devObsoleteTraceEnabled,
                       aggregate,
                       ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_prodOverrides,
                       aggregate,
                       ATTRIBUTE_ID_PROD_OVERRIDES);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_testOverrides,
                       aggregate,
                       ATTRIBUTE_ID_TEST_OVERRIDES);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void NodeDetails::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_name);
    bdeat_ValueTypeFunctions::reset(&d_id);
    bdeat_ValueTypeFunctions::reset(&d_type);
    bdeat_ValueTypeFunctions::reset(&d_description);
    bdeat_ValueTypeFunctions::reset(&d_accessor);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_valueType);
    bdeat_ValueTypeFunctions::reset(&d_valueTypeString);
    bdeat_ValueTypeFunctions::reset(&d_valueTypeEnum);
    bdeat_ValueTypeFunctions::reset(&d_isInMemory);
    bdeat_ValueTypeFunctions::reset(&d_isInMemoryString);
    bdeat_ValueTypeFunctions::reset(&d_hasExpired);
    bdeat_ValueTypeFunctions::reset(&d_expiryTsp);
    bdeat_ValueTypeFunctions::reset(&d_isPermanent);
    bdeat_ValueTypeFunctions::reset(&d_isPermanentString);
    bdeat_ValueTypeFunctions::reset(&d_keywords);
    bdeat_ValueTypeFunctions::reset(&d_inProd);
    bdeat_ValueTypeFunctions::reset(&d_prodValue);
    bdeat_ValueTypeFunctions::reset(&d_prodVersion);
    bdeat_ValueTypeFunctions::reset(&d_prodOverrides);
    bdeat_ValueTypeFunctions::reset(&d_inTest);
    bdeat_ValueTypeFunctions::reset(&d_testValue);
    bdeat_ValueTypeFunctions::reset(&d_testOverrides);
    bdeat_ValueTypeFunctions::reset(&d_canAddNode);
    bdeat_ValueTypeFunctions::reset(&d_canAddEntry);
    bdeat_ValueTypeFunctions::reset(&d_prodObsoleteTraceEnabled);
    bdeat_ValueTypeFunctions::reset(&d_devObsoleteTraceEnabled);
}

// ACCESSORS

bsl::ostream& NodeDetails::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("name", d_name);
    printer.printAttribute("id", d_id);
    printer.printAttribute("type", d_type);
    printer.printAttribute("description", d_description);
    printer.printAttribute("accessor", d_accessor);
    printer.printAttribute("updateTsp", d_updateTsp);
    printer.printAttribute("valueType", d_valueType);
    printer.printAttribute("valueTypeString", d_valueTypeString);
    printer.printAttribute("valueTypeEnum", d_valueTypeEnum);
    printer.printAttribute("isInMemory", d_isInMemory);
    printer.printAttribute("isInMemoryString", d_isInMemoryString);
    printer.printAttribute("hasExpired", d_hasExpired);
    printer.printAttribute("expiryTsp", d_expiryTsp);
    printer.printAttribute("isPermanent", d_isPermanent);
    printer.printAttribute("isPermanentString", d_isPermanentString);
    printer.printAttribute("keywords", d_keywords);
    printer.printAttribute("inProd", d_inProd);
    printer.printAttribute("prodValue", d_prodValue);
    printer.printAttribute("prodVersion", d_prodVersion);
    printer.printAttribute("prodOverrides", d_prodOverrides);
    printer.printAttribute("inTest", d_inTest);
    printer.printAttribute("testValue", d_testValue);
    printer.printAttribute("testOverrides", d_testOverrides);
    printer.printAttribute("canAddNode", d_canAddNode);
    printer.printAttribute("canAddEntry", d_canAddEntry);
    printer.printAttribute("prodObsoleteTraceEnabled", d_prodObsoleteTraceEnabled);
    printer.printAttribute("devObsoleteTraceEnabled", d_devObsoleteTraceEnabled);
    printer.end();
    return stream;
}

int NodeDetails::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NAME,
                       d_name);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ID,
                       d_id);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TYPE,
                       d_type);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_DESCRIPTION,
                       d_description);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ACCESSOR,
                       d_accessor);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_TSP,
                       d_updateTsp);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_TYPE,
                       d_valueType);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_TYPE_STRING,
                       d_valueTypeString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_TYPE_ENUM,
                       d_valueTypeEnum);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_IN_MEMORY,
                       d_isInMemory);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_IN_MEMORY_STRING,
                       d_isInMemoryString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_HAS_EXPIRED,
                       d_hasExpired);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EXPIRY_TSP,
                       d_expiryTsp);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_PERMANENT,
                       d_isPermanent);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_PERMANENT_STRING,
                       d_isPermanentString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_KEYWORDS,
                       d_keywords);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IN_PROD,
                       d_inProd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PROD_VALUE,
                       d_prodValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PROD_VERSION,
                       d_prodVersion);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PROD_OVERRIDES,
                       d_prodOverrides);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IN_TEST,
                       d_inTest);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TEST_VALUE,
                       d_testValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TEST_OVERRIDES,
                       d_testOverrides);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CAN_ADD_NODE,
                       d_canAddNode);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CAN_ADD_ENTRY,
                       d_canAddEntry);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED,
                       d_prodObsoleteTraceEnabled);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED,
                       d_devObsoleteTraceEnabled);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                               // --------------                               
                               // class NodeInfo                               
                               // --------------                               

// CONSTANTS

const char NodeInfo::CLASS_NAME[] = "NodeInfo";

const bdeat_AttributeInfo NodeInfo::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_NODE_ID,
        "nodeId",
        sizeof("nodeId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_PARENT_ID,
        "parentId",
        sizeof("parentId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_NAME,
        "name",
        sizeof("name") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_DESCRIPTION,
        "description",
        sizeof("description") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_LEAF,
        "isLeaf",
        sizeof("isLeaf") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_IS_DELETED,
        "isDeleted",
        sizeof("isDeleted") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_AUDIT_RECORD,
        "auditRecord",
        sizeof("auditRecord") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_KEYWORDS,
        "keywords",
        sizeof("keywords") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_PRIVILEGE,
        "privilege",
        sizeof("privilege") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_CONTACTS,
        "contacts",
        sizeof("contacts") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_IS_TO_DELETE,
        "isToDelete",
        sizeof("isToDelete") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *NodeInfo::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 11; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    NodeInfo::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *NodeInfo::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_NODE_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE_ID];
      case ATTRIBUTE_ID_PARENT_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PARENT_ID];
      case ATTRIBUTE_ID_NAME:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME];
      case ATTRIBUTE_ID_DESCRIPTION:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION];
      case ATTRIBUTE_ID_IS_LEAF:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_LEAF];
      case ATTRIBUTE_ID_IS_DELETED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_DELETED];
      case ATTRIBUTE_ID_AUDIT_RECORD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD];
      case ATTRIBUTE_ID_KEYWORDS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS];
      case ATTRIBUTE_ID_PRIVILEGE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIVILEGE];
      case ATTRIBUTE_ID_CONTACTS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS];
      case ATTRIBUTE_ID_IS_TO_DELETE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TO_DELETE];
      default:
        return 0;
    }
}

// CREATORS

NodeInfo::NodeInfo(bslma::Allocator *basicAllocator)
: d_nodeId()
, d_parentId()
, d_keywords(basicAllocator)
, d_name(basicAllocator)
, d_description(basicAllocator)
, d_contacts(basicAllocator)
, d_auditRecord(basicAllocator)
, d_isLeaf()
, d_isDeleted()
, d_isToDelete()
, d_privilege()
{
}

NodeInfo::NodeInfo(const NodeInfo& original,
                   bslma::Allocator *basicAllocator)
: d_nodeId(original.d_nodeId)
, d_parentId(original.d_parentId)
, d_keywords(original.d_keywords, basicAllocator)
, d_name(original.d_name, basicAllocator)
, d_description(original.d_description, basicAllocator)
, d_contacts(original.d_contacts, basicAllocator)
, d_auditRecord(original.d_auditRecord, basicAllocator)
, d_isLeaf(original.d_isLeaf)
, d_isDeleted(original.d_isDeleted)
, d_isToDelete(original.d_isToDelete)
, d_privilege(original.d_privilege)
{
}

NodeInfo::~NodeInfo()
{
}

// MANIPULATORS

NodeInfo&
NodeInfo::operator=(const NodeInfo& rhs)
{
    if (this != &rhs) {
        d_nodeId = rhs.d_nodeId;
        d_parentId = rhs.d_parentId;
        d_name = rhs.d_name;
        d_description = rhs.d_description;
        d_isLeaf = rhs.d_isLeaf;
        d_isDeleted = rhs.d_isDeleted;
        d_auditRecord = rhs.d_auditRecord;
        d_keywords = rhs.d_keywords;
        d_privilege = rhs.d_privilege;
        d_contacts = rhs.d_contacts;
        d_isToDelete = rhs.d_isToDelete;
    }

    return *this;
}

int NodeInfo::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_nodeId,
                       aggregate,
                       ATTRIBUTE_ID_NODE_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_parentId,
                       aggregate,
                       ATTRIBUTE_ID_PARENT_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_name,
                       aggregate,
                       ATTRIBUTE_ID_NAME)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_description,
                       aggregate,
                       ATTRIBUTE_ID_DESCRIPTION)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isLeaf,
                       aggregate,
                       ATTRIBUTE_ID_IS_LEAF)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isDeleted,
                       aggregate,
                       ATTRIBUTE_ID_IS_DELETED)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_auditRecord,
                       aggregate,
                       ATTRIBUTE_ID_AUDIT_RECORD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_privilege,
                       aggregate,
                       ATTRIBUTE_ID_PRIVILEGE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_contacts,
                       aggregate,
                       ATTRIBUTE_ID_CONTACTS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isToDelete,
                       aggregate,
                       ATTRIBUTE_ID_IS_TO_DELETE)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_keywords,
                       aggregate,
                       ATTRIBUTE_ID_KEYWORDS);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void NodeInfo::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_nodeId);
    bdeat_ValueTypeFunctions::reset(&d_parentId);
    bdeat_ValueTypeFunctions::reset(&d_name);
    bdeat_ValueTypeFunctions::reset(&d_description);
    bdeat_ValueTypeFunctions::reset(&d_isLeaf);
    bdeat_ValueTypeFunctions::reset(&d_isDeleted);
    bdeat_ValueTypeFunctions::reset(&d_auditRecord);
    bdeat_ValueTypeFunctions::reset(&d_keywords);
    bdeat_ValueTypeFunctions::reset(&d_privilege);
    bdeat_ValueTypeFunctions::reset(&d_contacts);
    bdeat_ValueTypeFunctions::reset(&d_isToDelete);
}

// ACCESSORS

bsl::ostream& NodeInfo::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("nodeId", d_nodeId);
    printer.printAttribute("parentId", d_parentId);
    printer.printAttribute("name", d_name);
    printer.printAttribute("description", d_description);
    printer.printAttribute("isLeaf", d_isLeaf);
    printer.printAttribute("isDeleted", d_isDeleted);
    printer.printAttribute("auditRecord", d_auditRecord);
    printer.printAttribute("keywords", d_keywords);
    printer.printAttribute("privilege", d_privilege);
    printer.printAttribute("contacts", d_contacts);
    printer.printAttribute("isToDelete", d_isToDelete);
    printer.end();
    return stream;
}

int NodeInfo::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NODE_ID,
                       d_nodeId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PARENT_ID,
                       d_parentId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NAME,
                       d_name);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_DESCRIPTION,
                       d_description);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_LEAF,
                       d_isLeaf);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_DELETED,
                       d_isDeleted);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_AUDIT_RECORD,
                       d_auditRecord);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_KEYWORDS,
                       d_keywords);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRIVILEGE,
                       d_privilege);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CONTACTS,
                       d_contacts);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_TO_DELETE,
                       d_isToDelete);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                         // --------------------------                         
                         // class UpdateContactRequest                         
                         // --------------------------                         

// CONSTANTS

const char UpdateContactRequest::CLASS_NAME[] = "UpdateContactRequest";

const bdeat_AttributeInfo UpdateContactRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_REGISTRY_ID,
        "registryId",
        sizeof("registryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_CONTACTS,
        "contacts",
        sizeof("contacts") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_AUDIT_RECORD,
        "auditRecord",
        sizeof("auditRecord") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *UpdateContactRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 3; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    UpdateContactRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *UpdateContactRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID];
      case ATTRIBUTE_ID_CONTACTS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS];
      case ATTRIBUTE_ID_AUDIT_RECORD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD];
      default:
        return 0;
    }
}

// CREATORS

UpdateContactRequest::UpdateContactRequest(bslma::Allocator *basicAllocator)
: d_contacts(basicAllocator)
, d_auditRecord(basicAllocator)
, d_registryId()
{
}

UpdateContactRequest::UpdateContactRequest(const UpdateContactRequest& original,
                                           bslma::Allocator *basicAllocator)
: d_contacts(original.d_contacts, basicAllocator)
, d_auditRecord(original.d_auditRecord, basicAllocator)
, d_registryId(original.d_registryId)
{
}

UpdateContactRequest::~UpdateContactRequest()
{
}

// MANIPULATORS

UpdateContactRequest&
UpdateContactRequest::operator=(const UpdateContactRequest& rhs)
{
    if (this != &rhs) {
        d_registryId = rhs.d_registryId;
        d_contacts = rhs.d_contacts;
        d_auditRecord = rhs.d_auditRecord;
    }

    return *this;
}

int UpdateContactRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_registryId,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_contacts,
                       aggregate,
                       ATTRIBUTE_ID_CONTACTS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_auditRecord,
                       aggregate,
                       ATTRIBUTE_ID_AUDIT_RECORD)))
    {
        return rc;
    }
    return 0;
}

void UpdateContactRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_registryId);
    bdeat_ValueTypeFunctions::reset(&d_contacts);
    bdeat_ValueTypeFunctions::reset(&d_auditRecord);
}

// ACCESSORS

bsl::ostream& UpdateContactRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("registryId", d_registryId);
    printer.printAttribute("contacts", d_contacts);
    printer.printAttribute("auditRecord", d_auditRecord);
    printer.end();
    return stream;
}

int UpdateContactRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY_ID,
                       d_registryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_CONTACTS,
                       d_contacts);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_AUDIT_RECORD,
                       d_auditRecord);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                             // ------------------                             
                             // class RegistryInfo                             
                             // ------------------                             

// CONSTANTS

const char RegistryInfo::CLASS_NAME[] = "RegistryInfo";

const bdeat_AttributeInfo RegistryInfo::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_NODE,
        "node",
        sizeof("node") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ENTRY,
        "entry",
        sizeof("entry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *RegistryInfo::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    RegistryInfo::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *RegistryInfo::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_NODE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE];
      case ATTRIBUTE_ID_ENTRY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY];
      default:
        return 0;
    }
}

// CREATORS

RegistryInfo::RegistryInfo(bslma::Allocator *basicAllocator)
: d_entry(basicAllocator)
, d_node(basicAllocator)
{
}

RegistryInfo::RegistryInfo(const RegistryInfo& original,
                           bslma::Allocator *basicAllocator)
: d_entry(original.d_entry, basicAllocator)
, d_node(original.d_node, basicAllocator)
{
}

RegistryInfo::~RegistryInfo()
{
}

// MANIPULATORS

RegistryInfo&
RegistryInfo::operator=(const RegistryInfo& rhs)
{
    if (this != &rhs) {
        d_node = rhs.d_node;
        d_entry = rhs.d_entry;
    }

    return *this;
}

int RegistryInfo::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_node,
                       aggregate,
                       ATTRIBUTE_ID_NODE)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_entry,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    return 0;
}

void RegistryInfo::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_node);
    bdeat_ValueTypeFunctions::reset(&d_entry);
}

// ACCESSORS

bsl::ostream& RegistryInfo::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("node", d_node);
    printer.printAttribute("entry", d_entry);
    printer.end();
    return stream;
}

int RegistryInfo::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NODE,
                       d_node);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY,
                       d_entry);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                          // -----------------------                           
                          // class BregChangeRequest                           
                          // -----------------------                           

// CONSTANTS

const char BregChangeRequest::CLASS_NAME[] = "BregChangeRequest";

const bdeat_AttributeInfo BregChangeRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_APPROVER_UUID,
        "approverUuid",
        sizeof("approverUuid") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_REGISTRY,
        "registry",
        sizeof("registry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ENTRY_VALUE,
        "entryValue",
        sizeof("entryValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_PRQS_PRIORITY,
        "prqsPriority",
        sizeof("prqsPriority") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_COVG_REQUIRED,
        "covgRequired",
        sizeof("covgRequired") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregChangeRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 5; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    BregChangeRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *BregChangeRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_APPROVER_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_APPROVER_UUID];
      case ATTRIBUTE_ID_REGISTRY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY];
      case ATTRIBUTE_ID_ENTRY_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE];
      case ATTRIBUTE_ID_PRQS_PRIORITY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_PRIORITY];
      case ATTRIBUTE_ID_COVG_REQUIRED:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_COVG_REQUIRED];
      default:
        return 0;
    }
}

// CREATORS

BregChangeRequest::BregChangeRequest(bslma::Allocator *basicAllocator)
: d_registry(basicAllocator)
, d_entryValue(basicAllocator)
, d_approverUuid()
, d_prqsPriority()
, d_covgRequired()
{
}

BregChangeRequest::BregChangeRequest(const BregChangeRequest& original,
                                     bslma::Allocator *basicAllocator)
: d_registry(original.d_registry, basicAllocator)
, d_entryValue(original.d_entryValue, basicAllocator)
, d_approverUuid(original.d_approverUuid)
, d_prqsPriority(original.d_prqsPriority)
, d_covgRequired(original.d_covgRequired)
{
}

BregChangeRequest::~BregChangeRequest()
{
}

// MANIPULATORS

BregChangeRequest&
BregChangeRequest::operator=(const BregChangeRequest& rhs)
{
    if (this != &rhs) {
        d_approverUuid = rhs.d_approverUuid;
        d_registry = rhs.d_registry;
        d_entryValue = rhs.d_entryValue;
        d_prqsPriority = rhs.d_prqsPriority;
        d_covgRequired = rhs.d_covgRequired;
    }

    return *this;
}

int BregChangeRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_approverUuid,
                       aggregate,
                       ATTRIBUTE_ID_APPROVER_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_registry,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryValue,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_prqsPriority,
                       aggregate,
                       ATTRIBUTE_ID_PRQS_PRIORITY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_covgRequired,
                       aggregate,
                       ATTRIBUTE_ID_COVG_REQUIRED)))
    {
        return rc;
    }
    return 0;
}

void BregChangeRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_approverUuid);
    bdeat_ValueTypeFunctions::reset(&d_registry);
    bdeat_ValueTypeFunctions::reset(&d_entryValue);
    bdeat_ValueTypeFunctions::reset(&d_prqsPriority);
    bdeat_ValueTypeFunctions::reset(&d_covgRequired);
}

// ACCESSORS

bsl::ostream& BregChangeRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("approverUuid", d_approverUuid);
    printer.printAttribute("registry", d_registry);
    printer.printAttribute("entryValue", d_entryValue);
    printer.printAttribute("prqsPriority", d_prqsPriority);
    printer.printAttribute("covgRequired", d_covgRequired);
    printer.end();
    return stream;
}

int BregChangeRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_APPROVER_UUID,
                       d_approverUuid);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY,
                       d_registry);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_VALUE,
                       d_entryValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_PRQS_PRIORITY,
                       d_prqsPriority);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_COVG_REQUIRED,
                       d_covgRequired);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                         // -------------------------                          
                         // class GenerateCodeRequest                          
                         // -------------------------                          

// CONSTANTS

const char GenerateCodeRequest::CLASS_NAME[] = "GenerateCodeRequest";

const bdeat_AttributeInfo GenerateCodeRequest::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_REGISTRY,
        "registry",
        sizeof("registry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ENTRY_VALUE,
        "entryValue",
        sizeof("entryValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *GenerateCodeRequest::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdeat_AttributeInfo& attributeInfo =
                    GenerateCodeRequest::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdeat_AttributeInfo *GenerateCodeRequest::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_REGISTRY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY];
      case ATTRIBUTE_ID_ENTRY_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE];
      default:
        return 0;
    }
}

// CREATORS

GenerateCodeRequest::GenerateCodeRequest(bslma::Allocator *basicAllocator)
: d_registry(basicAllocator)
, d_entryValue(basicAllocator)
{
}

GenerateCodeRequest::GenerateCodeRequest(const GenerateCodeRequest& original,
                                         bslma::Allocator *basicAllocator)
: d_registry(original.d_registry, basicAllocator)
, d_entryValue(original.d_entryValue, basicAllocator)
{
}

GenerateCodeRequest::~GenerateCodeRequest()
{
}

// MANIPULATORS

GenerateCodeRequest&
GenerateCodeRequest::operator=(const GenerateCodeRequest& rhs)
{
    if (this != &rhs) {
        d_registry = rhs.d_registry;
        d_entryValue = rhs.d_entryValue;
    }

    return *this;
}

int GenerateCodeRequest::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_registry,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryValue,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_VALUE)))
    {
        return rc;
    }
    return 0;
}

void GenerateCodeRequest::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_registry);
    bdeat_ValueTypeFunctions::reset(&d_entryValue);
}

// ACCESSORS

bsl::ostream& GenerateCodeRequest::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("registry", d_registry);
    printer.printAttribute("entryValue", d_entryValue);
    printer.end();
    return stream;
}

int GenerateCodeRequest::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY,
                       d_registry);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_VALUE,
                       d_entryValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                               // --------------                               
                               // class Response                               
                               // --------------                               

// CONSTANTS

const char Response::CLASS_NAME[] = "Response";

const bdeat_SelectionInfo Response::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_ERROR_RESPONSE,
        "errorResponse",
        sizeof("errorResponse") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_NODE_TREE,
        "nodeTree",
        sizeof("nodeTree") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_NODE_DETAILS,
        "nodeDetails",
        sizeof("nodeDetails") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_NODE_ID,
        "nodeId",
        sizeof("nodeId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_VALUES,
        "values",
        sizeof("values") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_NODE_INFO,
        "nodeInfo",
        sizeof("nodeInfo") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_ENTRY_INFO,
        "entryInfo",
        sizeof("entryInfo") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_REGISTRY_INFO,
        "registryInfo",
        sizeof("registryInfo") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_ENTRY_VALUE,
        "entryValue",
        sizeof("entryValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_ENTRY_SUBSCRIBERS,
        "entrySubscribers",
        sizeof("entrySubscribers") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_VERSION_HISTORY,
        "versionHistory",
        sizeof("versionHistory") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_PRIVILEGE_LIST,
        "privilegeList",
        sizeof("privilegeList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_OUT_GROUP,
        "outGroup",
        sizeof("outGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_DEPT_CHAIN,
        "deptChain",
        sizeof("deptChain") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_DRQS_GROUP,
        "drqsGroup",
        sizeof("drqsGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_MACHINE_GROUP,
        "machineGroup",
        sizeof("machineGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_TODO_LIST,
        "todoList",
        sizeof("todoList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_RELATED_TICKET_SUMMARY,
        "relatedTicketSummary",
        sizeof("relatedTicketSummary") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_NODE_TYPE,
        "nodeType",
        sizeof("nodeType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *Response::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 19; ++i) {
        const bdeat_SelectionInfo& selectionInfo =
                    Response::SELECTION_INFO_ARRAY[i];

        if (nameLength == selectionInfo.d_nameLength
        &&  0 == bsl::memcmp(selectionInfo.d_name_p, name, nameLength))
        {
            return &selectionInfo;
        }
    }

    return 0;
}

const bdeat_SelectionInfo *Response::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_ERROR_RESPONSE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_ERROR_RESPONSE];
      case SELECTION_ID_NODE_TREE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TREE];
      case SELECTION_ID_NODE_DETAILS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_DETAILS];
      case SELECTION_ID_NODE_ID:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_ID];
      case SELECTION_ID_VALUES:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_VALUES];
      case SELECTION_ID_NODE_INFO:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_INFO];
      case SELECTION_ID_ENTRY_INFO:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_INFO];
      case SELECTION_ID_REGISTRY_INFO:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_REGISTRY_INFO];
      case SELECTION_ID_ENTRY_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_VALUE];
      case SELECTION_ID_ENTRY_SUBSCRIBERS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_SUBSCRIBERS];
      case SELECTION_ID_VERSION_HISTORY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_VERSION_HISTORY];
      case SELECTION_ID_PRIVILEGE_LIST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_PRIVILEGE_LIST];
      case SELECTION_ID_OUT_GROUP:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_OUT_GROUP];
      case SELECTION_ID_DEPT_CHAIN:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_DEPT_CHAIN];
      case SELECTION_ID_DRQS_GROUP:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_DRQS_GROUP];
      case SELECTION_ID_MACHINE_GROUP:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_MACHINE_GROUP];
      case SELECTION_ID_TODO_LIST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_TODO_LIST];
      case SELECTION_ID_RELATED_TICKET_SUMMARY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_RELATED_TICKET_SUMMARY];
      case SELECTION_ID_NODE_TYPE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TYPE];
      default:
        return 0;
    }
}

// CREATORS

Response::Response(
    const Response& original,
    bslma::Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_ERROR_RESPONSE: {
        new (d_errorResponse.buffer())
            ErrorInfoResponse(
                original.d_errorResponse.object(), d_allocator_p);
      } break;
      case SELECTION_ID_NODE_TREE: {
        new (d_nodeTree.buffer())
            bsl::vector<Node>(
                original.d_nodeTree.object(), d_allocator_p);
      } break;
      case SELECTION_ID_NODE_DETAILS: {
        new (d_nodeDetails.buffer())
            NodeDetails(
                original.d_nodeDetails.object(), d_allocator_p);
      } break;
      case SELECTION_ID_NODE_ID: {
        new (d_nodeId.buffer())
            int(original.d_nodeId.object());
      } break;
      case SELECTION_ID_VALUES: {
        new (d_values.buffer())
            bsl::vector<BregValue>(
                original.d_values.object(), d_allocator_p);
      } break;
      case SELECTION_ID_NODE_INFO: {
        new (d_nodeInfo.buffer())
            NodeInfo(
                original.d_nodeInfo.object(), d_allocator_p);
      } break;
      case SELECTION_ID_ENTRY_INFO: {
        new (d_entryInfo.buffer())
            EntryInfo(
                original.d_entryInfo.object(), d_allocator_p);
      } break;
      case SELECTION_ID_REGISTRY_INFO: {
        new (d_registryInfo.buffer())
            RegistryInfo(
                original.d_registryInfo.object(), d_allocator_p);
      } break;
      case SELECTION_ID_ENTRY_VALUE: {
        new (d_entryValue.buffer())
            EntryValue(
                original.d_entryValue.object(), d_allocator_p);
      } break;
      case SELECTION_ID_ENTRY_SUBSCRIBERS: {
        new (d_entrySubscribers.buffer())
            EntrySubscribers(
                original.d_entrySubscribers.object(), d_allocator_p);
      } break;
      case SELECTION_ID_VERSION_HISTORY: {
        new (d_versionHistory.buffer())
            bsl::vector<VersionTsp>(
                original.d_versionHistory.object(), d_allocator_p);
      } break;
      case SELECTION_ID_PRIVILEGE_LIST: {
        new (d_privilegeList.buffer())
            PrivilegeList(
                original.d_privilegeList.object(), d_allocator_p);
      } break;
      case SELECTION_ID_OUT_GROUP: {
        new (d_outGroup.buffer())
            Group(
                original.d_outGroup.object(), d_allocator_p);
      } break;
      case SELECTION_ID_DEPT_CHAIN: {
        new (d_deptChain.buffer())
            bsl::vector<Group>(
                original.d_deptChain.object(), d_allocator_p);
      } break;
      case SELECTION_ID_DRQS_GROUP: {
        new (d_drqsGroup.buffer())
            Group(
                original.d_drqsGroup.object(), d_allocator_p);
      } break;
      case SELECTION_ID_MACHINE_GROUP: {
        new (d_machineGroup.buffer())
            bsl::string(
                original.d_machineGroup.object(), d_allocator_p);
      } break;
      case SELECTION_ID_TODO_LIST: {
        new (d_todoList.buffer())
            TodoList(
                original.d_todoList.object(), d_allocator_p);
      } break;
      case SELECTION_ID_RELATED_TICKET_SUMMARY: {
        new (d_relatedTicketSummary.buffer())
            bsl::string(
                original.d_relatedTicketSummary.object(), d_allocator_p);
      } break;
      case SELECTION_ID_NODE_TYPE: {
        new (d_nodeType.buffer())
            bsl::string(
                original.d_nodeType.object(), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

// MANIPULATORS

Response&
Response::operator=(const Response& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_ERROR_RESPONSE: {
            makeErrorResponse(rhs.d_errorResponse.object());
          } break;
          case SELECTION_ID_NODE_TREE: {
            makeNodeTree(rhs.d_nodeTree.object());
          } break;
          case SELECTION_ID_NODE_DETAILS: {
            makeNodeDetails(rhs.d_nodeDetails.object());
          } break;
          case SELECTION_ID_NODE_ID: {
            makeNodeId(rhs.d_nodeId.object());
          } break;
          case SELECTION_ID_VALUES: {
            makeValues(rhs.d_values.object());
          } break;
          case SELECTION_ID_NODE_INFO: {
            makeNodeInfo(rhs.d_nodeInfo.object());
          } break;
          case SELECTION_ID_ENTRY_INFO: {
            makeEntryInfo(rhs.d_entryInfo.object());
          } break;
          case SELECTION_ID_REGISTRY_INFO: {
            makeRegistryInfo(rhs.d_registryInfo.object());
          } break;
          case SELECTION_ID_ENTRY_VALUE: {
            makeEntryValue(rhs.d_entryValue.object());
          } break;
          case SELECTION_ID_ENTRY_SUBSCRIBERS: {
            makeEntrySubscribers(rhs.d_entrySubscribers.object());
          } break;
          case SELECTION_ID_VERSION_HISTORY: {
            makeVersionHistory(rhs.d_versionHistory.object());
          } break;
          case SELECTION_ID_PRIVILEGE_LIST: {
            makePrivilegeList(rhs.d_privilegeList.object());
          } break;
          case SELECTION_ID_OUT_GROUP: {
            makeOutGroup(rhs.d_outGroup.object());
          } break;
          case SELECTION_ID_DEPT_CHAIN: {
            makeDeptChain(rhs.d_deptChain.object());
          } break;
          case SELECTION_ID_DRQS_GROUP: {
            makeDrqsGroup(rhs.d_drqsGroup.object());
          } break;
          case SELECTION_ID_MACHINE_GROUP: {
            makeMachineGroup(rhs.d_machineGroup.object());
          } break;
          case SELECTION_ID_TODO_LIST: {
            makeTodoList(rhs.d_todoList.object());
          } break;
          case SELECTION_ID_RELATED_TICKET_SUMMARY: {
            makeRelatedTicketSummary(rhs.d_relatedTicketSummary.object());
          } break;
          case SELECTION_ID_NODE_TYPE: {
            makeNodeType(rhs.d_nodeType.object());
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }

    return *this;
}

int Response::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc = 0;

    int selectorId = aggregate.selectorId();
    switch (selectorId) {
      case SELECTION_ID_ERROR_RESPONSE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeErrorResponse(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_NODE_TREE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeNodeTree(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_NODE_DETAILS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeNodeDetails(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_NODE_ID: {
        rc = bcem_AggregateUtil::fromAggregate(&makeNodeId(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_VALUES: {
        rc = bcem_AggregateUtil::fromAggregate(&makeValues(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_NODE_INFO: {
        rc = bcem_AggregateUtil::fromAggregate(&makeNodeInfo(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_ENTRY_INFO: {
        rc = bcem_AggregateUtil::fromAggregate(&makeEntryInfo(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_REGISTRY_INFO: {
        rc = bcem_AggregateUtil::fromAggregate(&makeRegistryInfo(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_ENTRY_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeEntryValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_ENTRY_SUBSCRIBERS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeEntrySubscribers(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_VERSION_HISTORY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeVersionHistory(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_PRIVILEGE_LIST: {
        rc = bcem_AggregateUtil::fromAggregate(&makePrivilegeList(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_OUT_GROUP: {
        rc = bcem_AggregateUtil::fromAggregate(&makeOutGroup(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_DEPT_CHAIN: {
        rc = bcem_AggregateUtil::fromAggregate(&makeDeptChain(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_DRQS_GROUP: {
        rc = bcem_AggregateUtil::fromAggregate(&makeDrqsGroup(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_MACHINE_GROUP: {
        rc = bcem_AggregateUtil::fromAggregate(&makeMachineGroup(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_TODO_LIST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeTodoList(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_RELATED_TICKET_SUMMARY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeRelatedTicketSummary(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_NODE_TYPE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeNodeType(),
                                               aggregate,
                                               selectorId);
      } break;
      default: {
        rc = bcem_Aggregate::BCEM_ERR_BAD_CONVERSION;
      }
    }

    return rc;
}

void Response::reset()
{
    switch (d_selectionId) {
      case SELECTION_ID_ERROR_RESPONSE: {
        d_errorResponse.object().~ErrorInfoResponse();
      } break;
      case SELECTION_ID_NODE_TREE: {
        typedef bsl::vector<Node> Type;
        d_nodeTree.object().~Type();
      } break;
      case SELECTION_ID_NODE_DETAILS: {
        d_nodeDetails.object().~NodeDetails();
      } break;
      case SELECTION_ID_NODE_ID: {
        // no destruction required
      } break;
      case SELECTION_ID_VALUES: {
        typedef bsl::vector<BregValue> Type;
        d_values.object().~Type();
      } break;
      case SELECTION_ID_NODE_INFO: {
        d_nodeInfo.object().~NodeInfo();
      } break;
      case SELECTION_ID_ENTRY_INFO: {
        d_entryInfo.object().~EntryInfo();
      } break;
      case SELECTION_ID_REGISTRY_INFO: {
        d_registryInfo.object().~RegistryInfo();
      } break;
      case SELECTION_ID_ENTRY_VALUE: {
        d_entryValue.object().~EntryValue();
      } break;
      case SELECTION_ID_ENTRY_SUBSCRIBERS: {
        d_entrySubscribers.object().~EntrySubscribers();
      } break;
      case SELECTION_ID_VERSION_HISTORY: {
        typedef bsl::vector<VersionTsp> Type;
        d_versionHistory.object().~Type();
      } break;
      case SELECTION_ID_PRIVILEGE_LIST: {
        d_privilegeList.object().~PrivilegeList();
      } break;
      case SELECTION_ID_OUT_GROUP: {
        d_outGroup.object().~Group();
      } break;
      case SELECTION_ID_DEPT_CHAIN: {
        typedef bsl::vector<Group> Type;
        d_deptChain.object().~Type();
      } break;
      case SELECTION_ID_DRQS_GROUP: {
        d_drqsGroup.object().~Group();
      } break;
      case SELECTION_ID_MACHINE_GROUP: {
        typedef bsl::string Type;
        d_machineGroup.object().~Type();
      } break;
      case SELECTION_ID_TODO_LIST: {
        d_todoList.object().~TodoList();
      } break;
      case SELECTION_ID_RELATED_TICKET_SUMMARY: {
        typedef bsl::string Type;
        d_relatedTicketSummary.object().~Type();
      } break;
      case SELECTION_ID_NODE_TYPE: {
        typedef bsl::string Type;
        d_nodeType.object().~Type();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int Response::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_ERROR_RESPONSE: {
        makeErrorResponse();
      } break;
      case SELECTION_ID_NODE_TREE: {
        makeNodeTree();
      } break;
      case SELECTION_ID_NODE_DETAILS: {
        makeNodeDetails();
      } break;
      case SELECTION_ID_NODE_ID: {
        makeNodeId();
      } break;
      case SELECTION_ID_VALUES: {
        makeValues();
      } break;
      case SELECTION_ID_NODE_INFO: {
        makeNodeInfo();
      } break;
      case SELECTION_ID_ENTRY_INFO: {
        makeEntryInfo();
      } break;
      case SELECTION_ID_REGISTRY_INFO: {
        makeRegistryInfo();
      } break;
      case SELECTION_ID_ENTRY_VALUE: {
        makeEntryValue();
      } break;
      case SELECTION_ID_ENTRY_SUBSCRIBERS: {
        makeEntrySubscribers();
      } break;
      case SELECTION_ID_VERSION_HISTORY: {
        makeVersionHistory();
      } break;
      case SELECTION_ID_PRIVILEGE_LIST: {
        makePrivilegeList();
      } break;
      case SELECTION_ID_OUT_GROUP: {
        makeOutGroup();
      } break;
      case SELECTION_ID_DEPT_CHAIN: {
        makeDeptChain();
      } break;
      case SELECTION_ID_DRQS_GROUP: {
        makeDrqsGroup();
      } break;
      case SELECTION_ID_MACHINE_GROUP: {
        makeMachineGroup();
      } break;
      case SELECTION_ID_TODO_LIST: {
        makeTodoList();
      } break;
      case SELECTION_ID_RELATED_TICKET_SUMMARY: {
        makeRelatedTicketSummary();
      } break;
      case SELECTION_ID_NODE_TYPE: {
        makeNodeType();
      } break;
      case SELECTION_ID_UNDEFINED: {
        reset();
      } break;
      default:
        return -1;
    }
    return 0;
}

int Response::makeSelection(const char *name, int nameLength)
{
    const bdeat_SelectionInfo *selectionInfo =
           lookupSelectionInfo(name, nameLength);
    if (0 == selectionInfo) {
       return -1;
    }

    return makeSelection(selectionInfo->d_id);
}

ErrorInfoResponse& Response::makeErrorResponse()
{
    if (SELECTION_ID_ERROR_RESPONSE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_errorResponse.object());
    }
    else {
        reset();
        new (d_errorResponse.buffer())
                ErrorInfoResponse(d_allocator_p);

        d_selectionId = SELECTION_ID_ERROR_RESPONSE;
    }

    return d_errorResponse.object();
}

ErrorInfoResponse& Response::makeErrorResponse(const ErrorInfoResponse& value)
{
    if (SELECTION_ID_ERROR_RESPONSE == d_selectionId) {
        d_errorResponse.object() = value;
    }
    else {
        reset();
        new (d_errorResponse.buffer())
                ErrorInfoResponse(value, d_allocator_p);
        d_selectionId = SELECTION_ID_ERROR_RESPONSE;
    }

    return d_errorResponse.object();
}

bsl::vector<Node>& Response::makeNodeTree()
{
    if (SELECTION_ID_NODE_TREE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_nodeTree.object());
    }
    else {
        reset();
        new (d_nodeTree.buffer())
                bsl::vector<Node>(d_allocator_p);

        d_selectionId = SELECTION_ID_NODE_TREE;
    }

    return d_nodeTree.object();
}

bsl::vector<Node>& Response::makeNodeTree(const bsl::vector<Node>& value)
{
    if (SELECTION_ID_NODE_TREE == d_selectionId) {
        d_nodeTree.object() = value;
    }
    else {
        reset();
        new (d_nodeTree.buffer())
                bsl::vector<Node>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_NODE_TREE;
    }

    return d_nodeTree.object();
}

NodeDetails& Response::makeNodeDetails()
{
    if (SELECTION_ID_NODE_DETAILS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_nodeDetails.object());
    }
    else {
        reset();
        new (d_nodeDetails.buffer())
                NodeDetails(d_allocator_p);

        d_selectionId = SELECTION_ID_NODE_DETAILS;
    }

    return d_nodeDetails.object();
}

NodeDetails& Response::makeNodeDetails(const NodeDetails& value)
{
    if (SELECTION_ID_NODE_DETAILS == d_selectionId) {
        d_nodeDetails.object() = value;
    }
    else {
        reset();
        new (d_nodeDetails.buffer())
                NodeDetails(value, d_allocator_p);
        d_selectionId = SELECTION_ID_NODE_DETAILS;
    }

    return d_nodeDetails.object();
}

int& Response::makeNodeId()
{
    if (SELECTION_ID_NODE_ID == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_nodeId.object());
    }
    else {
        reset();
        new (d_nodeId.buffer())
            int();
    
        d_selectionId = SELECTION_ID_NODE_ID;
    }

    return d_nodeId.object();
}

int& Response::makeNodeId(int value)
{
    if (SELECTION_ID_NODE_ID == d_selectionId) {
        d_nodeId.object() = value;
    }
    else {
        reset();
        new (d_nodeId.buffer())
                int(value);
        d_selectionId = SELECTION_ID_NODE_ID;
    }

    return d_nodeId.object();
}

bsl::vector<BregValue>& Response::makeValues()
{
    if (SELECTION_ID_VALUES == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_values.object());
    }
    else {
        reset();
        new (d_values.buffer())
                bsl::vector<BregValue>(d_allocator_p);

        d_selectionId = SELECTION_ID_VALUES;
    }

    return d_values.object();
}

bsl::vector<BregValue>& Response::makeValues(const bsl::vector<BregValue>& value)
{
    if (SELECTION_ID_VALUES == d_selectionId) {
        d_values.object() = value;
    }
    else {
        reset();
        new (d_values.buffer())
                bsl::vector<BregValue>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_VALUES;
    }

    return d_values.object();
}

NodeInfo& Response::makeNodeInfo()
{
    if (SELECTION_ID_NODE_INFO == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_nodeInfo.object());
    }
    else {
        reset();
        new (d_nodeInfo.buffer())
                NodeInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_NODE_INFO;
    }

    return d_nodeInfo.object();
}

NodeInfo& Response::makeNodeInfo(const NodeInfo& value)
{
    if (SELECTION_ID_NODE_INFO == d_selectionId) {
        d_nodeInfo.object() = value;
    }
    else {
        reset();
        new (d_nodeInfo.buffer())
                NodeInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_NODE_INFO;
    }

    return d_nodeInfo.object();
}

EntryInfo& Response::makeEntryInfo()
{
    if (SELECTION_ID_ENTRY_INFO == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_entryInfo.object());
    }
    else {
        reset();
        new (d_entryInfo.buffer())
                EntryInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_ENTRY_INFO;
    }

    return d_entryInfo.object();
}

EntryInfo& Response::makeEntryInfo(const EntryInfo& value)
{
    if (SELECTION_ID_ENTRY_INFO == d_selectionId) {
        d_entryInfo.object() = value;
    }
    else {
        reset();
        new (d_entryInfo.buffer())
                EntryInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_ENTRY_INFO;
    }

    return d_entryInfo.object();
}

RegistryInfo& Response::makeRegistryInfo()
{
    if (SELECTION_ID_REGISTRY_INFO == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_registryInfo.object());
    }
    else {
        reset();
        new (d_registryInfo.buffer())
                RegistryInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_REGISTRY_INFO;
    }

    return d_registryInfo.object();
}

RegistryInfo& Response::makeRegistryInfo(const RegistryInfo& value)
{
    if (SELECTION_ID_REGISTRY_INFO == d_selectionId) {
        d_registryInfo.object() = value;
    }
    else {
        reset();
        new (d_registryInfo.buffer())
                RegistryInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_REGISTRY_INFO;
    }

    return d_registryInfo.object();
}

EntryValue& Response::makeEntryValue()
{
    if (SELECTION_ID_ENTRY_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_entryValue.object());
    }
    else {
        reset();
        new (d_entryValue.buffer())
                EntryValue(d_allocator_p);

        d_selectionId = SELECTION_ID_ENTRY_VALUE;
    }

    return d_entryValue.object();
}

EntryValue& Response::makeEntryValue(const EntryValue& value)
{
    if (SELECTION_ID_ENTRY_VALUE == d_selectionId) {
        d_entryValue.object() = value;
    }
    else {
        reset();
        new (d_entryValue.buffer())
                EntryValue(value, d_allocator_p);
        d_selectionId = SELECTION_ID_ENTRY_VALUE;
    }

    return d_entryValue.object();
}

EntrySubscribers& Response::makeEntrySubscribers()
{
    if (SELECTION_ID_ENTRY_SUBSCRIBERS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_entrySubscribers.object());
    }
    else {
        reset();
        new (d_entrySubscribers.buffer())
                EntrySubscribers(d_allocator_p);

        d_selectionId = SELECTION_ID_ENTRY_SUBSCRIBERS;
    }

    return d_entrySubscribers.object();
}

EntrySubscribers& Response::makeEntrySubscribers(const EntrySubscribers& value)
{
    if (SELECTION_ID_ENTRY_SUBSCRIBERS == d_selectionId) {
        d_entrySubscribers.object() = value;
    }
    else {
        reset();
        new (d_entrySubscribers.buffer())
                EntrySubscribers(value, d_allocator_p);
        d_selectionId = SELECTION_ID_ENTRY_SUBSCRIBERS;
    }

    return d_entrySubscribers.object();
}

bsl::vector<VersionTsp>& Response::makeVersionHistory()
{
    if (SELECTION_ID_VERSION_HISTORY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_versionHistory.object());
    }
    else {
        reset();
        new (d_versionHistory.buffer())
                bsl::vector<VersionTsp>(d_allocator_p);

        d_selectionId = SELECTION_ID_VERSION_HISTORY;
    }

    return d_versionHistory.object();
}

bsl::vector<VersionTsp>& Response::makeVersionHistory(const bsl::vector<VersionTsp>& value)
{
    if (SELECTION_ID_VERSION_HISTORY == d_selectionId) {
        d_versionHistory.object() = value;
    }
    else {
        reset();
        new (d_versionHistory.buffer())
                bsl::vector<VersionTsp>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_VERSION_HISTORY;
    }

    return d_versionHistory.object();
}

PrivilegeList& Response::makePrivilegeList()
{
    if (SELECTION_ID_PRIVILEGE_LIST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_privilegeList.object());
    }
    else {
        reset();
        new (d_privilegeList.buffer())
                PrivilegeList(d_allocator_p);

        d_selectionId = SELECTION_ID_PRIVILEGE_LIST;
    }

    return d_privilegeList.object();
}

PrivilegeList& Response::makePrivilegeList(const PrivilegeList& value)
{
    if (SELECTION_ID_PRIVILEGE_LIST == d_selectionId) {
        d_privilegeList.object() = value;
    }
    else {
        reset();
        new (d_privilegeList.buffer())
                PrivilegeList(value, d_allocator_p);
        d_selectionId = SELECTION_ID_PRIVILEGE_LIST;
    }

    return d_privilegeList.object();
}

Group& Response::makeOutGroup()
{
    if (SELECTION_ID_OUT_GROUP == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_outGroup.object());
    }
    else {
        reset();
        new (d_outGroup.buffer())
                Group(d_allocator_p);

        d_selectionId = SELECTION_ID_OUT_GROUP;
    }

    return d_outGroup.object();
}

Group& Response::makeOutGroup(const Group& value)
{
    if (SELECTION_ID_OUT_GROUP == d_selectionId) {
        d_outGroup.object() = value;
    }
    else {
        reset();
        new (d_outGroup.buffer())
                Group(value, d_allocator_p);
        d_selectionId = SELECTION_ID_OUT_GROUP;
    }

    return d_outGroup.object();
}

bsl::vector<Group>& Response::makeDeptChain()
{
    if (SELECTION_ID_DEPT_CHAIN == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_deptChain.object());
    }
    else {
        reset();
        new (d_deptChain.buffer())
                bsl::vector<Group>(d_allocator_p);

        d_selectionId = SELECTION_ID_DEPT_CHAIN;
    }

    return d_deptChain.object();
}

bsl::vector<Group>& Response::makeDeptChain(const bsl::vector<Group>& value)
{
    if (SELECTION_ID_DEPT_CHAIN == d_selectionId) {
        d_deptChain.object() = value;
    }
    else {
        reset();
        new (d_deptChain.buffer())
                bsl::vector<Group>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_DEPT_CHAIN;
    }

    return d_deptChain.object();
}

Group& Response::makeDrqsGroup()
{
    if (SELECTION_ID_DRQS_GROUP == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_drqsGroup.object());
    }
    else {
        reset();
        new (d_drqsGroup.buffer())
                Group(d_allocator_p);

        d_selectionId = SELECTION_ID_DRQS_GROUP;
    }

    return d_drqsGroup.object();
}

Group& Response::makeDrqsGroup(const Group& value)
{
    if (SELECTION_ID_DRQS_GROUP == d_selectionId) {
        d_drqsGroup.object() = value;
    }
    else {
        reset();
        new (d_drqsGroup.buffer())
                Group(value, d_allocator_p);
        d_selectionId = SELECTION_ID_DRQS_GROUP;
    }

    return d_drqsGroup.object();
}

bsl::string& Response::makeMachineGroup()
{
    if (SELECTION_ID_MACHINE_GROUP == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_machineGroup.object());
    }
    else {
        reset();
        new (d_machineGroup.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_MACHINE_GROUP;
    }

    return d_machineGroup.object();
}

bsl::string& Response::makeMachineGroup(const bsl::string& value)
{
    if (SELECTION_ID_MACHINE_GROUP == d_selectionId) {
        d_machineGroup.object() = value;
    }
    else {
        reset();
        new (d_machineGroup.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_MACHINE_GROUP;
    }

    return d_machineGroup.object();
}

TodoList& Response::makeTodoList()
{
    if (SELECTION_ID_TODO_LIST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_todoList.object());
    }
    else {
        reset();
        new (d_todoList.buffer())
                TodoList(d_allocator_p);

        d_selectionId = SELECTION_ID_TODO_LIST;
    }

    return d_todoList.object();
}

TodoList& Response::makeTodoList(const TodoList& value)
{
    if (SELECTION_ID_TODO_LIST == d_selectionId) {
        d_todoList.object() = value;
    }
    else {
        reset();
        new (d_todoList.buffer())
                TodoList(value, d_allocator_p);
        d_selectionId = SELECTION_ID_TODO_LIST;
    }

    return d_todoList.object();
}

bsl::string& Response::makeRelatedTicketSummary()
{
    if (SELECTION_ID_RELATED_TICKET_SUMMARY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_relatedTicketSummary.object());
    }
    else {
        reset();
        new (d_relatedTicketSummary.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_RELATED_TICKET_SUMMARY;
    }

    return d_relatedTicketSummary.object();
}

bsl::string& Response::makeRelatedTicketSummary(const bsl::string& value)
{
    if (SELECTION_ID_RELATED_TICKET_SUMMARY == d_selectionId) {
        d_relatedTicketSummary.object() = value;
    }
    else {
        reset();
        new (d_relatedTicketSummary.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_RELATED_TICKET_SUMMARY;
    }

    return d_relatedTicketSummary.object();
}

bsl::string& Response::makeNodeType()
{
    if (SELECTION_ID_NODE_TYPE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_nodeType.object());
    }
    else {
        reset();
        new (d_nodeType.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_NODE_TYPE;
    }

    return d_nodeType.object();
}

bsl::string& Response::makeNodeType(const bsl::string& value)
{
    if (SELECTION_ID_NODE_TYPE == d_selectionId) {
        d_nodeType.object() = value;
    }
    else {
        reset();
        new (d_nodeType.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_NODE_TYPE;
    }

    return d_nodeType.object();
}

// ACCESSORS

bsl::ostream& Response::print(
    bsl::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    switch (d_selectionId) {
      case SELECTION_ID_ERROR_RESPONSE: {
        printer.printAttribute("errorResponse", d_errorResponse.object());

      }  break;
      case SELECTION_ID_NODE_TREE: {
        printer.printAttribute("nodeTree", d_nodeTree.object());

      }  break;
      case SELECTION_ID_NODE_DETAILS: {
        printer.printAttribute("nodeDetails", d_nodeDetails.object());

      }  break;
      case SELECTION_ID_NODE_ID: {
        printer.printAttribute("nodeId", d_nodeId.object());

      }  break;
      case SELECTION_ID_VALUES: {
        printer.printAttribute("values", d_values.object());

      }  break;
      case SELECTION_ID_NODE_INFO: {
        printer.printAttribute("nodeInfo", d_nodeInfo.object());

      }  break;
      case SELECTION_ID_ENTRY_INFO: {
        printer.printAttribute("entryInfo", d_entryInfo.object());

      }  break;
      case SELECTION_ID_REGISTRY_INFO: {
        printer.printAttribute("registryInfo", d_registryInfo.object());

      }  break;
      case SELECTION_ID_ENTRY_VALUE: {
        printer.printAttribute("entryValue", d_entryValue.object());

      }  break;
      case SELECTION_ID_ENTRY_SUBSCRIBERS: {
        printer.printAttribute("entrySubscribers", d_entrySubscribers.object());

      }  break;
      case SELECTION_ID_VERSION_HISTORY: {
        printer.printAttribute("versionHistory", d_versionHistory.object());

      }  break;
      case SELECTION_ID_PRIVILEGE_LIST: {
        printer.printAttribute("privilegeList", d_privilegeList.object());

      }  break;
      case SELECTION_ID_OUT_GROUP: {
        printer.printAttribute("outGroup", d_outGroup.object());

      }  break;
      case SELECTION_ID_DEPT_CHAIN: {
        printer.printAttribute("deptChain", d_deptChain.object());

      }  break;
      case SELECTION_ID_DRQS_GROUP: {
        printer.printAttribute("drqsGroup", d_drqsGroup.object());

      }  break;
      case SELECTION_ID_MACHINE_GROUP: {
        printer.printAttribute("machineGroup", d_machineGroup.object());

      }  break;
      case SELECTION_ID_TODO_LIST: {
        printer.printAttribute("todoList", d_todoList.object());

      }  break;
      case SELECTION_ID_RELATED_TICKET_SUMMARY: {
        printer.printAttribute("relatedTicketSummary", d_relatedTicketSummary.object());

      }  break;
      case SELECTION_ID_NODE_TYPE: {
        printer.printAttribute("nodeType", d_nodeType.object());

      }  break;
      default:
        stream << "SELECTION UNDEFINED\n";
    }
    printer.end();
    return stream;
}

int Response::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_ERROR_RESPONSE: {
        const ErrorInfoResponse& source = this->errorResponse();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_NODE_TREE: {
        const bsl::vector<Node>& source = this->nodeTree();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_NODE_DETAILS: {
        const NodeDetails& source = this->nodeDetails();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_NODE_ID: {
        const int& source = this->nodeId();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_VALUES: {
        const bsl::vector<BregValue>& source = this->values();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_NODE_INFO: {
        const NodeInfo& source = this->nodeInfo();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_ENTRY_INFO: {
        const EntryInfo& source = this->entryInfo();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_REGISTRY_INFO: {
        const RegistryInfo& source = this->registryInfo();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_ENTRY_VALUE: {
        const EntryValue& source = this->entryValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_ENTRY_SUBSCRIBERS: {
        const EntrySubscribers& source = this->entrySubscribers();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_VERSION_HISTORY: {
        const bsl::vector<VersionTsp>& source = this->versionHistory();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_PRIVILEGE_LIST: {
        const PrivilegeList& source = this->privilegeList();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_OUT_GROUP: {
        const Group& source = this->outGroup();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_DEPT_CHAIN: {
        const bsl::vector<Group>& source = this->deptChain();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_DRQS_GROUP: {
        const Group& source = this->drqsGroup();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_MACHINE_GROUP: {
        const bsl::string& source = this->machineGroup();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_TODO_LIST: {
        const TodoList& source = this->todoList();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_RELATED_TICKET_SUMMARY: {
        const bsl::string& source = this->relatedTicketSummary();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_NODE_TYPE: {
        const bsl::string& source = this->nodeType();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    return rc;
}

const char *Response::selectionName() const
{
    switch (d_selectionId) {
      case SELECTION_ID_ERROR_RESPONSE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_ERROR_RESPONSE].name();
      case SELECTION_ID_NODE_TREE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TREE].name();
      case SELECTION_ID_NODE_DETAILS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_DETAILS].name();
      case SELECTION_ID_NODE_ID:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_ID].name();
      case SELECTION_ID_VALUES:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_VALUES].name();
      case SELECTION_ID_NODE_INFO:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_INFO].name();
      case SELECTION_ID_ENTRY_INFO:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_INFO].name();
      case SELECTION_ID_REGISTRY_INFO:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_REGISTRY_INFO].name();
      case SELECTION_ID_ENTRY_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_VALUE].name();
      case SELECTION_ID_ENTRY_SUBSCRIBERS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_SUBSCRIBERS].name();
      case SELECTION_ID_VERSION_HISTORY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_VERSION_HISTORY].name();
      case SELECTION_ID_PRIVILEGE_LIST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_PRIVILEGE_LIST].name();
      case SELECTION_ID_OUT_GROUP:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_OUT_GROUP].name();
      case SELECTION_ID_DEPT_CHAIN:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_DEPT_CHAIN].name();
      case SELECTION_ID_DRQS_GROUP:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_DRQS_GROUP].name();
      case SELECTION_ID_MACHINE_GROUP:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_MACHINE_GROUP].name();
      case SELECTION_ID_TODO_LIST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_TODO_LIST].name();
      case SELECTION_ID_RELATED_TICKET_SUMMARY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_RELATED_TICKET_SUMMARY].name();
      case SELECTION_ID_NODE_TYPE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TYPE].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}

                               // -------------                                
                               // class Request                                
                               // -------------                                

// CONSTANTS

const char Request::CLASS_NAME[] = "Request";

const bdeat_SelectionInfo Request::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_GET_TREE,
        "getTree",
        sizeof("getTree") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_EXPANDED_TREE,
        "getExpandedTree",
        sizeof("getExpandedTree") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_DEFAULT_TREE,
        "getDefaultTree",
        sizeof("getDefaultTree") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_CHILDREN,
        "getChildren",
        sizeof("getChildren") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_DEFAULT_NODE,
        "getDefaultNode",
        sizeof("getDefaultNode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_NODE_DETAILS,
        "getNodeDetails",
        sizeof("getNodeDetails") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_SET_DEFAULT_NODE,
        "setDefaultNode",
        sizeof("setDefaultNode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_SEARCH_BY_NAME,
        "searchByName",
        sizeof("searchByName") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_SEARCH_BY_ID,
        "searchById",
        sizeof("searchById") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_SEARCH_BY_ACCESSOR,
        "searchByAccessor",
        sizeof("searchByAccessor") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_SEARCH_BY_CONTACTS,
        "searchByContacts",
        sizeof("searchByContacts") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_SEARCH_BY_KEYWORDS,
        "searchByKeywords",
        sizeof("searchByKeywords") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_SEARCH_BY_DRQS_GROUP,
        "searchByDrqsGroup",
        sizeof("searchByDrqsGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_IS_DELETED,
        "isDeleted",
        sizeof("isDeleted") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_BREG_VALUES,
        "getBregValues",
        sizeof("getBregValues") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_REGISTRY,
        "getRegistry",
        sizeof("getRegistry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_ENTRY_VALUE,
        "getEntryValue",
        sizeof("getEntryValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_SUBSCRIBERS,
        "getSubscribers",
        sizeof("getSubscribers") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_VERSION_HISTORY,
        "getVersionHistory",
        sizeof("getVersionHistory") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_UPDATE_REGISTRY,
        "updateRegistry",
        sizeof("updateRegistry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_DELETE_NODE,
        "deleteNode",
        sizeof("deleteNode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_MOVE_REGISTRY,
        "moveRegistry",
        sizeof("moveRegistry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_UPDATE_CONTACT,
        "updateContact",
        sizeof("updateContact") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_PRIVILEGE_LIST,
        "getPrivilegeList",
        sizeof("getPrivilegeList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_UPDATE_SUBSCRIBERS,
        "updateSubscribers",
        sizeof("updateSubscribers") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_UPDATE_PRIVILEGES,
        "updatePrivileges",
        sizeof("updatePrivileges") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_OUT_GROUP,
        "getOutGroup",
        sizeof("getOutGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_DEPT_CHAIN,
        "getDeptChain",
        sizeof("getDeptChain") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_DRQS_GROUP,
        "getDrqsGroup",
        sizeof("getDrqsGroup") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_UPDATE_DEV_VALUE,
        "updateDevValue",
        sizeof("updateDevValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_MACHINE_GROUP_NAME,
        "getMachineGroupName",
        sizeof("getMachineGroupName") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_VALIDATE_OVERRIDE,
        "validateOverride",
        sizeof("validateOverride") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GENERATE_CODE,
        "generateCode",
        sizeof("generateCode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_RELEASE_CODE,
        "releaseCode",
        sizeof("releaseCode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_TODO_LIST,
        "getTodoList",
        sizeof("getTodoList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_GET_RELATED_TICKET,
        "getRelatedTicket",
        sizeof("getRelatedTicket") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GET_NODE_TYPE,
        "getNodeType",
        sizeof("getNodeType") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_CHANGE_BREG,
        "changeBreg",
        sizeof("changeBreg") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_VALIDATE_PRQS_APPROVER,
        "validatePrqsApprover",
        sizeof("validatePrqsApprover") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_GENERATE_RELEASE_CODE,
        "generateReleaseCode",
        sizeof("generateReleaseCode") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_MARK_FOR_DELETION,
        "markForDeletion",
        sizeof("markForDeletion") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *Request::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 41; ++i) {
        const bdeat_SelectionInfo& selectionInfo =
                    Request::SELECTION_INFO_ARRAY[i];

        if (nameLength == selectionInfo.d_nameLength
        &&  0 == bsl::memcmp(selectionInfo.d_name_p, name, nameLength))
        {
            return &selectionInfo;
        }
    }

    return 0;
}

const bdeat_SelectionInfo *Request::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_GET_TREE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TREE];
      case SELECTION_ID_GET_EXPANDED_TREE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_EXPANDED_TREE];
      case SELECTION_ID_GET_DEFAULT_TREE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_TREE];
      case SELECTION_ID_GET_CHILDREN:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_CHILDREN];
      case SELECTION_ID_GET_DEFAULT_NODE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_NODE];
      case SELECTION_ID_GET_NODE_DETAILS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_DETAILS];
      case SELECTION_ID_SET_DEFAULT_NODE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SET_DEFAULT_NODE];
      case SELECTION_ID_SEARCH_BY_NAME:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_NAME];
      case SELECTION_ID_SEARCH_BY_ID:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ID];
      case SELECTION_ID_SEARCH_BY_ACCESSOR:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ACCESSOR];
      case SELECTION_ID_SEARCH_BY_CONTACTS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_CONTACTS];
      case SELECTION_ID_SEARCH_BY_KEYWORDS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_KEYWORDS];
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_DRQS_GROUP];
      case SELECTION_ID_IS_DELETED:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_IS_DELETED];
      case SELECTION_ID_GET_BREG_VALUES:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_BREG_VALUES];
      case SELECTION_ID_GET_REGISTRY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_REGISTRY];
      case SELECTION_ID_GET_ENTRY_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_ENTRY_VALUE];
      case SELECTION_ID_GET_SUBSCRIBERS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_SUBSCRIBERS];
      case SELECTION_ID_GET_VERSION_HISTORY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_VERSION_HISTORY];
      case SELECTION_ID_UPDATE_REGISTRY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_REGISTRY];
      case SELECTION_ID_DELETE_NODE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_DELETE_NODE];
      case SELECTION_ID_MOVE_REGISTRY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_MOVE_REGISTRY];
      case SELECTION_ID_UPDATE_CONTACT:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_CONTACT];
      case SELECTION_ID_GET_PRIVILEGE_LIST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_PRIVILEGE_LIST];
      case SELECTION_ID_UPDATE_SUBSCRIBERS:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_SUBSCRIBERS];
      case SELECTION_ID_UPDATE_PRIVILEGES:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_PRIVILEGES];
      case SELECTION_ID_GET_OUT_GROUP:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_OUT_GROUP];
      case SELECTION_ID_GET_DEPT_CHAIN:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEPT_CHAIN];
      case SELECTION_ID_GET_DRQS_GROUP:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DRQS_GROUP];
      case SELECTION_ID_UPDATE_DEV_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_DEV_VALUE];
      case SELECTION_ID_GET_MACHINE_GROUP_NAME:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_MACHINE_GROUP_NAME];
      case SELECTION_ID_VALIDATE_OVERRIDE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_OVERRIDE];
      case SELECTION_ID_GENERATE_CODE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_CODE];
      case SELECTION_ID_RELEASE_CODE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_RELEASE_CODE];
      case SELECTION_ID_GET_TODO_LIST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TODO_LIST];
      case SELECTION_ID_GET_RELATED_TICKET:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_RELATED_TICKET];
      case SELECTION_ID_GET_NODE_TYPE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_TYPE];
      case SELECTION_ID_CHANGE_BREG:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_CHANGE_BREG];
      case SELECTION_ID_VALIDATE_PRQS_APPROVER:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_PRQS_APPROVER];
      case SELECTION_ID_GENERATE_RELEASE_CODE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_RELEASE_CODE];
      case SELECTION_ID_MARK_FOR_DELETION:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_MARK_FOR_DELETION];
      default:
        return 0;
    }
}

// CREATORS

Request::Request(
    const Request& original,
    bslma::Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_GET_TREE: {
        new (d_getTree.buffer())
            int(original.d_getTree.object());
      } break;
      case SELECTION_ID_GET_EXPANDED_TREE: {
        new (d_getExpandedTree.buffer())
            int(original.d_getExpandedTree.object());
      } break;
      case SELECTION_ID_GET_DEFAULT_TREE: {
        new (d_getDefaultTree.buffer())
            Void(original.d_getDefaultTree.object());
      } break;
      case SELECTION_ID_GET_CHILDREN: {
        new (d_getChildren.buffer())
            int(original.d_getChildren.object());
      } break;
      case SELECTION_ID_GET_DEFAULT_NODE: {
        new (d_getDefaultNode.buffer())
            Void(original.d_getDefaultNode.object());
      } break;
      case SELECTION_ID_GET_NODE_DETAILS: {
        new (d_getNodeDetails.buffer())
            int(original.d_getNodeDetails.object());
      } break;
      case SELECTION_ID_SET_DEFAULT_NODE: {
        new (d_setDefaultNode.buffer())
            int(original.d_setDefaultNode.object());
      } break;
      case SELECTION_ID_SEARCH_BY_NAME: {
        new (d_searchByName.buffer())
            bsl::string(
                original.d_searchByName.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SEARCH_BY_ID: {
        new (d_searchById.buffer())
            int(original.d_searchById.object());
      } break;
      case SELECTION_ID_SEARCH_BY_ACCESSOR: {
        new (d_searchByAccessor.buffer())
            bsl::string(
                original.d_searchByAccessor.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SEARCH_BY_CONTACTS: {
        new (d_searchByContacts.buffer())
            SearchByContacts(original.d_searchByContacts.object());
      } break;
      case SELECTION_ID_SEARCH_BY_KEYWORDS: {
        new (d_searchByKeywords.buffer())
            SearchByKeywords(
                original.d_searchByKeywords.object(), d_allocator_p);
      } break;
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        new (d_searchByDrqsGroup.buffer())
            int(original.d_searchByDrqsGroup.object());
      } break;
      case SELECTION_ID_IS_DELETED: {
        new (d_isDeleted.buffer())
            int(original.d_isDeleted.object());
      } break;
      case SELECTION_ID_GET_BREG_VALUES: {
        new (d_getBregValues.buffer())
            GetBregValuesRequest(
                original.d_getBregValues.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GET_REGISTRY: {
        new (d_getRegistry.buffer())
            int(original.d_getRegistry.object());
      } break;
      case SELECTION_ID_GET_ENTRY_VALUE: {
        new (d_getEntryValue.buffer())
            ValueRequest(original.d_getEntryValue.object());
      } break;
      case SELECTION_ID_GET_SUBSCRIBERS: {
        new (d_getSubscribers.buffer())
            int(original.d_getSubscribers.object());
      } break;
      case SELECTION_ID_GET_VERSION_HISTORY: {
        new (d_getVersionHistory.buffer())
            int(original.d_getVersionHistory.object());
      } break;
      case SELECTION_ID_UPDATE_REGISTRY: {
        new (d_updateRegistry.buffer())
            RegistryInfo(
                original.d_updateRegistry.object(), d_allocator_p);
      } break;
      case SELECTION_ID_DELETE_NODE: {
        new (d_deleteNode.buffer())
            int(original.d_deleteNode.object());
      } break;
      case SELECTION_ID_MOVE_REGISTRY: {
        new (d_moveRegistry.buffer())
            MoveRequest(original.d_moveRegistry.object());
      } break;
      case SELECTION_ID_UPDATE_CONTACT: {
        new (d_updateContact.buffer())
            UpdateContactRequest(
                original.d_updateContact.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GET_PRIVILEGE_LIST: {
        new (d_getPrivilegeList.buffer())
            int(original.d_getPrivilegeList.object());
      } break;
      case SELECTION_ID_UPDATE_SUBSCRIBERS: {
        new (d_updateSubscribers.buffer())
            EntrySubscribers(
                original.d_updateSubscribers.object(), d_allocator_p);
      } break;
      case SELECTION_ID_UPDATE_PRIVILEGES: {
        new (d_updatePrivileges.buffer())
            PrivilegeList(
                original.d_updatePrivileges.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GET_OUT_GROUP: {
        new (d_getOutGroup.buffer())
            int(original.d_getOutGroup.object());
      } break;
      case SELECTION_ID_GET_DEPT_CHAIN: {
        new (d_getDeptChain.buffer())
            int(original.d_getDeptChain.object());
      } break;
      case SELECTION_ID_GET_DRQS_GROUP: {
        new (d_getDrqsGroup.buffer())
            int(original.d_getDrqsGroup.object());
      } break;
      case SELECTION_ID_UPDATE_DEV_VALUE: {
        new (d_updateDevValue.buffer())
            EntryValue(
                original.d_updateDevValue.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        new (d_getMachineGroupName.buffer())
            int(original.d_getMachineGroupName.object());
      } break;
      case SELECTION_ID_VALIDATE_OVERRIDE: {
        new (d_validateOverride.buffer())
            OverrideInfo(
                original.d_validateOverride.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GENERATE_CODE: {
        new (d_generateCode.buffer())
            GenerateCodeRequest(
                original.d_generateCode.object(), d_allocator_p);
      } break;
      case SELECTION_ID_RELEASE_CODE: {
        new (d_releaseCode.buffer())
            BregChangeRequest(
                original.d_releaseCode.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GET_TODO_LIST: {
        new (d_getTodoList.buffer())
            int(original.d_getTodoList.object());
      } break;
      case SELECTION_ID_GET_RELATED_TICKET: {
        new (d_getRelatedTicket.buffer())
            RelatedTicketRequest(
                original.d_getRelatedTicket.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GET_NODE_TYPE: {
        new (d_getNodeType.buffer())
            int(original.d_getNodeType.object());
      } break;
      case SELECTION_ID_CHANGE_BREG: {
        new (d_changeBreg.buffer())
            BregChangeRequest(
                original.d_changeBreg.object(), d_allocator_p);
      } break;
      case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        new (d_validatePrqsApprover.buffer())
            BregChangeRequest(
                original.d_validatePrqsApprover.object(), d_allocator_p);
      } break;
      case SELECTION_ID_GENERATE_RELEASE_CODE: {
        new (d_generateReleaseCode.buffer())
            BregChangeRequest(
                original.d_generateReleaseCode.object(), d_allocator_p);
      } break;
      case SELECTION_ID_MARK_FOR_DELETION: {
        new (d_markForDeletion.buffer())
            MarkForDeletionRequest(original.d_markForDeletion.object());
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

// MANIPULATORS

Request&
Request::operator=(const Request& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_GET_TREE: {
            makeGetTree(rhs.d_getTree.object());
          } break;
          case SELECTION_ID_GET_EXPANDED_TREE: {
            makeGetExpandedTree(rhs.d_getExpandedTree.object());
          } break;
          case SELECTION_ID_GET_DEFAULT_TREE: {
            makeGetDefaultTree(rhs.d_getDefaultTree.object());
          } break;
          case SELECTION_ID_GET_CHILDREN: {
            makeGetChildren(rhs.d_getChildren.object());
          } break;
          case SELECTION_ID_GET_DEFAULT_NODE: {
            makeGetDefaultNode(rhs.d_getDefaultNode.object());
          } break;
          case SELECTION_ID_GET_NODE_DETAILS: {
            makeGetNodeDetails(rhs.d_getNodeDetails.object());
          } break;
          case SELECTION_ID_SET_DEFAULT_NODE: {
            makeSetDefaultNode(rhs.d_setDefaultNode.object());
          } break;
          case SELECTION_ID_SEARCH_BY_NAME: {
            makeSearchByName(rhs.d_searchByName.object());
          } break;
          case SELECTION_ID_SEARCH_BY_ID: {
            makeSearchById(rhs.d_searchById.object());
          } break;
          case SELECTION_ID_SEARCH_BY_ACCESSOR: {
            makeSearchByAccessor(rhs.d_searchByAccessor.object());
          } break;
          case SELECTION_ID_SEARCH_BY_CONTACTS: {
            makeSearchByContacts(rhs.d_searchByContacts.object());
          } break;
          case SELECTION_ID_SEARCH_BY_KEYWORDS: {
            makeSearchByKeywords(rhs.d_searchByKeywords.object());
          } break;
          case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
            makeSearchByDrqsGroup(rhs.d_searchByDrqsGroup.object());
          } break;
          case SELECTION_ID_IS_DELETED: {
            makeIsDeleted(rhs.d_isDeleted.object());
          } break;
          case SELECTION_ID_GET_BREG_VALUES: {
            makeGetBregValues(rhs.d_getBregValues.object());
          } break;
          case SELECTION_ID_GET_REGISTRY: {
            makeGetRegistry(rhs.d_getRegistry.object());
          } break;
          case SELECTION_ID_GET_ENTRY_VALUE: {
            makeGetEntryValue(rhs.d_getEntryValue.object());
          } break;
          case SELECTION_ID_GET_SUBSCRIBERS: {
            makeGetSubscribers(rhs.d_getSubscribers.object());
          } break;
          case SELECTION_ID_GET_VERSION_HISTORY: {
            makeGetVersionHistory(rhs.d_getVersionHistory.object());
          } break;
          case SELECTION_ID_UPDATE_REGISTRY: {
            makeUpdateRegistry(rhs.d_updateRegistry.object());
          } break;
          case SELECTION_ID_DELETE_NODE: {
            makeDeleteNode(rhs.d_deleteNode.object());
          } break;
          case SELECTION_ID_MOVE_REGISTRY: {
            makeMoveRegistry(rhs.d_moveRegistry.object());
          } break;
          case SELECTION_ID_UPDATE_CONTACT: {
            makeUpdateContact(rhs.d_updateContact.object());
          } break;
          case SELECTION_ID_GET_PRIVILEGE_LIST: {
            makeGetPrivilegeList(rhs.d_getPrivilegeList.object());
          } break;
          case SELECTION_ID_UPDATE_SUBSCRIBERS: {
            makeUpdateSubscribers(rhs.d_updateSubscribers.object());
          } break;
          case SELECTION_ID_UPDATE_PRIVILEGES: {
            makeUpdatePrivileges(rhs.d_updatePrivileges.object());
          } break;
          case SELECTION_ID_GET_OUT_GROUP: {
            makeGetOutGroup(rhs.d_getOutGroup.object());
          } break;
          case SELECTION_ID_GET_DEPT_CHAIN: {
            makeGetDeptChain(rhs.d_getDeptChain.object());
          } break;
          case SELECTION_ID_GET_DRQS_GROUP: {
            makeGetDrqsGroup(rhs.d_getDrqsGroup.object());
          } break;
          case SELECTION_ID_UPDATE_DEV_VALUE: {
            makeUpdateDevValue(rhs.d_updateDevValue.object());
          } break;
          case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
            makeGetMachineGroupName(rhs.d_getMachineGroupName.object());
          } break;
          case SELECTION_ID_VALIDATE_OVERRIDE: {
            makeValidateOverride(rhs.d_validateOverride.object());
          } break;
          case SELECTION_ID_GENERATE_CODE: {
            makeGenerateCode(rhs.d_generateCode.object());
          } break;
          case SELECTION_ID_RELEASE_CODE: {
            makeReleaseCode(rhs.d_releaseCode.object());
          } break;
          case SELECTION_ID_GET_TODO_LIST: {
            makeGetTodoList(rhs.d_getTodoList.object());
          } break;
          case SELECTION_ID_GET_RELATED_TICKET: {
            makeGetRelatedTicket(rhs.d_getRelatedTicket.object());
          } break;
          case SELECTION_ID_GET_NODE_TYPE: {
            makeGetNodeType(rhs.d_getNodeType.object());
          } break;
          case SELECTION_ID_CHANGE_BREG: {
            makeChangeBreg(rhs.d_changeBreg.object());
          } break;
          case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
            makeValidatePrqsApprover(rhs.d_validatePrqsApprover.object());
          } break;
          case SELECTION_ID_GENERATE_RELEASE_CODE: {
            makeGenerateReleaseCode(rhs.d_generateReleaseCode.object());
          } break;
          case SELECTION_ID_MARK_FOR_DELETION: {
            makeMarkForDeletion(rhs.d_markForDeletion.object());
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }

    return *this;
}

int Request::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc = 0;

    int selectorId = aggregate.selectorId();
    switch (selectorId) {
      case SELECTION_ID_GET_TREE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetTree(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_EXPANDED_TREE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetExpandedTree(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_DEFAULT_TREE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetDefaultTree(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_CHILDREN: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetChildren(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_DEFAULT_NODE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetDefaultNode(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_NODE_DETAILS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetNodeDetails(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SET_DEFAULT_NODE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSetDefaultNode(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SEARCH_BY_NAME: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSearchByName(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SEARCH_BY_ID: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSearchById(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SEARCH_BY_ACCESSOR: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSearchByAccessor(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SEARCH_BY_CONTACTS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSearchByContacts(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SEARCH_BY_KEYWORDS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSearchByKeywords(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        rc = bcem_AggregateUtil::fromAggregate(&makeSearchByDrqsGroup(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_IS_DELETED: {
        rc = bcem_AggregateUtil::fromAggregate(&makeIsDeleted(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_BREG_VALUES: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetBregValues(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_REGISTRY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetRegistry(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_ENTRY_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetEntryValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_SUBSCRIBERS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetSubscribers(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_VERSION_HISTORY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetVersionHistory(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_UPDATE_REGISTRY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeUpdateRegistry(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_DELETE_NODE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeDeleteNode(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_MOVE_REGISTRY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeMoveRegistry(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_UPDATE_CONTACT: {
        rc = bcem_AggregateUtil::fromAggregate(&makeUpdateContact(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_PRIVILEGE_LIST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetPrivilegeList(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_UPDATE_SUBSCRIBERS: {
        rc = bcem_AggregateUtil::fromAggregate(&makeUpdateSubscribers(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_UPDATE_PRIVILEGES: {
        rc = bcem_AggregateUtil::fromAggregate(&makeUpdatePrivileges(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_OUT_GROUP: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetOutGroup(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_DEPT_CHAIN: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetDeptChain(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_DRQS_GROUP: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetDrqsGroup(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_UPDATE_DEV_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeUpdateDevValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetMachineGroupName(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_VALIDATE_OVERRIDE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeValidateOverride(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GENERATE_CODE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGenerateCode(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_RELEASE_CODE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeReleaseCode(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_TODO_LIST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetTodoList(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_RELATED_TICKET: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetRelatedTicket(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GET_NODE_TYPE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGetNodeType(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_CHANGE_BREG: {
        rc = bcem_AggregateUtil::fromAggregate(&makeChangeBreg(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        rc = bcem_AggregateUtil::fromAggregate(&makeValidatePrqsApprover(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_GENERATE_RELEASE_CODE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeGenerateReleaseCode(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_MARK_FOR_DELETION: {
        rc = bcem_AggregateUtil::fromAggregate(&makeMarkForDeletion(),
                                               aggregate,
                                               selectorId);
      } break;
      default: {
        rc = bcem_Aggregate::BCEM_ERR_BAD_CONVERSION;
      }
    }

    return rc;
}

void Request::reset()
{
    switch (d_selectionId) {
      case SELECTION_ID_GET_TREE: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_EXPANDED_TREE: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_DEFAULT_TREE: {
        d_getDefaultTree.object().~Void();
      } break;
      case SELECTION_ID_GET_CHILDREN: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_DEFAULT_NODE: {
        d_getDefaultNode.object().~Void();
      } break;
      case SELECTION_ID_GET_NODE_DETAILS: {
        // no destruction required
      } break;
      case SELECTION_ID_SET_DEFAULT_NODE: {
        // no destruction required
      } break;
      case SELECTION_ID_SEARCH_BY_NAME: {
        typedef bsl::string Type;
        d_searchByName.object().~Type();
      } break;
      case SELECTION_ID_SEARCH_BY_ID: {
        // no destruction required
      } break;
      case SELECTION_ID_SEARCH_BY_ACCESSOR: {
        typedef bsl::string Type;
        d_searchByAccessor.object().~Type();
      } break;
      case SELECTION_ID_SEARCH_BY_CONTACTS: {
        d_searchByContacts.object().~SearchByContacts();
      } break;
      case SELECTION_ID_SEARCH_BY_KEYWORDS: {
        d_searchByKeywords.object().~SearchByKeywords();
      } break;
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        // no destruction required
      } break;
      case SELECTION_ID_IS_DELETED: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_BREG_VALUES: {
        d_getBregValues.object().~GetBregValuesRequest();
      } break;
      case SELECTION_ID_GET_REGISTRY: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_ENTRY_VALUE: {
        d_getEntryValue.object().~ValueRequest();
      } break;
      case SELECTION_ID_GET_SUBSCRIBERS: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_VERSION_HISTORY: {
        // no destruction required
      } break;
      case SELECTION_ID_UPDATE_REGISTRY: {
        d_updateRegistry.object().~RegistryInfo();
      } break;
      case SELECTION_ID_DELETE_NODE: {
        // no destruction required
      } break;
      case SELECTION_ID_MOVE_REGISTRY: {
        d_moveRegistry.object().~MoveRequest();
      } break;
      case SELECTION_ID_UPDATE_CONTACT: {
        d_updateContact.object().~UpdateContactRequest();
      } break;
      case SELECTION_ID_GET_PRIVILEGE_LIST: {
        // no destruction required
      } break;
      case SELECTION_ID_UPDATE_SUBSCRIBERS: {
        d_updateSubscribers.object().~EntrySubscribers();
      } break;
      case SELECTION_ID_UPDATE_PRIVILEGES: {
        d_updatePrivileges.object().~PrivilegeList();
      } break;
      case SELECTION_ID_GET_OUT_GROUP: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_DEPT_CHAIN: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_DRQS_GROUP: {
        // no destruction required
      } break;
      case SELECTION_ID_UPDATE_DEV_VALUE: {
        d_updateDevValue.object().~EntryValue();
      } break;
      case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        // no destruction required
      } break;
      case SELECTION_ID_VALIDATE_OVERRIDE: {
        d_validateOverride.object().~OverrideInfo();
      } break;
      case SELECTION_ID_GENERATE_CODE: {
        d_generateCode.object().~GenerateCodeRequest();
      } break;
      case SELECTION_ID_RELEASE_CODE: {
        d_releaseCode.object().~BregChangeRequest();
      } break;
      case SELECTION_ID_GET_TODO_LIST: {
        // no destruction required
      } break;
      case SELECTION_ID_GET_RELATED_TICKET: {
        d_getRelatedTicket.object().~RelatedTicketRequest();
      } break;
      case SELECTION_ID_GET_NODE_TYPE: {
        // no destruction required
      } break;
      case SELECTION_ID_CHANGE_BREG: {
        d_changeBreg.object().~BregChangeRequest();
      } break;
      case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        d_validatePrqsApprover.object().~BregChangeRequest();
      } break;
      case SELECTION_ID_GENERATE_RELEASE_CODE: {
        d_generateReleaseCode.object().~BregChangeRequest();
      } break;
      case SELECTION_ID_MARK_FOR_DELETION: {
        d_markForDeletion.object().~MarkForDeletionRequest();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int Request::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_GET_TREE: {
        makeGetTree();
      } break;
      case SELECTION_ID_GET_EXPANDED_TREE: {
        makeGetExpandedTree();
      } break;
      case SELECTION_ID_GET_DEFAULT_TREE: {
        makeGetDefaultTree();
      } break;
      case SELECTION_ID_GET_CHILDREN: {
        makeGetChildren();
      } break;
      case SELECTION_ID_GET_DEFAULT_NODE: {
        makeGetDefaultNode();
      } break;
      case SELECTION_ID_GET_NODE_DETAILS: {
        makeGetNodeDetails();
      } break;
      case SELECTION_ID_SET_DEFAULT_NODE: {
        makeSetDefaultNode();
      } break;
      case SELECTION_ID_SEARCH_BY_NAME: {
        makeSearchByName();
      } break;
      case SELECTION_ID_SEARCH_BY_ID: {
        makeSearchById();
      } break;
      case SELECTION_ID_SEARCH_BY_ACCESSOR: {
        makeSearchByAccessor();
      } break;
      case SELECTION_ID_SEARCH_BY_CONTACTS: {
        makeSearchByContacts();
      } break;
      case SELECTION_ID_SEARCH_BY_KEYWORDS: {
        makeSearchByKeywords();
      } break;
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        makeSearchByDrqsGroup();
      } break;
      case SELECTION_ID_IS_DELETED: {
        makeIsDeleted();
      } break;
      case SELECTION_ID_GET_BREG_VALUES: {
        makeGetBregValues();
      } break;
      case SELECTION_ID_GET_REGISTRY: {
        makeGetRegistry();
      } break;
      case SELECTION_ID_GET_ENTRY_VALUE: {
        makeGetEntryValue();
      } break;
      case SELECTION_ID_GET_SUBSCRIBERS: {
        makeGetSubscribers();
      } break;
      case SELECTION_ID_GET_VERSION_HISTORY: {
        makeGetVersionHistory();
      } break;
      case SELECTION_ID_UPDATE_REGISTRY: {
        makeUpdateRegistry();
      } break;
      case SELECTION_ID_DELETE_NODE: {
        makeDeleteNode();
      } break;
      case SELECTION_ID_MOVE_REGISTRY: {
        makeMoveRegistry();
      } break;
      case SELECTION_ID_UPDATE_CONTACT: {
        makeUpdateContact();
      } break;
      case SELECTION_ID_GET_PRIVILEGE_LIST: {
        makeGetPrivilegeList();
      } break;
      case SELECTION_ID_UPDATE_SUBSCRIBERS: {
        makeUpdateSubscribers();
      } break;
      case SELECTION_ID_UPDATE_PRIVILEGES: {
        makeUpdatePrivileges();
      } break;
      case SELECTION_ID_GET_OUT_GROUP: {
        makeGetOutGroup();
      } break;
      case SELECTION_ID_GET_DEPT_CHAIN: {
        makeGetDeptChain();
      } break;
      case SELECTION_ID_GET_DRQS_GROUP: {
        makeGetDrqsGroup();
      } break;
      case SELECTION_ID_UPDATE_DEV_VALUE: {
        makeUpdateDevValue();
      } break;
      case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        makeGetMachineGroupName();
      } break;
      case SELECTION_ID_VALIDATE_OVERRIDE: {
        makeValidateOverride();
      } break;
      case SELECTION_ID_GENERATE_CODE: {
        makeGenerateCode();
      } break;
      case SELECTION_ID_RELEASE_CODE: {
        makeReleaseCode();
      } break;
      case SELECTION_ID_GET_TODO_LIST: {
        makeGetTodoList();
      } break;
      case SELECTION_ID_GET_RELATED_TICKET: {
        makeGetRelatedTicket();
      } break;
      case SELECTION_ID_GET_NODE_TYPE: {
        makeGetNodeType();
      } break;
      case SELECTION_ID_CHANGE_BREG: {
        makeChangeBreg();
      } break;
      case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        makeValidatePrqsApprover();
      } break;
      case SELECTION_ID_GENERATE_RELEASE_CODE: {
        makeGenerateReleaseCode();
      } break;
      case SELECTION_ID_MARK_FOR_DELETION: {
        makeMarkForDeletion();
      } break;
      case SELECTION_ID_UNDEFINED: {
        reset();
      } break;
      default:
        return -1;
    }
    return 0;
}

int Request::makeSelection(const char *name, int nameLength)
{
    const bdeat_SelectionInfo *selectionInfo =
           lookupSelectionInfo(name, nameLength);
    if (0 == selectionInfo) {
       return -1;
    }

    return makeSelection(selectionInfo->d_id);
}

int& Request::makeGetTree()
{
    if (SELECTION_ID_GET_TREE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getTree.object());
    }
    else {
        reset();
        new (d_getTree.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_TREE;
    }

    return d_getTree.object();
}

int& Request::makeGetTree(int value)
{
    if (SELECTION_ID_GET_TREE == d_selectionId) {
        d_getTree.object() = value;
    }
    else {
        reset();
        new (d_getTree.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_TREE;
    }

    return d_getTree.object();
}

int& Request::makeGetExpandedTree()
{
    if (SELECTION_ID_GET_EXPANDED_TREE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getExpandedTree.object());
    }
    else {
        reset();
        new (d_getExpandedTree.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_EXPANDED_TREE;
    }

    return d_getExpandedTree.object();
}

int& Request::makeGetExpandedTree(int value)
{
    if (SELECTION_ID_GET_EXPANDED_TREE == d_selectionId) {
        d_getExpandedTree.object() = value;
    }
    else {
        reset();
        new (d_getExpandedTree.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_EXPANDED_TREE;
    }

    return d_getExpandedTree.object();
}

Void& Request::makeGetDefaultTree()
{
    if (SELECTION_ID_GET_DEFAULT_TREE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getDefaultTree.object());
    }
    else {
        reset();
        new (d_getDefaultTree.buffer())
            Void();
    
        d_selectionId = SELECTION_ID_GET_DEFAULT_TREE;
    }

    return d_getDefaultTree.object();
}

Void& Request::makeGetDefaultTree(const Void& value)
{
    if (SELECTION_ID_GET_DEFAULT_TREE == d_selectionId) {
        d_getDefaultTree.object() = value;
    }
    else {
        reset();
        new (d_getDefaultTree.buffer())
                Void(value);
        d_selectionId = SELECTION_ID_GET_DEFAULT_TREE;
    }

    return d_getDefaultTree.object();
}

int& Request::makeGetChildren()
{
    if (SELECTION_ID_GET_CHILDREN == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getChildren.object());
    }
    else {
        reset();
        new (d_getChildren.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_CHILDREN;
    }

    return d_getChildren.object();
}

int& Request::makeGetChildren(int value)
{
    if (SELECTION_ID_GET_CHILDREN == d_selectionId) {
        d_getChildren.object() = value;
    }
    else {
        reset();
        new (d_getChildren.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_CHILDREN;
    }

    return d_getChildren.object();
}

Void& Request::makeGetDefaultNode()
{
    if (SELECTION_ID_GET_DEFAULT_NODE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getDefaultNode.object());
    }
    else {
        reset();
        new (d_getDefaultNode.buffer())
            Void();
    
        d_selectionId = SELECTION_ID_GET_DEFAULT_NODE;
    }

    return d_getDefaultNode.object();
}

Void& Request::makeGetDefaultNode(const Void& value)
{
    if (SELECTION_ID_GET_DEFAULT_NODE == d_selectionId) {
        d_getDefaultNode.object() = value;
    }
    else {
        reset();
        new (d_getDefaultNode.buffer())
                Void(value);
        d_selectionId = SELECTION_ID_GET_DEFAULT_NODE;
    }

    return d_getDefaultNode.object();
}

int& Request::makeGetNodeDetails()
{
    if (SELECTION_ID_GET_NODE_DETAILS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getNodeDetails.object());
    }
    else {
        reset();
        new (d_getNodeDetails.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_NODE_DETAILS;
    }

    return d_getNodeDetails.object();
}

int& Request::makeGetNodeDetails(int value)
{
    if (SELECTION_ID_GET_NODE_DETAILS == d_selectionId) {
        d_getNodeDetails.object() = value;
    }
    else {
        reset();
        new (d_getNodeDetails.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_NODE_DETAILS;
    }

    return d_getNodeDetails.object();
}

int& Request::makeSetDefaultNode()
{
    if (SELECTION_ID_SET_DEFAULT_NODE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_setDefaultNode.object());
    }
    else {
        reset();
        new (d_setDefaultNode.buffer())
            int();
    
        d_selectionId = SELECTION_ID_SET_DEFAULT_NODE;
    }

    return d_setDefaultNode.object();
}

int& Request::makeSetDefaultNode(int value)
{
    if (SELECTION_ID_SET_DEFAULT_NODE == d_selectionId) {
        d_setDefaultNode.object() = value;
    }
    else {
        reset();
        new (d_setDefaultNode.buffer())
                int(value);
        d_selectionId = SELECTION_ID_SET_DEFAULT_NODE;
    }

    return d_setDefaultNode.object();
}

bsl::string& Request::makeSearchByName()
{
    if (SELECTION_ID_SEARCH_BY_NAME == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_searchByName.object());
    }
    else {
        reset();
        new (d_searchByName.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_SEARCH_BY_NAME;
    }

    return d_searchByName.object();
}

bsl::string& Request::makeSearchByName(const bsl::string& value)
{
    if (SELECTION_ID_SEARCH_BY_NAME == d_selectionId) {
        d_searchByName.object() = value;
    }
    else {
        reset();
        new (d_searchByName.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SEARCH_BY_NAME;
    }

    return d_searchByName.object();
}

int& Request::makeSearchById()
{
    if (SELECTION_ID_SEARCH_BY_ID == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_searchById.object());
    }
    else {
        reset();
        new (d_searchById.buffer())
            int();
    
        d_selectionId = SELECTION_ID_SEARCH_BY_ID;
    }

    return d_searchById.object();
}

int& Request::makeSearchById(int value)
{
    if (SELECTION_ID_SEARCH_BY_ID == d_selectionId) {
        d_searchById.object() = value;
    }
    else {
        reset();
        new (d_searchById.buffer())
                int(value);
        d_selectionId = SELECTION_ID_SEARCH_BY_ID;
    }

    return d_searchById.object();
}

bsl::string& Request::makeSearchByAccessor()
{
    if (SELECTION_ID_SEARCH_BY_ACCESSOR == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_searchByAccessor.object());
    }
    else {
        reset();
        new (d_searchByAccessor.buffer())
                bsl::string(d_allocator_p);

        d_selectionId = SELECTION_ID_SEARCH_BY_ACCESSOR;
    }

    return d_searchByAccessor.object();
}

bsl::string& Request::makeSearchByAccessor(const bsl::string& value)
{
    if (SELECTION_ID_SEARCH_BY_ACCESSOR == d_selectionId) {
        d_searchByAccessor.object() = value;
    }
    else {
        reset();
        new (d_searchByAccessor.buffer())
                bsl::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SEARCH_BY_ACCESSOR;
    }

    return d_searchByAccessor.object();
}

SearchByContacts& Request::makeSearchByContacts()
{
    if (SELECTION_ID_SEARCH_BY_CONTACTS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_searchByContacts.object());
    }
    else {
        reset();
        new (d_searchByContacts.buffer())
            SearchByContacts();
    
        d_selectionId = SELECTION_ID_SEARCH_BY_CONTACTS;
    }

    return d_searchByContacts.object();
}

SearchByContacts& Request::makeSearchByContacts(const SearchByContacts& value)
{
    if (SELECTION_ID_SEARCH_BY_CONTACTS == d_selectionId) {
        d_searchByContacts.object() = value;
    }
    else {
        reset();
        new (d_searchByContacts.buffer())
                SearchByContacts(value);
        d_selectionId = SELECTION_ID_SEARCH_BY_CONTACTS;
    }

    return d_searchByContacts.object();
}

SearchByKeywords& Request::makeSearchByKeywords()
{
    if (SELECTION_ID_SEARCH_BY_KEYWORDS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_searchByKeywords.object());
    }
    else {
        reset();
        new (d_searchByKeywords.buffer())
                SearchByKeywords(d_allocator_p);

        d_selectionId = SELECTION_ID_SEARCH_BY_KEYWORDS;
    }

    return d_searchByKeywords.object();
}

SearchByKeywords& Request::makeSearchByKeywords(const SearchByKeywords& value)
{
    if (SELECTION_ID_SEARCH_BY_KEYWORDS == d_selectionId) {
        d_searchByKeywords.object() = value;
    }
    else {
        reset();
        new (d_searchByKeywords.buffer())
                SearchByKeywords(value, d_allocator_p);
        d_selectionId = SELECTION_ID_SEARCH_BY_KEYWORDS;
    }

    return d_searchByKeywords.object();
}

int& Request::makeSearchByDrqsGroup()
{
    if (SELECTION_ID_SEARCH_BY_DRQS_GROUP == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_searchByDrqsGroup.object());
    }
    else {
        reset();
        new (d_searchByDrqsGroup.buffer())
            int();
    
        d_selectionId = SELECTION_ID_SEARCH_BY_DRQS_GROUP;
    }

    return d_searchByDrqsGroup.object();
}

int& Request::makeSearchByDrqsGroup(int value)
{
    if (SELECTION_ID_SEARCH_BY_DRQS_GROUP == d_selectionId) {
        d_searchByDrqsGroup.object() = value;
    }
    else {
        reset();
        new (d_searchByDrqsGroup.buffer())
                int(value);
        d_selectionId = SELECTION_ID_SEARCH_BY_DRQS_GROUP;
    }

    return d_searchByDrqsGroup.object();
}

int& Request::makeIsDeleted()
{
    if (SELECTION_ID_IS_DELETED == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_isDeleted.object());
    }
    else {
        reset();
        new (d_isDeleted.buffer())
            int();
    
        d_selectionId = SELECTION_ID_IS_DELETED;
    }

    return d_isDeleted.object();
}

int& Request::makeIsDeleted(int value)
{
    if (SELECTION_ID_IS_DELETED == d_selectionId) {
        d_isDeleted.object() = value;
    }
    else {
        reset();
        new (d_isDeleted.buffer())
                int(value);
        d_selectionId = SELECTION_ID_IS_DELETED;
    }

    return d_isDeleted.object();
}

GetBregValuesRequest& Request::makeGetBregValues()
{
    if (SELECTION_ID_GET_BREG_VALUES == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getBregValues.object());
    }
    else {
        reset();
        new (d_getBregValues.buffer())
                GetBregValuesRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_GET_BREG_VALUES;
    }

    return d_getBregValues.object();
}

GetBregValuesRequest& Request::makeGetBregValues(const GetBregValuesRequest& value)
{
    if (SELECTION_ID_GET_BREG_VALUES == d_selectionId) {
        d_getBregValues.object() = value;
    }
    else {
        reset();
        new (d_getBregValues.buffer())
                GetBregValuesRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_GET_BREG_VALUES;
    }

    return d_getBregValues.object();
}

int& Request::makeGetRegistry()
{
    if (SELECTION_ID_GET_REGISTRY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getRegistry.object());
    }
    else {
        reset();
        new (d_getRegistry.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_REGISTRY;
    }

    return d_getRegistry.object();
}

int& Request::makeGetRegistry(int value)
{
    if (SELECTION_ID_GET_REGISTRY == d_selectionId) {
        d_getRegistry.object() = value;
    }
    else {
        reset();
        new (d_getRegistry.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_REGISTRY;
    }

    return d_getRegistry.object();
}

ValueRequest& Request::makeGetEntryValue()
{
    if (SELECTION_ID_GET_ENTRY_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getEntryValue.object());
    }
    else {
        reset();
        new (d_getEntryValue.buffer())
            ValueRequest();
    
        d_selectionId = SELECTION_ID_GET_ENTRY_VALUE;
    }

    return d_getEntryValue.object();
}

ValueRequest& Request::makeGetEntryValue(const ValueRequest& value)
{
    if (SELECTION_ID_GET_ENTRY_VALUE == d_selectionId) {
        d_getEntryValue.object() = value;
    }
    else {
        reset();
        new (d_getEntryValue.buffer())
                ValueRequest(value);
        d_selectionId = SELECTION_ID_GET_ENTRY_VALUE;
    }

    return d_getEntryValue.object();
}

int& Request::makeGetSubscribers()
{
    if (SELECTION_ID_GET_SUBSCRIBERS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getSubscribers.object());
    }
    else {
        reset();
        new (d_getSubscribers.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_SUBSCRIBERS;
    }

    return d_getSubscribers.object();
}

int& Request::makeGetSubscribers(int value)
{
    if (SELECTION_ID_GET_SUBSCRIBERS == d_selectionId) {
        d_getSubscribers.object() = value;
    }
    else {
        reset();
        new (d_getSubscribers.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_SUBSCRIBERS;
    }

    return d_getSubscribers.object();
}

int& Request::makeGetVersionHistory()
{
    if (SELECTION_ID_GET_VERSION_HISTORY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getVersionHistory.object());
    }
    else {
        reset();
        new (d_getVersionHistory.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_VERSION_HISTORY;
    }

    return d_getVersionHistory.object();
}

int& Request::makeGetVersionHistory(int value)
{
    if (SELECTION_ID_GET_VERSION_HISTORY == d_selectionId) {
        d_getVersionHistory.object() = value;
    }
    else {
        reset();
        new (d_getVersionHistory.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_VERSION_HISTORY;
    }

    return d_getVersionHistory.object();
}

RegistryInfo& Request::makeUpdateRegistry()
{
    if (SELECTION_ID_UPDATE_REGISTRY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_updateRegistry.object());
    }
    else {
        reset();
        new (d_updateRegistry.buffer())
                RegistryInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_UPDATE_REGISTRY;
    }

    return d_updateRegistry.object();
}

RegistryInfo& Request::makeUpdateRegistry(const RegistryInfo& value)
{
    if (SELECTION_ID_UPDATE_REGISTRY == d_selectionId) {
        d_updateRegistry.object() = value;
    }
    else {
        reset();
        new (d_updateRegistry.buffer())
                RegistryInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_UPDATE_REGISTRY;
    }

    return d_updateRegistry.object();
}

int& Request::makeDeleteNode()
{
    if (SELECTION_ID_DELETE_NODE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_deleteNode.object());
    }
    else {
        reset();
        new (d_deleteNode.buffer())
            int();
    
        d_selectionId = SELECTION_ID_DELETE_NODE;
    }

    return d_deleteNode.object();
}

int& Request::makeDeleteNode(int value)
{
    if (SELECTION_ID_DELETE_NODE == d_selectionId) {
        d_deleteNode.object() = value;
    }
    else {
        reset();
        new (d_deleteNode.buffer())
                int(value);
        d_selectionId = SELECTION_ID_DELETE_NODE;
    }

    return d_deleteNode.object();
}

MoveRequest& Request::makeMoveRegistry()
{
    if (SELECTION_ID_MOVE_REGISTRY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_moveRegistry.object());
    }
    else {
        reset();
        new (d_moveRegistry.buffer())
            MoveRequest();
    
        d_selectionId = SELECTION_ID_MOVE_REGISTRY;
    }

    return d_moveRegistry.object();
}

MoveRequest& Request::makeMoveRegistry(const MoveRequest& value)
{
    if (SELECTION_ID_MOVE_REGISTRY == d_selectionId) {
        d_moveRegistry.object() = value;
    }
    else {
        reset();
        new (d_moveRegistry.buffer())
                MoveRequest(value);
        d_selectionId = SELECTION_ID_MOVE_REGISTRY;
    }

    return d_moveRegistry.object();
}

UpdateContactRequest& Request::makeUpdateContact()
{
    if (SELECTION_ID_UPDATE_CONTACT == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_updateContact.object());
    }
    else {
        reset();
        new (d_updateContact.buffer())
                UpdateContactRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_UPDATE_CONTACT;
    }

    return d_updateContact.object();
}

UpdateContactRequest& Request::makeUpdateContact(const UpdateContactRequest& value)
{
    if (SELECTION_ID_UPDATE_CONTACT == d_selectionId) {
        d_updateContact.object() = value;
    }
    else {
        reset();
        new (d_updateContact.buffer())
                UpdateContactRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_UPDATE_CONTACT;
    }

    return d_updateContact.object();
}

int& Request::makeGetPrivilegeList()
{
    if (SELECTION_ID_GET_PRIVILEGE_LIST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getPrivilegeList.object());
    }
    else {
        reset();
        new (d_getPrivilegeList.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_PRIVILEGE_LIST;
    }

    return d_getPrivilegeList.object();
}

int& Request::makeGetPrivilegeList(int value)
{
    if (SELECTION_ID_GET_PRIVILEGE_LIST == d_selectionId) {
        d_getPrivilegeList.object() = value;
    }
    else {
        reset();
        new (d_getPrivilegeList.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_PRIVILEGE_LIST;
    }

    return d_getPrivilegeList.object();
}

EntrySubscribers& Request::makeUpdateSubscribers()
{
    if (SELECTION_ID_UPDATE_SUBSCRIBERS == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_updateSubscribers.object());
    }
    else {
        reset();
        new (d_updateSubscribers.buffer())
                EntrySubscribers(d_allocator_p);

        d_selectionId = SELECTION_ID_UPDATE_SUBSCRIBERS;
    }

    return d_updateSubscribers.object();
}

EntrySubscribers& Request::makeUpdateSubscribers(const EntrySubscribers& value)
{
    if (SELECTION_ID_UPDATE_SUBSCRIBERS == d_selectionId) {
        d_updateSubscribers.object() = value;
    }
    else {
        reset();
        new (d_updateSubscribers.buffer())
                EntrySubscribers(value, d_allocator_p);
        d_selectionId = SELECTION_ID_UPDATE_SUBSCRIBERS;
    }

    return d_updateSubscribers.object();
}

PrivilegeList& Request::makeUpdatePrivileges()
{
    if (SELECTION_ID_UPDATE_PRIVILEGES == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_updatePrivileges.object());
    }
    else {
        reset();
        new (d_updatePrivileges.buffer())
                PrivilegeList(d_allocator_p);

        d_selectionId = SELECTION_ID_UPDATE_PRIVILEGES;
    }

    return d_updatePrivileges.object();
}

PrivilegeList& Request::makeUpdatePrivileges(const PrivilegeList& value)
{
    if (SELECTION_ID_UPDATE_PRIVILEGES == d_selectionId) {
        d_updatePrivileges.object() = value;
    }
    else {
        reset();
        new (d_updatePrivileges.buffer())
                PrivilegeList(value, d_allocator_p);
        d_selectionId = SELECTION_ID_UPDATE_PRIVILEGES;
    }

    return d_updatePrivileges.object();
}

int& Request::makeGetOutGroup()
{
    if (SELECTION_ID_GET_OUT_GROUP == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getOutGroup.object());
    }
    else {
        reset();
        new (d_getOutGroup.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_OUT_GROUP;
    }

    return d_getOutGroup.object();
}

int& Request::makeGetOutGroup(int value)
{
    if (SELECTION_ID_GET_OUT_GROUP == d_selectionId) {
        d_getOutGroup.object() = value;
    }
    else {
        reset();
        new (d_getOutGroup.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_OUT_GROUP;
    }

    return d_getOutGroup.object();
}

int& Request::makeGetDeptChain()
{
    if (SELECTION_ID_GET_DEPT_CHAIN == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getDeptChain.object());
    }
    else {
        reset();
        new (d_getDeptChain.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_DEPT_CHAIN;
    }

    return d_getDeptChain.object();
}

int& Request::makeGetDeptChain(int value)
{
    if (SELECTION_ID_GET_DEPT_CHAIN == d_selectionId) {
        d_getDeptChain.object() = value;
    }
    else {
        reset();
        new (d_getDeptChain.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_DEPT_CHAIN;
    }

    return d_getDeptChain.object();
}

int& Request::makeGetDrqsGroup()
{
    if (SELECTION_ID_GET_DRQS_GROUP == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getDrqsGroup.object());
    }
    else {
        reset();
        new (d_getDrqsGroup.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_DRQS_GROUP;
    }

    return d_getDrqsGroup.object();
}

int& Request::makeGetDrqsGroup(int value)
{
    if (SELECTION_ID_GET_DRQS_GROUP == d_selectionId) {
        d_getDrqsGroup.object() = value;
    }
    else {
        reset();
        new (d_getDrqsGroup.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_DRQS_GROUP;
    }

    return d_getDrqsGroup.object();
}

EntryValue& Request::makeUpdateDevValue()
{
    if (SELECTION_ID_UPDATE_DEV_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_updateDevValue.object());
    }
    else {
        reset();
        new (d_updateDevValue.buffer())
                EntryValue(d_allocator_p);

        d_selectionId = SELECTION_ID_UPDATE_DEV_VALUE;
    }

    return d_updateDevValue.object();
}

EntryValue& Request::makeUpdateDevValue(const EntryValue& value)
{
    if (SELECTION_ID_UPDATE_DEV_VALUE == d_selectionId) {
        d_updateDevValue.object() = value;
    }
    else {
        reset();
        new (d_updateDevValue.buffer())
                EntryValue(value, d_allocator_p);
        d_selectionId = SELECTION_ID_UPDATE_DEV_VALUE;
    }

    return d_updateDevValue.object();
}

int& Request::makeGetMachineGroupName()
{
    if (SELECTION_ID_GET_MACHINE_GROUP_NAME == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getMachineGroupName.object());
    }
    else {
        reset();
        new (d_getMachineGroupName.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_MACHINE_GROUP_NAME;
    }

    return d_getMachineGroupName.object();
}

int& Request::makeGetMachineGroupName(int value)
{
    if (SELECTION_ID_GET_MACHINE_GROUP_NAME == d_selectionId) {
        d_getMachineGroupName.object() = value;
    }
    else {
        reset();
        new (d_getMachineGroupName.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_MACHINE_GROUP_NAME;
    }

    return d_getMachineGroupName.object();
}

OverrideInfo& Request::makeValidateOverride()
{
    if (SELECTION_ID_VALIDATE_OVERRIDE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_validateOverride.object());
    }
    else {
        reset();
        new (d_validateOverride.buffer())
                OverrideInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_VALIDATE_OVERRIDE;
    }

    return d_validateOverride.object();
}

OverrideInfo& Request::makeValidateOverride(const OverrideInfo& value)
{
    if (SELECTION_ID_VALIDATE_OVERRIDE == d_selectionId) {
        d_validateOverride.object() = value;
    }
    else {
        reset();
        new (d_validateOverride.buffer())
                OverrideInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_VALIDATE_OVERRIDE;
    }

    return d_validateOverride.object();
}

GenerateCodeRequest& Request::makeGenerateCode()
{
    if (SELECTION_ID_GENERATE_CODE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_generateCode.object());
    }
    else {
        reset();
        new (d_generateCode.buffer())
                GenerateCodeRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_GENERATE_CODE;
    }

    return d_generateCode.object();
}

GenerateCodeRequest& Request::makeGenerateCode(const GenerateCodeRequest& value)
{
    if (SELECTION_ID_GENERATE_CODE == d_selectionId) {
        d_generateCode.object() = value;
    }
    else {
        reset();
        new (d_generateCode.buffer())
                GenerateCodeRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_GENERATE_CODE;
    }

    return d_generateCode.object();
}

BregChangeRequest& Request::makeReleaseCode()
{
    if (SELECTION_ID_RELEASE_CODE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_releaseCode.object());
    }
    else {
        reset();
        new (d_releaseCode.buffer())
                BregChangeRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_RELEASE_CODE;
    }

    return d_releaseCode.object();
}

BregChangeRequest& Request::makeReleaseCode(const BregChangeRequest& value)
{
    if (SELECTION_ID_RELEASE_CODE == d_selectionId) {
        d_releaseCode.object() = value;
    }
    else {
        reset();
        new (d_releaseCode.buffer())
                BregChangeRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_RELEASE_CODE;
    }

    return d_releaseCode.object();
}

int& Request::makeGetTodoList()
{
    if (SELECTION_ID_GET_TODO_LIST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getTodoList.object());
    }
    else {
        reset();
        new (d_getTodoList.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_TODO_LIST;
    }

    return d_getTodoList.object();
}

int& Request::makeGetTodoList(int value)
{
    if (SELECTION_ID_GET_TODO_LIST == d_selectionId) {
        d_getTodoList.object() = value;
    }
    else {
        reset();
        new (d_getTodoList.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_TODO_LIST;
    }

    return d_getTodoList.object();
}

RelatedTicketRequest& Request::makeGetRelatedTicket()
{
    if (SELECTION_ID_GET_RELATED_TICKET == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getRelatedTicket.object());
    }
    else {
        reset();
        new (d_getRelatedTicket.buffer())
                RelatedTicketRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_GET_RELATED_TICKET;
    }

    return d_getRelatedTicket.object();
}

RelatedTicketRequest& Request::makeGetRelatedTicket(const RelatedTicketRequest& value)
{
    if (SELECTION_ID_GET_RELATED_TICKET == d_selectionId) {
        d_getRelatedTicket.object() = value;
    }
    else {
        reset();
        new (d_getRelatedTicket.buffer())
                RelatedTicketRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_GET_RELATED_TICKET;
    }

    return d_getRelatedTicket.object();
}

int& Request::makeGetNodeType()
{
    if (SELECTION_ID_GET_NODE_TYPE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_getNodeType.object());
    }
    else {
        reset();
        new (d_getNodeType.buffer())
            int();
    
        d_selectionId = SELECTION_ID_GET_NODE_TYPE;
    }

    return d_getNodeType.object();
}

int& Request::makeGetNodeType(int value)
{
    if (SELECTION_ID_GET_NODE_TYPE == d_selectionId) {
        d_getNodeType.object() = value;
    }
    else {
        reset();
        new (d_getNodeType.buffer())
                int(value);
        d_selectionId = SELECTION_ID_GET_NODE_TYPE;
    }

    return d_getNodeType.object();
}

BregChangeRequest& Request::makeChangeBreg()
{
    if (SELECTION_ID_CHANGE_BREG == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_changeBreg.object());
    }
    else {
        reset();
        new (d_changeBreg.buffer())
                BregChangeRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_CHANGE_BREG;
    }

    return d_changeBreg.object();
}

BregChangeRequest& Request::makeChangeBreg(const BregChangeRequest& value)
{
    if (SELECTION_ID_CHANGE_BREG == d_selectionId) {
        d_changeBreg.object() = value;
    }
    else {
        reset();
        new (d_changeBreg.buffer())
                BregChangeRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_CHANGE_BREG;
    }

    return d_changeBreg.object();
}

BregChangeRequest& Request::makeValidatePrqsApprover()
{
    if (SELECTION_ID_VALIDATE_PRQS_APPROVER == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_validatePrqsApprover.object());
    }
    else {
        reset();
        new (d_validatePrqsApprover.buffer())
                BregChangeRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_VALIDATE_PRQS_APPROVER;
    }

    return d_validatePrqsApprover.object();
}

BregChangeRequest& Request::makeValidatePrqsApprover(const BregChangeRequest& value)
{
    if (SELECTION_ID_VALIDATE_PRQS_APPROVER == d_selectionId) {
        d_validatePrqsApprover.object() = value;
    }
    else {
        reset();
        new (d_validatePrqsApprover.buffer())
                BregChangeRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_VALIDATE_PRQS_APPROVER;
    }

    return d_validatePrqsApprover.object();
}

BregChangeRequest& Request::makeGenerateReleaseCode()
{
    if (SELECTION_ID_GENERATE_RELEASE_CODE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_generateReleaseCode.object());
    }
    else {
        reset();
        new (d_generateReleaseCode.buffer())
                BregChangeRequest(d_allocator_p);

        d_selectionId = SELECTION_ID_GENERATE_RELEASE_CODE;
    }

    return d_generateReleaseCode.object();
}

BregChangeRequest& Request::makeGenerateReleaseCode(const BregChangeRequest& value)
{
    if (SELECTION_ID_GENERATE_RELEASE_CODE == d_selectionId) {
        d_generateReleaseCode.object() = value;
    }
    else {
        reset();
        new (d_generateReleaseCode.buffer())
                BregChangeRequest(value, d_allocator_p);
        d_selectionId = SELECTION_ID_GENERATE_RELEASE_CODE;
    }

    return d_generateReleaseCode.object();
}

MarkForDeletionRequest& Request::makeMarkForDeletion()
{
    if (SELECTION_ID_MARK_FOR_DELETION == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_markForDeletion.object());
    }
    else {
        reset();
        new (d_markForDeletion.buffer())
            MarkForDeletionRequest();
    
        d_selectionId = SELECTION_ID_MARK_FOR_DELETION;
    }

    return d_markForDeletion.object();
}

MarkForDeletionRequest& Request::makeMarkForDeletion(const MarkForDeletionRequest& value)
{
    if (SELECTION_ID_MARK_FOR_DELETION == d_selectionId) {
        d_markForDeletion.object() = value;
    }
    else {
        reset();
        new (d_markForDeletion.buffer())
                MarkForDeletionRequest(value);
        d_selectionId = SELECTION_ID_MARK_FOR_DELETION;
    }

    return d_markForDeletion.object();
}

// ACCESSORS

bsl::ostream& Request::print(
    bsl::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    switch (d_selectionId) {
      case SELECTION_ID_GET_TREE: {
        printer.printAttribute("getTree", d_getTree.object());

      }  break;
      case SELECTION_ID_GET_EXPANDED_TREE: {
        printer.printAttribute("getExpandedTree", d_getExpandedTree.object());

      }  break;
      case SELECTION_ID_GET_DEFAULT_TREE: {
        printer.printAttribute("getDefaultTree", d_getDefaultTree.object());

      }  break;
      case SELECTION_ID_GET_CHILDREN: {
        printer.printAttribute("getChildren", d_getChildren.object());

      }  break;
      case SELECTION_ID_GET_DEFAULT_NODE: {
        printer.printAttribute("getDefaultNode", d_getDefaultNode.object());

      }  break;
      case SELECTION_ID_GET_NODE_DETAILS: {
        printer.printAttribute("getNodeDetails", d_getNodeDetails.object());

      }  break;
      case SELECTION_ID_SET_DEFAULT_NODE: {
        printer.printAttribute("setDefaultNode", d_setDefaultNode.object());

      }  break;
      case SELECTION_ID_SEARCH_BY_NAME: {
        printer.printAttribute("searchByName", d_searchByName.object());

      }  break;
      case SELECTION_ID_SEARCH_BY_ID: {
        printer.printAttribute("searchById", d_searchById.object());

      }  break;
      case SELECTION_ID_SEARCH_BY_ACCESSOR: {
        printer.printAttribute("searchByAccessor", d_searchByAccessor.object());

      }  break;
      case SELECTION_ID_SEARCH_BY_CONTACTS: {
        printer.printAttribute("searchByContacts", d_searchByContacts.object());

      }  break;
      case SELECTION_ID_SEARCH_BY_KEYWORDS: {
        printer.printAttribute("searchByKeywords", d_searchByKeywords.object());

      }  break;
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        printer.printAttribute("searchByDrqsGroup", d_searchByDrqsGroup.object());

      }  break;
      case SELECTION_ID_IS_DELETED: {
        printer.printAttribute("isDeleted", d_isDeleted.object());

      }  break;
      case SELECTION_ID_GET_BREG_VALUES: {
        printer.printAttribute("getBregValues", d_getBregValues.object());

      }  break;
      case SELECTION_ID_GET_REGISTRY: {
        printer.printAttribute("getRegistry", d_getRegistry.object());

      }  break;
      case SELECTION_ID_GET_ENTRY_VALUE: {
        printer.printAttribute("getEntryValue", d_getEntryValue.object());

      }  break;
      case SELECTION_ID_GET_SUBSCRIBERS: {
        printer.printAttribute("getSubscribers", d_getSubscribers.object());

      }  break;
      case SELECTION_ID_GET_VERSION_HISTORY: {
        printer.printAttribute("getVersionHistory", d_getVersionHistory.object());

      }  break;
      case SELECTION_ID_UPDATE_REGISTRY: {
        printer.printAttribute("updateRegistry", d_updateRegistry.object());

      }  break;
      case SELECTION_ID_DELETE_NODE: {
        printer.printAttribute("deleteNode", d_deleteNode.object());

      }  break;
      case SELECTION_ID_MOVE_REGISTRY: {
        printer.printAttribute("moveRegistry", d_moveRegistry.object());

      }  break;
      case SELECTION_ID_UPDATE_CONTACT: {
        printer.printAttribute("updateContact", d_updateContact.object());

      }  break;
      case SELECTION_ID_GET_PRIVILEGE_LIST: {
        printer.printAttribute("getPrivilegeList", d_getPrivilegeList.object());

      }  break;
      case SELECTION_ID_UPDATE_SUBSCRIBERS: {
        printer.printAttribute("updateSubscribers", d_updateSubscribers.object());

      }  break;
      case SELECTION_ID_UPDATE_PRIVILEGES: {
        printer.printAttribute("updatePrivileges", d_updatePrivileges.object());

      }  break;
      case SELECTION_ID_GET_OUT_GROUP: {
        printer.printAttribute("getOutGroup", d_getOutGroup.object());

      }  break;
      case SELECTION_ID_GET_DEPT_CHAIN: {
        printer.printAttribute("getDeptChain", d_getDeptChain.object());

      }  break;
      case SELECTION_ID_GET_DRQS_GROUP: {
        printer.printAttribute("getDrqsGroup", d_getDrqsGroup.object());

      }  break;
      case SELECTION_ID_UPDATE_DEV_VALUE: {
        printer.printAttribute("updateDevValue", d_updateDevValue.object());

      }  break;
      case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        printer.printAttribute("getMachineGroupName", d_getMachineGroupName.object());

      }  break;
      case SELECTION_ID_VALIDATE_OVERRIDE: {
        printer.printAttribute("validateOverride", d_validateOverride.object());

      }  break;
      case SELECTION_ID_GENERATE_CODE: {
        printer.printAttribute("generateCode", d_generateCode.object());

      }  break;
      case SELECTION_ID_RELEASE_CODE: {
        printer.printAttribute("releaseCode", d_releaseCode.object());

      }  break;
      case SELECTION_ID_GET_TODO_LIST: {
        printer.printAttribute("getTodoList", d_getTodoList.object());

      }  break;
      case SELECTION_ID_GET_RELATED_TICKET: {
        printer.printAttribute("getRelatedTicket", d_getRelatedTicket.object());

      }  break;
      case SELECTION_ID_GET_NODE_TYPE: {
        printer.printAttribute("getNodeType", d_getNodeType.object());

      }  break;
      case SELECTION_ID_CHANGE_BREG: {
        printer.printAttribute("changeBreg", d_changeBreg.object());

      }  break;
      case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        printer.printAttribute("validatePrqsApprover", d_validatePrqsApprover.object());

      }  break;
      case SELECTION_ID_GENERATE_RELEASE_CODE: {
        printer.printAttribute("generateReleaseCode", d_generateReleaseCode.object());

      }  break;
      case SELECTION_ID_MARK_FOR_DELETION: {
        printer.printAttribute("markForDeletion", d_markForDeletion.object());

      }  break;
      default:
        stream << "SELECTION UNDEFINED\n";
    }
    printer.end();
    return stream;
}

int Request::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_GET_TREE: {
        const int& source = this->getTree();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_EXPANDED_TREE: {
        const int& source = this->getExpandedTree();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_DEFAULT_TREE: {
        const Void& source = this->getDefaultTree();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_CHILDREN: {
        const int& source = this->getChildren();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_DEFAULT_NODE: {
        const Void& source = this->getDefaultNode();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_NODE_DETAILS: {
        const int& source = this->getNodeDetails();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SET_DEFAULT_NODE: {
        const int& source = this->setDefaultNode();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SEARCH_BY_NAME: {
        const bsl::string& source = this->searchByName();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SEARCH_BY_ID: {
        const int& source = this->searchById();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SEARCH_BY_ACCESSOR: {
        const bsl::string& source = this->searchByAccessor();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SEARCH_BY_CONTACTS: {
        const SearchByContacts& source = this->searchByContacts();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SEARCH_BY_KEYWORDS: {
        const SearchByKeywords& source = this->searchByKeywords();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
        const int& source = this->searchByDrqsGroup();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_IS_DELETED: {
        const int& source = this->isDeleted();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_BREG_VALUES: {
        const GetBregValuesRequest& source = this->getBregValues();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_REGISTRY: {
        const int& source = this->getRegistry();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_ENTRY_VALUE: {
        const ValueRequest& source = this->getEntryValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_SUBSCRIBERS: {
        const int& source = this->getSubscribers();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_VERSION_HISTORY: {
        const int& source = this->getVersionHistory();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_UPDATE_REGISTRY: {
        const RegistryInfo& source = this->updateRegistry();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_DELETE_NODE: {
        const int& source = this->deleteNode();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_MOVE_REGISTRY: {
        const MoveRequest& source = this->moveRegistry();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_UPDATE_CONTACT: {
        const UpdateContactRequest& source = this->updateContact();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_PRIVILEGE_LIST: {
        const int& source = this->getPrivilegeList();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_UPDATE_SUBSCRIBERS: {
        const EntrySubscribers& source = this->updateSubscribers();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_UPDATE_PRIVILEGES: {
        const PrivilegeList& source = this->updatePrivileges();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_OUT_GROUP: {
        const int& source = this->getOutGroup();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_DEPT_CHAIN: {
        const int& source = this->getDeptChain();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_DRQS_GROUP: {
        const int& source = this->getDrqsGroup();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_UPDATE_DEV_VALUE: {
        const EntryValue& source = this->updateDevValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
        const int& source = this->getMachineGroupName();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_VALIDATE_OVERRIDE: {
        const OverrideInfo& source = this->validateOverride();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GENERATE_CODE: {
        const GenerateCodeRequest& source = this->generateCode();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_RELEASE_CODE: {
        const BregChangeRequest& source = this->releaseCode();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_TODO_LIST: {
        const int& source = this->getTodoList();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_RELATED_TICKET: {
        const RelatedTicketRequest& source = this->getRelatedTicket();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GET_NODE_TYPE: {
        const int& source = this->getNodeType();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_CHANGE_BREG: {
        const BregChangeRequest& source = this->changeBreg();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
        const BregChangeRequest& source = this->validatePrqsApprover();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_GENERATE_RELEASE_CODE: {
        const BregChangeRequest& source = this->generateReleaseCode();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_MARK_FOR_DELETION: {
        const MarkForDeletionRequest& source = this->markForDeletion();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    return rc;
}

const char *Request::selectionName() const
{
    switch (d_selectionId) {
      case SELECTION_ID_GET_TREE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TREE].name();
      case SELECTION_ID_GET_EXPANDED_TREE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_EXPANDED_TREE].name();
      case SELECTION_ID_GET_DEFAULT_TREE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_TREE].name();
      case SELECTION_ID_GET_CHILDREN:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_CHILDREN].name();
      case SELECTION_ID_GET_DEFAULT_NODE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_NODE].name();
      case SELECTION_ID_GET_NODE_DETAILS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_DETAILS].name();
      case SELECTION_ID_SET_DEFAULT_NODE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SET_DEFAULT_NODE].name();
      case SELECTION_ID_SEARCH_BY_NAME:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_NAME].name();
      case SELECTION_ID_SEARCH_BY_ID:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ID].name();
      case SELECTION_ID_SEARCH_BY_ACCESSOR:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ACCESSOR].name();
      case SELECTION_ID_SEARCH_BY_CONTACTS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_CONTACTS].name();
      case SELECTION_ID_SEARCH_BY_KEYWORDS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_KEYWORDS].name();
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_DRQS_GROUP].name();
      case SELECTION_ID_IS_DELETED:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_IS_DELETED].name();
      case SELECTION_ID_GET_BREG_VALUES:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_BREG_VALUES].name();
      case SELECTION_ID_GET_REGISTRY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_REGISTRY].name();
      case SELECTION_ID_GET_ENTRY_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_ENTRY_VALUE].name();
      case SELECTION_ID_GET_SUBSCRIBERS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_SUBSCRIBERS].name();
      case SELECTION_ID_GET_VERSION_HISTORY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_VERSION_HISTORY].name();
      case SELECTION_ID_UPDATE_REGISTRY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_REGISTRY].name();
      case SELECTION_ID_DELETE_NODE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_DELETE_NODE].name();
      case SELECTION_ID_MOVE_REGISTRY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_MOVE_REGISTRY].name();
      case SELECTION_ID_UPDATE_CONTACT:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_CONTACT].name();
      case SELECTION_ID_GET_PRIVILEGE_LIST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_PRIVILEGE_LIST].name();
      case SELECTION_ID_UPDATE_SUBSCRIBERS:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_SUBSCRIBERS].name();
      case SELECTION_ID_UPDATE_PRIVILEGES:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_PRIVILEGES].name();
      case SELECTION_ID_GET_OUT_GROUP:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_OUT_GROUP].name();
      case SELECTION_ID_GET_DEPT_CHAIN:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEPT_CHAIN].name();
      case SELECTION_ID_GET_DRQS_GROUP:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DRQS_GROUP].name();
      case SELECTION_ID_UPDATE_DEV_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_DEV_VALUE].name();
      case SELECTION_ID_GET_MACHINE_GROUP_NAME:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_MACHINE_GROUP_NAME].name();
      case SELECTION_ID_VALIDATE_OVERRIDE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_OVERRIDE].name();
      case SELECTION_ID_GENERATE_CODE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_CODE].name();
      case SELECTION_ID_RELEASE_CODE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_RELEASE_CODE].name();
      case SELECTION_ID_GET_TODO_LIST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TODO_LIST].name();
      case SELECTION_ID_GET_RELATED_TICKET:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_RELATED_TICKET].name();
      case SELECTION_ID_GET_NODE_TYPE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_TYPE].name();
      case SELECTION_ID_CHANGE_BREG:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_CHANGE_BREG].name();
      case SELECTION_ID_VALIDATE_PRQS_APPROVER:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_PRQS_APPROVER].name();
      case SELECTION_ID_GENERATE_RELEASE_CODE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_RELEASE_CODE].name();
      case SELECTION_ID_MARK_FOR_DELETION:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_MARK_FOR_DELETION].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}
}  // close package namespace
}  // close enterprise namespace

// GENERATED BY BLP_BAS_CODEGEN_3.8.4 Fri Apr 24 17:04:51 2015
// USING bas_codegen.pl -m msg --bidirectional breguisvc.xsd
// SERVICE VERSION breguisvc:64730-1.11
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2015
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------ END-OF-FILE ---------------------------------
