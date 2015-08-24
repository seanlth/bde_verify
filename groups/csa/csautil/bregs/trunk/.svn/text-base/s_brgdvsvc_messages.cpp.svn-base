// s_brgdvsvc_messages.cpp     -- GENERATED FILE - DO NOT EDIT --     -*-C++-*-

#include <bdes_ident.h>
BDES_IDENT_RCSID(s_brgdvsvc_messages_cpp,"$Id$ $CSID$")

#include <s_brgdvsvc_messages.h>

#include <bcem_aggregate.h>
#include <bcem_aggregateutil.h>

#include <bdeat_formattingmode.h>
#include <bdeat_valuetypefunctions.h>
#include <bdeu_print.h>
#include <bdeu_printmethods.h>
#include <bdeu_string.h>

#include <string>
#include <vector>

#include <bsls_assert.h>

#include <iomanip>
#include <limits>
#include <ostream>

namespace BloombergLP {
namespace s_brgdvsvc {

                              // ----------------                              
                              // class BregStatus                              
                              // ----------------                              

// CONSTANTS

const char BregStatus::CLASS_NAME[] = "BregStatus";

const bdeat_EnumeratorInfo BregStatus::ENUMERATOR_INFO_ARRAY[] = {
    {
        BregStatus::BREG_SUCCESS,
        "BREG_SUCCESS",
        sizeof("BREG_SUCCESS") - 1,
        ""
    },
    {
        BregStatus::BREG_ERROR,
        "BREG_ERROR",
        sizeof("BREG_ERROR") - 1,
        ""
    }
};

// CLASS METHODS

int BregStatus::fromInt(BregStatus::Value *result, int number)
{
    switch (number) {
      case BregStatus::BREG_SUCCESS:
      case BregStatus::BREG_ERROR:
        *result = (BregStatus::Value)number;
        return 0;
      default:
        return -1;
    }
}

int BregStatus::fromString(BregStatus::Value *result,
                            const char         *string,
                            int                 stringLength)
{
    
    switch(stringLength) {
        case 10: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='E'
             && string[6]=='R'
             && string[7]=='R'
             && string[8]=='O'
             && string[9]=='R')
            {
                *result = BregStatus::BREG_ERROR;
                return 0;
            }
        } break;
        case 12: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='S'
             && string[6]=='U'
             && string[7]=='C'
             && string[8]=='C'
             && string[9]=='E'
             && string[10]=='S'
             && string[11]=='S')
            {
                *result = BregStatus::BREG_SUCCESS;
                return 0;
            }
        } break;
    }
    
    return -1;
}

const char *BregStatus::toString(BregStatus::Value value)
{
    switch (value) {
      case BREG_SUCCESS: {
        return "BREG_SUCCESS";
      } break;
      case BREG_ERROR: {
        return "BREG_ERROR";
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

const bdeat_SelectionInfo BregValue::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_BOOLEAN_VALUE,
        "booleanValue",
        sizeof("booleanValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_DOUBLE_VALUE,
        "doubleValue",
        sizeof("doubleValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_INTEGER_VALUE,
        "integerValue",
        sizeof("integerValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_INTEGER_ARRAY,
        "integerArray",
        sizeof("integerArray") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        SELECTION_ID_CHARACTER_VALUE,
        "characterValue",
        sizeof("characterValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        SELECTION_ID_CHARACTER_ARRAY,
        "characterArray",
        sizeof("characterArray") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *BregValue::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 11: {
            if (name[0]=='d'
             && name[1]=='o'
             && name[2]=='u'
             && name[3]=='b'
             && name[4]=='l'
             && name[5]=='e'
             && name[6]=='V'
             && name[7]=='a'
             && name[8]=='l'
             && name[9]=='u'
             && name[10]=='e')
            {
                return &SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE];
            }
        } break;
        case 12: {
            switch(name[0]) {
                case 'b': {
                    if (name[1]=='o'
                     && name[2]=='o'
                     && name[3]=='l'
                     && name[4]=='e'
                     && name[5]=='a'
                     && name[6]=='n'
                     && name[7]=='V'
                     && name[8]=='a'
                     && name[9]=='l'
                     && name[10]=='u'
                     && name[11]=='e')
                    {
                        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOLEAN_VALUE];
                    }
                } break;
                case 'i': {
                    if (name[1]=='n'
                     && name[2]=='t'
                     && name[3]=='e'
                     && name[4]=='g'
                     && name[5]=='e'
                     && name[6]=='r')
                    {
                        switch(name[7]) {
                            case 'A': {
                                if (name[8]=='r'
                                 && name[9]=='r'
                                 && name[10]=='a'
                                 && name[11]=='y')
                                {
                                    return &SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_ARRAY];
                                }
                            } break;
                            case 'V': {
                                if (name[8]=='a'
                                 && name[9]=='l'
                                 && name[10]=='u'
                                 && name[11]=='e')
                                {
                                    return &SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_VALUE];
                                }
                            } break;
                        }
                    }
                } break;
            }
        } break;
        case 14: {
            if (name[0]=='c'
             && name[1]=='h'
             && name[2]=='a'
             && name[3]=='r'
             && name[4]=='a'
             && name[5]=='c'
             && name[6]=='t'
             && name[7]=='e'
             && name[8]=='r')
            {
                switch(name[9]) {
                    case 'A': {
                        if (name[10]=='r'
                         && name[11]=='r'
                         && name[12]=='a'
                         && name[13]=='y')
                        {
                            return &SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_ARRAY];
                        }
                    } break;
                    case 'V': {
                        if (name[10]=='a'
                         && name[11]=='l'
                         && name[12]=='u'
                         && name[13]=='e')
                        {
                            return &SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_VALUE];
                        }
                    } break;
                }
            }
        } break;
    }
    return 0;
}

const bdeat_SelectionInfo *BregValue::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_BOOLEAN_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOLEAN_VALUE];
      case SELECTION_ID_DOUBLE_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE];
      case SELECTION_ID_INTEGER_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_VALUE];
      case SELECTION_ID_INTEGER_ARRAY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_ARRAY];
      case SELECTION_ID_CHARACTER_VALUE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_VALUE];
      case SELECTION_ID_CHARACTER_ARRAY:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_ARRAY];
      default:
        return 0;
    }
}

// CREATORS

BregValue::BregValue(
    const BregValue& original,
    bdema_Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bdema_Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOLEAN_VALUE: {
        new (d_booleanValue.buffer())
            bool(original.d_booleanValue.object());
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        new (d_doubleValue.buffer())
            double(original.d_doubleValue.object());
      } break;
      case SELECTION_ID_INTEGER_VALUE: {
        new (d_integerValue.buffer())
            int(original.d_integerValue.object());
      } break;
      case SELECTION_ID_INTEGER_ARRAY: {
        new (d_integerArray.buffer())
            std::vector<int>(
                original.d_integerArray.object(), d_allocator_p);
      } break;
      case SELECTION_ID_CHARACTER_VALUE: {
        new (d_characterValue.buffer())
            std::string(
                original.d_characterValue.object(), d_allocator_p);
      } break;
      case SELECTION_ID_CHARACTER_ARRAY: {
        new (d_characterArray.buffer())
            std::string(
                original.d_characterArray.object(), d_allocator_p);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }
}

// MANIPULATORS

BregValue&
BregValue::operator=(const BregValue& rhs)
{
    if (this != &rhs) {
        switch (rhs.d_selectionId) {
          case SELECTION_ID_BOOLEAN_VALUE: {
            makeBooleanValue(rhs.d_booleanValue.object());
          } break;
          case SELECTION_ID_DOUBLE_VALUE: {
            makeDoubleValue(rhs.d_doubleValue.object());
          } break;
          case SELECTION_ID_INTEGER_VALUE: {
            makeIntegerValue(rhs.d_integerValue.object());
          } break;
          case SELECTION_ID_INTEGER_ARRAY: {
            makeIntegerArray(rhs.d_integerArray.object());
          } break;
          case SELECTION_ID_CHARACTER_VALUE: {
            makeCharacterValue(rhs.d_characterValue.object());
          } break;
          case SELECTION_ID_CHARACTER_ARRAY: {
            makeCharacterArray(rhs.d_characterArray.object());
          } break;
          default:
            BSLS_ASSERT(SELECTION_ID_UNDEFINED == rhs.d_selectionId);
            reset();
        }
    }
    return *this;
}

int BregValue::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc = 0;

    int selectorId = aggregate.selectorId();
    switch (selectorId) {
      case SELECTION_ID_BOOLEAN_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeBooleanValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeDoubleValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_INTEGER_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeIntegerValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_INTEGER_ARRAY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeIntegerArray(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_CHARACTER_VALUE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeCharacterValue(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_CHARACTER_ARRAY: {
        rc = bcem_AggregateUtil::fromAggregate(&makeCharacterArray(),
                                               aggregate,
                                               selectorId);
      } break;
      default: {
        rc = bcem_Aggregate::BCEM_ERR_BAD_CONVERSION;
      }
    }

    return rc;
}

void BregValue::reset()
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOLEAN_VALUE: {
        // no destruction required
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        // no destruction required
      } break;
      case SELECTION_ID_INTEGER_VALUE: {
        // no destruction required
      } break;
      case SELECTION_ID_INTEGER_ARRAY: {
        typedef std::vector<int> Type;
        d_integerArray.object().~Type();
      } break;
      case SELECTION_ID_CHARACTER_VALUE: {
        typedef std::string Type;
        d_characterValue.object().~Type();
      } break;
      case SELECTION_ID_CHARACTER_ARRAY: {
        typedef std::string Type;
        d_characterArray.object().~Type();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int BregValue::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_BOOLEAN_VALUE: {
        makeBooleanValue();
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        makeDoubleValue();
      } break;
      case SELECTION_ID_INTEGER_VALUE: {
        makeIntegerValue();
      } break;
      case SELECTION_ID_INTEGER_ARRAY: {
        makeIntegerArray();
      } break;
      case SELECTION_ID_CHARACTER_VALUE: {
        makeCharacterValue();
      } break;
      case SELECTION_ID_CHARACTER_ARRAY: {
        makeCharacterArray();
      } break;
      case SELECTION_ID_UNDEFINED: {
        reset();
      } break;
      default:
        return -1;
    }
    return 0;
}

int BregValue::makeSelection(const char *name, int nameLength)
{
    const bdeat_SelectionInfo *selectionInfo =
           lookupSelectionInfo(name, nameLength);
    if (0 == selectionInfo) {
       return -1;
    }

    return makeSelection(selectionInfo->d_id);
}

bool& BregValue::makeBooleanValue()
{
    if (SELECTION_ID_BOOLEAN_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_booleanValue.object());
    }
    else {
        reset();
        new (d_booleanValue.buffer())
            bool();
    
        d_selectionId = SELECTION_ID_BOOLEAN_VALUE;
    }

    return d_booleanValue.object();
}

bool& BregValue::makeBooleanValue(bool value)
{
    if (SELECTION_ID_BOOLEAN_VALUE == d_selectionId) {
        d_booleanValue.object() = value;
    }
    else {
        reset();
        new (d_booleanValue.buffer())
                bool(value);
        d_selectionId = SELECTION_ID_BOOLEAN_VALUE;
    }

    return d_booleanValue.object();
}

double& BregValue::makeDoubleValue()
{
    if (SELECTION_ID_DOUBLE_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_doubleValue.object());
    }
    else {
        reset();
        new (d_doubleValue.buffer())
            double();
    
        d_selectionId = SELECTION_ID_DOUBLE_VALUE;
    }

    return d_doubleValue.object();
}

double& BregValue::makeDoubleValue(double value)
{
    if (SELECTION_ID_DOUBLE_VALUE == d_selectionId) {
        d_doubleValue.object() = value;
    }
    else {
        reset();
        new (d_doubleValue.buffer())
                double(value);
        d_selectionId = SELECTION_ID_DOUBLE_VALUE;
    }

    return d_doubleValue.object();
}

int& BregValue::makeIntegerValue()
{
    if (SELECTION_ID_INTEGER_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_integerValue.object());
    }
    else {
        reset();
        new (d_integerValue.buffer())
            int();
    
        d_selectionId = SELECTION_ID_INTEGER_VALUE;
    }

    return d_integerValue.object();
}

int& BregValue::makeIntegerValue(int value)
{
    if (SELECTION_ID_INTEGER_VALUE == d_selectionId) {
        d_integerValue.object() = value;
    }
    else {
        reset();
        new (d_integerValue.buffer())
                int(value);
        d_selectionId = SELECTION_ID_INTEGER_VALUE;
    }

    return d_integerValue.object();
}

std::vector<int>& BregValue::makeIntegerArray()
{
    if (SELECTION_ID_INTEGER_ARRAY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_integerArray.object());
    }
    else {
        reset();
        new (d_integerArray.buffer())
                std::vector<int>(d_allocator_p);

        d_selectionId = SELECTION_ID_INTEGER_ARRAY;
    }

    return d_integerArray.object();
}

std::vector<int>& BregValue::makeIntegerArray(const std::vector<int>& value)
{
    if (SELECTION_ID_INTEGER_ARRAY == d_selectionId) {
        d_integerArray.object() = value;
    }
    else {
        reset();
        new (d_integerArray.buffer())
                std::vector<int>(value, d_allocator_p);
        d_selectionId = SELECTION_ID_INTEGER_ARRAY;
    }

    return d_integerArray.object();
}

std::string& BregValue::makeCharacterValue()
{
    if (SELECTION_ID_CHARACTER_VALUE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_characterValue.object());
    }
    else {
        reset();
        new (d_characterValue.buffer())
                std::string(d_allocator_p);

        d_selectionId = SELECTION_ID_CHARACTER_VALUE;
    }

    return d_characterValue.object();
}

