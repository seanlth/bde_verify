// s_brgdvsvc_messages.h      -- GENERATED FILE - DO NOT EDIT --      -*-C++-*-
#ifndef INCLUDED_S_BRGDVSVC_MESSAGES
#define INCLUDED_S_BRGDVSVC_MESSAGES

#ifndef INCLUDED_BDES_IDENT
#include <bdes_ident.h>
#endif
BDES_IDENT_RCSID(s_brgdvsvc_messages_h,"$Id$ $CSID$")
BDES_IDENT_PRAGMA_ONCE

//@PURPOSE: Provide value-semantic attribute classes
//
//@AUTHOR: Zheng LIN (zlin1@bloomberg.net)

#ifndef INCLUDED_BSLALG_TYPETRAITS
#include <bslalg_typetraits.h>
#endif

#ifndef INCLUDED_BDEAT_ATTRIBUTEINFO
#include <bdeat_attributeinfo.h>
#endif

#ifndef INCLUDED_BDEAT_ENUMERATORINFO
#include <bdeat_enumeratorinfo.h>
#endif

#ifndef INCLUDED_BDEAT_SELECTIONINFO
#include <bdeat_selectioninfo.h>
#endif

#ifndef INCLUDED_BDEAT_TYPETRAITS
#include <bdeat_typetraits.h>
#endif

#ifndef INCLUDED_BSLS_OBJECTBUFFER
#include <bsls_objectbuffer.h>
#endif

#ifndef INCLUDED_BDEX_INSTREAMFUNCTIONS
#include <bdex_instreamfunctions.h>
#endif

#ifndef INCLUDED_BDEX_OUTSTREAMFUNCTIONS
#include <bdex_outstreamfunctions.h>
#endif

#ifndef INCLUDED_BDEMA_DEFAULT
#include <bdema_default.h>
#endif

#ifndef INCLUDED_BSLS_ASSERT
#include <bsls_assert.h>
#endif

#ifndef INCLUDED_STRING
#include <string>
#endif

#ifndef INCLUDED_VECTOR
#include <vector>
#endif

#ifndef INCLUDED_IOSFWD
#include <iosfwd>
#endif

#ifndef INCLUDED_OSTREAM
#include <ostream>
#endif

#ifndef INCLUDED_BSLFWD_BSLMA_ALLOCATOR
#include <bslfwd_bslma_allocator.h>
#endif

namespace BloombergLP {

class bcem_Aggregate;

namespace s_brgdvsvc { class BregValue; }
namespace s_brgdvsvc { class BregdbRegistryEntry; }
namespace s_brgdvsvc { class BregDevValueResponseInfo; }
namespace s_brgdvsvc { class BregdbEntryExtTvalAry; }
namespace s_brgdvsvc { class BregdbEntryExtTvalOvrd; }
namespace s_brgdvsvc { class BregdbEntryTestValue; }
namespace s_brgdvsvc { class BregdbEntryTvalOvrd; }
namespace s_brgdvsvc { class ExtOvrValList; }
namespace s_brgdvsvc { class Response; }
namespace s_brgdvsvc { class BregDevelopmentValues; }
namespace s_brgdvsvc { class BregDevValueRequestInfo; }
namespace s_brgdvsvc { class Request; }
namespace s_brgdvsvc {

                              // ================                              
                              // class BregStatus                              
                              // ================                              

struct BregStatus {

  public:
    // TYPES
    enum Value {
        BREG_SUCCESS = 0
      , BREG_ERROR   = 1
    };

    enum {
        NUM_ENUMERATORS = 2
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_EnumeratorInfo ENUMERATOR_INFO_ARRAY[];

    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const char *toString(Value value);
        // Return the string representation exactly matching the enumerator
        // name corresponding to the specified enumeration 'value'.

    static int fromString(Value        *result,
                          const char   *string,
                          int           stringLength);
        // Load into the specified 'result' the enumerator matching the
        // specified 'string' of the specified 'stringLength'.  Return 0 on
        // success, and a non-zero value with no effect on 'result' otherwise
        // (i.e., 'string' does not match any enumerator).

    static int fromString(Value              *result,
                          const std::string&  string);
        // Load into the specified 'result' the enumerator matching the
        // specified 'string'.  Return 0 on success, and a non-zero value with
        // no effect on 'result' otherwise (i.e., 'string' does not match any
        // enumerator).

    static int fromInt(Value *result, int number);
        // Load into the specified 'result' the enumerator matching the
        // specified 'number'.  Return 0 on success, and a non-zero value with
        // no effect on 'result' otherwise (i.e., 'number' does not match any
        // enumerator).

    template <class STREAM>
    static STREAM& bdexStreamIn(STREAM&  stream,
                                Value&   value,
                                int      version);
        // Assign to the specified 'value' the value read from the specified
        // input 'stream' using the specified 'version' format and return a
        // reference to the modifiable 'stream'.  If 'stream' is initially
        // invalid, this operation has no effect.  If 'stream' becomes invalid
        // during this operation, the 'value' is valid, but its value is
        // undefined.  If the specified 'version' is not supported, 'stream' is
        // marked invalid, but 'value' is unaltered.  Note that no version is
        // read from 'stream'.  (See the package-group-level documentation for
        // more information on 'bdex' streaming of container types.)

    static std::ostream& print(std::ostream& stream, Value value);
        // Write to the specified 'stream' the string representation of
        // the specified enumeration 'value'.  Return a reference to
        // the modifiable 'stream'.

    template <class STREAM>
    static STREAM& bdexStreamOut(STREAM&  stream,
                                 Value    value,
                                 int      version);
        // Write the specified 'value' to the specified output 'stream' and
        // return a reference to the modifiable 'stream'.  Optionally specify
        // an explicit 'version' format; by default, the maximum supported
        // version is written to 'stream' and used as the format.  If 'version'
        // is specified, that format is used but *not* written to 'stream'.  If
        // 'version' is not supported, 'stream' is left unmodified.  (See the
        // package-group-level documentation for more information on 'bdex'
        // streaming of container types).
};

// FREE OPERATORS
inline
std::ostream& operator<<(std::ostream& stream, BregStatus::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_brgdvsvc::BregStatus)


namespace s_brgdvsvc {

                              // ===============                               
                              // class BregValue                               
                              // ===============                               

class BregValue {

    // INSTANCE DATA
    union {
        bsls_ObjectBuffer< bool >             d_booleanValue;
        bsls_ObjectBuffer< double >           d_doubleValue;
        bsls_ObjectBuffer< int >              d_integerValue;
        bsls_ObjectBuffer< std::vector<int> > d_integerArray;
        bsls_ObjectBuffer< std::string >      d_characterValue;
        bsls_ObjectBuffer< std::string >      d_characterArray;
    };

    int                                       d_selectionId;
    bdema_Allocator                          *d_allocator_p;

  public:
    // TYPES
    enum {
        SELECTION_ID_UNDEFINED       = -1

      , SELECTION_ID_BOOLEAN_VALUE   = 0
      , SELECTION_ID_DOUBLE_VALUE    = 1
      , SELECTION_ID_INTEGER_VALUE   = 2
      , SELECTION_ID_INTEGER_ARRAY   = 3
      , SELECTION_ID_CHARACTER_VALUE = 4
      , SELECTION_ID_CHARACTER_ARRAY = 5
    };

    enum {
        NUM_SELECTIONS = 6
    };

    enum {
        SELECTION_INDEX_BOOLEAN_VALUE   = 0
      , SELECTION_INDEX_DOUBLE_VALUE    = 1
      , SELECTION_INDEX_INTEGER_VALUE   = 2
      , SELECTION_INDEX_INTEGER_ARRAY   = 3
      , SELECTION_INDEX_CHARACTER_VALUE = 4
      , SELECTION_INDEX_CHARACTER_ARRAY = 5
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_SelectionInfo SELECTION_INFO_ARRAY[];

    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_SelectionInfo *lookupSelectionInfo(int id);
        // Return selection information for the selection indicated by the
        // specified 'id' if the selection exists, and 0 otherwise.