std::string& BregValue::makeCharacterValue(const std::string& value)
{
    if (SELECTION_ID_CHARACTER_VALUE == d_selectionId) {
        d_characterValue.object() = value;
    }
    else {
        reset();
        new (d_characterValue.buffer())
                std::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_CHARACTER_VALUE;
    }

    return d_characterValue.object();
}

std::string& BregValue::makeCharacterArray()
{
    if (SELECTION_ID_CHARACTER_ARRAY == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_characterArray.object());
    }
    else {
        reset();
        new (d_characterArray.buffer())
                std::string(d_allocator_p);

        d_selectionId = SELECTION_ID_CHARACTER_ARRAY;
    }

    return d_characterArray.object();
}

std::string& BregValue::makeCharacterArray(const std::string& value)
{
    if (SELECTION_ID_CHARACTER_ARRAY == d_selectionId) {
        d_characterArray.object() = value;
    }
    else {
        reset();
        new (d_characterArray.buffer())
                std::string(value, d_allocator_p);
        d_selectionId = SELECTION_ID_CHARACTER_ARRAY;
    }

    return d_characterArray.object();
}

// ACCESSORS

std::ostream& BregValue::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";
        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);

        switch (d_selectionId) {
          case SELECTION_ID_BOOLEAN_VALUE: {
            stream << "BooleanValue = ";
            bdeu_PrintMethods::print(stream, d_booleanValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_DOUBLE_VALUE: {
            stream << "DoubleValue = ";
            bdeu_PrintMethods::print(stream, d_doubleValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_INTEGER_VALUE: {
            stream << "IntegerValue = ";
            bdeu_PrintMethods::print(stream, d_integerValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_INTEGER_ARRAY: {
            stream << "IntegerArray = ";
            bdeu_PrintMethods::print(stream, d_integerArray.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_CHARACTER_VALUE: {
            stream << "CharacterValue = ";
            bdeu_PrintMethods::print(stream, d_characterValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_CHARACTER_ARRAY: {
            stream << "CharacterArray = ";
            bdeu_PrintMethods::print(stream, d_characterArray.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          default:
            stream << "SELECTION UNDEFINED\n";
        }
        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << "[ ";

        switch (d_selectionId) {
          case SELECTION_ID_BOOLEAN_VALUE: {
            stream << "BooleanValue = ";
            bdeu_PrintMethods::print(stream, d_booleanValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_DOUBLE_VALUE: {
            stream << "DoubleValue = ";
            bdeu_PrintMethods::print(stream, d_doubleValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_INTEGER_VALUE: {
            stream << "IntegerValue = ";
            bdeu_PrintMethods::print(stream, d_integerValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_INTEGER_ARRAY: {
            stream << "IntegerArray = ";
            bdeu_PrintMethods::print(stream, d_integerArray.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_CHARACTER_VALUE: {
            stream << "CharacterValue = ";
            bdeu_PrintMethods::print(stream, d_characterValue.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_CHARACTER_ARRAY: {
            stream << "CharacterArray = ";
            bdeu_PrintMethods::print(stream, d_characterArray.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          default:
            stream << "SELECTION UNDEFINED";
        }

        stream << " ]";
    }

    return stream << std::flush;
}

int BregValue::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_BOOLEAN_VALUE: {
        const bool& source = booleanValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_DOUBLE_VALUE: {
        const double& source = doubleValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_INTEGER_VALUE: {
        const int& source = integerValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_INTEGER_ARRAY: {
        const std::vector<int>& source = integerArray();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_CHARACTER_VALUE: {
        const std::string& source = characterValue();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_CHARACTER_ARRAY: {
        const std::string& source = characterArray();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    return rc;
}

const char *BregValue::selectionName() const
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOLEAN_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOLEAN_VALUE].name();
      case SELECTION_ID_DOUBLE_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE].name();
      case SELECTION_ID_INTEGER_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_VALUE].name();
      case SELECTION_ID_INTEGER_ARRAY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_ARRAY].name();
      case SELECTION_ID_CHARACTER_VALUE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_VALUE].name();
      case SELECTION_ID_CHARACTER_ARRAY:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_ARRAY].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}

                            // -------------------                             
                            // class BregValueType                             
                            // -------------------                             

// CONSTANTS

const char BregValueType::CLASS_NAME[] = "BregValueType";

const bdeat_EnumeratorInfo BregValueType::ENUMERATOR_INFO_ARRAY[] = {
    {
        BregValueType::BREG_VALUE_TYPE_BOOLEAN,
        "BREG_VALUE_TYPE_BOOLEAN",
        sizeof("BREG_VALUE_TYPE_BOOLEAN") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_DOUBLE,
        "BREG_VALUE_TYPE_DOUBLE",
        sizeof("BREG_VALUE_TYPE_DOUBLE") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_INT,
        "BREG_VALUE_TYPE_INT",
        sizeof("BREG_VALUE_TYPE_INT") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_INT_ARRAY,
        "BREG_VALUE_TYPE_INT_ARRAY",
        sizeof("BREG_VALUE_TYPE_INT_ARRAY") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_CHAR,
        "BREG_VALUE_TYPE_CHAR",
        sizeof("BREG_VALUE_TYPE_CHAR") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_CHAR_ARRAY,
        "BREG_VALUE_TYPE_CHAR_ARRAY",
        sizeof("BREG_VALUE_TYPE_CHAR_ARRAY") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_NUMBER,
        "BREG_VALUE_TYPE_NUMBER",
        sizeof("BREG_VALUE_TYPE_NUMBER") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_EXT_INT_ARRAY,
        "BREG_VALUE_TYPE_EXT_INT_ARRAY",
        sizeof("BREG_VALUE_TYPE_EXT_INT_ARRAY") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_EXT_CHAR_ARRAY,
        "BREG_VALUE_TYPE_EXT_CHAR_ARRAY",
        sizeof("BREG_VALUE_TYPE_EXT_CHAR_ARRAY") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_TABLE_INT,
        "BREG_VALUE_TYPE_TABLE_INT",
        sizeof("BREG_VALUE_TYPE_TABLE_INT") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_TABLE_CHAR,
        "BREG_VALUE_TYPE_TABLE_CHAR",
        sizeof("BREG_VALUE_TYPE_TABLE_CHAR") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_TABLE_BOOLEAN,
        "BREG_VALUE_TYPE_TABLE_BOOLEAN",
        sizeof("BREG_VALUE_TYPE_TABLE_BOOLEAN") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_TABLE_CHAR_ARRAY,
        "BREG_VALUE_TYPE_TABLE_CHAR_ARRAY",
        sizeof("BREG_VALUE_TYPE_TABLE_CHAR_ARRAY") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_TABLE_INT_ARRAY,
        "BREG_VALUE_TYPE_TABLE_INT_ARRAY",
        sizeof("BREG_VALUE_TYPE_TABLE_INT_ARRAY") - 1,
        ""
    },
    {
        BregValueType::BREG_VALUE_TYPE_TABLE_DOUBLE,
        "BREG_VALUE_TYPE_TABLE_DOUBLE",
        sizeof("BREG_VALUE_TYPE_TABLE_DOUBLE") - 1,
        ""
    }
};

// CLASS METHODS

int BregValueType::fromInt(BregValueType::Value *result, int number)
{
    switch (number) {
      case BregValueType::BREG_VALUE_TYPE_BOOLEAN:
      case BregValueType::BREG_VALUE_TYPE_DOUBLE:
      case BregValueType::BREG_VALUE_TYPE_INT:
      case BregValueType::BREG_VALUE_TYPE_INT_ARRAY:
      case BregValueType::BREG_VALUE_TYPE_CHAR:
      case BregValueType::BREG_VALUE_TYPE_CHAR_ARRAY:
      case BregValueType::BREG_VALUE_TYPE_NUMBER:
      case BregValueType::BREG_VALUE_TYPE_EXT_INT_ARRAY:
      case BregValueType::BREG_VALUE_TYPE_EXT_CHAR_ARRAY:
      case BregValueType::BREG_VALUE_TYPE_TABLE_INT:
      case BregValueType::BREG_VALUE_TYPE_TABLE_CHAR:
      case BregValueType::BREG_VALUE_TYPE_TABLE_BOOLEAN:
      case BregValueType::BREG_VALUE_TYPE_TABLE_CHAR_ARRAY:
      case BregValueType::BREG_VALUE_TYPE_TABLE_INT_ARRAY:
      case BregValueType::BREG_VALUE_TYPE_TABLE_DOUBLE:
        *result = (BregValueType::Value)number;
        return 0;
      default:
        return -1;
    }
}

int BregValueType::fromString(BregValueType::Value *result,
                            const char         *string,
                            int                 stringLength)
{
    
    switch(stringLength) {
        case 19: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='I'
             && string[17]=='N'
             && string[18]=='T')
            {
                *result = BregValueType::BREG_VALUE_TYPE_INT;
                return 0;
            }
        } break;
        case 20: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='C'
             && string[17]=='H'
             && string[18]=='A'
             && string[19]=='R')
            {
                *result = BregValueType::BREG_VALUE_TYPE_CHAR;
                return 0;
            }
        } break;
        case 22: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_')
            {
                switch(string[16]) {
                    case 'D': {
                        if (string[17]=='O'
                         && string[18]=='U'
                         && string[19]=='B'
                         && string[20]=='L'
                         && string[21]=='E')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_DOUBLE;
                            return 0;
                        }
                    } break;
                    case 'N': {
                        if (string[17]=='U'
                         && string[18]=='M'
                         && string[19]=='B'
                         && string[20]=='E'
                         && string[21]=='R')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_NUMBER;
                            return 0;
                        }
                    } break;
                }
            }
        } break;
        case 23: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='B'
             && string[17]=='O'
             && string[18]=='O'
             && string[19]=='L'
             && string[20]=='E'
             && string[21]=='A'
             && string[22]=='N')
            {
                *result = BregValueType::BREG_VALUE_TYPE_BOOLEAN;
                return 0;
            }
        } break;
        case 25: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_')
            {
                switch(string[16]) {
                    case 'I': {
                        if (string[17]=='N'
                         && string[18]=='T'
                         && string[19]=='_'
                         && string[20]=='A'
                         && string[21]=='R'
                         && string[22]=='R'
                         && string[23]=='A'
                         && string[24]=='Y')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_INT_ARRAY;
                            return 0;
                        }
                    } break;
                    case 'T': {
                        if (string[17]=='A'
                         && string[18]=='B'
                         && string[19]=='L'
                         && string[20]=='E'
                         && string[21]=='_'
                         && string[22]=='I'
                         && string[23]=='N'
                         && string[24]=='T')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_TABLE_INT;
                            return 0;
                        }
                    } break;
                }
            }
        } break;
        case 26: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_')
            {
                switch(string[16]) {
                    case 'C': {
                        if (string[17]=='H'
                         && string[18]=='A'
                         && string[19]=='R'
                         && string[20]=='_'
                         && string[21]=='A'
                         && string[22]=='R'
                         && string[23]=='R'
                         && string[24]=='A'
                         && string[25]=='Y')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_CHAR_ARRAY;
                            return 0;
                        }
                    } break;
                    case 'T': {
                        if (string[17]=='A'
                         && string[18]=='B'
                         && string[19]=='L'
                         && string[20]=='E'
                         && string[21]=='_'
                         && string[22]=='C'
                         && string[23]=='H'
                         && string[24]=='A'
                         && string[25]=='R')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_TABLE_CHAR;
                            return 0;
                        }
                    } break;
                }
            }
        } break;
        case 28: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='T'
             && string[17]=='A'
             && string[18]=='B'
             && string[19]=='L'
             && string[20]=='E'
             && string[21]=='_'
             && string[22]=='D'
             && string[23]=='O'
             && string[24]=='U'
             && string[25]=='B'
             && string[26]=='L'
             && string[27]=='E')
            {
                *result = BregValueType::BREG_VALUE_TYPE_TABLE_DOUBLE;
                return 0;
            }
        } break;
        case 29: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_')
            {
                switch(string[16]) {
                    case 'E': {
                        if (string[17]=='X'
                         && string[18]=='T'
                         && string[19]=='_'
                         && string[20]=='I'
                         && string[21]=='N'
                         && string[22]=='T'
                         && string[23]=='_'
                         && string[24]=='A'
                         && string[25]=='R'
                         && string[26]=='R'
                         && string[27]=='A'
                         && string[28]=='Y')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_EXT_INT_ARRAY;
                            return 0;
                        }
                    } break;
                    case 'T': {
                        if (string[17]=='A'
                         && string[18]=='B'
                         && string[19]=='L'
                         && string[20]=='E'
                         && string[21]=='_'
                         && string[22]=='B'
                         && string[23]=='O'
                         && string[24]=='O'
                         && string[25]=='L'
                         && string[26]=='E'
                         && string[27]=='A'
                         && string[28]=='N')
                        {
                            *result = BregValueType::BREG_VALUE_TYPE_TABLE_BOOLEAN;
                            return 0;
                        }
                    } break;
                }
            }
        } break;
        case 30: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='E'
             && string[17]=='X'
             && string[18]=='T'
             && string[19]=='_'
             && string[20]=='C'
             && string[21]=='H'
             && string[22]=='A'
             && string[23]=='R'
             && string[24]=='_'
             && string[25]=='A'
             && string[26]=='R'
             && string[27]=='R'
             && string[28]=='A'
             && string[29]=='Y')
            {
                *result = BregValueType::BREG_VALUE_TYPE_EXT_CHAR_ARRAY;
                return 0;
            }
        } break;
        case 31: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='T'
             && string[17]=='A'
             && string[18]=='B'
             && string[19]=='L'
             && string[20]=='E'
             && string[21]=='_'
             && string[22]=='I'
             && string[23]=='N'
             && string[24]=='T'
             && string[25]=='_'
             && string[26]=='A'
             && string[27]=='R'
             && string[28]=='R'
             && string[29]=='A'
             && string[30]=='Y')
            {
                *result = BregValueType::BREG_VALUE_TYPE_TABLE_INT_ARRAY;
                return 0;
            }
        } break;
        case 32: {
            if (string[0]=='B'
             && string[1]=='R'
             && string[2]=='E'
             && string[3]=='G'
             && string[4]=='_'
             && string[5]=='V'
             && string[6]=='A'
             && string[7]=='L'
             && string[8]=='U'
             && string[9]=='E'
             && string[10]=='_'
             && string[11]=='T'
             && string[12]=='Y'
             && string[13]=='P'
             && string[14]=='E'
             && string[15]=='_'
             && string[16]=='T'
             && string[17]=='A'
             && string[18]=='B'
             && string[19]=='L'
             && string[20]=='E'
             && string[21]=='_'
             && string[22]=='C'
             && string[23]=='H'
             && string[24]=='A'
             && string[25]=='R'
             && string[26]=='_'
             && string[27]=='A'
             && string[28]=='R'
             && string[29]=='R'
             && string[30]=='A'
             && string[31]=='Y')
            {
                *result = BregValueType::BREG_VALUE_TYPE_TABLE_CHAR_ARRAY;
                return 0;
            }
        } break;
    }
    
    return -1;
}

const char *BregValueType::toString(BregValueType::Value value)
{
    switch (value) {
      case BREG_VALUE_TYPE_BOOLEAN: {
        return "BREG_VALUE_TYPE_BOOLEAN";
      } break;
      case BREG_VALUE_TYPE_DOUBLE: {
        return "BREG_VALUE_TYPE_DOUBLE";
      } break;
      case BREG_VALUE_TYPE_INT: {
        return "BREG_VALUE_TYPE_INT";
      } break;
      case BREG_VALUE_TYPE_INT_ARRAY: {
        return "BREG_VALUE_TYPE_INT_ARRAY";
      } break;
      case BREG_VALUE_TYPE_CHAR: {
        return "BREG_VALUE_TYPE_CHAR";
      } break;
      case BREG_VALUE_TYPE_CHAR_ARRAY: {
        return "BREG_VALUE_TYPE_CHAR_ARRAY";
      } break;
      case BREG_VALUE_TYPE_NUMBER: {
        return "BREG_VALUE_TYPE_NUMBER";
      } break;
      case BREG_VALUE_TYPE_EXT_INT_ARRAY: {
        return "BREG_VALUE_TYPE_EXT_INT_ARRAY";
      } break;
      case BREG_VALUE_TYPE_EXT_CHAR_ARRAY: {
        return "BREG_VALUE_TYPE_EXT_CHAR_ARRAY";
      } break;
      case BREG_VALUE_TYPE_TABLE_INT: {
        return "BREG_VALUE_TYPE_TABLE_INT";
      } break;
      case BREG_VALUE_TYPE_TABLE_CHAR: {
        return "BREG_VALUE_TYPE_TABLE_CHAR";
      } break;
      case BREG_VALUE_TYPE_TABLE_BOOLEAN: {
        return "BREG_VALUE_TYPE_TABLE_BOOLEAN";
      } break;
      case BREG_VALUE_TYPE_TABLE_CHAR_ARRAY: {
        return "BREG_VALUE_TYPE_TABLE_CHAR_ARRAY";
      } break;
      case BREG_VALUE_TYPE_TABLE_INT_ARRAY: {
        return "BREG_VALUE_TYPE_TABLE_INT_ARRAY";
      } break;
      case BREG_VALUE_TYPE_TABLE_DOUBLE: {
        return "BREG_VALUE_TYPE_TABLE_DOUBLE";
      } break;
    }

    BSLS_ASSERT(!"invalid enumerator");
    return 0;
}


                         // -------------------------                          
                         // class BregdbRegistryEntry                          
                         // -------------------------                          

// CONSTANTS

const char BregdbRegistryEntry::CLASS_NAME[] = "BregdbRegistryEntry";

const bdeat_AttributeInfo BregdbRegistryEntry::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_BY_UUID,
        "updateByUuid",
        sizeof("updateByUuid") - 1,
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
        ATTRIBUTE_ID_VAL_TYPE_CD,
        "valTypeCd",
        sizeof("valTypeCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_IS_IN_MEMORY_CD,
        "isInMemoryCd",
        sizeof("isInMemoryCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_IS_TEMPORARY_CD,
        "isTemporaryCd",
        sizeof("isTemporaryCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_API_STATUS_CD,
        "apiStatusCd",
        sizeof("apiStatusCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_SWITCH_STATUS_CD,
        "switchStatusCd",
        sizeof("switchStatusCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_SWITCH_MODE_CD,
        "switchModeCd",
        sizeof("switchModeCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_MAX_NO_OF_VALUES,
        "MaxNoOfValues",
        sizeof("MaxNoOfValues") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_EXPIRY_TSP,
        "expiryTsp",
        sizeof("expiryTsp") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    },
    {
        ATTRIBUTE_ID_API_NAME,
        "apiName",
        sizeof("apiName") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregdbRegistryEntry::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 7: {
            switch(name[0]) {
                case 'a': {
                    if (name[1]=='p'
                     && name[2]=='i'
                     && name[3]=='N'
                     && name[4]=='a'
                     && name[5]=='m'
                     && name[6]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME];
                    }
                } break;
                case 'e': {
                    if (name[1]=='n'
                     && name[2]=='t'
                     && name[3]=='r'
                     && name[4]=='y'
                     && name[5]=='I'
                     && name[6]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
                    }
                } break;
            }
        } break;
        case 9: {
            switch(name[0]) {
                case 'e': {
                    if (name[1]=='x'
                     && name[2]=='p'
                     && name[3]=='i'
                     && name[4]=='r'
                     && name[5]=='y'
                     && name[6]=='T'
                     && name[7]=='s'
                     && name[8]=='p')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP];
                    }
                } break;
                case 'u': {
                    if (name[1]=='p'
                     && name[2]=='d'
                     && name[3]=='a'
                     && name[4]=='t'
                     && name[5]=='e'
                     && name[6]=='T'
                     && name[7]=='s'
                     && name[8]=='p')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
                    }
                } break;
                case 'v': {
                    if (name[1]=='a'
                     && name[2]=='l'
                     && name[3]=='T'
                     && name[4]=='y'
                     && name[5]=='p'
                     && name[6]=='e'
                     && name[7]=='C'
                     && name[8]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_TYPE_CD];
                    }
                } break;
            }
        } break;
        case 11: {
            if (name[0]=='a'
             && name[1]=='p'
             && name[2]=='i'
             && name[3]=='S'
             && name[4]=='t'
             && name[5]=='a'
             && name[6]=='t'
             && name[7]=='u'
             && name[8]=='s'
             && name[9]=='C'
             && name[10]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS_CD];
            }
        } break;
        case 12: {
            switch(name[0]) {
                case 'i': {
                    if (name[1]=='s'
                     && name[2]=='I'
                     && name[3]=='n'
                     && name[4]=='M'
                     && name[5]=='e'
                     && name[6]=='m'
                     && name[7]=='o'
                     && name[8]=='r'
                     && name[9]=='y'
                     && name[10]=='C'
                     && name[11]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_CD];
                    }
                } break;
                case 's': {
                    if (name[1]=='w'
                     && name[2]=='i'
                     && name[3]=='t'
                     && name[4]=='c'
                     && name[5]=='h'
                     && name[6]=='M'
                     && name[7]=='o'
                     && name[8]=='d'
                     && name[9]=='e'
                     && name[10]=='C'
                     && name[11]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_MODE_CD];
                    }
                } break;
                case 'u': {
                    if (name[1]=='p'
                     && name[2]=='d'
                     && name[3]=='a'
                     && name[4]=='t'
                     && name[5]=='e'
                     && name[6]=='B'
                     && name[7]=='y'
                     && name[8]=='U'
                     && name[9]=='u'
                     && name[10]=='i'
                     && name[11]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
                    }
                } break;
            }
        } break;
        case 13: {
            switch(name[0]) {
                case 'M': {
                    if (name[1]=='a'
                     && name[2]=='x'
                     && name[3]=='N'
                     && name[4]=='o'
                     && name[5]=='O'
                     && name[6]=='f'
                     && name[7]=='V'
                     && name[8]=='a'
                     && name[9]=='l'
                     && name[10]=='u'
                     && name[11]=='e'
                     && name[12]=='s')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NO_OF_VALUES];
                    }
                } break;
                case 'i': {
                    if (name[1]=='s'
                     && name[2]=='T'
                     && name[3]=='e'
                     && name[4]=='m'
                     && name[5]=='p'
                     && name[6]=='o'
                     && name[7]=='r'
                     && name[8]=='a'
                     && name[9]=='r'
                     && name[10]=='y'
                     && name[11]=='C'
                     && name[12]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TEMPORARY_CD];
                    }
                } break;
            }
        } break;
        case 14: {
            if (name[0]=='s'
             && name[1]=='w'
             && name[2]=='i'
             && name[3]=='t'
             && name[4]=='c'
             && name[5]=='h'
             && name[6]=='S'
             && name[7]=='t'
             && name[8]=='a'
             && name[9]=='t'
             && name[10]=='u'
             && name[11]=='s'
             && name[12]=='C'
             && name[13]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_STATUS_CD];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregdbRegistryEntry::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_UPDATE_BY_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_VAL_TYPE_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_TYPE_CD];
      case ATTRIBUTE_ID_IS_IN_MEMORY_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_CD];
      case ATTRIBUTE_ID_IS_TEMPORARY_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TEMPORARY_CD];
      case ATTRIBUTE_ID_API_STATUS_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS_CD];
      case ATTRIBUTE_ID_SWITCH_STATUS_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_STATUS_CD];
      case ATTRIBUTE_ID_SWITCH_MODE_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_MODE_CD];
      case ATTRIBUTE_ID_MAX_NO_OF_VALUES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NO_OF_VALUES];
      case ATTRIBUTE_ID_EXPIRY_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP];
      case ATTRIBUTE_ID_API_NAME:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME];
      default:
        return 0;
    }
}

// CREATORS

BregdbRegistryEntry::BregdbRegistryEntry(bdema_Allocator *basicAllocator)
: d_updateTsp(basicAllocator)
, d_expiryTsp(basicAllocator)
, d_apiName(basicAllocator)
, d_entryId()
, d_updateByUuid()
, d_valTypeCd()
, d_isInMemoryCd()
, d_isTemporaryCd()
, d_apiStatusCd()
, d_switchStatusCd()
, d_switchModeCd()
, d_maxNoOfValues()
{
}

BregdbRegistryEntry::BregdbRegistryEntry(const BregdbRegistryEntry& original,
                                         bdema_Allocator *basicAllocator)
: d_updateTsp(original.d_updateTsp, basicAllocator)
, d_expiryTsp(original.d_expiryTsp, basicAllocator)
, d_apiName(original.d_apiName, basicAllocator)
, d_entryId(original.d_entryId)
, d_updateByUuid(original.d_updateByUuid)
, d_valTypeCd(original.d_valTypeCd)
, d_isInMemoryCd(original.d_isInMemoryCd)
, d_isTemporaryCd(original.d_isTemporaryCd)
, d_apiStatusCd(original.d_apiStatusCd)
, d_switchStatusCd(original.d_switchStatusCd)
, d_switchModeCd(original.d_switchModeCd)
, d_maxNoOfValues(original.d_maxNoOfValues)
{
}

BregdbRegistryEntry::~BregdbRegistryEntry()
{
}

// MANIPULATORS

BregdbRegistryEntry&
BregdbRegistryEntry::operator=(const BregdbRegistryEntry& rhs)
{
    if (this != &rhs) {
        d_entryId = rhs.d_entryId;
        d_updateByUuid = rhs.d_updateByUuid;
        d_updateTsp = rhs.d_updateTsp;
        d_valTypeCd = rhs.d_valTypeCd;
        d_isInMemoryCd = rhs.d_isInMemoryCd;
        d_isTemporaryCd = rhs.d_isTemporaryCd;
        d_apiStatusCd = rhs.d_apiStatusCd;
        d_switchStatusCd = rhs.d_switchStatusCd;
        d_switchModeCd = rhs.d_switchModeCd;
        d_maxNoOfValues = rhs.d_maxNoOfValues;
        d_expiryTsp = rhs.d_expiryTsp;
        d_apiName = rhs.d_apiName;
    }
    return *this;
}

int BregdbRegistryEntry::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateByUuid,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_BY_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valTypeCd,
                       aggregate,
                       ATTRIBUTE_ID_VAL_TYPE_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isInMemoryCd,
                       aggregate,
                       ATTRIBUTE_ID_IS_IN_MEMORY_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_isTemporaryCd,
                       aggregate,
                       ATTRIBUTE_ID_IS_TEMPORARY_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_apiStatusCd,
                       aggregate,
                       ATTRIBUTE_ID_API_STATUS_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_switchStatusCd,
                       aggregate,
                       ATTRIBUTE_ID_SWITCH_STATUS_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_switchModeCd,
                       aggregate,
                       ATTRIBUTE_ID_SWITCH_MODE_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_maxNoOfValues,
                       aggregate,
                       ATTRIBUTE_ID_MAX_NO_OF_VALUES)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_expiryTsp,
                       aggregate,
                       ATTRIBUTE_ID_EXPIRY_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_apiName,
                       aggregate,
                       ATTRIBUTE_ID_API_NAME)))
    {
        return rc;
    }
    return 0;
}