    static const bdeat_SelectionInfo *lookupSelectionInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return selection information for the selection indicated by the
        // specified 'name' of the specified 'nameLength' if the selection
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregValue(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregValue' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    BregValue(const BregValue& original,
             bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregValue' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregValue();
        // Destroy this object.

    // MANIPULATORS
    BregValue& operator=(const BregValue& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon default
        // construction).

    int makeSelection(int selectionId);
        // Set the value of this object to be the default for the selection
        // indicated by the specified 'selectionId'.  Return 0 on success, and
        // non-zero value otherwise (i.e., the selection is not found).

    int makeSelection(const char *name, int nameLength);
        // Set the value of this object to be the default for the selection
        // indicated by the specified 'name' of the specified 'nameLength'.
        // Return 0 on success, and non-zero value otherwise (i.e., the
        // selection is not found).

    bool& makeBooleanValue();
    bool& makeBooleanValue(bool value);
        // Set the value of this object to be a "BooleanValue" value. 
        // Optionally specify the 'value' of the "BooleanValue".  If 'value' is
        // not specified, the default "BooleanValue" value is used.

    double& makeDoubleValue();
    double& makeDoubleValue(double value);
        // Set the value of this object to be a "DoubleValue" value. 
        // Optionally specify the 'value' of the "DoubleValue".  If 'value' is
        // not specified, the default "DoubleValue" value is used.

    int& makeIntegerValue();
    int& makeIntegerValue(int value);
        // Set the value of this object to be a "IntegerValue" value. 
        // Optionally specify the 'value' of the "IntegerValue".  If 'value' is
        // not specified, the default "IntegerValue" value is used.

    std::vector<int>& makeIntegerArray();
    std::vector<int>& makeIntegerArray(const std::vector<int>& value);
        // Set the value of this object to be a "IntegerArray" value. 
        // Optionally specify the 'value' of the "IntegerArray".  If 'value' is
        // not specified, the default "IntegerArray" value is used.

    std::string& makeCharacterValue();
    std::string& makeCharacterValue(const std::string& value);
        // Set the value of this object to be a "CharacterValue" value. 
        // Optionally specify the 'value' of the "CharacterValue".  If 'value'
        // is not specified, the default "CharacterValue" value is used.

    std::string& makeCharacterArray();
    std::string& makeCharacterArray(const std::string& value);
        // Set the value of this object to be a "CharacterArray" value. 
        // Optionally specify the 'value' of the "CharacterArray".  If 'value'
        // is not specified, the default "CharacterArray" value is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    bool& booleanValue();
        // Return a reference to the modifiable "BooleanValue" selection of
        // this object if "BooleanValue" is the current selection.  The
        // behavior is undefined unless "BooleanValue" is the selection of this
        // object.

    double& doubleValue();
        // Return a reference to the modifiable "DoubleValue" selection of this
        // object if "DoubleValue" is the current selection.  The behavior is
        // undefined unless "DoubleValue" is the selection of this object.

    int& integerValue();
        // Return a reference to the modifiable "IntegerValue" selection of
        // this object if "IntegerValue" is the current selection.  The
        // behavior is undefined unless "IntegerValue" is the selection of this
        // object.

    std::vector<int>& integerArray();
        // Return a reference to the modifiable "IntegerArray" selection of
        // this object if "IntegerArray" is the current selection.  The
        // behavior is undefined unless "IntegerArray" is the selection of this
        // object.

    std::string& characterValue();
        // Return a reference to the modifiable "CharacterValue" selection of
        // this object if "CharacterValue" is the current selection.  The
        // behavior is undefined unless "CharacterValue" is the selection of
        // this object.

    std::string& characterArray();
        // Return a reference to the modifiable "CharacterArray" selection of
        // this object if "CharacterArray" is the current selection.  The
        // behavior is undefined unless "CharacterArray" is the selection of
        // this object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    int selectionId() const;
        // Return the id of the current selection if the selection is defined,
        // and -1 otherwise.

    template<class ACCESSOR>
    int accessSelection(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' on the non-modifiable selection,
        // supplying 'accessor' with the corresponding selection information
        // structure.  Return the value returned from the invocation of
        // 'accessor' if this object has a defined selection, and -1 otherwise.

    const bool& booleanValue() const;
        // Return a reference to the non-modifiable "BooleanValue" selection of
        // this object if "BooleanValue" is the current selection.  The
        // behavior is undefined unless "BooleanValue" is the selection of this
        // object.

    const double& doubleValue() const;
        // Return a reference to the non-modifiable "DoubleValue" selection of
        // this object if "DoubleValue" is the current selection.  The behavior
        // is undefined unless "DoubleValue" is the selection of this object.

    const int& integerValue() const;
        // Return a reference to the non-modifiable "IntegerValue" selection of
        // this object if "IntegerValue" is the current selection.  The
        // behavior is undefined unless "IntegerValue" is the selection of this
        // object.

    const std::vector<int>& integerArray() const;
        // Return a reference to the non-modifiable "IntegerArray" selection of
        // this object if "IntegerArray" is the current selection.  The
        // behavior is undefined unless "IntegerArray" is the selection of this
        // object.

    const std::string& characterValue() const;
        // Return a reference to the non-modifiable "CharacterValue" selection
        // of this object if "CharacterValue" is the current selection.  The
        // behavior is undefined unless "CharacterValue" is the selection of
        // this object.

    const std::string& characterArray() const;
        // Return a reference to the non-modifiable "CharacterArray" selection
        // of this object if "CharacterArray" is the current selection.  The
        // behavior is undefined unless "CharacterArray" is the selection of
        // this object.

    bool isBooleanValueValue() const;
        // Return 'true' if the value of this object is a "BooleanValue" value,
        // and return 'false' otherwise.

    bool isDoubleValueValue() const;
        // Return 'true' if the value of this object is a "DoubleValue" value,
        // and return 'false' otherwise.

    bool isIntegerValueValue() const;
        // Return 'true' if the value of this object is a "IntegerValue" value,
        // and return 'false' otherwise.

    bool isIntegerArrayValue() const;
        // Return 'true' if the value of this object is a "IntegerArray" value,
        // and return 'false' otherwise.

    bool isCharacterValueValue() const;
        // Return 'true' if the value of this object is a "CharacterValue"
        // value, and return 'false' otherwise.

    bool isCharacterArrayValue() const;
        // Return 'true' if the value of this object is a "CharacterArray"
        // value, and return 'false' otherwise.

    bool isUndefinedValue() const;
        // Return 'true' if the value of this object is undefined, and 'false'
        // otherwise.

    const char *selectionName() const;
        // Return the symbolic name of the current selection of this object.
};

// FREE OPERATORS
inline
bool operator==(const BregValue& lhs, const BregValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects have the same
    // value, and 'false' otherwise.  Two 'BregValue' objects have the same
    // value if either the selections in both objects have the same ids and
    // the same values, or both selections are undefined.

inline
bool operator!=(const BregValue& lhs, const BregValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects do not have the
    // same values, as determined by 'operator==', and 'false' otherwise.

inline
std::ostream& operator<<(std::ostream& stream, const BregValue& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregValue)

namespace s_brgdvsvc {

                            // ===================                             
                            // class BregValueType                             
                            // ===================                             

struct BregValueType {

  public:
    // TYPES
    enum Value {
        BREG_VALUE_TYPE_BOOLEAN          = 0
      , BREG_VALUE_TYPE_DOUBLE           = 1
      , BREG_VALUE_TYPE_INT              = 2
      , BREG_VALUE_TYPE_INT_ARRAY        = 3
      , BREG_VALUE_TYPE_CHAR             = 4
      , BREG_VALUE_TYPE_CHAR_ARRAY       = 5
      , BREG_VALUE_TYPE_NUMBER           = 6
      , BREG_VALUE_TYPE_EXT_INT_ARRAY    = 7
      , BREG_VALUE_TYPE_EXT_CHAR_ARRAY   = 8
      , BREG_VALUE_TYPE_TABLE_INT        = 20
      , BREG_VALUE_TYPE_TABLE_CHAR       = 21
      , BREG_VALUE_TYPE_TABLE_BOOLEAN    = 22
      , BREG_VALUE_TYPE_TABLE_CHAR_ARRAY = 23
      , BREG_VALUE_TYPE_TABLE_INT_ARRAY  = 24
      , BREG_VALUE_TYPE_TABLE_DOUBLE     = 25
    };

    enum {
        NUM_ENUMERATORS = 15
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_EnumeratorInfo ENUMERATOR_INFO_ARRAY[];

    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const char *toString(Value value);
        // Return the string representation exactly matching the enumerator
        // name corresponding to the specified enumeration 'value'.

    static int fromString(Value        *result,
                          const char   *string,
                          int           stringLength);
        // Load into the specified 'result' the enumerator matching the
        // specified 'string' of the specified 'stringLength'.  Return 0 on
        // success, and a non-zero value with no effect on 'result' otherwise
        // (i.e., 'string' does not match any enumerator).

    static int fromString(Value              *result,
                          const std::string&  string);
        // Load into the specified 'result' the enumerator matching the
        // specified 'string'.  Return 0 on success, and a non-zero value with
        // no effect on 'result' otherwise (i.e., 'string' does not match any
        // enumerator).

    static int fromInt(Value *result, int number);
        // Load into the specified 'result' the enumerator matching the
        // specified 'number'.  Return 0 on success, and a non-zero value with
        // no effect on 'result' otherwise (i.e., 'number' does not match any
        // enumerator).

    template <class STREAM>
    static STREAM& bdexStreamIn(STREAM&  stream,
                                Value&   value,
                                int      version);
        // Assign to the specified 'value' the value read from the specified
        // input 'stream' using the specified 'version' format and return a
        // reference to the modifiable 'stream'.  If 'stream' is initially
        // invalid, this operation has no effect.  If 'stream' becomes invalid
        // during this operation, the 'value' is valid, but its value is
        // undefined.  If the specified 'version' is not supported, 'stream' is
        // marked invalid, but 'value' is unaltered.  Note that no version is
        // read from 'stream'.  (See the package-group-level documentation for
        // more information on 'bdex' streaming of container types.)

    static std::ostream& print(std::ostream& stream, Value value);
        // Write to the specified 'stream' the string representation of
        // the specified enumeration 'value'.  Return a reference to
        // the modifiable 'stream'.

    template <class STREAM>
    static STREAM& bdexStreamOut(STREAM&  stream,
                                 Value    value,
                                 int      version);
        // Write the specified 'value' to the specified output 'stream' and
        // return a reference to the modifiable 'stream'.  Optionally specify
        // an explicit 'version' format; by default, the maximum supported
        // version is written to 'stream' and used as the format.  If 'version'
        // is specified, that format is used but *not* written to 'stream'.  If
        // 'version' is not supported, 'stream' is left unmodified.  (See the
        // package-group-level documentation for more information on 'bdex'
        // streaming of container types).
};

// FREE OPERATORS
inline
std::ostream& operator<<(std::ostream& stream, BregValueType::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_brgdvsvc::BregValueType)


namespace s_brgdvsvc {

                         // =========================                          
                         // class BregdbRegistryEntry                          
                         // =========================                          

class BregdbRegistryEntry {

    // INSTANCE DATA
    std::string  d_updateTsp;
    std::string  d_expiryTsp;
    std::string  d_apiName;
    int          d_entryId;
    int          d_updateByUuid;
    int          d_valTypeCd;
    int          d_isInMemoryCd;
    int          d_isTemporaryCd;
    int          d_apiStatusCd;
    int          d_switchStatusCd;
    int          d_switchModeCd;
    int          d_maxNoOfValues;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_ID         = 0
      , ATTRIBUTE_ID_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_ID_UPDATE_TSP       = 2
      , ATTRIBUTE_ID_VAL_TYPE_CD      = 3
      , ATTRIBUTE_ID_IS_IN_MEMORY_CD  = 4
      , ATTRIBUTE_ID_IS_TEMPORARY_CD  = 5
      , ATTRIBUTE_ID_API_STATUS_CD    = 6
      , ATTRIBUTE_ID_SWITCH_STATUS_CD = 7
      , ATTRIBUTE_ID_SWITCH_MODE_CD   = 8
      , ATTRIBUTE_ID_MAX_NO_OF_VALUES = 9
      , ATTRIBUTE_ID_EXPIRY_TSP       = 10
      , ATTRIBUTE_ID_API_NAME         = 11
    };

    enum {
        NUM_ATTRIBUTES = 12
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_ID         = 0
      , ATTRIBUTE_INDEX_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_INDEX_UPDATE_TSP       = 2
      , ATTRIBUTE_INDEX_VAL_TYPE_CD      = 3
      , ATTRIBUTE_INDEX_IS_IN_MEMORY_CD  = 4
      , ATTRIBUTE_INDEX_IS_TEMPORARY_CD  = 5
      , ATTRIBUTE_INDEX_API_STATUS_CD    = 6
      , ATTRIBUTE_INDEX_SWITCH_STATUS_CD = 7
      , ATTRIBUTE_INDEX_SWITCH_MODE_CD   = 8
      , ATTRIBUTE_INDEX_MAX_NO_OF_VALUES = 9
      , ATTRIBUTE_INDEX_EXPIRY_TSP       = 10
      , ATTRIBUTE_INDEX_API_NAME         = 11
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregdbRegistryEntry(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbRegistryEntry' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregdbRegistryEntry(const BregdbRegistryEntry& original,
                        bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbRegistryEntry' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregdbRegistryEntry();
        // Destroy this object.

    // MANIPULATORS
    BregdbRegistryEntry& operator=(const BregdbRegistryEntry& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    int& entryId();
        // Return a reference to the modifiable "EntryId" attribute of this
        // object.

    int& updateByUuid();
        // Return a reference to the modifiable "UpdateByUuid" attribute of
        // this object.

    std::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    int& valTypeCd();
        // Return a reference to the modifiable "ValTypeCd" attribute of this
        // object.

    int& isInMemoryCd();
        // Return a reference to the modifiable "IsInMemoryCd" attribute of
        // this object.

    int& isTemporaryCd();
        // Return a reference to the modifiable "IsTemporaryCd" attribute of
        // this object.

    int& apiStatusCd();
        // Return a reference to the modifiable "ApiStatusCd" attribute of this
        // object.

    int& switchStatusCd();
        // Return a reference to the modifiable "SwitchStatusCd" attribute of
        // this object.

    int& switchModeCd();
        // Return a reference to the modifiable "SwitchModeCd" attribute of
        // this object.

    int& maxNoOfValues();
        // Return a reference to the modifiable "MaxNoOfValues" attribute of
        // this object.

    std::string& expiryTsp();
        // Return a reference to the modifiable "ExpiryTsp" attribute of this
        // object.

    std::string& apiName();
        // Return a reference to the modifiable "ApiName" attribute of this
        // object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    int entryId() const;
        // Return a reference to the non-modifiable "EntryId" attribute of this
        // object.

    int updateByUuid() const;
        // Return a reference to the non-modifiable "UpdateByUuid" attribute of
        // this object.

    const std::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    int valTypeCd() const;
        // Return a reference to the non-modifiable "ValTypeCd" attribute of
        // this object.

    int isInMemoryCd() const;
        // Return a reference to the non-modifiable "IsInMemoryCd" attribute of
        // this object.

    int isTemporaryCd() const;
        // Return a reference to the non-modifiable "IsTemporaryCd" attribute
        // of this object.

    int apiStatusCd() const;
        // Return a reference to the non-modifiable "ApiStatusCd" attribute of
        // this object.

    int switchStatusCd() const;
        // Return a reference to the non-modifiable "SwitchStatusCd" attribute
        // of this object.

    int switchModeCd() const;
        // Return a reference to the non-modifiable "SwitchModeCd" attribute of
        // this object.

    int maxNoOfValues() const;
        // Return a reference to the non-modifiable "MaxNoOfValues" attribute
        // of this object.

    const std::string& expiryTsp() const;
        // Return a reference to the non-modifiable "ExpiryTsp" attribute of
        // this object.

    const std::string& apiName() const;
        // Return a reference to the non-modifiable "ApiName" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const BregdbRegistryEntry& lhs, const BregdbRegistryEntry& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregdbRegistryEntry& lhs, const BregdbRegistryEntry& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregdbRegistryEntry& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregdbRegistryEntry)

namespace s_brgdvsvc {

                       // ==============================                       
                       // class BregDevValueResponseInfo                       
                       // ==============================                       

class BregDevValueResponseInfo {

    // INSTANCE DATA
    std::string        d_statusString;
    BregStatus::Value  d_bregStatus;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_BREG_STATUS   = 0
      , ATTRIBUTE_ID_STATUS_STRING = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_BREG_STATUS   = 0
      , ATTRIBUTE_INDEX_STATUS_STRING = 1
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const BregStatus::Value DEFAULT_INITIALIZER_BREG_STATUS;

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregDevValueResponseInfo(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregDevValueResponseInfo' having the
        // default value.  Use the optionally specified 'basicAllocator' to
        // supply memory.  If 'basicAllocator' is 0, the currently installed
        // default allocator is used.

    BregDevValueResponseInfo(const BregDevValueResponseInfo& original,
                             bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregDevValueResponseInfo' having the value
        // of the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregDevValueResponseInfo();
        // Destroy this object.

    // MANIPULATORS
    BregDevValueResponseInfo& operator=(const BregDevValueResponseInfo& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    BregStatus::Value& bregStatus();
        // Return a reference to the modifiable "BregStatus" attribute of this
        // object.

    std::string& statusString();
        // Return a reference to the modifiable "StatusString" attribute of
        // this object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    BregStatus::Value bregStatus() const;
        // Return a reference to the non-modifiable "BregStatus" attribute of
        // this object.

    const std::string& statusString() const;
        // Return a reference to the non-modifiable "StatusString" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const BregDevValueResponseInfo& lhs, const BregDevValueResponseInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregDevValueResponseInfo& lhs, const BregDevValueResponseInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregDevValueResponseInfo& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregDevValueResponseInfo)

namespace s_brgdvsvc {

                        // ===========================                         
                        // class BregdbEntryExtTvalAry                         
                        // ===========================                         

class BregdbEntryExtTvalAry {

    // INSTANCE DATA
    std::string  d_updateTsp;
    BregValue    d_lookupValue;
    BregValue    d_returnValue;
    int          d_tvalAryId;
    int          d_updateByUuid;
    int          d_entryTvalId;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_TVAL_ARY_ID    = 0
      , ATTRIBUTE_ID_UPDATE_BY_UUID = 1
      , ATTRIBUTE_ID_UPDATE_TSP     = 2
      , ATTRIBUTE_ID_LOOKUP_VALUE   = 3
      , ATTRIBUTE_ID_RETURN_VALUE   = 4
      , ATTRIBUTE_ID_ENTRY_TVAL_ID  = 5
    };

    enum {
        NUM_ATTRIBUTES = 6
    };

    enum {
        ATTRIBUTE_INDEX_TVAL_ARY_ID    = 0
      , ATTRIBUTE_INDEX_UPDATE_BY_UUID = 1
      , ATTRIBUTE_INDEX_UPDATE_TSP     = 2
      , ATTRIBUTE_INDEX_LOOKUP_VALUE   = 3
      , ATTRIBUTE_INDEX_RETURN_VALUE   = 4
      , ATTRIBUTE_INDEX_ENTRY_TVAL_ID  = 5
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregdbEntryExtTvalAry(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryExtTvalAry' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregdbEntryExtTvalAry(const BregdbEntryExtTvalAry& original,
                          bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryExtTvalAry' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregdbEntryExtTvalAry();
        // Destroy this object.

    // MANIPULATORS
    BregdbEntryExtTvalAry& operator=(const BregdbEntryExtTvalAry& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    int& tvalAryId();
        // Return a reference to the modifiable "TvalAryId" attribute of this
        // object.

    int& updateByUuid();
        // Return a reference to the modifiable "UpdateByUuid" attribute of
        // this object.

    std::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    BregValue& lookupValue();
        // Return a reference to the modifiable "LookupValue" attribute of this
        // object.

    BregValue& returnValue();
        // Return a reference to the modifiable "ReturnValue" attribute of this
        // object.

    int& entryTvalId();
        // Return a reference to the modifiable "EntryTvalId" attribute of this
        // object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    int tvalAryId() const;
        // Return a reference to the non-modifiable "TvalAryId" attribute of
        // this object.

    int updateByUuid() const;
        // Return a reference to the non-modifiable "UpdateByUuid" attribute of
        // this object.

    const std::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    const BregValue& lookupValue() const;
        // Return a reference to the non-modifiable "LookupValue" attribute of
        // this object.

    const BregValue& returnValue() const;
        // Return a reference to the non-modifiable "ReturnValue" attribute of
        // this object.

    int entryTvalId() const;
        // Return a reference to the non-modifiable "EntryTvalId" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const BregdbEntryExtTvalAry& lhs, const BregdbEntryExtTvalAry& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregdbEntryExtTvalAry& lhs, const BregdbEntryExtTvalAry& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregdbEntryExtTvalAry& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregdbEntryExtTvalAry)

namespace s_brgdvsvc {

                        // ============================                        
                        // class BregdbEntryExtTvalOvrd                        
                        // ============================                        

class BregdbEntryExtTvalOvrd {

    // INSTANCE DATA
    std::string  d_updateTsp;
    BregValue    d_lookupValue;
    BregValue    d_returnValue;
    int          d_tvalaOvrdId;
    int          d_updateByUuid;
    int          d_testValOvrdId;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_TVALA_OVRD_ID    = 0
      , ATTRIBUTE_ID_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_ID_UPDATE_TSP       = 2
      , ATTRIBUTE_ID_TEST_VAL_OVRD_ID = 3
      , ATTRIBUTE_ID_LOOKUP_VALUE     = 4
      , ATTRIBUTE_ID_RETURN_VALUE     = 5
    };

    enum {
        NUM_ATTRIBUTES = 6
    };

    enum {
        ATTRIBUTE_INDEX_TVALA_OVRD_ID    = 0
      , ATTRIBUTE_INDEX_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_INDEX_UPDATE_TSP       = 2
      , ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID = 3
      , ATTRIBUTE_INDEX_LOOKUP_VALUE     = 4
      , ATTRIBUTE_INDEX_RETURN_VALUE     = 5
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregdbEntryExtTvalOvrd(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryExtTvalOvrd' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregdbEntryExtTvalOvrd(const BregdbEntryExtTvalOvrd& original,
                           bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryExtTvalOvrd' having the value
        // of the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregdbEntryExtTvalOvrd();
        // Destroy this object.

    // MANIPULATORS
    BregdbEntryExtTvalOvrd& operator=(const BregdbEntryExtTvalOvrd& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    int& tvalaOvrdId();
        // Return a reference to the modifiable "TvalaOvrdId" attribute of this
        // object.

    int& updateByUuid();
        // Return a reference to the modifiable "UpdateByUuid" attribute of
        // this object.

    std::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    int& testValOvrdId();
        // Return a reference to the modifiable "TestValOvrdId" attribute of
        // this object.

    BregValue& lookupValue();
        // Return a reference to the modifiable "LookupValue" attribute of this
        // object.

    BregValue& returnValue();
        // Return a reference to the modifiable "ReturnValue" attribute of this
        // object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    int tvalaOvrdId() const;
        // Return a reference to the non-modifiable "TvalaOvrdId" attribute of
        // this object.

    int updateByUuid() const;
        // Return a reference to the non-modifiable "UpdateByUuid" attribute of
        // this object.

    const std::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    int testValOvrdId() const;
        // Return a reference to the non-modifiable "TestValOvrdId" attribute
        // of this object.

    const BregValue& lookupValue() const;
        // Return a reference to the non-modifiable "LookupValue" attribute of
        // this object.

    const BregValue& returnValue() const;
        // Return a reference to the non-modifiable "ReturnValue" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const BregdbEntryExtTvalOvrd& lhs, const BregdbEntryExtTvalOvrd& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregdbEntryExtTvalOvrd& lhs, const BregdbEntryExtTvalOvrd& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregdbEntryExtTvalOvrd& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregdbEntryExtTvalOvrd)

namespace s_brgdvsvc {

                         // ==========================                         
                         // class BregdbEntryTestValue                         
                         // ==========================                         

class BregdbEntryTestValue {

    // INSTANCE DATA
    std::string  d_updateTsp;
    std::string  d_logNote;
    BregValue    d_entryValue;
    int          d_entryTvalId;
    int          d_updateByUuid;
    int          d_entryId;
    int          d_versionNo;
    int          d_valStatusCd;
    int          d_actNoOfValues;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_TVAL_ID    = 0
      , ATTRIBUTE_ID_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_ID_UPDATE_TSP       = 2
      , ATTRIBUTE_ID_ENTRY_ID         = 3
      , ATTRIBUTE_ID_VERSION_NO       = 4
      , ATTRIBUTE_ID_VAL_STATUS_CD    = 5
      , ATTRIBUTE_ID_ENTRY_VALUE      = 6
      , ATTRIBUTE_ID_ACT_NO_OF_VALUES = 7
      , ATTRIBUTE_ID_LOG_NOTE         = 8
    };

    enum {
        NUM_ATTRIBUTES = 9
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_TVAL_ID    = 0
      , ATTRIBUTE_INDEX_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_INDEX_UPDATE_TSP       = 2
      , ATTRIBUTE_INDEX_ENTRY_ID         = 3
      , ATTRIBUTE_INDEX_VERSION_NO       = 4
      , ATTRIBUTE_INDEX_VAL_STATUS_CD    = 5
      , ATTRIBUTE_INDEX_ENTRY_VALUE      = 6
      , ATTRIBUTE_INDEX_ACT_NO_OF_VALUES = 7
      , ATTRIBUTE_INDEX_LOG_NOTE         = 8
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregdbEntryTestValue(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryTestValue' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregdbEntryTestValue(const BregdbEntryTestValue& original,
                         bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryTestValue' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregdbEntryTestValue();
        // Destroy this object.

    // MANIPULATORS
    BregdbEntryTestValue& operator=(const BregdbEntryTestValue& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    int& entryTvalId();
        // Return a reference to the modifiable "EntryTvalId" attribute of this
        // object.

    int& updateByUuid();
        // Return a reference to the modifiable "UpdateByUuid" attribute of
        // this object.

    std::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    int& entryId();
        // Return a reference to the modifiable "EntryId" attribute of this
        // object.

    int& versionNo();
        // Return a reference to the modifiable "VersionNo" attribute of this
        // object.

    int& valStatusCd();
        // Return a reference to the modifiable "ValStatusCd" attribute of this
        // object.

    BregValue& entryValue();
        // Return a reference to the modifiable "EntryValue" attribute of this
        // object.

    int& actNoOfValues();
        // Return a reference to the modifiable "ActNoOfValues" attribute of
        // this object.

    std::string& logNote();
        // Return a reference to the modifiable "LogNote" attribute of this
        // object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    int entryTvalId() const;
        // Return a reference to the non-modifiable "EntryTvalId" attribute of
        // this object.

    int updateByUuid() const;
        // Return a reference to the non-modifiable "UpdateByUuid" attribute of
        // this object.

    const std::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    int entryId() const;
        // Return a reference to the non-modifiable "EntryId" attribute of this
        // object.

    int versionNo() const;
        // Return a reference to the non-modifiable "VersionNo" attribute of
        // this object.

    int valStatusCd() const;
        // Return a reference to the non-modifiable "ValStatusCd" attribute of
        // this object.

    const BregValue& entryValue() const;
        // Return a reference to the non-modifiable "EntryValue" attribute of
        // this object.

    int actNoOfValues() const;
        // Return a reference to the non-modifiable "ActNoOfValues" attribute
        // of this object.

    const std::string& logNote() const;
        // Return a reference to the non-modifiable "LogNote" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const BregdbEntryTestValue& lhs, const BregdbEntryTestValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregdbEntryTestValue& lhs, const BregdbEntryTestValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregdbEntryTestValue& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregdbEntryTestValue)

namespace s_brgdvsvc {

                         // =========================                          
                         // class BregdbEntryTvalOvrd                          
                         // =========================                          

class BregdbEntryTvalOvrd {

    // INSTANCE DATA
    std::string  d_updateTsp;
    BregValue    d_ovrdValue;
    int          d_testValOvrdId;
    int          d_updateByUuid;
    int          d_entryId;
    int          d_overrideSeq;
    int          d_targetTypeCd;
    int          d_versionNo;
    int          d_targetOvrdId;
    int          d_actNoOfValues;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_TEST_VAL_OVRD_ID = 0
      , ATTRIBUTE_ID_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_ID_UPDATE_TSP       = 2
      , ATTRIBUTE_ID_ENTRY_ID         = 3
      , ATTRIBUTE_ID_OVERRIDE_SEQ     = 4
      , ATTRIBUTE_ID_TARGET_TYPE_CD   = 5
      , ATTRIBUTE_ID_VERSION_NO       = 6
      , ATTRIBUTE_ID_TARGET_OVRD_ID   = 7
      , ATTRIBUTE_ID_OVRD_VALUE       = 8
      , ATTRIBUTE_ID_ACT_NO_OF_VALUES = 9
    };

    enum {
        NUM_ATTRIBUTES = 10
    };

    enum {
        ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID = 0
      , ATTRIBUTE_INDEX_UPDATE_BY_UUID   = 1
      , ATTRIBUTE_INDEX_UPDATE_TSP       = 2
      , ATTRIBUTE_INDEX_ENTRY_ID         = 3
      , ATTRIBUTE_INDEX_OVERRIDE_SEQ     = 4
      , ATTRIBUTE_INDEX_TARGET_TYPE_CD   = 5
      , ATTRIBUTE_INDEX_VERSION_NO       = 6
      , ATTRIBUTE_INDEX_TARGET_OVRD_ID   = 7
      , ATTRIBUTE_INDEX_OVRD_VALUE       = 8
      , ATTRIBUTE_INDEX_ACT_NO_OF_VALUES = 9
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregdbEntryTvalOvrd(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryTvalOvrd' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregdbEntryTvalOvrd(const BregdbEntryTvalOvrd& original,
                        bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregdbEntryTvalOvrd' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregdbEntryTvalOvrd();
        // Destroy this object.

    // MANIPULATORS
    BregdbEntryTvalOvrd& operator=(const BregdbEntryTvalOvrd& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    int& testValOvrdId();
        // Return a reference to the modifiable "TestValOvrdId" attribute of
        // this object.

    int& updateByUuid();
        // Return a reference to the modifiable "UpdateByUuid" attribute of
        // this object.

    std::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    int& entryId();
        // Return a reference to the modifiable "EntryId" attribute of this
        // object.

    int& overrideSeq();
        // Return a reference to the modifiable "OverrideSeq" attribute of this
        // object.

    int& targetTypeCd();
        // Return a reference to the modifiable "TargetTypeCd" attribute of
        // this object.

    int& versionNo();
        // Return a reference to the modifiable "VersionNo" attribute of this
        // object.

    int& targetOvrdId();
        // Return a reference to the modifiable "TargetOvrdId" attribute of
        // this object.

    BregValue& ovrdValue();
        // Return a reference to the modifiable "OvrdValue" attribute of this
        // object.

    int& actNoOfValues();
        // Return a reference to the modifiable "ActNoOfValues" attribute of
        // this object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    int testValOvrdId() const;
        // Return a reference to the non-modifiable "TestValOvrdId" attribute
        // of this object.

    int updateByUuid() const;
        // Return a reference to the non-modifiable "UpdateByUuid" attribute of
        // this object.

    const std::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    int entryId() const;
        // Return a reference to the non-modifiable "EntryId" attribute of this
        // object.

    int overrideSeq() const;
        // Return a reference to the non-modifiable "OverrideSeq" attribute of
        // this object.

    int targetTypeCd() const;
        // Return a reference to the non-modifiable "TargetTypeCd" attribute of
        // this object.

    int versionNo() const;
        // Return a reference to the non-modifiable "VersionNo" attribute of
        // this object.

    int targetOvrdId() const;
        // Return a reference to the non-modifiable "TargetOvrdId" attribute of
        // this object.

    const BregValue& ovrdValue() const;
        // Return a reference to the non-modifiable "OvrdValue" attribute of
        // this object.

    int actNoOfValues() const;
        // Return a reference to the non-modifiable "ActNoOfValues" attribute
        // of this object.
};

// FREE OPERATORS
inline
bool operator==(const BregdbEntryTvalOvrd& lhs, const BregdbEntryTvalOvrd& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregdbEntryTvalOvrd& lhs, const BregdbEntryTvalOvrd& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregdbEntryTvalOvrd& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregdbEntryTvalOvrd)

namespace s_brgdvsvc {

                            // ===================                             
                            // class ExtOvrValList                             
                            // ===================                             

class ExtOvrValList {

    // INSTANCE DATA
    std::vector<BregdbEntryExtTvalOvrd>  d_extOvrVal;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_EXT_OVR_VAL = 0
    };

    enum {
        NUM_ATTRIBUTES = 1
    };

    enum {
        ATTRIBUTE_INDEX_EXT_OVR_VAL = 0
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit ExtOvrValList(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'ExtOvrValList' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    ExtOvrValList(const ExtOvrValList& original,
                  bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'ExtOvrValList' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~ExtOvrValList();
        // Destroy this object.

    // MANIPULATORS
    ExtOvrValList& operator=(const ExtOvrValList& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    std::vector<BregdbEntryExtTvalOvrd>& extOvrVal();
        // Return a reference to the modifiable "ExtOvrVal" attribute of this
        // object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    const std::vector<BregdbEntryExtTvalOvrd>& extOvrVal() const;
        // Return a reference to the non-modifiable "ExtOvrVal" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const ExtOvrValList& lhs, const ExtOvrValList& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const ExtOvrValList& lhs, const ExtOvrValList& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const ExtOvrValList& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::ExtOvrValList)

namespace s_brgdvsvc {

                               // ==============                               
                               // class Response                               
                               // ==============                               

class Response {

    // INSTANCE DATA
    union {
        bsls_ObjectBuffer< BregDevValueResponseInfo > d_bregDevValueResponse;
    };

    int                                               d_selectionId;
    bdema_Allocator                                  *d_allocator_p;

  public:
    // TYPES
    enum {
        SELECTION_ID_UNDEFINED               = -1

      , SELECTION_ID_BREG_DEV_VALUE_RESPONSE = 0
    };

    enum {
        NUM_SELECTIONS = 1
    };

    enum {
        SELECTION_INDEX_BREG_DEV_VALUE_RESPONSE = 0
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_SelectionInfo SELECTION_INFO_ARRAY[];

    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_SelectionInfo *lookupSelectionInfo(int id);
        // Return selection information for the selection indicated by the
        // specified 'id' if the selection exists, and 0 otherwise.

    static const bdeat_SelectionInfo *lookupSelectionInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return selection information for the selection indicated by the
        // specified 'name' of the specified 'nameLength' if the selection
        // exists, and 0 otherwise.

    // CREATORS
    explicit Response(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'Response' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    Response(const Response& original,
            bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'Response' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~Response();
        // Destroy this object.

    // MANIPULATORS
    Response& operator=(const Response& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon default
        // construction).

    int makeSelection(int selectionId);
        // Set the value of this object to be the default for the selection
        // indicated by the specified 'selectionId'.  Return 0 on success, and
        // non-zero value otherwise (i.e., the selection is not found).

    int makeSelection(const char *name, int nameLength);
        // Set the value of this object to be the default for the selection
        // indicated by the specified 'name' of the specified 'nameLength'.
        // Return 0 on success, and non-zero value otherwise (i.e., the
        // selection is not found).

    BregDevValueResponseInfo& makeBregDevValueResponse();
    BregDevValueResponseInfo& makeBregDevValueResponse(const BregDevValueResponseInfo& value);
        // Set the value of this object to be a "BregDevValueResponse" value. 
        // Optionally specify the 'value' of the "BregDevValueResponse".  If
        // 'value' is not specified, the default "BregDevValueResponse" value
        // is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    BregDevValueResponseInfo& bregDevValueResponse();
        // Return a reference to the modifiable "BregDevValueResponse"
        // selection of this object if "BregDevValueResponse" is the current
        // selection.  The behavior is undefined unless "BregDevValueResponse"
        // is the selection of this object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    int selectionId() const;
        // Return the id of the current selection if the selection is defined,
        // and -1 otherwise.

    template<class ACCESSOR>
    int accessSelection(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' on the non-modifiable selection,
        // supplying 'accessor' with the corresponding selection information
        // structure.  Return the value returned from the invocation of
        // 'accessor' if this object has a defined selection, and -1 otherwise.

    const BregDevValueResponseInfo& bregDevValueResponse() const;
        // Return a reference to the non-modifiable "BregDevValueResponse"
        // selection of this object if "BregDevValueResponse" is the current
        // selection.  The behavior is undefined unless "BregDevValueResponse"
        // is the selection of this object.

    bool isBregDevValueResponseValue() const;
        // Return 'true' if the value of this object is a
        // "BregDevValueResponse" value, and return 'false' otherwise.

    bool isUndefinedValue() const;
        // Return 'true' if the value of this object is undefined, and 'false'
        // otherwise.

    const char *selectionName() const;
        // Return the symbolic name of the current selection of this object.
};

// FREE OPERATORS
inline
bool operator==(const Response& lhs, const Response& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects have the same
    // value, and 'false' otherwise.  Two 'Response' objects have the same
    // value if either the selections in both objects have the same ids and
    // the same values, or both selections are undefined.

inline
bool operator!=(const Response& lhs, const Response& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects do not have the
    // same values, as determined by 'operator==', and 'false' otherwise.

inline
std::ostream& operator<<(std::ostream& stream, const Response& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::Response)

namespace s_brgdvsvc {

                        // ===========================                         
                        // class BregDevelopmentValues                         
                        // ===========================                         

class BregDevelopmentValues {

    // INSTANCE DATA
    std::vector<ExtOvrValList>          d_extOvrList;
        // Exists only for extended types.
    std::vector<BregdbEntryTvalOvrd>    d_overrideVal;
    std::vector<BregdbEntryExtTvalAry>  d_extRegVal;
        // Exists only for extended types.
    BregdbRegistryEntry                 d_registryEntry;
    BregdbEntryTestValue                d_valueRec;
    int                                 d_numOverrides;
    int                                 d_specialBits;
    BregValueType::Value                d_valueType;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_NUM_OVERRIDES  = 0
      , ATTRIBUTE_ID_VALUE_TYPE     = 1
      , ATTRIBUTE_ID_SPECIAL_BITS   = 2
      , ATTRIBUTE_ID_REGISTRY_ENTRY = 3
      , ATTRIBUTE_ID_VALUE_REC      = 4
      , ATTRIBUTE_ID_OVERRIDE_VAL   = 5
      , ATTRIBUTE_ID_EXT_REG_VAL    = 6
      , ATTRIBUTE_ID_EXT_OVR_LIST   = 7
    };

    enum {
        NUM_ATTRIBUTES = 8
    };

    enum {
        ATTRIBUTE_INDEX_NUM_OVERRIDES  = 0
      , ATTRIBUTE_INDEX_VALUE_TYPE     = 1
      , ATTRIBUTE_INDEX_SPECIAL_BITS   = 2
      , ATTRIBUTE_INDEX_REGISTRY_ENTRY = 3
      , ATTRIBUTE_INDEX_VALUE_REC      = 4
      , ATTRIBUTE_INDEX_OVERRIDE_VAL   = 5
      , ATTRIBUTE_INDEX_EXT_REG_VAL    = 6
      , ATTRIBUTE_INDEX_EXT_OVR_LIST   = 7
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const BregValueType::Value DEFAULT_INITIALIZER_VALUE_TYPE;

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregDevelopmentValues(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregDevelopmentValues' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregDevelopmentValues(const BregDevelopmentValues& original,
                          bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregDevelopmentValues' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregDevelopmentValues();
        // Destroy this object.

    // MANIPULATORS
    BregDevelopmentValues& operator=(const BregDevelopmentValues& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    int& numOverrides();
        // Return a reference to the modifiable "NumOverrides" attribute of
        // this object.

    BregValueType::Value& valueType();
        // Return a reference to the modifiable "ValueType" attribute of this
        // object.

    int& specialBits();
        // Return a reference to the modifiable "SpecialBits" attribute of this
        // object.

    BregdbRegistryEntry& registryEntry();
        // Return a reference to the modifiable "RegistryEntry" attribute of
        // this object.

    BregdbEntryTestValue& valueRec();
        // Return a reference to the modifiable "ValueRec" attribute of this
        // object.

    std::vector<BregdbEntryTvalOvrd>& overrideVal();
        // Return a reference to the modifiable "OverrideVal" attribute of this
        // object.

    std::vector<BregdbEntryExtTvalAry>& extRegVal();
        // Return a reference to the modifiable "ExtRegVal" attribute of this
        // object.

    std::vector<ExtOvrValList>& extOvrList();
        // Return a reference to the modifiable "ExtOvrList" attribute of this
        // object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    int numOverrides() const;
        // Return a reference to the non-modifiable "NumOverrides" attribute of
        // this object.

    BregValueType::Value valueType() const;
        // Return a reference to the non-modifiable "ValueType" attribute of
        // this object.

    int specialBits() const;
        // Return a reference to the non-modifiable "SpecialBits" attribute of
        // this object.

    const BregdbRegistryEntry& registryEntry() const;
        // Return a reference to the non-modifiable "RegistryEntry" attribute
        // of this object.

    const BregdbEntryTestValue& valueRec() const;
        // Return a reference to the non-modifiable "ValueRec" attribute of
        // this object.

    const std::vector<BregdbEntryTvalOvrd>& overrideVal() const;
        // Return a reference to the non-modifiable "OverrideVal" attribute of
        // this object.

    const std::vector<BregdbEntryExtTvalAry>& extRegVal() const;
        // Return a reference to the non-modifiable "ExtRegVal" attribute of
        // this object.

    const std::vector<ExtOvrValList>& extOvrList() const;
        // Return a reference to the non-modifiable "ExtOvrList" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const BregDevelopmentValues& lhs, const BregDevelopmentValues& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregDevelopmentValues& lhs, const BregDevelopmentValues& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregDevelopmentValues& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregDevelopmentValues)

namespace s_brgdvsvc {

                       // =============================                        
                       // class BregDevValueRequestInfo                        
                       // =============================                        

class BregDevValueRequestInfo {

    // INSTANCE DATA
    BregDevelopmentValues  d_bregDevValues;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_BREG_DEV_VALUES = 0
    };

    enum {
        NUM_ATTRIBUTES = 1
    };

    enum {
        ATTRIBUTE_INDEX_BREG_DEV_VALUES = 0
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_AttributeInfo ATTRIBUTE_INFO_ARRAY[];

  public:
    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_AttributeInfo *lookupAttributeInfo(int id);
        // Return attribute information for the attribute indicated by the
        // specified 'id' if the attribute exists, and 0 otherwise.

    static const bdeat_AttributeInfo *lookupAttributeInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return attribute information for the attribute indicated by the
        // specified 'name' of the specified 'nameLength' if the attribute
        // exists, and 0 otherwise.

    // CREATORS
    explicit BregDevValueRequestInfo(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregDevValueRequestInfo' having the
        // default value.  Use the optionally specified 'basicAllocator' to
        // supply memory.  If 'basicAllocator' is 0, the currently installed
        // default allocator is used.

    BregDevValueRequestInfo(const BregDevValueRequestInfo& original,
                            bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'BregDevValueRequestInfo' having the value
        // of the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregDevValueRequestInfo();
        // Destroy this object.

    // MANIPULATORS
    BregDevValueRequestInfo& operator=(const BregDevValueRequestInfo& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon
        // default construction).

    template<class MANIPULATOR>
    int manipulateAttributes(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' sequentially on the address of
        // each (modifiable) attribute of this object, supplying 'manipulator'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'manipulator' (i.e., the invocation that
        // terminated the sequence).

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR& manipulator, int id);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'id',
        // supplying 'manipulator' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if 'id' identifies an attribute of this
        // class, and -1 otherwise.

    template<class MANIPULATOR>
    int manipulateAttribute(MANIPULATOR&  manipulator,
                            const char   *name,
                            int           nameLength);
        // Invoke the specified 'manipulator' on the address of
        // the (modifiable) attribute indicated by the specified 'name' of the
        // specified 'nameLength', supplying 'manipulator' with the
        // corresponding attribute information structure.  Return the value
        // returned from the invocation of 'manipulator' if 'name' identifies
        // an attribute of this class, and -1 otherwise.

    BregDevelopmentValues& bregDevValues();
        // Return a reference to the modifiable "BregDevValues" attribute of
        // this object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    template<class ACCESSOR>
    int accessAttributes(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' sequentially on each
        // (non-modifiable) attribute of this object, supplying 'accessor'
        // with the corresponding attribute information structure until such
        // invocation returns a non-zero value.  Return the value from the
        // last invocation of 'accessor' (i.e., the invocation that terminated
        // the sequence).

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR& accessor, int id) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'id', supplying 'accessor'
        // with the corresponding attribute information structure.  Return the
        // value returned from the invocation of 'accessor' if 'id' identifies
        // an attribute of this class, and -1 otherwise.

    template<class ACCESSOR>
    int accessAttribute(ACCESSOR&   accessor,
                        const char *name,
                        int         nameLength) const;
        // Invoke the specified 'accessor' on the (non-modifiable) attribute
        // of this object indicated by the specified 'name' of the specified
        // 'nameLength', supplying 'accessor' with the corresponding attribute
        // information structure.  Return the value returned from the
        // invocation of 'accessor' if 'name' identifies an attribute of this
        // class, and -1 otherwise.

    const BregDevelopmentValues& bregDevValues() const;
        // Return a reference to the non-modifiable "BregDevValues" attribute
        // of this object.
};

// FREE OPERATORS
inline
bool operator==(const BregDevValueRequestInfo& lhs, const BregDevValueRequestInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregDevValueRequestInfo& lhs, const BregDevValueRequestInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
std::ostream& operator<<(std::ostream& stream, const BregDevValueRequestInfo& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::BregDevValueRequestInfo)

namespace s_brgdvsvc {

                               // =============                                
                               // class Request                                
                               // =============                                

class Request {

    // INSTANCE DATA
    union {
        bsls_ObjectBuffer< BregDevValueRequestInfo > d_bregPropagateDevValueRequest;
        bsls_ObjectBuffer< BregDevValueRequestInfo > d_bregOneWayPropagateDevValueRequest;
    };

    int                                              d_selectionId;
    bdema_Allocator                                 *d_allocator_p;

  public:
    // TYPES
    enum {
        SELECTION_ID_UNDEFINED                                = -1

      , SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST         = 0
      , SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST = 1
    };

    enum {
        NUM_SELECTIONS = 2
    };

    enum {
        SELECTION_INDEX_BREG_PROPAGATE_DEV_VALUE_REQUEST         = 0
      , SELECTION_INDEX_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST = 1
    };

    // CONSTANTS
    static const char CLASS_NAME[];

    static const bdeat_SelectionInfo SELECTION_INFO_ARRAY[];

    // CLASS METHODS
    static int maxSupportedBdexVersion();
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    static const bdeat_SelectionInfo *lookupSelectionInfo(int id);
        // Return selection information for the selection indicated by the
        // specified 'id' if the selection exists, and 0 otherwise.

    static const bdeat_SelectionInfo *lookupSelectionInfo(
                                                    const char *name,
                                                    int         nameLength);
        // Return selection information for the selection indicated by the
        // specified 'name' of the specified 'nameLength' if the selection
        // exists, and 0 otherwise.

    // CREATORS
    explicit Request(bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'Request' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    Request(const Request& original,
           bdema_Allocator *basicAllocator = 0);
        // Create an object of type 'Request' having the value of the specified
        // 'original' object.  Use the optionally specified 'basicAllocator' to
        // supply memory.  If 'basicAllocator' is 0, the currently installed
        // default allocator is used.

    ~Request();
        // Destroy this object.

    // MANIPULATORS
    Request& operator=(const Request& rhs);
        // Assign to this object the value of the specified 'rhs' object.

    template <class STREAM>
    STREAM& bdexStreamIn(STREAM& stream, int version);
        // Assign to this object the value read from the specified input
        // 'stream' using the specified 'version' format and return a reference
        // to the modifiable 'stream'.  If 'stream' is initially invalid, this
        // operation has no effect.  If 'stream' becomes invalid during this
        // operation, this object is valid, but its value is undefined.  If
        // 'version' is not supported, 'stream' is marked invalid and this
        // object is unaltered.  Note that no version is read from 'stream'.
        // See the 'bdex' package-level documentation for more information on
        // 'bdex' streaming of value-semantic types and containers.

    int fromAggregate(const bcem_Aggregate& aggregate);
        // Store the value of the specified 'aggregate' into this object.
        // Return 0 on success, and a non-zero value otherwise.

    void reset();
        // Reset this object to the default value (i.e., its value upon default
        // construction).

    int makeSelection(int selectionId);
        // Set the value of this object to be the default for the selection
        // indicated by the specified 'selectionId'.  Return 0 on success, and
        // non-zero value otherwise (i.e., the selection is not found).

    int makeSelection(const char *name, int nameLength);
        // Set the value of this object to be the default for the selection
        // indicated by the specified 'name' of the specified 'nameLength'.
        // Return 0 on success, and non-zero value otherwise (i.e., the
        // selection is not found).

    BregDevValueRequestInfo& makeBregPropagateDevValueRequest();
    BregDevValueRequestInfo& makeBregPropagateDevValueRequest(const BregDevValueRequestInfo& value);
        // Set the value of this object to be a "BregPropagateDevValueRequest"
        // value.  Optionally specify the 'value' of the
        // "BregPropagateDevValueRequest".  If 'value' is not specified, the
        // default "BregPropagateDevValueRequest" value is used.

    BregDevValueRequestInfo& makeBregOneWayPropagateDevValueRequest();
    BregDevValueRequestInfo& makeBregOneWayPropagateDevValueRequest(const BregDevValueRequestInfo& value);
        // Set the value of this object to be a
        // "BregOneWayPropagateDevValueRequest" value.  Optionally specify the
        // 'value' of the "BregOneWayPropagateDevValueRequest".  If 'value' is
        // not specified, the default "BregOneWayPropagateDevValueRequest"
        // value is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    BregDevValueRequestInfo& bregPropagateDevValueRequest();
        // Return a reference to the modifiable "BregPropagateDevValueRequest"
        // selection of this object if "BregPropagateDevValueRequest" is the
        // current selection.  The behavior is undefined unless
        // "BregPropagateDevValueRequest" is the selection of this object.

    BregDevValueRequestInfo& bregOneWayPropagateDevValueRequest();
        // Return a reference to the modifiable
        // "BregOneWayPropagateDevValueRequest" selection of this object if
        // "BregOneWayPropagateDevValueRequest" is the current selection.  The
        // behavior is undefined unless "BregOneWayPropagateDevValueRequest" is
        // the selection of this object.

    // ACCESSORS
    std::ostream& print(std::ostream& stream,
                        int           level = 0,
                        int           spacesPerLevel = 4) const;
        // Format this object to the specified output 'stream' at the
        // optionally specified indentation 'level' and return a reference to
        // the modifiable 'stream'.  If 'level' is specified, optionally
        // specify 'spacesPerLevel', the number of spaces per indentation level
        // for this and all of its nested objects.  Each line is indented by
        // the absolute value of 'level * spacesPerLevel'.  If 'level' is
        // negative, suppress indentation of the first line.  If
        // 'spacesPerLevel' is negative, suppress line breaks and format the
        // entire output on one line.  If 'stream' is initially invalid, this
        // operation has no effect.  Note that a trailing newline is provided
        // in multiline mode only.

    template <class STREAM>
    STREAM& bdexStreamOut(STREAM& stream, int version) const;
        // Write the value of this object to the specified output 'stream'
        // using the specified 'version' format and return a reference to the
        // modifiable 'stream'.  If 'version' is not supported, 'stream' is
        // unmodified.  Note that 'version' is not written to 'stream'.
        // See the 'bdex' package-level documentation for more information
        // on 'bdex' streaming of value-semantic types and containers.

    int toAggregate(bcem_Aggregate *result) const;
        // Load the specified 'result' with the value of this object.  Return
        // 0 on success, and a non-zero value otherwise.

    int selectionId() const;
        // Return the id of the current selection if the selection is defined,
        // and -1 otherwise.

    template<class ACCESSOR>
    int accessSelection(ACCESSOR& accessor) const;
        // Invoke the specified 'accessor' on the non-modifiable selection,
        // supplying 'accessor' with the corresponding selection information
        // structure.  Return the value returned from the invocation of
        // 'accessor' if this object has a defined selection, and -1 otherwise.

    const BregDevValueRequestInfo& bregPropagateDevValueRequest() const;
        // Return a reference to the non-modifiable
        // "BregPropagateDevValueRequest" selection of this object if
        // "BregPropagateDevValueRequest" is the current selection.  The
        // behavior is undefined unless "BregPropagateDevValueRequest" is the
        // selection of this object.

    const BregDevValueRequestInfo& bregOneWayPropagateDevValueRequest() const;
        // Return a reference to the non-modifiable
        // "BregOneWayPropagateDevValueRequest" selection of this object if
        // "BregOneWayPropagateDevValueRequest" is the current selection.  The
        // behavior is undefined unless "BregOneWayPropagateDevValueRequest" is
        // the selection of this object.

    bool isBregPropagateDevValueRequestValue() const;
        // Return 'true' if the value of this object is a
        // "BregPropagateDevValueRequest" value, and return 'false' otherwise.

    bool isBregOneWayPropagateDevValueRequestValue() const;
        // Return 'true' if the value of this object is a
        // "BregOneWayPropagateDevValueRequest" value, and return 'false'
        // otherwise.

    bool isUndefinedValue() const;
        // Return 'true' if the value of this object is undefined, and 'false'
        // otherwise.

    const char *selectionName() const;
        // Return the symbolic name of the current selection of this object.
};

// FREE OPERATORS
inline
bool operator==(const Request& lhs, const Request& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects have the same
    // value, and 'false' otherwise.  Two 'Request' objects have the same
    // value if either the selections in both objects have the same ids and
    // the same values, or both selections are undefined.

inline
bool operator!=(const Request& lhs, const Request& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects do not have the
    // same values, as determined by 'operator==', and 'false' otherwise.

inline
std::ostream& operator<<(std::ostream& stream, const Request& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close namespace s_brgdvsvc

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_brgdvsvc::Request)

namespace s_brgdvsvc {

                               // ==============                                
                               // class Messages                                
                               // ==============                                

struct Messages {
    // This class serves as a place holder to reserve a type having the same
    // name as this component.  Doing so ensures that such a type cannot be
    // defined outside of this component in the current namespace.
};

}  // close namespace s_brgdvsvc

// ============================================================================
//                         INLINE FUNCTION DEFINITIONS
// ============================================================================

namespace s_brgdvsvc {

                              // ----------------                              
                              // class BregStatus                              
                              // ----------------                              

// CLASS METHODS
inline
int BregStatus::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int BregStatus::fromString(Value *result, const std::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
std::ostream& BregStatus::print(std::ostream&      stream,
                                 BregStatus::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& BregStatus::bdexStreamIn(STREAM&             stream,
                                   BregStatus::Value& value,
                                   int                 version)
{
    switch(version) {
      case 1: {
        int readValue;
        stream.getInt32(readValue);
        if (stream) {
            if (fromInt(&value, readValue)) {
               stream.invalidate();   // bad value in stream
            }
        }
      } break;
      default: {
        stream.invalidate();          // unrecognized version number
      } break;
    }
    return stream;
}

template <class STREAM>
STREAM& BregStatus::bdexStreamOut(STREAM&              stream,
                                    BregStatus::Value value,
                                    int                version)
{
    switch (version) {
      case 1: {
        stream.putInt32(value);  // Write the value as an int
      } break;
    }
    return stream;
}



                              // ---------------                               
                              // class BregValue                               
                              // ---------------                               

// CLASS METHODS
inline
int BregValue::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// CREATORS
inline
BregValue::BregValue(bdema_Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bdema_Default::allocator(basicAllocator))
{
}

inline
BregValue::~BregValue()
{
    reset();
}

// MANIPULATORS
template <class STREAM>
STREAM& BregValue::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            short selectionId;
            stream.getInt16(selectionId);
            if (!stream) {
                return stream;
            }
            switch (selectionId) {
              case SELECTION_ID_BOOLEAN_VALUE: {
                makeBooleanValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_booleanValue.object(), 1);
              } break;
              case SELECTION_ID_DOUBLE_VALUE: {
                makeDoubleValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_doubleValue.object(), 1);
              } break;
              case SELECTION_ID_INTEGER_VALUE: {
                makeIntegerValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_integerValue.object(), 1);
              } break;
              case SELECTION_ID_INTEGER_ARRAY: {
                makeIntegerArray();
                bdex_InStreamFunctions::streamIn(
                    stream, d_integerArray.object(), 1);
              } break;
              case SELECTION_ID_CHARACTER_VALUE: {
                makeCharacterValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_characterValue.object(), 1);
              } break;
              case SELECTION_ID_CHARACTER_ARRAY: {
                makeCharacterArray();
                bdex_InStreamFunctions::streamIn(
                    stream, d_characterArray.object(), 1);
              } break;
              case SELECTION_ID_UNDEFINED: {
                reset();
              } break;
              default:
                stream.invalidate();
            }
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregValue::manipulateSelection(MANIPULATOR& manipulator)
{
    switch (d_selectionId) {
      case BregValue::SELECTION_ID_BOOLEAN_VALUE:
        return manipulator(&d_booleanValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOLEAN_VALUE]);
      case BregValue::SELECTION_ID_DOUBLE_VALUE:
        return manipulator(&d_doubleValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE]);
      case BregValue::SELECTION_ID_INTEGER_VALUE:
        return manipulator(&d_integerValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_VALUE]);
      case BregValue::SELECTION_ID_INTEGER_ARRAY:
        return manipulator(&d_integerArray.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_ARRAY]);
      case BregValue::SELECTION_ID_CHARACTER_VALUE:
        return manipulator(&d_characterValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_VALUE]);
      case BregValue::SELECTION_ID_CHARACTER_ARRAY:
        return manipulator(&d_characterArray.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_ARRAY]);
      default:
        BSLS_ASSERT(BregValue::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
bool& BregValue::booleanValue()
{
    BSLS_ASSERT(SELECTION_ID_BOOLEAN_VALUE == d_selectionId);
    return d_booleanValue.object();
}

inline
double& BregValue::doubleValue()
{
    BSLS_ASSERT(SELECTION_ID_DOUBLE_VALUE == d_selectionId);
    return d_doubleValue.object();
}

inline
int& BregValue::integerValue()
{
    BSLS_ASSERT(SELECTION_ID_INTEGER_VALUE == d_selectionId);
    return d_integerValue.object();
}

inline
std::vector<int>& BregValue::integerArray()
{
    BSLS_ASSERT(SELECTION_ID_INTEGER_ARRAY == d_selectionId);
    return d_integerArray.object();
}

inline
std::string& BregValue::characterValue()
{
    BSLS_ASSERT(SELECTION_ID_CHARACTER_VALUE == d_selectionId);
    return d_characterValue.object();
}

inline
std::string& BregValue::characterArray()
{
    BSLS_ASSERT(SELECTION_ID_CHARACTER_ARRAY == d_selectionId);
    return d_characterArray.object();
}

// ACCESSORS
template <class STREAM>
STREAM& BregValue::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_BOOLEAN_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_booleanValue.object(), 1);
              } break;
              case SELECTION_ID_DOUBLE_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_doubleValue.object(), 1);
              } break;
              case SELECTION_ID_INTEGER_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_integerValue.object(), 1);
              } break;
              case SELECTION_ID_INTEGER_ARRAY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_integerArray.object(), 1);
              } break;
              case SELECTION_ID_CHARACTER_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_characterValue.object(), 1);
              } break;
              case SELECTION_ID_CHARACTER_ARRAY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_characterArray.object(), 1);
              } break;
              default:
                BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
            }
      } break;
    }
    return stream;
}

inline
int BregValue::selectionId() const
{
    return d_selectionId;
}

template <class ACCESSOR>
int BregValue::accessSelection(ACCESSOR& accessor) const
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOLEAN_VALUE:
        return accessor(d_booleanValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOLEAN_VALUE]);
      case SELECTION_ID_DOUBLE_VALUE:
        return accessor(d_doubleValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE]);
      case SELECTION_ID_INTEGER_VALUE:
        return accessor(d_integerValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_VALUE]);
      case SELECTION_ID_INTEGER_ARRAY:
        return accessor(d_integerArray.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INTEGER_ARRAY]);
      case SELECTION_ID_CHARACTER_VALUE:
        return accessor(d_characterValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_VALUE]);
      case SELECTION_ID_CHARACTER_ARRAY:
        return accessor(d_characterArray.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHARACTER_ARRAY]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const bool& BregValue::booleanValue() const
{
    BSLS_ASSERT(SELECTION_ID_BOOLEAN_VALUE == d_selectionId);
    return d_booleanValue.object();
}

inline
const double& BregValue::doubleValue() const
{
    BSLS_ASSERT(SELECTION_ID_DOUBLE_VALUE == d_selectionId);
    return d_doubleValue.object();
}

inline
const int& BregValue::integerValue() const
{
    BSLS_ASSERT(SELECTION_ID_INTEGER_VALUE == d_selectionId);
    return d_integerValue.object();
}

inline
const std::vector<int>& BregValue::integerArray() const
{
    BSLS_ASSERT(SELECTION_ID_INTEGER_ARRAY == d_selectionId);
    return d_integerArray.object();
}

inline
const std::string& BregValue::characterValue() const
{
    BSLS_ASSERT(SELECTION_ID_CHARACTER_VALUE == d_selectionId);
    return d_characterValue.object();
}

inline
const std::string& BregValue::characterArray() const
{
    BSLS_ASSERT(SELECTION_ID_CHARACTER_ARRAY == d_selectionId);
    return d_characterArray.object();
}

inline
bool BregValue::isBooleanValueValue() const
{
    return SELECTION_ID_BOOLEAN_VALUE == d_selectionId;
}

inline
bool BregValue::isDoubleValueValue() const
{
    return SELECTION_ID_DOUBLE_VALUE == d_selectionId;
}

inline
bool BregValue::isIntegerValueValue() const
{
    return SELECTION_ID_INTEGER_VALUE == d_selectionId;
}

inline
bool BregValue::isIntegerArrayValue() const
{
    return SELECTION_ID_INTEGER_ARRAY == d_selectionId;
}

inline
bool BregValue::isCharacterValueValue() const
{
    return SELECTION_ID_CHARACTER_VALUE == d_selectionId;
}

inline
bool BregValue::isCharacterArrayValue() const
{
    return SELECTION_ID_CHARACTER_ARRAY == d_selectionId;
}

inline
bool BregValue::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
}


                            // -------------------                             
                            // class BregValueType                             
                            // -------------------                             

// CLASS METHODS
inline
int BregValueType::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int BregValueType::fromString(Value *result, const std::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
std::ostream& BregValueType::print(std::ostream&      stream,
                                 BregValueType::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& BregValueType::bdexStreamIn(STREAM&             stream,
                                   BregValueType::Value& value,
                                   int                 version)
{
    switch(version) {
      case 1: {
        int readValue;
        stream.getInt32(readValue);
        if (stream) {
            if (fromInt(&value, readValue)) {
               stream.invalidate();   // bad value in stream
            }
        }
      } break;
      default: {
        stream.invalidate();          // unrecognized version number
      } break;
    }
    return stream;
}

template <class STREAM>
STREAM& BregValueType::bdexStreamOut(STREAM&              stream,
                                    BregValueType::Value value,
                                    int                version)
{
    switch (version) {
      case 1: {
        stream.putInt32(value);  // Write the value as an int
      } break;
    }
    return stream;
}



                         // -------------------------                          
                         // class BregdbRegistryEntry                          
                         // -------------------------                          

// CLASS METHODS
inline
int BregdbRegistryEntry::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregdbRegistryEntry::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateByUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valTypeCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isInMemoryCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isTemporaryCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_apiStatusCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_switchStatusCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_switchModeCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_maxNoOfValues, 1);
            bdex_InStreamFunctions::streamIn(stream, d_expiryTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_apiName, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregdbRegistryEntry::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_TYPE_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isInMemoryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isTemporaryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TEMPORARY_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_apiStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_switchStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_STATUS_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_switchModeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_MODE_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_maxNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NO_OF_VALUES]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregdbRegistryEntry::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_VAL_TYPE_CD: {
        return manipulator(&d_valTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_TYPE_CD]);
      } break;
      case ATTRIBUTE_ID_IS_IN_MEMORY_CD: {
        return manipulator(&d_isInMemoryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_CD]);
      } break;
      case ATTRIBUTE_ID_IS_TEMPORARY_CD: {
        return manipulator(&d_isTemporaryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TEMPORARY_CD]);
      } break;
      case ATTRIBUTE_ID_API_STATUS_CD: {
        return manipulator(&d_apiStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS_CD]);
      } break;
      case ATTRIBUTE_ID_SWITCH_STATUS_CD: {
        return manipulator(&d_switchStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_STATUS_CD]);
      } break;
      case ATTRIBUTE_ID_SWITCH_MODE_CD: {
        return manipulator(&d_switchModeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_MODE_CD]);
      } break;
      case ATTRIBUTE_ID_MAX_NO_OF_VALUES: {
        return manipulator(&d_maxNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NO_OF_VALUES]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_API_NAME: {
        return manipulator(&d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregdbRegistryEntry::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
int& BregdbRegistryEntry::entryId()
{
    return d_entryId;
}

inline
int& BregdbRegistryEntry::updateByUuid()
{
    return d_updateByUuid;
}

inline
std::string& BregdbRegistryEntry::updateTsp()
{
    return d_updateTsp;
}

inline
int& BregdbRegistryEntry::valTypeCd()
{
    return d_valTypeCd;
}

inline
int& BregdbRegistryEntry::isInMemoryCd()
{
    return d_isInMemoryCd;
}

inline
int& BregdbRegistryEntry::isTemporaryCd()
{
    return d_isTemporaryCd;
}

inline
int& BregdbRegistryEntry::apiStatusCd()
{
    return d_apiStatusCd;
}

inline
int& BregdbRegistryEntry::switchStatusCd()
{
    return d_switchStatusCd;
}

inline
int& BregdbRegistryEntry::switchModeCd()
{
    return d_switchModeCd;
}

inline
int& BregdbRegistryEntry::maxNoOfValues()
{
    return d_maxNoOfValues;
}

inline
std::string& BregdbRegistryEntry::expiryTsp()
{
    return d_expiryTsp;
}

inline
std::string& BregdbRegistryEntry::apiName()
{
    return d_apiName;
}

// ACCESSORS
template <class STREAM>
STREAM& BregdbRegistryEntry::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateByUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valTypeCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isInMemoryCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isTemporaryCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_apiStatusCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_switchStatusCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_switchModeCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_maxNoOfValues, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_expiryTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_apiName, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregdbRegistryEntry::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_TYPE_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isInMemoryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isTemporaryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TEMPORARY_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_apiStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_switchStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_STATUS_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_switchModeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_MODE_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_maxNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NO_OF_VALUES]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregdbRegistryEntry::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_VAL_TYPE_CD: {
        return accessor(d_valTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_TYPE_CD]);
      } break;
      case ATTRIBUTE_ID_IS_IN_MEMORY_CD: {
        return accessor(d_isInMemoryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_CD]);
      } break;
      case ATTRIBUTE_ID_IS_TEMPORARY_CD: {
        return accessor(d_isTemporaryCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TEMPORARY_CD]);
      } break;
      case ATTRIBUTE_ID_API_STATUS_CD: {
        return accessor(d_apiStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS_CD]);
      } break;
      case ATTRIBUTE_ID_SWITCH_STATUS_CD: {
        return accessor(d_switchStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_STATUS_CD]);
      } break;
      case ATTRIBUTE_ID_SWITCH_MODE_CD: {
        return accessor(d_switchModeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SWITCH_MODE_CD]);
      } break;
      case ATTRIBUTE_ID_MAX_NO_OF_VALUES: {
        return accessor(d_maxNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NO_OF_VALUES]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_API_NAME: {
        return accessor(d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregdbRegistryEntry::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
int BregdbRegistryEntry::entryId() const
{
    return d_entryId;
}

inline
int BregdbRegistryEntry::updateByUuid() const
{
    return d_updateByUuid;
}

inline
const std::string& BregdbRegistryEntry::updateTsp() const
{
    return d_updateTsp;
}

inline
int BregdbRegistryEntry::valTypeCd() const
{
    return d_valTypeCd;
}

inline
int BregdbRegistryEntry::isInMemoryCd() const
{
    return d_isInMemoryCd;
}

inline
int BregdbRegistryEntry::isTemporaryCd() const
{
    return d_isTemporaryCd;
}

inline
int BregdbRegistryEntry::apiStatusCd() const
{
    return d_apiStatusCd;
}

inline
int BregdbRegistryEntry::switchStatusCd() const
{
    return d_switchStatusCd;
}

inline
int BregdbRegistryEntry::switchModeCd() const
{
    return d_switchModeCd;
}

inline
int BregdbRegistryEntry::maxNoOfValues() const
{
    return d_maxNoOfValues;
}

inline
const std::string& BregdbRegistryEntry::expiryTsp() const
{
    return d_expiryTsp;
}

inline
const std::string& BregdbRegistryEntry::apiName() const
{
    return d_apiName;
}



                       // ------------------------------                       
                       // class BregDevValueResponseInfo                       
                       // ------------------------------                       

// CLASS METHODS
inline
int BregDevValueResponseInfo::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregDevValueResponseInfo::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            BregStatus::bdexStreamIn(stream, d_bregStatus, 1);
            bdex_InStreamFunctions::streamIn(stream, d_statusString, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregDevValueResponseInfo::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_bregStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_STATUS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_statusString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS_STRING]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregDevValueResponseInfo::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_BREG_STATUS: {
        return manipulator(&d_bregStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_STATUS]);
      } break;
      case ATTRIBUTE_ID_STATUS_STRING: {
        return manipulator(&d_statusString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS_STRING]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregDevValueResponseInfo::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
BregStatus::Value& BregDevValueResponseInfo::bregStatus()
{
    return d_bregStatus;
}

inline
std::string& BregDevValueResponseInfo::statusString()
{
    return d_statusString;
}

// ACCESSORS
template <class STREAM>
STREAM& BregDevValueResponseInfo::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_bregStatus, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_statusString, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregDevValueResponseInfo::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_bregStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_STATUS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_statusString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS_STRING]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregDevValueResponseInfo::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_BREG_STATUS: {
        return accessor(d_bregStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_STATUS]);
      } break;
      case ATTRIBUTE_ID_STATUS_STRING: {
        return accessor(d_statusString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS_STRING]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregDevValueResponseInfo::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
BregStatus::Value BregDevValueResponseInfo::bregStatus() const
{
    return d_bregStatus;
}

inline
const std::string& BregDevValueResponseInfo::statusString() const
{
    return d_statusString;
}



                        // ---------------------------                         
                        // class BregdbEntryExtTvalAry                         
                        // ---------------------------                         

// CLASS METHODS
inline
int BregdbEntryExtTvalAry::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregdbEntryExtTvalAry::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_tvalAryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateByUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_lookupValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_returnValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryTvalId, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregdbEntryExtTvalAry::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_tvalAryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVAL_ARY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregdbEntryExtTvalAry::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TVAL_ARY_ID: {
        return manipulator(&d_tvalAryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVAL_ARY_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_LOOKUP_VALUE: {
        return manipulator(&d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
      } break;
      case ATTRIBUTE_ID_RETURN_VALUE: {
        return manipulator(&d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
      } break;
      case ATTRIBUTE_ID_ENTRY_TVAL_ID: {
        return manipulator(&d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregdbEntryExtTvalAry::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
int& BregdbEntryExtTvalAry::tvalAryId()
{
    return d_tvalAryId;
}

inline
int& BregdbEntryExtTvalAry::updateByUuid()
{
    return d_updateByUuid;
}

inline
std::string& BregdbEntryExtTvalAry::updateTsp()
{
    return d_updateTsp;
}

inline
BregValue& BregdbEntryExtTvalAry::lookupValue()
{
    return d_lookupValue;
}

inline
BregValue& BregdbEntryExtTvalAry::returnValue()
{
    return d_returnValue;
}

inline
int& BregdbEntryExtTvalAry::entryTvalId()
{
    return d_entryTvalId;
}

// ACCESSORS
template <class STREAM>
STREAM& BregdbEntryExtTvalAry::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_tvalAryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateByUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_lookupValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_returnValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryTvalId, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregdbEntryExtTvalAry::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_tvalAryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVAL_ARY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregdbEntryExtTvalAry::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TVAL_ARY_ID: {
        return accessor(d_tvalAryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVAL_ARY_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_LOOKUP_VALUE: {
        return accessor(d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
      } break;
      case ATTRIBUTE_ID_RETURN_VALUE: {
        return accessor(d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
      } break;
      case ATTRIBUTE_ID_ENTRY_TVAL_ID: {
        return accessor(d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregdbEntryExtTvalAry::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
int BregdbEntryExtTvalAry::tvalAryId() const
{
    return d_tvalAryId;
}

inline
int BregdbEntryExtTvalAry::updateByUuid() const
{
    return d_updateByUuid;
}

inline
const std::string& BregdbEntryExtTvalAry::updateTsp() const
{
    return d_updateTsp;
}

inline
const BregValue& BregdbEntryExtTvalAry::lookupValue() const
{
    return d_lookupValue;
}

inline
const BregValue& BregdbEntryExtTvalAry::returnValue() const
{
    return d_returnValue;
}

inline
int BregdbEntryExtTvalAry::entryTvalId() const
{
    return d_entryTvalId;
}



                        // ----------------------------                        
                        // class BregdbEntryExtTvalOvrd                        
                        // ----------------------------                        

// CLASS METHODS
inline
int BregdbEntryExtTvalOvrd::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregdbEntryExtTvalOvrd::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_tvalaOvrdId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateByUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_testValOvrdId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_lookupValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_returnValue, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregdbEntryExtTvalOvrd::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_tvalaOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVALA_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregdbEntryExtTvalOvrd::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TVALA_OVRD_ID: {
        return manipulator(&d_tvalaOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVALA_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_TEST_VAL_OVRD_ID: {
        return manipulator(&d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_LOOKUP_VALUE: {
        return manipulator(&d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
      } break;
      case ATTRIBUTE_ID_RETURN_VALUE: {
        return manipulator(&d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregdbEntryExtTvalOvrd::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
int& BregdbEntryExtTvalOvrd::tvalaOvrdId()
{
    return d_tvalaOvrdId;
}

inline
int& BregdbEntryExtTvalOvrd::updateByUuid()
{
    return d_updateByUuid;
}

inline
std::string& BregdbEntryExtTvalOvrd::updateTsp()
{
    return d_updateTsp;
}

inline
int& BregdbEntryExtTvalOvrd::testValOvrdId()
{
    return d_testValOvrdId;
}

inline
BregValue& BregdbEntryExtTvalOvrd::lookupValue()
{
    return d_lookupValue;
}

inline
BregValue& BregdbEntryExtTvalOvrd::returnValue()
{
    return d_returnValue;
}

// ACCESSORS
template <class STREAM>
STREAM& BregdbEntryExtTvalOvrd::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_tvalaOvrdId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateByUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_testValOvrdId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_lookupValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_returnValue, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregdbEntryExtTvalOvrd::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_tvalaOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVALA_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregdbEntryExtTvalOvrd::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TVALA_OVRD_ID: {
        return accessor(d_tvalaOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TVALA_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_TEST_VAL_OVRD_ID: {
        return accessor(d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_LOOKUP_VALUE: {
        return accessor(d_lookupValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOOKUP_VALUE]);
      } break;
      case ATTRIBUTE_ID_RETURN_VALUE: {
        return accessor(d_returnValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_RETURN_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregdbEntryExtTvalOvrd::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
int BregdbEntryExtTvalOvrd::tvalaOvrdId() const
{
    return d_tvalaOvrdId;
}

inline
int BregdbEntryExtTvalOvrd::updateByUuid() const
{
    return d_updateByUuid;
}

inline
const std::string& BregdbEntryExtTvalOvrd::updateTsp() const
{
    return d_updateTsp;
}

inline
int BregdbEntryExtTvalOvrd::testValOvrdId() const
{
    return d_testValOvrdId;
}

inline
const BregValue& BregdbEntryExtTvalOvrd::lookupValue() const
{
    return d_lookupValue;
}

inline
const BregValue& BregdbEntryExtTvalOvrd::returnValue() const
{
    return d_returnValue;
}



                         // --------------------------                         
                         // class BregdbEntryTestValue                         
                         // --------------------------                         

// CLASS METHODS
inline
int BregdbEntryTestValue::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregdbEntryTestValue::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryTvalId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateByUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_versionNo, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valStatusCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_actNoOfValues, 1);
            bdex_InStreamFunctions::streamIn(stream, d_logNote, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregdbEntryTestValue::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_STATUS_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_logNote, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregdbEntryTestValue::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_TVAL_ID: {
        return manipulator(&d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_VERSION_NO: {
        return manipulator(&d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
      } break;
      case ATTRIBUTE_ID_VAL_STATUS_CD: {
        return manipulator(&d_valStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_STATUS_CD]);
      } break;
      case ATTRIBUTE_ID_ENTRY_VALUE: {
        return manipulator(&d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
      } break;
      case ATTRIBUTE_ID_ACT_NO_OF_VALUES: {
        return manipulator(&d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
      } break;
      case ATTRIBUTE_ID_LOG_NOTE: {
        return manipulator(&d_logNote, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregdbEntryTestValue::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
int& BregdbEntryTestValue::entryTvalId()
{
    return d_entryTvalId;
}

inline
int& BregdbEntryTestValue::updateByUuid()
{
    return d_updateByUuid;
}

inline
std::string& BregdbEntryTestValue::updateTsp()
{
    return d_updateTsp;
}

inline
int& BregdbEntryTestValue::entryId()
{
    return d_entryId;
}

inline
int& BregdbEntryTestValue::versionNo()
{
    return d_versionNo;
}

inline
int& BregdbEntryTestValue::valStatusCd()
{
    return d_valStatusCd;
}

inline
BregValue& BregdbEntryTestValue::entryValue()
{
    return d_entryValue;
}

inline
int& BregdbEntryTestValue::actNoOfValues()
{
    return d_actNoOfValues;
}

inline
std::string& BregdbEntryTestValue::logNote()
{
    return d_logNote;
}

// ACCESSORS
template <class STREAM>
STREAM& BregdbEntryTestValue::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryTvalId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateByUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_versionNo, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valStatusCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_actNoOfValues, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_logNote, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregdbEntryTestValue::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_STATUS_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_logNote, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregdbEntryTestValue::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_TVAL_ID: {
        return accessor(d_entryTvalId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_TVAL_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_VERSION_NO: {
        return accessor(d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
      } break;
      case ATTRIBUTE_ID_VAL_STATUS_CD: {
        return accessor(d_valStatusCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VAL_STATUS_CD]);
      } break;
      case ATTRIBUTE_ID_ENTRY_VALUE: {
        return accessor(d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
      } break;
      case ATTRIBUTE_ID_ACT_NO_OF_VALUES: {
        return accessor(d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
      } break;
      case ATTRIBUTE_ID_LOG_NOTE: {
        return accessor(d_logNote, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregdbEntryTestValue::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
int BregdbEntryTestValue::entryTvalId() const
{
    return d_entryTvalId;
}

inline
int BregdbEntryTestValue::updateByUuid() const
{
    return d_updateByUuid;
}

inline
const std::string& BregdbEntryTestValue::updateTsp() const
{
    return d_updateTsp;
}

inline
int BregdbEntryTestValue::entryId() const
{
    return d_entryId;
}

inline
int BregdbEntryTestValue::versionNo() const
{
    return d_versionNo;
}

inline
int BregdbEntryTestValue::valStatusCd() const
{
    return d_valStatusCd;
}

inline
const BregValue& BregdbEntryTestValue::entryValue() const
{
    return d_entryValue;
}

inline
int BregdbEntryTestValue::actNoOfValues() const
{
    return d_actNoOfValues;
}

inline
const std::string& BregdbEntryTestValue::logNote() const
{
    return d_logNote;
}



                         // -------------------------                          
                         // class BregdbEntryTvalOvrd                          
                         // -------------------------                          

// CLASS METHODS
inline
int BregdbEntryTvalOvrd::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregdbEntryTvalOvrd::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_testValOvrdId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateByUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_overrideSeq, 1);
            bdex_InStreamFunctions::streamIn(stream, d_targetTypeCd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_versionNo, 1);
            bdex_InStreamFunctions::streamIn(stream, d_targetOvrdId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_ovrdValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_actNoOfValues, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregdbEntryTvalOvrd::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_overrideSeq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_SEQ]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_targetTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_TYPE_CD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_targetOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_ovrdValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVRD_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregdbEntryTvalOvrd::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TEST_VAL_OVRD_ID: {
        return manipulator(&d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return manipulator(&d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_OVERRIDE_SEQ: {
        return manipulator(&d_overrideSeq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_SEQ]);
      } break;
      case ATTRIBUTE_ID_TARGET_TYPE_CD: {
        return manipulator(&d_targetTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_TYPE_CD]);
      } break;
      case ATTRIBUTE_ID_VERSION_NO: {
        return manipulator(&d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
      } break;
      case ATTRIBUTE_ID_TARGET_OVRD_ID: {
        return manipulator(&d_targetOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_OVRD_VALUE: {
        return manipulator(&d_ovrdValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVRD_VALUE]);
      } break;
      case ATTRIBUTE_ID_ACT_NO_OF_VALUES: {
        return manipulator(&d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregdbEntryTvalOvrd::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
int& BregdbEntryTvalOvrd::testValOvrdId()
{
    return d_testValOvrdId;
}

inline
int& BregdbEntryTvalOvrd::updateByUuid()
{
    return d_updateByUuid;
}

inline
std::string& BregdbEntryTvalOvrd::updateTsp()
{
    return d_updateTsp;
}

inline
int& BregdbEntryTvalOvrd::entryId()
{
    return d_entryId;
}

inline
int& BregdbEntryTvalOvrd::overrideSeq()
{
    return d_overrideSeq;
}

inline
int& BregdbEntryTvalOvrd::targetTypeCd()
{
    return d_targetTypeCd;
}

inline
int& BregdbEntryTvalOvrd::versionNo()
{
    return d_versionNo;
}

inline
int& BregdbEntryTvalOvrd::targetOvrdId()
{
    return d_targetOvrdId;
}

inline
BregValue& BregdbEntryTvalOvrd::ovrdValue()
{
    return d_ovrdValue;
}

inline
int& BregdbEntryTvalOvrd::actNoOfValues()
{
    return d_actNoOfValues;
}

// ACCESSORS
template <class STREAM>
STREAM& BregdbEntryTvalOvrd::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_testValOvrdId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateByUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_overrideSeq, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_targetTypeCd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_versionNo, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_targetOvrdId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_ovrdValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_actNoOfValues, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregdbEntryTvalOvrd::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_overrideSeq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_SEQ]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_targetTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_TYPE_CD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_targetOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_OVRD_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_ovrdValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVRD_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregdbEntryTvalOvrd::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TEST_VAL_OVRD_ID: {
        return accessor(d_testValOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VAL_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_BY_UUID: {
        return accessor(d_updateByUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_BY_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_OVERRIDE_SEQ: {
        return accessor(d_overrideSeq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_SEQ]);
      } break;
      case ATTRIBUTE_ID_TARGET_TYPE_CD: {
        return accessor(d_targetTypeCd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_TYPE_CD]);
      } break;
      case ATTRIBUTE_ID_VERSION_NO: {
        return accessor(d_versionNo, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_NO]);
      } break;
      case ATTRIBUTE_ID_TARGET_OVRD_ID: {
        return accessor(d_targetOvrdId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TARGET_OVRD_ID]);
      } break;
      case ATTRIBUTE_ID_OVRD_VALUE: {
        return accessor(d_ovrdValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVRD_VALUE]);
      } break;
      case ATTRIBUTE_ID_ACT_NO_OF_VALUES: {
        return accessor(d_actNoOfValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACT_NO_OF_VALUES]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregdbEntryTvalOvrd::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
int BregdbEntryTvalOvrd::testValOvrdId() const
{
    return d_testValOvrdId;
}

inline
int BregdbEntryTvalOvrd::updateByUuid() const
{
    return d_updateByUuid;
}

inline
const std::string& BregdbEntryTvalOvrd::updateTsp() const
{
    return d_updateTsp;
}

inline
int BregdbEntryTvalOvrd::entryId() const
{
    return d_entryId;
}

inline
int BregdbEntryTvalOvrd::overrideSeq() const
{
    return d_overrideSeq;
}

inline
int BregdbEntryTvalOvrd::targetTypeCd() const
{
    return d_targetTypeCd;
}

inline
int BregdbEntryTvalOvrd::versionNo() const
{
    return d_versionNo;
}

inline
int BregdbEntryTvalOvrd::targetOvrdId() const
{
    return d_targetOvrdId;
}

inline
const BregValue& BregdbEntryTvalOvrd::ovrdValue() const
{
    return d_ovrdValue;
}

inline
int BregdbEntryTvalOvrd::actNoOfValues() const
{
    return d_actNoOfValues;
}



                            // -------------------                             
                            // class ExtOvrValList                             
                            // -------------------                             

// CLASS METHODS
inline
int ExtOvrValList::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& ExtOvrValList::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_extOvrVal, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int ExtOvrValList::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_extOvrVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_VAL]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int ExtOvrValList::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_EXT_OVR_VAL: {
        return manipulator(&d_extOvrVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_VAL]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int ExtOvrValList::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
std::vector<BregdbEntryExtTvalOvrd>& ExtOvrValList::extOvrVal()
{
    return d_extOvrVal;
}

// ACCESSORS
template <class STREAM>
STREAM& ExtOvrValList::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_extOvrVal, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int ExtOvrValList::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_extOvrVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_VAL]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int ExtOvrValList::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_EXT_OVR_VAL: {
        return accessor(d_extOvrVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_VAL]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int ExtOvrValList::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
const std::vector<BregdbEntryExtTvalOvrd>& ExtOvrValList::extOvrVal() const
{
    return d_extOvrVal;
}



                               // --------------                               
                               // class Response                               
                               // --------------                               

// CLASS METHODS
inline
int Response::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// CREATORS
inline
Response::Response(bdema_Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bdema_Default::allocator(basicAllocator))
{
}

inline
Response::~Response()
{
    reset();
}

// MANIPULATORS
template <class STREAM>
STREAM& Response::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            short selectionId;
            stream.getInt16(selectionId);
            if (!stream) {
                return stream;
            }
            switch (selectionId) {
              case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
                makeBregDevValueResponse();
                bdex_InStreamFunctions::streamIn(
                    stream, d_bregDevValueResponse.object(), 1);
              } break;
              case SELECTION_ID_UNDEFINED: {
                reset();
              } break;
              default:
                stream.invalidate();
            }
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int Response::manipulateSelection(MANIPULATOR& manipulator)
{
    switch (d_selectionId) {
      case Response::SELECTION_ID_BREG_DEV_VALUE_RESPONSE:
        return manipulator(&d_bregDevValueResponse.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_DEV_VALUE_RESPONSE]);
      default:
        BSLS_ASSERT(Response::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
BregDevValueResponseInfo& Response::bregDevValueResponse()
{
    BSLS_ASSERT(SELECTION_ID_BREG_DEV_VALUE_RESPONSE == d_selectionId);
    return d_bregDevValueResponse.object();
}

// ACCESSORS
template <class STREAM>
STREAM& Response::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_BREG_DEV_VALUE_RESPONSE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_bregDevValueResponse.object(), 1);
              } break;
              default:
                BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
            }
      } break;
    }
    return stream;
}

inline
int Response::selectionId() const
{
    return d_selectionId;
}

template <class ACCESSOR>
int Response::accessSelection(ACCESSOR& accessor) const
{
    switch (d_selectionId) {
      case SELECTION_ID_BREG_DEV_VALUE_RESPONSE:
        return accessor(d_bregDevValueResponse.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_DEV_VALUE_RESPONSE]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const BregDevValueResponseInfo& Response::bregDevValueResponse() const
{
    BSLS_ASSERT(SELECTION_ID_BREG_DEV_VALUE_RESPONSE == d_selectionId);
    return d_bregDevValueResponse.object();
}

inline
bool Response::isBregDevValueResponseValue() const
{
    return SELECTION_ID_BREG_DEV_VALUE_RESPONSE == d_selectionId;
}

inline
bool Response::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
}


                        // ---------------------------                         
                        // class BregDevelopmentValues                         
                        // ---------------------------                         

// CLASS METHODS
inline
int BregDevelopmentValues::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregDevelopmentValues::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_numOverrides, 1);
            BregValueType::bdexStreamIn(stream, d_valueType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_specialBits, 1);
            bdex_InStreamFunctions::streamIn(stream, d_registryEntry, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valueRec, 1);
            bdex_InStreamFunctions::streamIn(stream, d_overrideVal, 1);
            bdex_InStreamFunctions::streamIn(stream, d_extRegVal, 1);
            bdex_InStreamFunctions::streamIn(stream, d_extOvrList, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregDevelopmentValues::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_numOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUM_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_specialBits, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SPECIAL_BITS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_registryEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ENTRY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueRec, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_REC]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_overrideVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_VAL]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_extRegVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_REG_VAL]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_extOvrList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_LIST]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregDevelopmentValues::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NUM_OVERRIDES: {
        return manipulator(&d_numOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUM_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_SPECIAL_BITS: {
        return manipulator(&d_specialBits, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SPECIAL_BITS]);
      } break;
      case ATTRIBUTE_ID_REGISTRY_ENTRY: {
        return manipulator(&d_registryEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ENTRY]);
      } break;
      case ATTRIBUTE_ID_VALUE_REC: {
        return manipulator(&d_valueRec, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_REC]);
      } break;
      case ATTRIBUTE_ID_OVERRIDE_VAL: {
        return manipulator(&d_overrideVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_VAL]);
      } break;
      case ATTRIBUTE_ID_EXT_REG_VAL: {
        return manipulator(&d_extRegVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_REG_VAL]);
      } break;
      case ATTRIBUTE_ID_EXT_OVR_LIST: {
        return manipulator(&d_extOvrList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_LIST]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregDevelopmentValues::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
int& BregDevelopmentValues::numOverrides()
{
    return d_numOverrides;
}

inline
BregValueType::Value& BregDevelopmentValues::valueType()
{
    return d_valueType;
}

inline
int& BregDevelopmentValues::specialBits()
{
    return d_specialBits;
}

inline
BregdbRegistryEntry& BregDevelopmentValues::registryEntry()
{
    return d_registryEntry;
}

inline
BregdbEntryTestValue& BregDevelopmentValues::valueRec()
{
    return d_valueRec;
}

inline
std::vector<BregdbEntryTvalOvrd>& BregDevelopmentValues::overrideVal()
{
    return d_overrideVal;
}

inline
std::vector<BregdbEntryExtTvalAry>& BregDevelopmentValues::extRegVal()
{
    return d_extRegVal;
}

inline
std::vector<ExtOvrValList>& BregDevelopmentValues::extOvrList()
{
    return d_extOvrList;
}

// ACCESSORS
template <class STREAM>
STREAM& BregDevelopmentValues::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_numOverrides, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_specialBits, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_registryEntry, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueRec, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_overrideVal, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_extRegVal, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_extOvrList, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregDevelopmentValues::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_numOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUM_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_specialBits, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SPECIAL_BITS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_registryEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ENTRY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueRec, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_REC]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_overrideVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_VAL]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_extRegVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_REG_VAL]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_extOvrList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_LIST]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregDevelopmentValues::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NUM_OVERRIDES: {
        return accessor(d_numOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUM_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_SPECIAL_BITS: {
        return accessor(d_specialBits, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SPECIAL_BITS]);
      } break;
      case ATTRIBUTE_ID_REGISTRY_ENTRY: {
        return accessor(d_registryEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ENTRY]);
      } break;
      case ATTRIBUTE_ID_VALUE_REC: {
        return accessor(d_valueRec, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_REC]);
      } break;
      case ATTRIBUTE_ID_OVERRIDE_VAL: {
        return accessor(d_overrideVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDE_VAL]);
      } break;
      case ATTRIBUTE_ID_EXT_REG_VAL: {
        return accessor(d_extRegVal, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_REG_VAL]);
      } break;
      case ATTRIBUTE_ID_EXT_OVR_LIST: {
        return accessor(d_extOvrList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXT_OVR_LIST]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregDevelopmentValues::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
int BregDevelopmentValues::numOverrides() const
{
    return d_numOverrides;
}

inline
BregValueType::Value BregDevelopmentValues::valueType() const
{
    return d_valueType;
}

inline
int BregDevelopmentValues::specialBits() const
{
    return d_specialBits;
}

inline
const BregdbRegistryEntry& BregDevelopmentValues::registryEntry() const
{
    return d_registryEntry;
}

inline
const BregdbEntryTestValue& BregDevelopmentValues::valueRec() const
{
    return d_valueRec;
}

inline
const std::vector<BregdbEntryTvalOvrd>& BregDevelopmentValues::overrideVal() const
{
    return d_overrideVal;
}

inline
const std::vector<BregdbEntryExtTvalAry>& BregDevelopmentValues::extRegVal() const
{
    return d_extRegVal;
}

inline
const std::vector<ExtOvrValList>& BregDevelopmentValues::extOvrList() const
{
    return d_extOvrList;
}



                       // -----------------------------                        
                       // class BregDevValueRequestInfo                        
                       // -----------------------------                        

// CLASS METHODS
inline
int BregDevValueRequestInfo::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregDevValueRequestInfo::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_bregDevValues, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregDevValueRequestInfo::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_bregDevValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_DEV_VALUES]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregDevValueRequestInfo::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_BREG_DEV_VALUES: {
        return manipulator(&d_bregDevValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_DEV_VALUES]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregDevValueRequestInfo::manipulateAttribute(
        MANIPULATOR&  manipulator,
        const char   *name,
        int           nameLength)
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
           lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
        return NOT_FOUND;
    }

    return manipulateAttribute(manipulator, attributeInfo->d_id);
}

inline
BregDevelopmentValues& BregDevValueRequestInfo::bregDevValues()
{
    return d_bregDevValues;
}

// ACCESSORS
template <class STREAM>
STREAM& BregDevValueRequestInfo::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_bregDevValues, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregDevValueRequestInfo::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_bregDevValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_DEV_VALUES]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregDevValueRequestInfo::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_BREG_DEV_VALUES: {
        return accessor(d_bregDevValues, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BREG_DEV_VALUES]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregDevValueRequestInfo::accessAttribute(
        ACCESSOR&   accessor,
        const char *name,
        int         nameLength) const
{
    enum { NOT_FOUND = -1 };

    const bdeat_AttributeInfo *attributeInfo =
          lookupAttributeInfo(name, nameLength);
    if (0 == attributeInfo) {
       return NOT_FOUND;
    }

    return accessAttribute(accessor, attributeInfo->d_id);
}

inline
const BregDevelopmentValues& BregDevValueRequestInfo::bregDevValues() const
{
    return d_bregDevValues;
}



                               // -------------                                
                               // class Request                                
                               // -------------                                

// CLASS METHODS
inline
int Request::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// CREATORS
inline
Request::Request(bdema_Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bdema_Default::allocator(basicAllocator))
{
}

inline
Request::~Request()
{
    reset();
}

// MANIPULATORS
template <class STREAM>
STREAM& Request::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            short selectionId;
            stream.getInt16(selectionId);
            if (!stream) {
                return stream;
            }
            switch (selectionId) {
              case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
                makeBregPropagateDevValueRequest();
                bdex_InStreamFunctions::streamIn(
                    stream, d_bregPropagateDevValueRequest.object(), 1);
              } break;
              case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
                makeBregOneWayPropagateDevValueRequest();
                bdex_InStreamFunctions::streamIn(
                    stream, d_bregOneWayPropagateDevValueRequest.object(), 1);
              } break;
              case SELECTION_ID_UNDEFINED: {
                reset();
              } break;
              default:
                stream.invalidate();
            }
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int Request::manipulateSelection(MANIPULATOR& manipulator)
{
    switch (d_selectionId) {
      case Request::SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST:
        return manipulator(&d_bregPropagateDevValueRequest.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_PROPAGATE_DEV_VALUE_REQUEST]);
      case Request::SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST:
        return manipulator(&d_bregOneWayPropagateDevValueRequest.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST]);
      default:
        BSLS_ASSERT(Request::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
BregDevValueRequestInfo& Request::bregPropagateDevValueRequest()
{
    BSLS_ASSERT(SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId);
    return d_bregPropagateDevValueRequest.object();
}

inline
BregDevValueRequestInfo& Request::bregOneWayPropagateDevValueRequest()
{
    BSLS_ASSERT(SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId);
    return d_bregOneWayPropagateDevValueRequest.object();
}

// ACCESSORS
template <class STREAM>
STREAM& Request::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_bregPropagateDevValueRequest.object(), 1);
              } break;
              case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_bregOneWayPropagateDevValueRequest.object(), 1);
              } break;
              default:
                BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
            }
      } break;
    }
    return stream;
}

inline
int Request::selectionId() const
{
    return d_selectionId;
}

template <class ACCESSOR>
int Request::accessSelection(ACCESSOR& accessor) const
{
    switch (d_selectionId) {
      case SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST:
        return accessor(d_bregPropagateDevValueRequest.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_PROPAGATE_DEV_VALUE_REQUEST]);
      case SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST:
        return accessor(d_bregOneWayPropagateDevValueRequest.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const BregDevValueRequestInfo& Request::bregPropagateDevValueRequest() const
{
    BSLS_ASSERT(SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId);
    return d_bregPropagateDevValueRequest.object();
}

inline
const BregDevValueRequestInfo& Request::bregOneWayPropagateDevValueRequest() const
{
    BSLS_ASSERT(SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId);
    return d_bregOneWayPropagateDevValueRequest.object();
}

inline
bool Request::isBregPropagateDevValueRequestValue() const
{
    return SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId;
}

inline
bool Request::isBregOneWayPropagateDevValueRequestValue() const
{
    return SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST == d_selectionId;
}

inline
bool Request::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
}
}  // close namespace s_brgdvsvc

// FREE FUNCTIONS

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        s_brgdvsvc::BregStatus::Value rhs)
{
    return s_brgdvsvc::BregStatus::print(stream, rhs);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregValue& lhs,
        const s_brgdvsvc::BregValue& rhs)
{
    typedef s_brgdvsvc::BregValue Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_BOOLEAN_VALUE:
            return lhs.booleanValue() == rhs.booleanValue();
          case Class::SELECTION_ID_DOUBLE_VALUE:
            return lhs.doubleValue() == rhs.doubleValue();
          case Class::SELECTION_ID_INTEGER_VALUE:
            return lhs.integerValue() == rhs.integerValue();
          case Class::SELECTION_ID_INTEGER_ARRAY:
            return lhs.integerArray() == rhs.integerArray();
          case Class::SELECTION_ID_CHARACTER_VALUE:
            return lhs.characterValue() == rhs.characterValue();
          case Class::SELECTION_ID_CHARACTER_ARRAY:
            return lhs.characterArray() == rhs.characterArray();
          default:
            BSLS_ASSERT(Class::SELECTION_ID_UNDEFINED == rhs.selectionId());
            return true;
        }
    }
    else {
        return false;
   }
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregValue& lhs,
        const s_brgdvsvc::BregValue& rhs)
{
    return !(lhs == rhs);
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregValue& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        s_brgdvsvc::BregValueType::Value rhs)
{
    return s_brgdvsvc::BregValueType::print(stream, rhs);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregdbRegistryEntry& lhs,
        const s_brgdvsvc::BregdbRegistryEntry& rhs)
{
    return  lhs.entryId() == rhs.entryId()
         && lhs.updateByUuid() == rhs.updateByUuid()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.valTypeCd() == rhs.valTypeCd()
         && lhs.isInMemoryCd() == rhs.isInMemoryCd()
         && lhs.isTemporaryCd() == rhs.isTemporaryCd()
         && lhs.apiStatusCd() == rhs.apiStatusCd()
         && lhs.switchStatusCd() == rhs.switchStatusCd()
         && lhs.switchModeCd() == rhs.switchModeCd()
         && lhs.maxNoOfValues() == rhs.maxNoOfValues()
         && lhs.expiryTsp() == rhs.expiryTsp()
         && lhs.apiName() == rhs.apiName();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregdbRegistryEntry& lhs,
        const s_brgdvsvc::BregdbRegistryEntry& rhs)
{
    return  lhs.entryId() != rhs.entryId()
         || lhs.updateByUuid() != rhs.updateByUuid()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.valTypeCd() != rhs.valTypeCd()
         || lhs.isInMemoryCd() != rhs.isInMemoryCd()
         || lhs.isTemporaryCd() != rhs.isTemporaryCd()
         || lhs.apiStatusCd() != rhs.apiStatusCd()
         || lhs.switchStatusCd() != rhs.switchStatusCd()
         || lhs.switchModeCd() != rhs.switchModeCd()
         || lhs.maxNoOfValues() != rhs.maxNoOfValues()
         || lhs.expiryTsp() != rhs.expiryTsp()
         || lhs.apiName() != rhs.apiName();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregdbRegistryEntry& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregDevValueResponseInfo& lhs,
        const s_brgdvsvc::BregDevValueResponseInfo& rhs)
{
    return  lhs.bregStatus() == rhs.bregStatus()
         && lhs.statusString() == rhs.statusString();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregDevValueResponseInfo& lhs,
        const s_brgdvsvc::BregDevValueResponseInfo& rhs)
{
    return  lhs.bregStatus() != rhs.bregStatus()
         || lhs.statusString() != rhs.statusString();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregDevValueResponseInfo& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregdbEntryExtTvalAry& lhs,
        const s_brgdvsvc::BregdbEntryExtTvalAry& rhs)
{
    return  lhs.tvalAryId() == rhs.tvalAryId()
         && lhs.updateByUuid() == rhs.updateByUuid()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.lookupValue() == rhs.lookupValue()
         && lhs.returnValue() == rhs.returnValue()
         && lhs.entryTvalId() == rhs.entryTvalId();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregdbEntryExtTvalAry& lhs,
        const s_brgdvsvc::BregdbEntryExtTvalAry& rhs)
{
    return  lhs.tvalAryId() != rhs.tvalAryId()
         || lhs.updateByUuid() != rhs.updateByUuid()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.lookupValue() != rhs.lookupValue()
         || lhs.returnValue() != rhs.returnValue()
         || lhs.entryTvalId() != rhs.entryTvalId();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregdbEntryExtTvalAry& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregdbEntryExtTvalOvrd& lhs,
        const s_brgdvsvc::BregdbEntryExtTvalOvrd& rhs)
{
    return  lhs.tvalaOvrdId() == rhs.tvalaOvrdId()
         && lhs.updateByUuid() == rhs.updateByUuid()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.testValOvrdId() == rhs.testValOvrdId()
         && lhs.lookupValue() == rhs.lookupValue()
         && lhs.returnValue() == rhs.returnValue();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregdbEntryExtTvalOvrd& lhs,
        const s_brgdvsvc::BregdbEntryExtTvalOvrd& rhs)
{
    return  lhs.tvalaOvrdId() != rhs.tvalaOvrdId()
         || lhs.updateByUuid() != rhs.updateByUuid()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.testValOvrdId() != rhs.testValOvrdId()
         || lhs.lookupValue() != rhs.lookupValue()
         || lhs.returnValue() != rhs.returnValue();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregdbEntryExtTvalOvrd& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregdbEntryTestValue& lhs,
        const s_brgdvsvc::BregdbEntryTestValue& rhs)
{
    return  lhs.entryTvalId() == rhs.entryTvalId()
         && lhs.updateByUuid() == rhs.updateByUuid()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.entryId() == rhs.entryId()
         && lhs.versionNo() == rhs.versionNo()
         && lhs.valStatusCd() == rhs.valStatusCd()
         && lhs.entryValue() == rhs.entryValue()
         && lhs.actNoOfValues() == rhs.actNoOfValues()
         && lhs.logNote() == rhs.logNote();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregdbEntryTestValue& lhs,
        const s_brgdvsvc::BregdbEntryTestValue& rhs)
{
    return  lhs.entryTvalId() != rhs.entryTvalId()
         || lhs.updateByUuid() != rhs.updateByUuid()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.entryId() != rhs.entryId()
         || lhs.versionNo() != rhs.versionNo()
         || lhs.valStatusCd() != rhs.valStatusCd()
         || lhs.entryValue() != rhs.entryValue()
         || lhs.actNoOfValues() != rhs.actNoOfValues()
         || lhs.logNote() != rhs.logNote();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregdbEntryTestValue& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregdbEntryTvalOvrd& lhs,
        const s_brgdvsvc::BregdbEntryTvalOvrd& rhs)
{
    return  lhs.testValOvrdId() == rhs.testValOvrdId()
         && lhs.updateByUuid() == rhs.updateByUuid()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.entryId() == rhs.entryId()
         && lhs.overrideSeq() == rhs.overrideSeq()
         && lhs.targetTypeCd() == rhs.targetTypeCd()
         && lhs.versionNo() == rhs.versionNo()
         && lhs.targetOvrdId() == rhs.targetOvrdId()
         && lhs.ovrdValue() == rhs.ovrdValue()
         && lhs.actNoOfValues() == rhs.actNoOfValues();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregdbEntryTvalOvrd& lhs,
        const s_brgdvsvc::BregdbEntryTvalOvrd& rhs)
{
    return  lhs.testValOvrdId() != rhs.testValOvrdId()
         || lhs.updateByUuid() != rhs.updateByUuid()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.entryId() != rhs.entryId()
         || lhs.overrideSeq() != rhs.overrideSeq()
         || lhs.targetTypeCd() != rhs.targetTypeCd()
         || lhs.versionNo() != rhs.versionNo()
         || lhs.targetOvrdId() != rhs.targetOvrdId()
         || lhs.ovrdValue() != rhs.ovrdValue()
         || lhs.actNoOfValues() != rhs.actNoOfValues();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregdbEntryTvalOvrd& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::ExtOvrValList& lhs,
        const s_brgdvsvc::ExtOvrValList& rhs)
{
    return  lhs.extOvrVal() == rhs.extOvrVal();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::ExtOvrValList& lhs,
        const s_brgdvsvc::ExtOvrValList& rhs)
{
    return  lhs.extOvrVal() != rhs.extOvrVal();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::ExtOvrValList& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::Response& lhs,
        const s_brgdvsvc::Response& rhs)
{
    typedef s_brgdvsvc::Response Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_BREG_DEV_VALUE_RESPONSE:
            return lhs.bregDevValueResponse() == rhs.bregDevValueResponse();
          default:
            BSLS_ASSERT(Class::SELECTION_ID_UNDEFINED == rhs.selectionId());
            return true;
        }
    }
    else {
        return false;
   }
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::Response& lhs,
        const s_brgdvsvc::Response& rhs)
{
    return !(lhs == rhs);
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::Response& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregDevelopmentValues& lhs,
        const s_brgdvsvc::BregDevelopmentValues& rhs)
{
    return  lhs.numOverrides() == rhs.numOverrides()
         && lhs.valueType() == rhs.valueType()
         && lhs.specialBits() == rhs.specialBits()
         && lhs.registryEntry() == rhs.registryEntry()
         && lhs.valueRec() == rhs.valueRec()
         && lhs.overrideVal() == rhs.overrideVal()
         && lhs.extRegVal() == rhs.extRegVal()
         && lhs.extOvrList() == rhs.extOvrList();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregDevelopmentValues& lhs,
        const s_brgdvsvc::BregDevelopmentValues& rhs)
{
    return  lhs.numOverrides() != rhs.numOverrides()
         || lhs.valueType() != rhs.valueType()
         || lhs.specialBits() != rhs.specialBits()
         || lhs.registryEntry() != rhs.registryEntry()
         || lhs.valueRec() != rhs.valueRec()
         || lhs.overrideVal() != rhs.overrideVal()
         || lhs.extRegVal() != rhs.extRegVal()
         || lhs.extOvrList() != rhs.extOvrList();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregDevelopmentValues& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::BregDevValueRequestInfo& lhs,
        const s_brgdvsvc::BregDevValueRequestInfo& rhs)
{
    return  lhs.bregDevValues() == rhs.bregDevValues();
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::BregDevValueRequestInfo& lhs,
        const s_brgdvsvc::BregDevValueRequestInfo& rhs)
{
    return  lhs.bregDevValues() != rhs.bregDevValues();
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::BregDevValueRequestInfo& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_brgdvsvc::operator==(
        const s_brgdvsvc::Request& lhs,
        const s_brgdvsvc::Request& rhs)
{
    typedef s_brgdvsvc::Request Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_BREG_PROPAGATE_DEV_VALUE_REQUEST:
            return lhs.bregPropagateDevValueRequest() == rhs.bregPropagateDevValueRequest();
          case Class::SELECTION_ID_BREG_ONE_WAY_PROPAGATE_DEV_VALUE_REQUEST:
            return lhs.bregOneWayPropagateDevValueRequest() == rhs.bregOneWayPropagateDevValueRequest();
          default:
            BSLS_ASSERT(Class::SELECTION_ID_UNDEFINED == rhs.selectionId());
            return true;
        }
    }
    else {
        return false;
   }
}

inline
bool s_brgdvsvc::operator!=(
        const s_brgdvsvc::Request& lhs,
        const s_brgdvsvc::Request& rhs)
{
    return !(lhs == rhs);
}

inline
std::ostream& s_brgdvsvc::operator<<(
        std::ostream& stream,
        const s_brgdvsvc::Request& rhs)
{
    return rhs.print(stream, 0, -1);
}

}  // close namespace BloombergLP
#endif

// GENERATED BY BLP_BAS_CODEGEN_3.6.13 Tue Jun 19 08:53:50 2012
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright (C) Bloomberg L.P., 2012
//      All Rights Reserved.
//      Property of Bloomberg L.P. (BLP)
//      This software is made available solely pursuant to the
//      terms of a BLP license agreement which governs its use.
// ------------------------------ END-OF-FILE ---------------------------------