void BregdbRegistryEntry::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_updateByUuid);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_valTypeCd);
    bdeat_ValueTypeFunctions::reset(&d_isInMemoryCd);
    bdeat_ValueTypeFunctions::reset(&d_isTemporaryCd);
    bdeat_ValueTypeFunctions::reset(&d_apiStatusCd);
    bdeat_ValueTypeFunctions::reset(&d_switchStatusCd);
    bdeat_ValueTypeFunctions::reset(&d_switchModeCd);
    bdeat_ValueTypeFunctions::reset(&d_maxNoOfValues);
    bdeat_ValueTypeFunctions::reset(&d_expiryTsp);
    bdeat_ValueTypeFunctions::reset(&d_apiName);
}

// ACCESSORS

std::ostream& BregdbRegistryEntry::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "EntryId = ";
        bdeu_PrintMethods::print(stream, d_entryId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ValTypeCd = ";
        bdeu_PrintMethods::print(stream, d_valTypeCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "IsInMemoryCd = ";
        bdeu_PrintMethods::print(stream, d_isInMemoryCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "IsTemporaryCd = ";
        bdeu_PrintMethods::print(stream, d_isTemporaryCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ApiStatusCd = ";
        bdeu_PrintMethods::print(stream, d_apiStatusCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "SwitchStatusCd = ";
        bdeu_PrintMethods::print(stream, d_switchStatusCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "SwitchModeCd = ";
        bdeu_PrintMethods::print(stream, d_switchModeCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "MaxNoOfValues = ";
        bdeu_PrintMethods::print(stream, d_maxNoOfValues,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ExpiryTsp = ";
        bdeu_PrintMethods::print(stream, d_expiryTsp,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ApiName = ";
        bdeu_PrintMethods::print(stream, d_apiName,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "EntryId = ";
        bdeu_PrintMethods::print(stream, d_entryId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ValTypeCd = ";
        bdeu_PrintMethods::print(stream, d_valTypeCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "IsInMemoryCd = ";
        bdeu_PrintMethods::print(stream, d_isInMemoryCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "IsTemporaryCd = ";
        bdeu_PrintMethods::print(stream, d_isTemporaryCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ApiStatusCd = ";
        bdeu_PrintMethods::print(stream, d_apiStatusCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "SwitchStatusCd = ";
        bdeu_PrintMethods::print(stream, d_switchStatusCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "SwitchModeCd = ";
        bdeu_PrintMethods::print(stream, d_switchModeCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "MaxNoOfValues = ";
        bdeu_PrintMethods::print(stream, d_maxNoOfValues,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ExpiryTsp = ";
        bdeu_PrintMethods::print(stream, d_expiryTsp,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ApiName = ";
        bdeu_PrintMethods::print(stream, d_apiName,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregdbRegistryEntry::toAggregate(bcem_Aggregate *result) const
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
                       ATTRIBUTE_ID_UPDATE_BY_UUID,
                       d_updateByUuid);
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
                       ATTRIBUTE_ID_VAL_TYPE_CD,
                       d_valTypeCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_IN_MEMORY_CD,
                       d_isInMemoryCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_IS_TEMPORARY_CD,
                       d_isTemporaryCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_API_STATUS_CD,
                       d_apiStatusCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SWITCH_STATUS_CD,
                       d_switchStatusCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_SWITCH_MODE_CD,
                       d_switchModeCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_MAX_NO_OF_VALUES,
                       d_maxNoOfValues);
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
                       ATTRIBUTE_ID_API_NAME,
                       d_apiName);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                       // ------------------------------                       
                       // class BregDevValueResponseInfo                       
                       // ------------------------------                       

// CONSTANTS

const char BregDevValueResponseInfo::CLASS_NAME[] = "BregDevValueResponseInfo";

const BregStatus::Value BregDevValueResponseInfo::DEFAULT_INITIALIZER_BREG_STATUS = BregStatus::BREG_ERROR;

const bdeat_AttributeInfo BregDevValueResponseInfo::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_BREG_STATUS,
        "bregStatus",
        sizeof("bregStatus") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_STATUS_STRING,
        "statusString",
        sizeof("statusString") - 1,
        "",
        bdeat_FormattingMode::BDEAT_TEXT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregDevValueResponseInfo::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 10: {
            if (name[0]=='b'
             && name[1]=='r'
             && name[2]=='e'
             && name[3]=='g'
             && name[4]=='S'
             && name[5]=='t'
             && name[6]=='a'
             && name[7]=='t'
             && name[8]=='u'
             && name[9]=='s')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_STATUS];
            }
        } break;
        case 12: {
            if (name[0]=='s'
             && name[1]=='t'
             && name[2]=='a'
             && name[3]=='t'
             && name[4]=='u'
             && name[5]=='s'
             && name[6]=='S'
             && name[7]=='t'
             && name[8]=='r'
             && name[9]=='i'
             && name[10]=='n'
             && name[11]=='g')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS_STRING];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregDevValueResponseInfo::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_BREG_STATUS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_STATUS];
      case ATTRIBUTE_ID_STATUS_STRING:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS_STRING];
      default:
        return 0;
    }
}

// CREATORS

BregDevValueResponseInfo::BregDevValueResponseInfo(bdema_Allocator *basicAllocator)
: d_statusString(basicAllocator)
, d_bregStatus(DEFAULT_INITIALIZER_BREG_STATUS)
{
}

BregDevValueResponseInfo::BregDevValueResponseInfo(const BregDevValueResponseInfo& original,
                                                   bdema_Allocator *basicAllocator)
: d_statusString(original.d_statusString, basicAllocator)
, d_bregStatus(original.d_bregStatus)
{
}

BregDevValueResponseInfo::~BregDevValueResponseInfo()
{
}

// MANIPULATORS

BregDevValueResponseInfo&
BregDevValueResponseInfo::operator=(const BregDevValueResponseInfo& rhs)
{
    if (this != &rhs) {
        d_bregStatus = rhs.d_bregStatus;
        d_statusString = rhs.d_statusString;
    }
    return *this;
}

int BregDevValueResponseInfo::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_statusString,
                       aggregate,
                       ATTRIBUTE_ID_STATUS_STRING)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_bregStatus,
                       aggregate,
                       ATTRIBUTE_ID_BREG_STATUS);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }
    
    return 0;
}

void BregDevValueResponseInfo::reset()
{
    d_bregStatus = DEFAULT_INITIALIZER_BREG_STATUS;
    bdeat_ValueTypeFunctions::reset(&d_statusString);
}

// ACCESSORS

std::ostream& BregDevValueResponseInfo::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "BregStatus = ";
        bdeu_PrintMethods::print(stream, d_bregStatus,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "StatusString = ";
        bdeu_PrintMethods::print(stream, d_statusString,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "BregStatus = ";
        bdeu_PrintMethods::print(stream, d_bregStatus,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "StatusString = ";
        bdeu_PrintMethods::print(stream, d_statusString,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregDevValueResponseInfo::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_BREG_STATUS,
                       d_bregStatus);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_STATUS_STRING,
                       d_statusString);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                        // ---------------------------                         
                        // class BregdbEntryExtTvalAry                         
                        // ---------------------------                         

// CONSTANTS

const char BregdbEntryExtTvalAry::CLASS_NAME[] = "BregdbEntryExtTvalAry";

const bdeat_AttributeInfo BregdbEntryExtTvalAry::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_TVAL_ARY_ID,
        "tvalAryId",
        sizeof("tvalAryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_BY_UUID,
        "updateByUuid",
        sizeof("updateByUuid") - 1,
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
        ATTRIBUTE_ID_LOOKUP_VALUE,
        "lookupValue",
        sizeof("lookupValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_RETURN_VALUE,
        "returnValue",
        sizeof("returnValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ENTRY_TVAL_ID,
        "entryTvalId",
        sizeof("entryTvalId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregdbEntryExtTvalAry::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 9: {
            switch(name[0]) {
                case 't': {
                    if (name[1]=='v'
                     && name[2]=='a'
                     && name[3]=='l'
                     && name[4]=='A'
                     && name[5]=='r'
                     && name[6]=='y'
                     && name[7]=='I'
                     && name[8]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVAL_ARY_ID];
                    }
                } break;
                case 'u': {
                    if (name[1]=='p'
                     && name[2]=='d'
                     && name[3]=='a'
                     && name[4]=='t'
                     && name[5]=='e'
                     && name[6]=='T'
                     && name[7]=='s'
                     && name[8]=='p')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
                    }
                } break;
            }
        } break;
        case 11: {
            switch(name[0]) {
                case 'e': {
                    if (name[1]=='n'
                     && name[2]=='t'
                     && name[3]=='r'
                     && name[4]=='y'
                     && name[5]=='T'
                     && name[6]=='v'
                     && name[7]=='a'
                     && name[8]=='l'
                     && name[9]=='I'
                     && name[10]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID];
                    }
                } break;
                case 'l': {
                    if (name[1]=='o'
                     && name[2]=='o'
                     && name[3]=='k'
                     && name[4]=='u'
                     && name[5]=='p'
                     && name[6]=='V'
                     && name[7]=='a'
                     && name[8]=='l'
                     && name[9]=='u'
                     && name[10]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE];
                    }
                } break;
                case 'r': {
                    if (name[1]=='e'
                     && name[2]=='t'
                     && name[3]=='u'
                     && name[4]=='r'
                     && name[5]=='n'
                     && name[6]=='V'
                     && name[7]=='a'
                     && name[8]=='l'
                     && name[9]=='u'
                     && name[10]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE];
                    }
                } break;
            }
        } break;
        case 12: {
            if (name[0]=='u'
             && name[1]=='p'
             && name[2]=='d'
             && name[3]=='a'
             && name[4]=='t'
             && name[5]=='e'
             && name[6]=='B'
             && name[7]=='y'
             && name[8]=='U'
             && name[9]=='u'
             && name[10]=='i'
             && name[11]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregdbEntryExtTvalAry::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_TVAL_ARY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVAL_ARY_ID];
      case ATTRIBUTE_ID_UPDATE_BY_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_LOOKUP_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE];
      case ATTRIBUTE_ID_RETURN_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE];
      case ATTRIBUTE_ID_ENTRY_TVAL_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID];
      default:
        return 0;
    }
}

// CREATORS

BregdbEntryExtTvalAry::BregdbEntryExtTvalAry(bdema_Allocator *basicAllocator)
: d_updateTsp(basicAllocator)
, d_lookupValue(basicAllocator)
, d_returnValue(basicAllocator)
, d_tvalAryId()
, d_updateByUuid()
, d_entryTvalId()
{
}

BregdbEntryExtTvalAry::BregdbEntryExtTvalAry(const BregdbEntryExtTvalAry& original,
                                             bdema_Allocator *basicAllocator)
: d_updateTsp(original.d_updateTsp, basicAllocator)
, d_lookupValue(original.d_lookupValue, basicAllocator)
, d_returnValue(original.d_returnValue, basicAllocator)
, d_tvalAryId(original.d_tvalAryId)
, d_updateByUuid(original.d_updateByUuid)
, d_entryTvalId(original.d_entryTvalId)
{
}

BregdbEntryExtTvalAry::~BregdbEntryExtTvalAry()
{
}

// MANIPULATORS

BregdbEntryExtTvalAry&
BregdbEntryExtTvalAry::operator=(const BregdbEntryExtTvalAry& rhs)
{
    if (this != &rhs) {
        d_tvalAryId = rhs.d_tvalAryId;
        d_updateByUuid = rhs.d_updateByUuid;
        d_updateTsp = rhs.d_updateTsp;
        d_lookupValue = rhs.d_lookupValue;
        d_returnValue = rhs.d_returnValue;
        d_entryTvalId = rhs.d_entryTvalId;
    }
    return *this;
}

int BregdbEntryExtTvalAry::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_tvalAryId,
                       aggregate,
                       ATTRIBUTE_ID_TVAL_ARY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateByUuid,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_BY_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_lookupValue,
                       aggregate,
                       ATTRIBUTE_ID_LOOKUP_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_returnValue,
                       aggregate,
                       ATTRIBUTE_ID_RETURN_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryTvalId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_TVAL_ID)))
    {
        return rc;
    }
    return 0;
}

void BregdbEntryExtTvalAry::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_tvalAryId);
    bdeat_ValueTypeFunctions::reset(&d_updateByUuid);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_lookupValue);
    bdeat_ValueTypeFunctions::reset(&d_returnValue);
    bdeat_ValueTypeFunctions::reset(&d_entryTvalId);
}

// ACCESSORS

std::ostream& BregdbEntryExtTvalAry::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "TvalAryId = ";
        bdeu_PrintMethods::print(stream, d_tvalAryId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "LookupValue = ";
        bdeu_PrintMethods::print(stream, d_lookupValue,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ReturnValue = ";
        bdeu_PrintMethods::print(stream, d_returnValue,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "EntryTvalId = ";
        bdeu_PrintMethods::print(stream, d_entryTvalId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "TvalAryId = ";
        bdeu_PrintMethods::print(stream, d_tvalAryId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "LookupValue = ";
        bdeu_PrintMethods::print(stream, d_lookupValue,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ReturnValue = ";
        bdeu_PrintMethods::print(stream, d_returnValue,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "EntryTvalId = ";
        bdeu_PrintMethods::print(stream, d_entryTvalId,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregdbEntryExtTvalAry::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TVAL_ARY_ID,
                       d_tvalAryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_BY_UUID,
                       d_updateByUuid);
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
                       ATTRIBUTE_ID_LOOKUP_VALUE,
                       d_lookupValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_RETURN_VALUE,
                       d_returnValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_TVAL_ID,
                       d_entryTvalId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                        // ----------------------------                        
                        // class BregdbEntryExtTvalOvrd                        
                        // ----------------------------                        

// CONSTANTS

const char BregdbEntryExtTvalOvrd::CLASS_NAME[] = "BregdbEntryExtTvalOvrd";

const bdeat_AttributeInfo BregdbEntryExtTvalOvrd::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_TVALA_OVRD_ID,
        "tvalaOvrdId",
        sizeof("tvalaOvrdId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_BY_UUID,
        "updateByUuid",
        sizeof("updateByUuid") - 1,
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
        ATTRIBUTE_ID_TEST_VAL_OVRD_ID,
        "testValOvrdId",
        sizeof("testValOvrdId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_LOOKUP_VALUE,
        "lookupValue",
        sizeof("lookupValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_RETURN_VALUE,
        "returnValue",
        sizeof("returnValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregdbEntryExtTvalOvrd::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 9: {
            if (name[0]=='u'
             && name[1]=='p'
             && name[2]=='d'
             && name[3]=='a'
             && name[4]=='t'
             && name[5]=='e'
             && name[6]=='T'
             && name[7]=='s'
             && name[8]=='p')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
            }
        } break;
        case 11: {
            switch(name[0]) {
                case 'l': {
                    if (name[1]=='o'
                     && name[2]=='o'
                     && name[3]=='k'
                     && name[4]=='u'
                     && name[5]=='p'
                     && name[6]=='V'
                     && name[7]=='a'
                     && name[8]=='l'
                     && name[9]=='u'
                     && name[10]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE];
                    }
                } break;
                case 'r': {
                    if (name[1]=='e'
                     && name[2]=='t'
                     && name[3]=='u'
                     && name[4]=='r'
                     && name[5]=='n'
                     && name[6]=='V'
                     && name[7]=='a'
                     && name[8]=='l'
                     && name[9]=='u'
                     && name[10]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE];
                    }
                } break;
                case 't': {
                    if (name[1]=='v'
                     && name[2]=='a'
                     && name[3]=='l'
                     && name[4]=='a'
                     && name[5]=='O'
                     && name[6]=='v'
                     && name[7]=='r'
                     && name[8]=='d'
                     && name[9]=='I'
                     && name[10]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVALA_OVRD_ID];
                    }
                } break;
            }
        } break;
        case 12: {
            if (name[0]=='u'
             && name[1]=='p'
             && name[2]=='d'
             && name[3]=='a'
             && name[4]=='t'
             && name[5]=='e'
             && name[6]=='B'
             && name[7]=='y'
             && name[8]=='U'
             && name[9]=='u'
             && name[10]=='i'
             && name[11]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
            }
        } break;
        case 13: {
            if (name[0]=='t'
             && name[1]=='e'
             && name[2]=='s'
             && name[3]=='t'
             && name[4]=='V'
             && name[5]=='a'
             && name[6]=='l'
             && name[7]=='O'
             && name[8]=='v'
             && name[9]=='r'
             && name[10]=='d'
             && name[11]=='I'
             && name[12]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregdbEntryExtTvalOvrd::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_TVALA_OVRD_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVALA_OVRD_ID];
      case ATTRIBUTE_ID_UPDATE_BY_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_TEST_VAL_OVRD_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID];
      case ATTRIBUTE_ID_LOOKUP_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE];
      case ATTRIBUTE_ID_RETURN_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE];
      default:
        return 0;
    }
}

// CREATORS

BregdbEntryExtTvalOvrd::BregdbEntryExtTvalOvrd(bdema_Allocator *basicAllocator)
: d_updateTsp(basicAllocator)
, d_lookupValue(basicAllocator)
, d_returnValue(basicAllocator)
, d_tvalaOvrdId()
, d_updateByUuid()
, d_testValOvrdId()
{
}

BregdbEntryExtTvalOvrd::BregdbEntryExtTvalOvrd(const BregdbEntryExtTvalOvrd& original,
                                               bdema_Allocator *basicAllocator)
: d_updateTsp(original.d_updateTsp, basicAllocator)
, d_lookupValue(original.d_lookupValue, basicAllocator)
, d_returnValue(original.d_returnValue, basicAllocator)
, d_tvalaOvrdId(original.d_tvalaOvrdId)
, d_updateByUuid(original.d_updateByUuid)
, d_testValOvrdId(original.d_testValOvrdId)
{
}

BregdbEntryExtTvalOvrd::~BregdbEntryExtTvalOvrd()
{
}

// MANIPULATORS

BregdbEntryExtTvalOvrd&
BregdbEntryExtTvalOvrd::operator=(const BregdbEntryExtTvalOvrd& rhs)
{
    if (this != &rhs) {
        d_tvalaOvrdId = rhs.d_tvalaOvrdId;
        d_updateByUuid = rhs.d_updateByUuid;
        d_updateTsp = rhs.d_updateTsp;
        d_testValOvrdId = rhs.d_testValOvrdId;
        d_lookupValue = rhs.d_lookupValue;
        d_returnValue = rhs.d_returnValue;
    }
    return *this;
}

int BregdbEntryExtTvalOvrd::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_tvalaOvrdId,
                       aggregate,
                       ATTRIBUTE_ID_TVALA_OVRD_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateByUuid,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_BY_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_testValOvrdId,
                       aggregate,
                       ATTRIBUTE_ID_TEST_VAL_OVRD_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_lookupValue,
                       aggregate,
                       ATTRIBUTE_ID_LOOKUP_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_returnValue,
                       aggregate,
                       ATTRIBUTE_ID_RETURN_VALUE)))
    {
        return rc;
    }
    return 0;
}

void BregdbEntryExtTvalOvrd::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_tvalaOvrdId);
    bdeat_ValueTypeFunctions::reset(&d_updateByUuid);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_testValOvrdId);
    bdeat_ValueTypeFunctions::reset(&d_lookupValue);
    bdeat_ValueTypeFunctions::reset(&d_returnValue);
}

// ACCESSORS

std::ostream& BregdbEntryExtTvalOvrd::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "TvalaOvrdId = ";
        bdeu_PrintMethods::print(stream, d_tvalaOvrdId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "TestValOvrdId = ";
        bdeu_PrintMethods::print(stream, d_testValOvrdId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "LookupValue = ";
        bdeu_PrintMethods::print(stream, d_lookupValue,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ReturnValue = ";
        bdeu_PrintMethods::print(stream, d_returnValue,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "TvalaOvrdId = ";
        bdeu_PrintMethods::print(stream, d_tvalaOvrdId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "TestValOvrdId = ";
        bdeu_PrintMethods::print(stream, d_testValOvrdId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "LookupValue = ";
        bdeu_PrintMethods::print(stream, d_lookupValue,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ReturnValue = ";
        bdeu_PrintMethods::print(stream, d_returnValue,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregdbEntryExtTvalOvrd::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TVALA_OVRD_ID,
                       d_tvalaOvrdId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_BY_UUID,
                       d_updateByUuid);
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
                       ATTRIBUTE_ID_TEST_VAL_OVRD_ID,
                       d_testValOvrdId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_LOOKUP_VALUE,
                       d_lookupValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_RETURN_VALUE,
                       d_returnValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                         // --------------------------                         
                         // class BregdbEntryTestValue                         
                         // --------------------------                         

// CONSTANTS

const char BregdbEntryTestValue::CLASS_NAME[] = "BregdbEntryTestValue";

const bdeat_AttributeInfo BregdbEntryTestValue::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_ENTRY_TVAL_ID,
        "entryTvalId",
        sizeof("entryTvalId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_BY_UUID,
        "updateByUuid",
        sizeof("updateByUuid") - 1,
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
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VERSION_NO,
        "versionNo",
        sizeof("versionNo") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VAL_STATUS_CD,
        "valStatusCd",
        sizeof("valStatusCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_ENTRY_VALUE,
        "entryValue",
        sizeof("entryValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ACT_NO_OF_VALUES,
        "actNoOfValues",
        sizeof("actNoOfValues") - 1,
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

const bdeat_AttributeInfo *BregdbEntryTestValue::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 7: {
            switch(name[0]) {
                case 'e': {
                    if (name[1]=='n'
                     && name[2]=='t'
                     && name[3]=='r'
                     && name[4]=='y'
                     && name[5]=='I'
                     && name[6]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
                    }
                } break;
                case 'l': {
                    if (name[1]=='o'
                     && name[2]=='g'
                     && name[3]=='N'
                     && name[4]=='o'
                     && name[5]=='t'
                     && name[6]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE];
                    }
                } break;
            }
        } break;
        case 9: {
            switch(name[0]) {
                case 'u': {
                    if (name[1]=='p'
                     && name[2]=='d'
                     && name[3]=='a'
                     && name[4]=='t'
                     && name[5]=='e'
                     && name[6]=='T'
                     && name[7]=='s'
                     && name[8]=='p')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
                    }
                } break;
                case 'v': {
                    if (name[1]=='e'
                     && name[2]=='r'
                     && name[3]=='s'
                     && name[4]=='i'
                     && name[5]=='o'
                     && name[6]=='n'
                     && name[7]=='N'
                     && name[8]=='o')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO];
                    }
                } break;
            }
        } break;
        case 10: {
            if (name[0]=='e'
             && name[1]=='n'
             && name[2]=='t'
             && name[3]=='r'
             && name[4]=='y'
             && name[5]=='V'
             && name[6]=='a'
             && name[7]=='l'
             && name[8]=='u'
             && name[9]=='e')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE];
            }
        } break;
        case 11: {
            switch(name[0]) {
                case 'e': {
                    if (name[1]=='n'
                     && name[2]=='t'
                     && name[3]=='r'
                     && name[4]=='y'
                     && name[5]=='T'
                     && name[6]=='v'
                     && name[7]=='a'
                     && name[8]=='l'
                     && name[9]=='I'
                     && name[10]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID];
                    }
                } break;
                case 'v': {
                    if (name[1]=='a'
                     && name[2]=='l'
                     && name[3]=='S'
                     && name[4]=='t'
                     && name[5]=='a'
                     && name[6]=='t'
                     && name[7]=='u'
                     && name[8]=='s'
                     && name[9]=='C'
                     && name[10]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_STATUS_CD];
                    }
                } break;
            }
        } break;
        case 12: {
            if (name[0]=='u'
             && name[1]=='p'
             && name[2]=='d'
             && name[3]=='a'
             && name[4]=='t'
             && name[5]=='e'
             && name[6]=='B'
             && name[7]=='y'
             && name[8]=='U'
             && name[9]=='u'
             && name[10]=='i'
             && name[11]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
            }
        } break;
        case 13: {
            if (name[0]=='a'
             && name[1]=='c'
             && name[2]=='t'
             && name[3]=='N'
             && name[4]=='o'
             && name[5]=='O'
             && name[6]=='f'
             && name[7]=='V'
             && name[8]=='a'
             && name[9]=='l'
             && name[10]=='u'
             && name[11]=='e'
             && name[12]=='s')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregdbEntryTestValue::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_ENTRY_TVAL_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID];
      case ATTRIBUTE_ID_UPDATE_BY_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_VERSION_NO:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO];
      case ATTRIBUTE_ID_VAL_STATUS_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_STATUS_CD];
      case ATTRIBUTE_ID_ENTRY_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE];
      case ATTRIBUTE_ID_ACT_NO_OF_VALUES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES];
      case ATTRIBUTE_ID_LOG_NOTE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE];
      default:
        return 0;
    }
}

// CREATORS

BregdbEntryTestValue::BregdbEntryTestValue(bdema_Allocator *basicAllocator)
: d_updateTsp(basicAllocator)
, d_logNote(basicAllocator)
, d_entryValue(basicAllocator)
, d_entryTvalId()
, d_updateByUuid()
, d_entryId()
, d_versionNo()
, d_valStatusCd()
, d_actNoOfValues()
{
}

BregdbEntryTestValue::BregdbEntryTestValue(const BregdbEntryTestValue& original,
                                           bdema_Allocator *basicAllocator)
: d_updateTsp(original.d_updateTsp, basicAllocator)
, d_logNote(original.d_logNote, basicAllocator)
, d_entryValue(original.d_entryValue, basicAllocator)
, d_entryTvalId(original.d_entryTvalId)
, d_updateByUuid(original.d_updateByUuid)
, d_entryId(original.d_entryId)
, d_versionNo(original.d_versionNo)
, d_valStatusCd(original.d_valStatusCd)
, d_actNoOfValues(original.d_actNoOfValues)
{
}

BregdbEntryTestValue::~BregdbEntryTestValue()
{
}

// MANIPULATORS

BregdbEntryTestValue&
BregdbEntryTestValue::operator=(const BregdbEntryTestValue& rhs)
{
    if (this != &rhs) {
        d_entryTvalId = rhs.d_entryTvalId;
        d_updateByUuid = rhs.d_updateByUuid;
        d_updateTsp = rhs.d_updateTsp;
        d_entryId = rhs.d_entryId;
        d_versionNo = rhs.d_versionNo;
        d_valStatusCd = rhs.d_valStatusCd;
        d_entryValue = rhs.d_entryValue;
        d_actNoOfValues = rhs.d_actNoOfValues;
        d_logNote = rhs.d_logNote;
    }
    return *this;
}

int BregdbEntryTestValue::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryTvalId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_TVAL_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateByUuid,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_BY_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_versionNo,
                       aggregate,
                       ATTRIBUTE_ID_VERSION_NO)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valStatusCd,
                       aggregate,
                       ATTRIBUTE_ID_VAL_STATUS_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryValue,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_actNoOfValues,
                       aggregate,
                       ATTRIBUTE_ID_ACT_NO_OF_VALUES)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_logNote,
                       aggregate,
                       ATTRIBUTE_ID_LOG_NOTE)))
    {
        return rc;
    }
    return 0;
}

void BregdbEntryTestValue::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_entryTvalId);
    bdeat_ValueTypeFunctions::reset(&d_updateByUuid);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_versionNo);
    bdeat_ValueTypeFunctions::reset(&d_valStatusCd);
    bdeat_ValueTypeFunctions::reset(&d_entryValue);
    bdeat_ValueTypeFunctions::reset(&d_actNoOfValues);
    bdeat_ValueTypeFunctions::reset(&d_logNote);
}

// ACCESSORS

std::ostream& BregdbEntryTestValue::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "EntryTvalId = ";
        bdeu_PrintMethods::print(stream, d_entryTvalId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "EntryId = ";
        bdeu_PrintMethods::print(stream, d_entryId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "VersionNo = ";
        bdeu_PrintMethods::print(stream, d_versionNo,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ValStatusCd = ";
        bdeu_PrintMethods::print(stream, d_valStatusCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "EntryValue = ";
        bdeu_PrintMethods::print(stream, d_entryValue,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ActNoOfValues = ";
        bdeu_PrintMethods::print(stream, d_actNoOfValues,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "LogNote = ";
        bdeu_PrintMethods::print(stream, d_logNote,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "EntryTvalId = ";
        bdeu_PrintMethods::print(stream, d_entryTvalId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "EntryId = ";
        bdeu_PrintMethods::print(stream, d_entryId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "VersionNo = ";
        bdeu_PrintMethods::print(stream, d_versionNo,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ValStatusCd = ";
        bdeu_PrintMethods::print(stream, d_valStatusCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "EntryValue = ";
        bdeu_PrintMethods::print(stream, d_entryValue,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ActNoOfValues = ";
        bdeu_PrintMethods::print(stream, d_actNoOfValues,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "LogNote = ";
        bdeu_PrintMethods::print(stream, d_logNote,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregdbEntryTestValue::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ENTRY_TVAL_ID,
                       d_entryTvalId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_BY_UUID,
                       d_updateByUuid);
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
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VERSION_NO,
                       d_versionNo);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VAL_STATUS_CD,
                       d_valStatusCd);
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
                       ATTRIBUTE_ID_ACT_NO_OF_VALUES,
                       d_actNoOfValues);
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


                         // -------------------------                          
                         // class BregdbEntryTvalOvrd                          
                         // -------------------------                          

// CONSTANTS

const char BregdbEntryTvalOvrd::CLASS_NAME[] = "BregdbEntryTvalOvrd";

const bdeat_AttributeInfo BregdbEntryTvalOvrd::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_TEST_VAL_OVRD_ID,
        "testValOvrdId",
        sizeof("testValOvrdId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_UPDATE_BY_UUID,
        "updateByUuid",
        sizeof("updateByUuid") - 1,
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
        ATTRIBUTE_ID_ENTRY_ID,
        "entryId",
        sizeof("entryId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_OVERRIDE_SEQ,
        "overrideSeq",
        sizeof("overrideSeq") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TARGET_TYPE_CD,
        "targetTypeCd",
        sizeof("targetTypeCd") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_VERSION_NO,
        "versionNo",
        sizeof("versionNo") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_TARGET_OVRD_ID,
        "targetOvrdId",
        sizeof("targetOvrdId") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_OVRD_VALUE,
        "ovrdValue",
        sizeof("ovrdValue") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_ACT_NO_OF_VALUES,
        "actNoOfValues",
        sizeof("actNoOfValues") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregdbEntryTvalOvrd::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 7: {
            if (name[0]=='e'
             && name[1]=='n'
             && name[2]=='t'
             && name[3]=='r'
             && name[4]=='y'
             && name[5]=='I'
             && name[6]=='d')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
            }
        } break;
        case 9: {
            switch(name[0]) {
                case 'o': {
                    if (name[1]=='v'
                     && name[2]=='r'
                     && name[3]=='d'
                     && name[4]=='V'
                     && name[5]=='a'
                     && name[6]=='l'
                     && name[7]=='u'
                     && name[8]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVRD_VALUE];
                    }
                } break;
                case 'u': {
                    if (name[1]=='p'
                     && name[2]=='d'
                     && name[3]=='a'
                     && name[4]=='t'
                     && name[5]=='e'
                     && name[6]=='T'
                     && name[7]=='s'
                     && name[8]=='p')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
                    }
                } break;
                case 'v': {
                    if (name[1]=='e'
                     && name[2]=='r'
                     && name[3]=='s'
                     && name[4]=='i'
                     && name[5]=='o'
                     && name[6]=='n'
                     && name[7]=='N'
                     && name[8]=='o')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO];
                    }
                } break;
            }
        } break;
        case 11: {
            if (name[0]=='o'
             && name[1]=='v'
             && name[2]=='e'
             && name[3]=='r'
             && name[4]=='r'
             && name[5]=='i'
             && name[6]=='d'
             && name[7]=='e'
             && name[8]=='S'
             && name[9]=='e'
             && name[10]=='q')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_SEQ];
            }
        } break;
        case 12: {
            switch(name[0]) {
                case 't': {
                    if (name[1]=='a'
                     && name[2]=='r'
                     && name[3]=='g'
                     && name[4]=='e'
                     && name[5]=='t')
                    {
                        switch(name[6]) {
                            case 'O': {
                                if (name[7]=='v'
                                 && name[8]=='r'
                                 && name[9]=='d'
                                 && name[10]=='I'
                                 && name[11]=='d')
                                {
                                    return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_OVRD_ID];
                                }
                            } break;
                            case 'T': {
                                if (name[7]=='y'
                                 && name[8]=='p'
                                 && name[9]=='e'
                                 && name[10]=='C'
                                 && name[11]=='d')
                                {
                                    return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_TYPE_CD];
                                }
                            } break;
                        }
                    }
                } break;
                case 'u': {
                    if (name[1]=='p'
                     && name[2]=='d'
                     && name[3]=='a'
                     && name[4]=='t'
                     && name[5]=='e'
                     && name[6]=='B'
                     && name[7]=='y'
                     && name[8]=='U'
                     && name[9]=='u'
                     && name[10]=='i'
                     && name[11]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
                    }
                } break;
            }
        } break;
        case 13: {
            switch(name[0]) {
                case 'a': {
                    if (name[1]=='c'
                     && name[2]=='t'
                     && name[3]=='N'
                     && name[4]=='o'
                     && name[5]=='O'
                     && name[6]=='f'
                     && name[7]=='V'
                     && name[8]=='a'
                     && name[9]=='l'
                     && name[10]=='u'
                     && name[11]=='e'
                     && name[12]=='s')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES];
                    }
                } break;
                case 't': {
                    if (name[1]=='e'
                     && name[2]=='s'
                     && name[3]=='t'
                     && name[4]=='V'
                     && name[5]=='a'
                     && name[6]=='l'
                     && name[7]=='O'
                     && name[8]=='v'
                     && name[9]=='r'
                     && name[10]=='d'
                     && name[11]=='I'
                     && name[12]=='d')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID];
                    }
                } break;
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregdbEntryTvalOvrd::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_TEST_VAL_OVRD_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID];
      case ATTRIBUTE_ID_UPDATE_BY_UUID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID];
      case ATTRIBUTE_ID_UPDATE_TSP:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP];
      case ATTRIBUTE_ID_ENTRY_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID];
      case ATTRIBUTE_ID_OVERRIDE_SEQ:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_SEQ];
      case ATTRIBUTE_ID_TARGET_TYPE_CD:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_TYPE_CD];
      case ATTRIBUTE_ID_VERSION_NO:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO];
      case ATTRIBUTE_ID_TARGET_OVRD_ID:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_OVRD_ID];
      case ATTRIBUTE_ID_OVRD_VALUE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVRD_VALUE];
      case ATTRIBUTE_ID_ACT_NO_OF_VALUES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES];
      default:
        return 0;
    }
}

// CREATORS

BregdbEntryTvalOvrd::BregdbEntryTvalOvrd(bdema_Allocator *basicAllocator)
: d_updateTsp(basicAllocator)
, d_ovrdValue(basicAllocator)
, d_testValOvrdId()
, d_updateByUuid()
, d_entryId()
, d_overrideSeq()
, d_targetTypeCd()
, d_versionNo()
, d_targetOvrdId()
, d_actNoOfValues()
{
}

BregdbEntryTvalOvrd::BregdbEntryTvalOvrd(const BregdbEntryTvalOvrd& original,
                                         bdema_Allocator *basicAllocator)
: d_updateTsp(original.d_updateTsp, basicAllocator)
, d_ovrdValue(original.d_ovrdValue, basicAllocator)
, d_testValOvrdId(original.d_testValOvrdId)
, d_updateByUuid(original.d_updateByUuid)
, d_entryId(original.d_entryId)
, d_overrideSeq(original.d_overrideSeq)
, d_targetTypeCd(original.d_targetTypeCd)
, d_versionNo(original.d_versionNo)
, d_targetOvrdId(original.d_targetOvrdId)
, d_actNoOfValues(original.d_actNoOfValues)
{
}

BregdbEntryTvalOvrd::~BregdbEntryTvalOvrd()
{
}

// MANIPULATORS

BregdbEntryTvalOvrd&
BregdbEntryTvalOvrd::operator=(const BregdbEntryTvalOvrd& rhs)
{
    if (this != &rhs) {
        d_testValOvrdId = rhs.d_testValOvrdId;
        d_updateByUuid = rhs.d_updateByUuid;
        d_updateTsp = rhs.d_updateTsp;
        d_entryId = rhs.d_entryId;
        d_overrideSeq = rhs.d_overrideSeq;
        d_targetTypeCd = rhs.d_targetTypeCd;
        d_versionNo = rhs.d_versionNo;
        d_targetOvrdId = rhs.d_targetOvrdId;
        d_ovrdValue = rhs.d_ovrdValue;
        d_actNoOfValues = rhs.d_actNoOfValues;
    }
    return *this;
}

int BregdbEntryTvalOvrd::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_testValOvrdId,
                       aggregate,
                       ATTRIBUTE_ID_TEST_VAL_OVRD_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateByUuid,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_BY_UUID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_updateTsp,
                       aggregate,
                       ATTRIBUTE_ID_UPDATE_TSP)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_entryId,
                       aggregate,
                       ATTRIBUTE_ID_ENTRY_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_overrideSeq,
                       aggregate,
                       ATTRIBUTE_ID_OVERRIDE_SEQ)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_targetTypeCd,
                       aggregate,
                       ATTRIBUTE_ID_TARGET_TYPE_CD)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_versionNo,
                       aggregate,
                       ATTRIBUTE_ID_VERSION_NO)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_targetOvrdId,
                       aggregate,
                       ATTRIBUTE_ID_TARGET_OVRD_ID)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_ovrdValue,
                       aggregate,
                       ATTRIBUTE_ID_OVRD_VALUE)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_actNoOfValues,
                       aggregate,
                       ATTRIBUTE_ID_ACT_NO_OF_VALUES)))
    {
        return rc;
    }
    return 0;
}

void BregdbEntryTvalOvrd::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_testValOvrdId);
    bdeat_ValueTypeFunctions::reset(&d_updateByUuid);
    bdeat_ValueTypeFunctions::reset(&d_updateTsp);
    bdeat_ValueTypeFunctions::reset(&d_entryId);
    bdeat_ValueTypeFunctions::reset(&d_overrideSeq);
    bdeat_ValueTypeFunctions::reset(&d_targetTypeCd);
    bdeat_ValueTypeFunctions::reset(&d_versionNo);
    bdeat_ValueTypeFunctions::reset(&d_targetOvrdId);
    bdeat_ValueTypeFunctions::reset(&d_ovrdValue);
    bdeat_ValueTypeFunctions::reset(&d_actNoOfValues);
}

// ACCESSORS

std::ostream& BregdbEntryTvalOvrd::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "TestValOvrdId = ";
        bdeu_PrintMethods::print(stream, d_testValOvrdId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "EntryId = ";
        bdeu_PrintMethods::print(stream, d_entryId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "OverrideSeq = ";
        bdeu_PrintMethods::print(stream, d_overrideSeq,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "TargetTypeCd = ";
        bdeu_PrintMethods::print(stream, d_targetTypeCd,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "VersionNo = ";
        bdeu_PrintMethods::print(stream, d_versionNo,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "TargetOvrdId = ";
        bdeu_PrintMethods::print(stream, d_targetOvrdId,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "OvrdValue = ";
        bdeu_PrintMethods::print(stream, d_ovrdValue,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ActNoOfValues = ";
        bdeu_PrintMethods::print(stream, d_actNoOfValues,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "TestValOvrdId = ";
        bdeu_PrintMethods::print(stream, d_testValOvrdId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateByUuid = ";
        bdeu_PrintMethods::print(stream, d_updateByUuid,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "UpdateTsp = ";
        bdeu_PrintMethods::print(stream, d_updateTsp,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "EntryId = ";
        bdeu_PrintMethods::print(stream, d_entryId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "OverrideSeq = ";
        bdeu_PrintMethods::print(stream, d_overrideSeq,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "TargetTypeCd = ";
        bdeu_PrintMethods::print(stream, d_targetTypeCd,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "VersionNo = ";
        bdeu_PrintMethods::print(stream, d_versionNo,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "TargetOvrdId = ";
        bdeu_PrintMethods::print(stream, d_targetOvrdId,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "OvrdValue = ";
        bdeu_PrintMethods::print(stream, d_ovrdValue,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ActNoOfValues = ";
        bdeu_PrintMethods::print(stream, d_actNoOfValues,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregdbEntryTvalOvrd::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TEST_VAL_OVRD_ID,
                       d_testValOvrdId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_UPDATE_BY_UUID,
                       d_updateByUuid);
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
                       ATTRIBUTE_ID_ENTRY_ID,
                       d_entryId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OVERRIDE_SEQ,
                       d_overrideSeq);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TARGET_TYPE_CD,
                       d_targetTypeCd);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VERSION_NO,
                       d_versionNo);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_TARGET_OVRD_ID,
                       d_targetOvrdId);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OVRD_VALUE,
                       d_ovrdValue);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_ACT_NO_OF_VALUES,
                       d_actNoOfValues);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                            // -------------------                             
                            // class ExtOvrValList                             
                            // -------------------                             

// CONSTANTS

const char ExtOvrValList::CLASS_NAME[] = "ExtOvrValList";

const bdeat_AttributeInfo ExtOvrValList::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_EXT_OVR_VAL,
        "extOvrVal",
        sizeof("extOvrVal") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *ExtOvrValList::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 9: {
            if (name[0]=='e'
             && name[1]=='x'
             && name[2]=='t'
             && name[3]=='O'
             && name[4]=='v'
             && name[5]=='r'
             && name[6]=='V'
             && name[7]=='a'
             && name[8]=='l')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_VAL];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *ExtOvrValList::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_EXT_OVR_VAL:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_VAL];
      default:
        return 0;
    }
}

// CREATORS

ExtOvrValList::ExtOvrValList(bdema_Allocator *basicAllocator)
: d_extOvrVal(basicAllocator)
{
}

ExtOvrValList::ExtOvrValList(const ExtOvrValList& original,
                             bdema_Allocator *basicAllocator)
: d_extOvrVal(original.d_extOvrVal, basicAllocator)
{
}

ExtOvrValList::~ExtOvrValList()
{
}

// MANIPULATORS

ExtOvrValList&
ExtOvrValList::operator=(const ExtOvrValList& rhs)
{
    if (this != &rhs) {
        d_extOvrVal = rhs.d_extOvrVal;
    }
    return *this;
}

int ExtOvrValList::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_extOvrVal,
                       aggregate,
                       ATTRIBUTE_ID_EXT_OVR_VAL);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }
    
    return 0;
}

void ExtOvrValList::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_extOvrVal);
}

// ACCESSORS

std::ostream& ExtOvrValList::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ExtOvrVal = ";
        bdeu_PrintMethods::print(stream, d_extOvrVal,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "ExtOvrVal = ";
        bdeu_PrintMethods::print(stream, d_extOvrVal,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int ExtOvrValList::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EXT_OVR_VAL,
                       d_extOvrVal);
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
        SELECTION_ID_BREG_DEV_VALUE_RESPONSE,
        "bregDevValueResponse",
        sizeof("bregDevValueResponse") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *Response::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 20: {
            if (name[0]=='b'
             && name[1]=='r'
             && name[2]=='e'
             && name[3]=='g'
             && name[4]=='D'
             && name[5]=='e'
             && name[6]=='v'
             && name[7]=='V'
             && name[8]=='a'
             && name[9]=='l'
             && name[10]=='u'
             && name[11]=='e'
             && name[12]=='R'
             && name[13]=='e'
             && name[14]=='s'
             && name[15]=='p'
             && name[16]=='o'
             && name[17]=='n'
             && name[18]=='s'
             && name[19]=='e')
            {
                return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_DEV_VALUE_RESPONSE];
            }
        } break;
    }
    return 0;
}

const bdeat_SelectionInfo *Response::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_DEV_VALUE_RESPONSE];
      default:
        return 0;
    }
}

// CREATORS

Response::Response(
    const Response& original,
    bdema_Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bdema_Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
        new (d_bregDevValueResponse.buffer())
            BregDevValueResponseInfo(
                original.d_bregDevValueResponse.object(), d_allocator_p);
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
          case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
            makeBregDevValueResponse(rhs.d_bregDevValueResponse.object());
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
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
        rc = bcem_AggregateUtil::fromAggregate(&makeBregDevValueResponse(),
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
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
        d_bregDevValueResponse.object().~BregDevValueResponseInfo();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int Response::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
        makeBregDevValueResponse();
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

BregDevValueResponseInfo& Response::makeBregDevValueResponse()
{
    if (SELECTION_ID_BREG_DEV_VALUE_RESPONSE == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_bregDevValueResponse.object());
    }
    else {
        reset();
        new (d_bregDevValueResponse.buffer())
                BregDevValueResponseInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_BREG_DEV_VALUE_RESPONSE;
    }

    return d_bregDevValueResponse.object();
}

BregDevValueResponseInfo& Response::makeBregDevValueResponse(const BregDevValueResponseInfo& value)
{
    if (SELECTION_ID_BREG_DEV_VALUE_RESPONSE == d_selectionId) {
        d_bregDevValueResponse.object() = value;
    }
    else {
        reset();
        new (d_bregDevValueResponse.buffer())
                BregDevValueResponseInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_BREG_DEV_VALUE_RESPONSE;
    }

    return d_bregDevValueResponse.object();
}

// ACCESSORS

std::ostream& Response::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";
        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);

        switch (d_selectionId) {
          case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
            stream << "BregDevValueResponse = ";
            bdeu_PrintMethods::print(stream, d_bregDevValueResponse.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          default:
            stream << "SELECTION UNDEFINED\n";
        }
        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << "[ ";

        switch (d_selectionId) {
          case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
            stream << "BregDevValueResponse = ";
            bdeu_PrintMethods::print(stream, d_bregDevValueResponse.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          default:
            stream << "SELECTION UNDEFINED";
        }

        stream << " ]";
    }

    return stream << std::flush;
}

int Response::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
        const BregDevValueResponseInfo& source = bregDevValueResponse();
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
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_DEV_VALUE_RESPONSE].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}

                        // ---------------------------                         
                        // class BregDevelopmentValues                         
                        // ---------------------------                         

// CONSTANTS

const char BregDevelopmentValues::CLASS_NAME[] = "BregDevelopmentValues";

const BregValueType::Value BregDevelopmentValues::DEFAULT_INITIALIZER_VALUE_TYPE = BregValueType::BREG_VALUE_TYPE_BOOLEAN;

const bdeat_AttributeInfo BregDevelopmentValues::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_NUM_OVERRIDES,
        "numOverrides",
        sizeof("numOverrides") - 1,
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
        ATTRIBUTE_ID_SPECIAL_BITS,
        "specialBits",
        sizeof("specialBits") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEC
    },
    {
        ATTRIBUTE_ID_REGISTRY_ENTRY,
        "registryEntry",
        sizeof("registryEntry") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_VALUE_REC,
        "valueRec",
        sizeof("valueRec") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_OVERRIDE_VAL,
        "overrideVal",
        sizeof("overrideVal") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_EXT_REG_VAL,
        "extRegVal",
        sizeof("extRegVal") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        ATTRIBUTE_ID_EXT_OVR_LIST,
        "extOvrList",
        sizeof("extOvrList") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregDevelopmentValues::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 8: {
            if (name[0]=='v'
             && name[1]=='a'
             && name[2]=='l'
             && name[3]=='u'
             && name[4]=='e'
             && name[5]=='R'
             && name[6]=='e'
             && name[7]=='c')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_REC];
            }
        } break;
        case 9: {
            switch(name[0]) {
                case 'e': {
                    if (name[1]=='x'
                     && name[2]=='t'
                     && name[3]=='R'
                     && name[4]=='e'
                     && name[5]=='g'
                     && name[6]=='V'
                     && name[7]=='a'
                     && name[8]=='l')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_REG_VAL];
                    }
                } break;
                case 'v': {
                    if (name[1]=='a'
                     && name[2]=='l'
                     && name[3]=='u'
                     && name[4]=='e'
                     && name[5]=='T'
                     && name[6]=='y'
                     && name[7]=='p'
                     && name[8]=='e')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE];
                    }
                } break;
            }
        } break;
        case 10: {
            if (name[0]=='e'
             && name[1]=='x'
             && name[2]=='t'
             && name[3]=='O'
             && name[4]=='v'
             && name[5]=='r'
             && name[6]=='L'
             && name[7]=='i'
             && name[8]=='s'
             && name[9]=='t')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_LIST];
            }
        } break;
        case 11: {
            switch(name[0]) {
                case 'o': {
                    if (name[1]=='v'
                     && name[2]=='e'
                     && name[3]=='r'
                     && name[4]=='r'
                     && name[5]=='i'
                     && name[6]=='d'
                     && name[7]=='e'
                     && name[8]=='V'
                     && name[9]=='a'
                     && name[10]=='l')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_VAL];
                    }
                } break;
                case 's': {
                    if (name[1]=='p'
                     && name[2]=='e'
                     && name[3]=='c'
                     && name[4]=='i'
                     && name[5]=='a'
                     && name[6]=='l'
                     && name[7]=='B'
                     && name[8]=='i'
                     && name[9]=='t'
                     && name[10]=='s')
                    {
                        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SPECIAL_BITS];
                    }
                } break;
            }
        } break;
        case 12: {
            if (name[0]=='n'
             && name[1]=='u'
             && name[2]=='m'
             && name[3]=='O'
             && name[4]=='v'
             && name[5]=='e'
             && name[6]=='r'
             && name[7]=='r'
             && name[8]=='i'
             && name[9]=='d'
             && name[10]=='e'
             && name[11]=='s')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUM_OVERRIDES];
            }
        } break;
        case 13: {
            if (name[0]=='r'
             && name[1]=='e'
             && name[2]=='g'
             && name[3]=='i'
             && name[4]=='s'
             && name[5]=='t'
             && name[6]=='r'
             && name[7]=='y'
             && name[8]=='E'
             && name[9]=='n'
             && name[10]=='t'
             && name[11]=='r'
             && name[12]=='y')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ENTRY];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregDevelopmentValues::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_NUM_OVERRIDES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUM_OVERRIDES];
      case ATTRIBUTE_ID_VALUE_TYPE:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE];
      case ATTRIBUTE_ID_SPECIAL_BITS:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SPECIAL_BITS];
      case ATTRIBUTE_ID_REGISTRY_ENTRY:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ENTRY];
      case ATTRIBUTE_ID_VALUE_REC:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_REC];
      case ATTRIBUTE_ID_OVERRIDE_VAL:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_VAL];
      case ATTRIBUTE_ID_EXT_REG_VAL:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_REG_VAL];
      case ATTRIBUTE_ID_EXT_OVR_LIST:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_LIST];
      default:
        return 0;
    }
}

// CREATORS

BregDevelopmentValues::BregDevelopmentValues(bdema_Allocator *basicAllocator)
: d_extOvrList(basicAllocator)
, d_overrideVal(basicAllocator)
, d_extRegVal(basicAllocator)
, d_registryEntry(basicAllocator)
, d_valueRec(basicAllocator)
, d_numOverrides()
, d_specialBits()
, d_valueType(DEFAULT_INITIALIZER_VALUE_TYPE)
{
}

BregDevelopmentValues::BregDevelopmentValues(const BregDevelopmentValues& original,
                                             bdema_Allocator *basicAllocator)
: d_extOvrList(original.d_extOvrList, basicAllocator)
, d_overrideVal(original.d_overrideVal, basicAllocator)
, d_extRegVal(original.d_extRegVal, basicAllocator)
, d_registryEntry(original.d_registryEntry, basicAllocator)
, d_valueRec(original.d_valueRec, basicAllocator)
, d_numOverrides(original.d_numOverrides)
, d_specialBits(original.d_specialBits)
, d_valueType(original.d_valueType)
{
}

BregDevelopmentValues::~BregDevelopmentValues()
{
}

// MANIPULATORS

BregDevelopmentValues&
BregDevelopmentValues::operator=(const BregDevelopmentValues& rhs)
{
    if (this != &rhs) {
        d_numOverrides = rhs.d_numOverrides;
        d_valueType = rhs.d_valueType;
        d_specialBits = rhs.d_specialBits;
        d_registryEntry = rhs.d_registryEntry;
        d_valueRec = rhs.d_valueRec;
        d_overrideVal = rhs.d_overrideVal;
        d_extRegVal = rhs.d_extRegVal;
        d_extOvrList = rhs.d_extOvrList;
    }
    return *this;
}

int BregDevelopmentValues::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_numOverrides,
                       aggregate,
                       ATTRIBUTE_ID_NUM_OVERRIDES)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_specialBits,
                       aggregate,
                       ATTRIBUTE_ID_SPECIAL_BITS)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_registryEntry,
                       aggregate,
                       ATTRIBUTE_ID_REGISTRY_ENTRY)) ||
        (rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueRec,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_REC)))
    {
        return rc;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_valueType,
                       aggregate,
                       ATTRIBUTE_ID_VALUE_TYPE);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_overrideVal,
                       aggregate,
                       ATTRIBUTE_ID_OVERRIDE_VAL);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_extRegVal,
                       aggregate,
                       ATTRIBUTE_ID_EXT_REG_VAL);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }

    rc = bcem_AggregateUtil::fromAggregate(
                       &d_extOvrList,
                       aggregate,
                       ATTRIBUTE_ID_EXT_OVR_LIST);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return -1;
    }
    
    return 0;
}

void BregDevelopmentValues::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_numOverrides);
    d_valueType = DEFAULT_INITIALIZER_VALUE_TYPE;
    bdeat_ValueTypeFunctions::reset(&d_specialBits);
    bdeat_ValueTypeFunctions::reset(&d_registryEntry);
    bdeat_ValueTypeFunctions::reset(&d_valueRec);
    bdeat_ValueTypeFunctions::reset(&d_overrideVal);
    bdeat_ValueTypeFunctions::reset(&d_extRegVal);
    bdeat_ValueTypeFunctions::reset(&d_extOvrList);
}

// ACCESSORS

std::ostream& BregDevelopmentValues::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "NumOverrides = ";
        bdeu_PrintMethods::print(stream, d_numOverrides,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ValueType = ";
        bdeu_PrintMethods::print(stream, d_valueType,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "SpecialBits = ";
        bdeu_PrintMethods::print(stream, d_specialBits,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "RegistryEntry = ";
        bdeu_PrintMethods::print(stream, d_registryEntry,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ValueRec = ";
        bdeu_PrintMethods::print(stream, d_valueRec,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "OverrideVal = ";
        bdeu_PrintMethods::print(stream, d_overrideVal,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ExtRegVal = ";
        bdeu_PrintMethods::print(stream, d_extRegVal,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "ExtOvrList = ";
        bdeu_PrintMethods::print(stream, d_extOvrList,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "NumOverrides = ";
        bdeu_PrintMethods::print(stream, d_numOverrides,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ValueType = ";
        bdeu_PrintMethods::print(stream, d_valueType,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "SpecialBits = ";
        bdeu_PrintMethods::print(stream, d_specialBits,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "RegistryEntry = ";
        bdeu_PrintMethods::print(stream, d_registryEntry,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ValueRec = ";
        bdeu_PrintMethods::print(stream, d_valueRec,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "OverrideVal = ";
        bdeu_PrintMethods::print(stream, d_overrideVal,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ExtRegVal = ";
        bdeu_PrintMethods::print(stream, d_extRegVal,
                                 -levelPlus1, spacesPerLevel);

        stream << ' ';
        stream << "ExtOvrList = ";
        bdeu_PrintMethods::print(stream, d_extOvrList,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregDevelopmentValues::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_NUM_OVERRIDES,
                       d_numOverrides);
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
                       ATTRIBUTE_ID_SPECIAL_BITS,
                       d_specialBits);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_REGISTRY_ENTRY,
                       d_registryEntry);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_VALUE_REC,
                       d_valueRec);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_OVERRIDE_VAL,
                       d_overrideVal);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EXT_REG_VAL,
                       d_extRegVal);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_EXT_OVR_LIST,
                       d_extOvrList);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                       // -----------------------------                        
                       // class BregDevValueRequestInfo                        
                       // -----------------------------                        

// CONSTANTS

const char BregDevValueRequestInfo::CLASS_NAME[] = "BregDevValueRequestInfo";

const bdeat_AttributeInfo BregDevValueRequestInfo::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_BREG_DEV_VALUES,
        "bregDevValues",
        sizeof("bregDevValues") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_AttributeInfo *BregDevValueRequestInfo::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 13: {
            if (name[0]=='b'
             && name[1]=='r'
             && name[2]=='e'
             && name[3]=='g'
             && name[4]=='D'
             && name[5]=='e'
             && name[6]=='v'
             && name[7]=='V'
             && name[8]=='a'
             && name[9]=='l'
             && name[10]=='u'
             && name[11]=='e'
             && name[12]=='s')
            {
                return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_DEV_VALUES];
            }
        } break;
    }
    return 0;
}

const bdeat_AttributeInfo *BregDevValueRequestInfo::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_BREG_DEV_VALUES:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_DEV_VALUES];
      default:
        return 0;
    }
}

// CREATORS

BregDevValueRequestInfo::BregDevValueRequestInfo(bdema_Allocator *basicAllocator)
: d_bregDevValues(basicAllocator)
{
}

BregDevValueRequestInfo::BregDevValueRequestInfo(const BregDevValueRequestInfo& original,
                                                 bdema_Allocator *basicAllocator)
: d_bregDevValues(original.d_bregDevValues, basicAllocator)
{
}

BregDevValueRequestInfo::~BregDevValueRequestInfo()
{
}

// MANIPULATORS

BregDevValueRequestInfo&
BregDevValueRequestInfo::operator=(const BregDevValueRequestInfo& rhs)
{
    if (this != &rhs) {
        d_bregDevValues = rhs.d_bregDevValues;
    }
    return *this;
}

int BregDevValueRequestInfo::fromAggregate(const bcem_Aggregate& aggregate)
{
    int rc;
    if ((rc = bcem_AggregateUtil::fromAggregate(
                       &d_bregDevValues,
                       aggregate,
                       ATTRIBUTE_ID_BREG_DEV_VALUES)))
    {
        return rc;
    }
    return 0;
}

void BregDevValueRequestInfo::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_bregDevValues);
}

// ACCESSORS

std::ostream& BregDevValueRequestInfo::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";

        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);
        stream << "BregDevValues = ";
        bdeu_PrintMethods::print(stream, d_bregDevValues,
                                 -levelPlus1, spacesPerLevel);

        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << '[';

        stream << ' ';
        stream << "BregDevValues = ";
        bdeu_PrintMethods::print(stream, d_bregDevValues,
                                 -levelPlus1, spacesPerLevel);

        stream << " ]";
    }

    return stream << std::flush;
}

int BregDevValueRequestInfo::toAggregate(bcem_Aggregate *result) const
{
    int rc;

    rc = bcem_AggregateUtil::toAggregate(
                       result,
                       ATTRIBUTE_ID_BREG_DEV_VALUES,
                       d_bregDevValues);
    if (rc != 0 && rc != bcem_Aggregate::BCEM_ERR_BAD_FIELDID) {
        return rc;
    }

    return 0;
}


                               // -------------                                
                               // class Request                                
                               // -------------                                

// CONSTANTS

const char Request::CLASS_NAME[] = "Request";

const bdeat_SelectionInfo Request::SELECTION_INFO_ARRAY[] = {
    {
        SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST,
        "bregPropagateDevValueRequest",
        sizeof("bregPropagateDevValueRequest") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    },
    {
        SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST,
        "bregOneWayPropagateDevValueRequest",
        sizeof("bregOneWayPropagateDevValueRequest") - 1,
        "",
        bdeat_FormattingMode::BDEAT_DEFAULT
    }
};

// CLASS METHODS

const bdeat_SelectionInfo *Request::lookupSelectionInfo(
        const char *name,
        int         nameLength)
{
    switch(nameLength) {
        case 28: {
            if (name[0]=='b'
             && name[1]=='r'
             && name[2]=='e'
             && name[3]=='g'
             && name[4]=='P'
             && name[5]=='r'
             && name[6]=='o'
             && name[7]=='p'
             && name[8]=='a'
             && name[9]=='g'
             && name[10]=='a'
             && name[11]=='t'
             && name[12]=='e'
             && name[13]=='D'
             && name[14]=='e'
             && name[15]=='v'
             && name[16]=='V'
             && name[17]=='a'
             && name[18]=='l'
             && name[19]=='u'
             && name[20]=='e'
             && name[21]=='R'
             && name[22]=='e'
             && name[23]=='q'
             && name[24]=='u'
             && name[25]=='e'
             && name[26]=='s'
             && name[27]=='t')
            {
                return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_PROPAGATE_DEV_VALUE_REQUEST];
            }
        } break;
        case 34: {
            if (name[0]=='b'
             && name[1]=='r'
             && name[2]=='e'
             && name[3]=='g'
             && name[4]=='O'
             && name[5]=='n'
             && name[6]=='e'
             && name[7]=='W'
             && name[8]=='a'
             && name[9]=='y'
             && name[10]=='P'
             && name[11]=='r'
             && name[12]=='o'
             && name[13]=='p'
             && name[14]=='a'
             && name[15]=='g'
             && name[16]=='a'
             && name[17]=='t'
             && name[18]=='e'
             && name[19]=='D'
             && name[20]=='e'
             && name[21]=='v'
             && name[22]=='V'
             && name[23]=='a'
             && name[24]=='l'
             && name[25]=='u'
             && name[26]=='e'
             && name[27]=='R'
             && name[28]=='e'
             && name[29]=='q'
             && name[30]=='u'
             && name[31]=='e'
             && name[32]=='s'
             && name[33]=='t')
            {
                return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST];
            }
        } break;
    }
    return 0;
}

const bdeat_SelectionInfo *Request::lookupSelectionInfo(int id)
{
    switch (id) {
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_PROPAGATE_DEV_VALUE_REQUEST];
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST:
        return &SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST];
      default:
        return 0;
    }
}

// CREATORS

Request::Request(
    const Request& original,
    bdema_Allocator *basicAllocator)
: d_selectionId(original.d_selectionId)
, d_allocator_p(bdema_Default::allocator(basicAllocator))
{
    switch (d_selectionId) {
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
        new (d_bregPropagateDevValueRequest.buffer())
            BregDevValueRequestInfo(
                original.d_bregPropagateDevValueRequest.object(), d_allocator_p);
      } break;
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
        new (d_bregOneWayPropagateDevValueRequest.buffer())
            BregDevValueRequestInfo(
                original.d_bregOneWayPropagateDevValueRequest.object(), d_allocator_p);
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
          case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
            makeBregPropagateDevValueRequest(rhs.d_bregPropagateDevValueRequest.object());
          } break;
          case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
            makeBregOneWayPropagateDevValueRequest(rhs.d_bregOneWayPropagateDevValueRequest.object());
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
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeBregPropagateDevValueRequest(),
                                               aggregate,
                                               selectorId);
      } break;
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
        rc = bcem_AggregateUtil::fromAggregate(&makeBregOneWayPropagateDevValueRequest(),
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
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
        d_bregPropagateDevValueRequest.object().~BregDevValueRequestInfo();
      } break;
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
        d_bregOneWayPropagateDevValueRequest.object().~BregDevValueRequestInfo();
      } break;
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
    }

    d_selectionId = SELECTION_ID_UNDEFINED;
}

int Request::makeSelection(int selectionId)
{
    switch (selectionId) {
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
        makeBregPropagateDevValueRequest();
      } break;
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
        makeBregOneWayPropagateDevValueRequest();
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

BregDevValueRequestInfo& Request::makeBregPropagateDevValueRequest()
{
    if (SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_bregPropagateDevValueRequest.object());
    }
    else {
        reset();
        new (d_bregPropagateDevValueRequest.buffer())
                BregDevValueRequestInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST;
    }

    return d_bregPropagateDevValueRequest.object();
}

BregDevValueRequestInfo& Request::makeBregPropagateDevValueRequest(const BregDevValueRequestInfo& value)
{
    if (SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId) {
        d_bregPropagateDevValueRequest.object() = value;
    }
    else {
        reset();
        new (d_bregPropagateDevValueRequest.buffer())
                BregDevValueRequestInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST;
    }

    return d_bregPropagateDevValueRequest.object();
}

BregDevValueRequestInfo& Request::makeBregOneWayPropagateDevValueRequest()
{
    if (SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId) {
        bdeat_ValueTypeFunctions::reset(&d_bregOneWayPropagateDevValueRequest.object());
    }
    else {
        reset();
        new (d_bregOneWayPropagateDevValueRequest.buffer())
                BregDevValueRequestInfo(d_allocator_p);

        d_selectionId = SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST;
    }

    return d_bregOneWayPropagateDevValueRequest.object();
}

BregDevValueRequestInfo& Request::makeBregOneWayPropagateDevValueRequest(const BregDevValueRequestInfo& value)
{
    if (SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId) {
        d_bregOneWayPropagateDevValueRequest.object() = value;
    }
    else {
        reset();
        new (d_bregOneWayPropagateDevValueRequest.buffer())
                BregDevValueRequestInfo(value, d_allocator_p);
        d_selectionId = SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST;
    }

    return d_bregOneWayPropagateDevValueRequest.object();
}

// ACCESSORS

std::ostream& Request::print(
    std::ostream& stream,
    int           level,
    int           spacesPerLevel) const
{
    if (level < 0) {
        level = -level;
    }
    else {
        bdeu_Print::indent(stream, level, spacesPerLevel);
    }

    int levelPlus1 = level + 1;

    if (0 <= spacesPerLevel) {
        // multiline

        stream << "[\n";
        bdeu_Print::indent(stream, levelPlus1, spacesPerLevel);

        switch (d_selectionId) {
          case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
            stream << "BregPropagateDevValueRequest = ";
            bdeu_PrintMethods::print(stream, d_bregPropagateDevValueRequest.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
            stream << "BregOneWayPropagateDevValueRequest = ";
            bdeu_PrintMethods::print(stream, d_bregOneWayPropagateDevValueRequest.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          default:
            stream << "SELECTION UNDEFINED\n";
        }
        bdeu_Print::indent(stream, level, spacesPerLevel);
        stream << "]\n";
    }
    else {
        // single line

        stream << "[ ";

        switch (d_selectionId) {
          case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
            stream << "BregPropagateDevValueRequest = ";
            bdeu_PrintMethods::print(stream, d_bregPropagateDevValueRequest.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
            stream << "BregOneWayPropagateDevValueRequest = ";
            bdeu_PrintMethods::print(stream, d_bregOneWayPropagateDevValueRequest.object(),
                                     -levelPlus1, spacesPerLevel);
          } break;
          default:
            stream << "SELECTION UNDEFINED";
        }

        stream << " ]";
    }

    return stream << std::flush;
}

int Request::toAggregate(bcem_Aggregate *result) const
{
    bcem_Aggregate selection = result->makeSelectionById(d_selectionId);
    if (selection.isError()) {
        return selection.errorCode();
    }

    int rc = 0;

    switch (d_selectionId) {
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
        const BregDevValueRequestInfo& source = bregPropagateDevValueRequest();
        rc = bcem_AggregateUtil::toAggregate(result,
                                             d_selectionId,
                                             source);
      } break;
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
        const BregDevValueRequestInfo& source = bregOneWayPropagateDevValueRequest();
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
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_PROPAGATE_DEV_VALUE_REQUEST].name();
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST:
        return SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST].name();
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return "(* UNDEFINED *)";
    }
}
}  // close namespace s_brgdvsvc
}  // close namespace BloombergLP

// GENERATED BY BLP_BAS_CODEGEN_3.6.13 Tue Jun 19 08:53:50 2012
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2012
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------ END-OF-FILE ---------------------------------
