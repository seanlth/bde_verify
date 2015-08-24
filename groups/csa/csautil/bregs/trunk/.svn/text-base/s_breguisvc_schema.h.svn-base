// s_breguisvc_schema.h        *GENERATED FILE - DO NOT EDIT*         -*-C++-*-
#ifndef INCLUDED_S_BREGUISVC_SCHEMA
#define INCLUDED_S_BREGUISVC_SCHEMA

#ifndef INCLUDED_BDES_IDENT
#include <bdes_ident.h>
#endif
BDES_IDENT_RCSID(s_breguisvc_schema_h,"$Id$ $CSID$")
BDES_IDENT_PRAGMA_ONCE

//@PURPOSE: Provide value-semantic attribute classes
//
//@AUTHOR: Sarah ZHANG (yzhang744@bloomberg.net)

#ifndef INCLUDED_BSCALG_TYPETRAITS
#include <bscalg_typetraits.h>
#endif

#ifndef INCLUDED_BCEM_AGGREGATE
#include <bcem_aggregate.h>
#endif

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

#ifndef INCLUDED_BDEAT_VALUETYPEFUNCTIONS
#include <bdeat_valuetypefunctions.h>
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

#ifndef INCLUDED_BSLMA_DEFAULT
#include <bslma_default.h>
#endif

#ifndef INCLUDED_BSLS_ASSERT
#include <bsls_assert.h>
#endif

#ifndef INCLUDED_BDEUT_NULLABLEVALUE
#include <bdeut_nullablevalue.h>
#endif

#ifndef INCLUDED_BSL_STRING
#include <bsl_string.h>
#endif

#ifndef INCLUDED_BSL_VECTOR
#include <bsl_vector.h>
#endif

#ifndef INCLUDED_BSLS_TYPES
#include <bsls_types.h>
#endif

#ifndef INCLUDED_BSL_IOSFWD
#include <bsl_iosfwd.h>
#endif

#ifndef INCLUDED_BSL_OSTREAM
#include <bsl_ostream.h>
#endif

namespace BloombergLP {

namespace bslma { class Allocator; }

namespace s_breguisvc { class BregValue; }
namespace s_breguisvc { class BregValueObject; }
namespace s_breguisvc { class EntryData; }
namespace s_breguisvc { class ErrorInfoResponse; }
namespace s_breguisvc { class EvaluateOverrides; }
namespace s_breguisvc { class EventTypeEnum; }
namespace s_breguisvc { class Group; }
namespace s_breguisvc { class MarkForDeletionRequest; }
namespace s_breguisvc { class MoveRequest; }
namespace s_breguisvc { class Node; }
namespace s_breguisvc { class NodePrivilege; }
namespace s_breguisvc { class RelatedTicketRequest; }
namespace s_breguisvc { class SearchByContacts; }
namespace s_breguisvc { class SearchByKeywords; }
namespace s_breguisvc { class TodoListItem; }
namespace s_breguisvc { class UserData; }
namespace s_breguisvc { class ValueRequest; }
namespace s_breguisvc { class VersionTsp; }
namespace s_breguisvc { class Void; }
namespace s_breguisvc { class AuditRecord; }
namespace s_breguisvc { class EntryInfo; }
namespace s_breguisvc { class EntryOverride; }
namespace s_breguisvc { class GetBregValuesRequest; }
namespace s_breguisvc { class OverrideInfo; }
namespace s_breguisvc { class OverrideSummary; }
namespace s_breguisvc { class PrivilegeList; }
namespace s_breguisvc { class TodoList; }
namespace s_breguisvc { class VersionHistory; }
namespace s_breguisvc { class EntryContacts; }
namespace s_breguisvc { class EntrySubscribers; }
namespace s_breguisvc { class EntryValue; }
namespace s_breguisvc { class NodeDetails; }
namespace s_breguisvc { class NodeInfo; }
namespace s_breguisvc { class UpdateContactRequest; }
namespace s_breguisvc { class RegistryInfo; }
namespace s_breguisvc { class BregChangeRequest; }
namespace s_breguisvc { class GenerateCodeRequest; }
namespace s_breguisvc { class Response; }
namespace s_breguisvc { class Request; }
namespace s_breguisvc { class SchemaUtil; }
namespace s_breguisvc {

                               // =============                                
                               // class AclType                                
                               // =============                                

struct AclType {
    // Acl Types

  public:
    // TYPES
    enum Value {
        UPDATE_DESCRIPTION       = 0
      , RELEASE_CODE             = 1
      , PRIVILEGING_ADMIN        = 2
      , UPDATE_PRODUCTION_VALUES = 3
      , UPDATE_DEV_VALUES        = 4
    };

    enum {
        NUM_ENUMERATORS = 5
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
                          const bsl::string&  string);
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

    static bsl::ostream& print(bsl::ostream& stream, Value value);
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
bsl::ostream& operator<<(bsl::ostream& stream, AclType::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_breguisvc::AclType)


namespace s_breguisvc {

                              // ===============                               
                              // class ApiStatus                               
                              // ===============                               

struct ApiStatus {
    // ApiStatus

  public:
    // TYPES
    enum Value {
        NEW      = 0
      , STAGED   = 1
      , RELEASED = 2
    };

    enum {
        NUM_ENUMERATORS = 3
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
                          const bsl::string&  string);
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

    static bsl::ostream& print(bsl::ostream& stream, Value value);
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
bsl::ostream& operator<<(bsl::ostream& stream, ApiStatus::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_breguisvc::ApiStatus)


namespace s_breguisvc {

                              // ===============                               
                              // class BregValue                               
                              // ===============                               

class BregValue {

    // INSTANCE DATA
    bsl::string  d_valueTypeString;
    bsl::string  d_typeString;
    bsl::string  d_accessor;
    bsl::string  d_value;
    int          d_id;
    int          d_valueType;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ID                = 0
      , ATTRIBUTE_ID_VALUE_TYPE        = 1
      , ATTRIBUTE_ID_VALUE_TYPE_STRING = 2
      , ATTRIBUTE_ID_TYPE_STRING       = 3
      , ATTRIBUTE_ID_ACCESSOR          = 4
      , ATTRIBUTE_ID_VALUE             = 5
    };

    enum {
        NUM_ATTRIBUTES = 6
    };

    enum {
        ATTRIBUTE_INDEX_ID                = 0
      , ATTRIBUTE_INDEX_VALUE_TYPE        = 1
      , ATTRIBUTE_INDEX_VALUE_TYPE_STRING = 2
      , ATTRIBUTE_INDEX_TYPE_STRING       = 3
      , ATTRIBUTE_INDEX_ACCESSOR          = 4
      , ATTRIBUTE_INDEX_VALUE             = 5
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
    explicit BregValue(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'BregValue' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    BregValue(const BregValue& original,
              bslma::Allocator *basicAllocator = 0);
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

    int& id();
        // Return a reference to the modifiable "Id" attribute of this object.

    int& valueType();
        // Return a reference to the modifiable "ValueType" attribute of this
        // object.

    bsl::string& valueTypeString();
        // Return a reference to the modifiable "ValueTypeString" attribute of
        // this object.

    bsl::string& typeString();
        // Return a reference to the modifiable "TypeString" attribute of this
        // object.

    bsl::string& accessor();
        // Return a reference to the modifiable "Accessor" attribute of this
        // object.

    bsl::string& value();
        // Return a reference to the modifiable "Value" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int id() const;
        // Return a reference to the non-modifiable "Id" attribute of this
        // object.

    int valueType() const;
        // Return a reference to the non-modifiable "ValueType" attribute of
        // this object.

    const bsl::string& valueTypeString() const;
        // Return a reference to the non-modifiable "ValueTypeString" attribute
        // of this object.

    const bsl::string& typeString() const;
        // Return a reference to the non-modifiable "TypeString" attribute of
        // this object.

    const bsl::string& accessor() const;
        // Return a reference to the non-modifiable "Accessor" attribute of
        // this object.

    const bsl::string& value() const;
        // Return a reference to the non-modifiable "Value" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const BregValue& lhs, const BregValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregValue& lhs, const BregValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const BregValue& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::BregValue)

namespace s_breguisvc {

                           // =====================                            
                           // class BregValueObject                            
                           // =====================                            

class BregValueObject {

    // INSTANCE DATA
    union {
        bsls::ObjectBuffer< int >         d_id;
        bsls::ObjectBuffer< bsl::string > d_gobxml;
    };

    int                                   d_selectionId;
    bslma::Allocator                     *d_allocator_p;

  public:
    // TYPES

    enum {
        SELECTION_ID_UNDEFINED = -1

      , SELECTION_ID_ID     = 0
      , SELECTION_ID_GOBXML = 1
    };

    enum {
        NUM_SELECTIONS = 2
    };

    enum {
        SELECTION_INDEX_ID     = 0
      , SELECTION_INDEX_GOBXML = 1
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
    explicit BregValueObject(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'BregValueObject' having the default value.
        //  Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    BregValueObject(const BregValueObject& original,
                   bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'BregValueObject' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregValueObject();
        // Destroy this object.

    // MANIPULATORS
    BregValueObject& operator=(const BregValueObject& rhs);
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

    int& makeId();
    int& makeId(int value);
        // Set the value of this object to be a "Id" value.  Optionally specify
        // the 'value' of the "Id".  If 'value' is not specified, the default
        // "Id" value is used.

    bsl::string& makeGobxml();
    bsl::string& makeGobxml(const bsl::string& value);
        // Set the value of this object to be a "Gobxml" value.  Optionally
        // specify the 'value' of the "Gobxml".  If 'value' is not specified,
        // the default "Gobxml" value is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    int& id();
        // Return a reference to the modifiable "Id" selection of this object
        // if "Id" is the current selection.  The behavior is undefined unless
        // "Id" is the selection of this object.

    bsl::string& gobxml();
        // Return a reference to the modifiable "Gobxml" selection of this
        // object if "Gobxml" is the current selection.  The behavior is
        // undefined unless "Gobxml" is the selection of this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const int& id() const;
        // Return a reference to the non-modifiable "Id" selection of this
        // object if "Id" is the current selection.  The behavior is undefined
        // unless "Id" is the selection of this object.

    const bsl::string& gobxml() const;
        // Return a reference to the non-modifiable "Gobxml" selection of this
        // object if "Gobxml" is the current selection.  The behavior is
        // undefined unless "Gobxml" is the selection of this object.

    bool isIdValue() const;
        // Return 'true' if the value of this object is a "Id" value, and
        // return 'false' otherwise.

    bool isGobxmlValue() const;
        // Return 'true' if the value of this object is a "Gobxml" value, and
        // return 'false' otherwise.

    bool isUndefinedValue() const;
        // Return 'true' if the value of this object is undefined, and 'false'
        // otherwise.

    const char *selectionName() const;
        // Return the symbolic name of the current selection of this object.
};

// FREE OPERATORS
inline
bool operator==(const BregValueObject& lhs, const BregValueObject& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects have the same
    // value, and 'false' otherwise.  Two 'BregValueObject' objects have the same
    // value if either the selections in both objects have the same ids and
    // the same values, or both selections are undefined.

inline
bool operator!=(const BregValueObject& lhs, const BregValueObject& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects do not have the
    // same values, as determined by 'operator==', and 'false' otherwise.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const BregValueObject& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::BregValueObject)

namespace s_breguisvc {

                              // ===============                               
                              // class EntryData                               
                              // ===============                               

class EntryData {

    // INSTANCE DATA
    union {
        bsls::ObjectBuffer< bool >                            d_bool;
        bsls::ObjectBuffer< double >                          d_double;
        bsls::ObjectBuffer< bsls::Types::Int64 >              d_int;
        bsls::ObjectBuffer< bsl::vector<bsls::Types::Int64> > d_intList;
        bsls::ObjectBuffer< bsl::string >                     d_char;
        bsls::ObjectBuffer< bsl::string >                     d_str;
        bsls::ObjectBuffer< bsl::vector<bsls::Types::Int64> > d_extIntList;
        bsls::ObjectBuffer< bsl::string >                     d_extString;
    };

    int                                                       d_selectionId;
    bslma::Allocator                                         *d_allocator_p;

  public:
    // TYPES

    enum {
        SELECTION_ID_UNDEFINED    = -1

      , SELECTION_ID_BOOL_VALUE   = 0
      , SELECTION_ID_DOUBLE_VALUE = 1
      , SELECTION_ID_INT_VALUE    = 2
      , SELECTION_ID_INT_LIST     = 3
      , SELECTION_ID_CHAR_VALUE   = 4
      , SELECTION_ID_STR          = 5
      , SELECTION_ID_EXT_INT_LIST = 6
      , SELECTION_ID_EXT_STRING   = 7
    };

    enum {
        NUM_SELECTIONS = 8
    };

    enum {
        SELECTION_INDEX_BOOL_VALUE   = 0
      , SELECTION_INDEX_DOUBLE_VALUE = 1
      , SELECTION_INDEX_INT_VALUE    = 2
      , SELECTION_INDEX_INT_LIST     = 3
      , SELECTION_INDEX_CHAR_VALUE   = 4
      , SELECTION_INDEX_STR          = 5
      , SELECTION_INDEX_EXT_INT_LIST = 6
      , SELECTION_INDEX_EXT_STRING   = 7
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
    explicit EntryData(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryData' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    EntryData(const EntryData& original,
             bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryData' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EntryData();
        // Destroy this object.

    // MANIPULATORS
    EntryData& operator=(const EntryData& rhs);
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

    bool& makeBoolValue();
    bool& makeBoolValue(bool value);
        // Set the value of this object to be a "BoolValue" value.  Optionally
        // specify the 'value' of the "BoolValue".  If 'value' is not
        // specified, the default "BoolValue" value is used.

    double& makeDoubleValue();
    double& makeDoubleValue(double value);
        // Set the value of this object to be a "DoubleValue" value. 
        // Optionally specify the 'value' of the "DoubleValue".  If 'value' is
        // not specified, the default "DoubleValue" value is used.

    bsls::Types::Int64& makeIntValue();
    bsls::Types::Int64& makeIntValue(bsls::Types::Int64 value);
        // Set the value of this object to be a "IntValue" value.  Optionally
        // specify the 'value' of the "IntValue".  If 'value' is not specified,
        // the default "IntValue" value is used.

    bsl::vector<bsls::Types::Int64>& makeIntList();
    bsl::vector<bsls::Types::Int64>& makeIntList(const bsl::vector<bsls::Types::Int64>& value);
        // Set the value of this object to be a "IntList" value.  Optionally
        // specify the 'value' of the "IntList".  If 'value' is not specified,
        // the default "IntList" value is used.

    bsl::string& makeCharValue();
    bsl::string& makeCharValue(const bsl::string& value);
        // Set the value of this object to be a "CharValue" value.  Optionally
        // specify the 'value' of the "CharValue".  If 'value' is not
        // specified, the default "CharValue" value is used.

    bsl::string& makeStr();
    bsl::string& makeStr(const bsl::string& value);
        // Set the value of this object to be a "Str" value.  Optionally
        // specify the 'value' of the "Str".  If 'value' is not specified, the
        // default "Str" value is used.

    bsl::vector<bsls::Types::Int64>& makeExtIntList();
    bsl::vector<bsls::Types::Int64>& makeExtIntList(const bsl::vector<bsls::Types::Int64>& value);
        // Set the value of this object to be a "ExtIntList" value.  Optionally
        // specify the 'value' of the "ExtIntList".  If 'value' is not
        // specified, the default "ExtIntList" value is used.

    bsl::string& makeExtString();
    bsl::string& makeExtString(const bsl::string& value);
        // Set the value of this object to be a "ExtString" value.  Optionally
        // specify the 'value' of the "ExtString".  If 'value' is not
        // specified, the default "ExtString" value is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    bool& boolValue();
        // Return a reference to the modifiable "BoolValue" selection of this
        // object if "BoolValue" is the current selection.  The behavior is
        // undefined unless "BoolValue" is the selection of this object.

    double& doubleValue();
        // Return a reference to the modifiable "DoubleValue" selection of this
        // object if "DoubleValue" is the current selection.  The behavior is
        // undefined unless "DoubleValue" is the selection of this object.

    bsls::Types::Int64& intValue();
        // Return a reference to the modifiable "IntValue" selection of this
        // object if "IntValue" is the current selection.  The behavior is
        // undefined unless "IntValue" is the selection of this object.

    bsl::vector<bsls::Types::Int64>& intList();
        // Return a reference to the modifiable "IntList" selection of this
        // object if "IntList" is the current selection.  The behavior is
        // undefined unless "IntList" is the selection of this object.

    bsl::string& charValue();
        // Return a reference to the modifiable "CharValue" selection of this
        // object if "CharValue" is the current selection.  The behavior is
        // undefined unless "CharValue" is the selection of this object.

    bsl::string& str();
        // Return a reference to the modifiable "Str" selection of this object
        // if "Str" is the current selection.  The behavior is undefined unless
        // "Str" is the selection of this object.

    bsl::vector<bsls::Types::Int64>& extIntList();
        // Return a reference to the modifiable "ExtIntList" selection of this
        // object if "ExtIntList" is the current selection.  The behavior is
        // undefined unless "ExtIntList" is the selection of this object.

    bsl::string& extString();
        // Return a reference to the modifiable "ExtString" selection of this
        // object if "ExtString" is the current selection.  The behavior is
        // undefined unless "ExtString" is the selection of this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bool& boolValue() const;
        // Return a reference to the non-modifiable "BoolValue" selection of
        // this object if "BoolValue" is the current selection.  The behavior
        // is undefined unless "BoolValue" is the selection of this object.

    const double& doubleValue() const;
        // Return a reference to the non-modifiable "DoubleValue" selection of
        // this object if "DoubleValue" is the current selection.  The behavior
        // is undefined unless "DoubleValue" is the selection of this object.

    const bsls::Types::Int64& intValue() const;
        // Return a reference to the non-modifiable "IntValue" selection of
        // this object if "IntValue" is the current selection.  The behavior is
        // undefined unless "IntValue" is the selection of this object.

    const bsl::vector<bsls::Types::Int64>& intList() const;
        // Return a reference to the non-modifiable "IntList" selection of this
        // object if "IntList" is the current selection.  The behavior is
        // undefined unless "IntList" is the selection of this object.

    const bsl::string& charValue() const;
        // Return a reference to the non-modifiable "CharValue" selection of
        // this object if "CharValue" is the current selection.  The behavior
        // is undefined unless "CharValue" is the selection of this object.

    const bsl::string& str() const;
        // Return a reference to the non-modifiable "Str" selection of this
        // object if "Str" is the current selection.  The behavior is undefined
        // unless "Str" is the selection of this object.

    const bsl::vector<bsls::Types::Int64>& extIntList() const;
        // Return a reference to the non-modifiable "ExtIntList" selection of
        // this object if "ExtIntList" is the current selection.  The behavior
        // is undefined unless "ExtIntList" is the selection of this object.

    const bsl::string& extString() const;
        // Return a reference to the non-modifiable "ExtString" selection of
        // this object if "ExtString" is the current selection.  The behavior
        // is undefined unless "ExtString" is the selection of this object.

    bool isBoolValueValue() const;
        // Return 'true' if the value of this object is a "BoolValue" value,
        // and return 'false' otherwise.

    bool isDoubleValueValue() const;
        // Return 'true' if the value of this object is a "DoubleValue" value,
        // and return 'false' otherwise.

    bool isIntValueValue() const;
        // Return 'true' if the value of this object is a "IntValue" value, and
        // return 'false' otherwise.

    bool isIntListValue() const;
        // Return 'true' if the value of this object is a "IntList" value, and
        // return 'false' otherwise.

    bool isCharValueValue() const;
        // Return 'true' if the value of this object is a "CharValue" value,
        // and return 'false' otherwise.

    bool isStrValue() const;
        // Return 'true' if the value of this object is a "Str" value, and
        // return 'false' otherwise.

    bool isExtIntListValue() const;
        // Return 'true' if the value of this object is a "ExtIntList" value,
        // and return 'false' otherwise.

    bool isExtStringValue() const;
        // Return 'true' if the value of this object is a "ExtString" value,
        // and return 'false' otherwise.

    bool isUndefinedValue() const;
        // Return 'true' if the value of this object is undefined, and 'false'
        // otherwise.

    const char *selectionName() const;
        // Return the symbolic name of the current selection of this object.
};

// FREE OPERATORS
inline
bool operator==(const EntryData& lhs, const EntryData& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects have the same
    // value, and 'false' otherwise.  Two 'EntryData' objects have the same
    // value if either the selections in both objects have the same ids and
    // the same values, or both selections are undefined.

inline
bool operator!=(const EntryData& lhs, const EntryData& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' objects do not have the
    // same values, as determined by 'operator==', and 'false' otherwise.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EntryData& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EntryData)

namespace s_breguisvc {

                          // =======================                           
                          // class ErrorInfoResponse                           
                          // =======================                           

class ErrorInfoResponse {

    // INSTANCE DATA
    bsl::string  d_message;
    int          d_code;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_CODE    = 0
      , ATTRIBUTE_ID_MESSAGE = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_CODE    = 0
      , ATTRIBUTE_INDEX_MESSAGE = 1
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
    explicit ErrorInfoResponse(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'ErrorInfoResponse' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    ErrorInfoResponse(const ErrorInfoResponse& original,
                      bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'ErrorInfoResponse' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~ErrorInfoResponse();
        // Destroy this object.

    // MANIPULATORS
    ErrorInfoResponse& operator=(const ErrorInfoResponse& rhs);
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

    int& code();
        // Return a reference to the modifiable "Code" attribute of this
        // object.

    bsl::string& message();
        // Return a reference to the modifiable "Message" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int code() const;
        // Return a reference to the non-modifiable "Code" attribute of this
        // object.

    const bsl::string& message() const;
        // Return a reference to the non-modifiable "Message" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const ErrorInfoResponse& lhs, const ErrorInfoResponse& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const ErrorInfoResponse& lhs, const ErrorInfoResponse& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const ErrorInfoResponse& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::ErrorInfoResponse)

namespace s_breguisvc {

                          // =======================                           
                          // class EvaluateOverrides                           
                          // =======================                           

class EvaluateOverrides {

    // INSTANCE DATA
    bdeut_NullableValue<bsl::string>  d_p9departmentcode;
    bdeut_NullableValue<int>          d_p6uuid;
    bdeut_NullableValue<int>          d_p3firm;
    bdeut_NullableValue<int>          d_p3cust;
    bdeut_NullableValue<int>          d_p3prcnum;
    bdeut_NullableValue<int>          d_p3sn;
    bdeut_NullableValue<int>          d_pindex;
    bdeut_NullableValue<int>          d_uuidprc;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_P6UUID           = 0
      , ATTRIBUTE_ID_P3FIRM           = 1
      , ATTRIBUTE_ID_P3CUST           = 2
      , ATTRIBUTE_ID_P3PRCNUM         = 3
      , ATTRIBUTE_ID_P3SN             = 4
      , ATTRIBUTE_ID_P9DEPARTMENTCODE = 5
      , ATTRIBUTE_ID_PINDEX           = 6
      , ATTRIBUTE_ID_UUIDPRC          = 7
    };

    enum {
        NUM_ATTRIBUTES = 8
    };

    enum {
        ATTRIBUTE_INDEX_P6UUID           = 0
      , ATTRIBUTE_INDEX_P3FIRM           = 1
      , ATTRIBUTE_INDEX_P3CUST           = 2
      , ATTRIBUTE_INDEX_P3PRCNUM         = 3
      , ATTRIBUTE_INDEX_P3SN             = 4
      , ATTRIBUTE_INDEX_P9DEPARTMENTCODE = 5
      , ATTRIBUTE_INDEX_PINDEX           = 6
      , ATTRIBUTE_INDEX_UUIDPRC          = 7
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
    explicit EvaluateOverrides(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EvaluateOverrides' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    EvaluateOverrides(const EvaluateOverrides& original,
                      bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EvaluateOverrides' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EvaluateOverrides();
        // Destroy this object.

    // MANIPULATORS
    EvaluateOverrides& operator=(const EvaluateOverrides& rhs);
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

    bdeut_NullableValue<int>& p6uuid();
        // Return a reference to the modifiable "P6uuid" attribute of this
        // object.

    bdeut_NullableValue<int>& p3firm();
        // Return a reference to the modifiable "P3firm" attribute of this
        // object.

    bdeut_NullableValue<int>& p3cust();
        // Return a reference to the modifiable "P3cust" attribute of this
        // object.

    bdeut_NullableValue<int>& p3prcnum();
        // Return a reference to the modifiable "P3prcnum" attribute of this
        // object.

    bdeut_NullableValue<int>& p3sn();
        // Return a reference to the modifiable "P3sn" attribute of this
        // object.

    bdeut_NullableValue<bsl::string>& p9departmentcode();
        // Return a reference to the modifiable "P9departmentcode" attribute of
        // this object.

    bdeut_NullableValue<int>& pindex();
        // Return a reference to the modifiable "Pindex" attribute of this
        // object.

    bdeut_NullableValue<int>& uuidprc();
        // Return a reference to the modifiable "Uuidprc" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bdeut_NullableValue<int>& p6uuid() const;
        // Return a reference to the non-modifiable "P6uuid" attribute of this
        // object.

    const bdeut_NullableValue<int>& p3firm() const;
        // Return a reference to the non-modifiable "P3firm" attribute of this
        // object.

    const bdeut_NullableValue<int>& p3cust() const;
        // Return a reference to the non-modifiable "P3cust" attribute of this
        // object.

    const bdeut_NullableValue<int>& p3prcnum() const;
        // Return a reference to the non-modifiable "P3prcnum" attribute of
        // this object.

    const bdeut_NullableValue<int>& p3sn() const;
        // Return a reference to the non-modifiable "P3sn" attribute of this
        // object.

    const bdeut_NullableValue<bsl::string>& p9departmentcode() const;
        // Return a reference to the non-modifiable "P9departmentcode"
        // attribute of this object.

    const bdeut_NullableValue<int>& pindex() const;
        // Return a reference to the non-modifiable "Pindex" attribute of this
        // object.

    const bdeut_NullableValue<int>& uuidprc() const;
        // Return a reference to the non-modifiable "Uuidprc" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const EvaluateOverrides& lhs, const EvaluateOverrides& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EvaluateOverrides& lhs, const EvaluateOverrides& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EvaluateOverrides& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EvaluateOverrides)

namespace s_breguisvc {

                            // ===================                             
                            // class EventTypeEnum                             
                            // ===================                             

class EventTypeEnum {
    // Types of events

    // INSTANCE DATA
    bsls::Types::Int64 d_value;

    // FRIENDS
    friend bool operator==(const EventTypeEnum& lhs, const EventTypeEnum& rhs);
    friend bool operator!=(const EventTypeEnum& lhs, const EventTypeEnum& rhs);

    // PRIVATE CLASS METHODS
    static int checkRestrictions(const bsls::Types::Int64& value);
        // Check if the specified 'value' satisfies the restrictions of this
        // class (i.e., "EventTypeEnum").  Return 0 if successful (i.e., the
        // restrictions are satisfied) and non-zero otherwise.

  public:
    // TYPES
    typedef bsls::Types::Int64 BaseType;

    // CONSTANTS
    static const char CLASS_NAME[];

    // CREATORS
    EventTypeEnum();
        // Create an object of type 'EventTypeEnum' having the default value.

    EventTypeEnum(const EventTypeEnum& original);
        // Create an object of type 'EventTypeEnum' having the value of the
        // specified 'original' object.

    explicit EventTypeEnum(const bsls::Types::Int64& value);
        // Create an object of type 'EventTypeEnum' having the specified
        // 'value'.

    ~EventTypeEnum();
        // Destroy this object.

    // MANIPULATORS
    EventTypeEnum& operator=(const EventTypeEnum& rhs);
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

    int fromInt64(const bsls::Types::Int64& value);
        // Convert from the specified 'value' to this type.  Return 0 if
        // successful and non-zero otherwise.

    // ACCESSORS
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

    int maxSupportedBdexVersion() const;
        // Return the most current 'bdex' streaming version number supported by
        // this class.  See the 'bdex' package-level documentation for more
        // information on 'bdex' streaming of value-semantic types and
        // containers.

    bsl::ostream& print(bsl::ostream& stream,
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

    const bsls::Types::Int64& toInt64() const;
        // Convert this value to 'bsls::Types::Int64'.
};

// FREE OPERATORS
inline
bool operator==(const EventTypeEnum& lhs, const EventTypeEnum& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EventTypeEnum& lhs, const EventTypeEnum& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EventTypeEnum& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_CUSTOMIZEDTYPE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::EventTypeEnum)

namespace s_breguisvc {

                                // ===========                                 
                                // class Group                                 
                                // ===========                                 

class Group {

    // INSTANCE DATA
    bsl::string  d_groupDescription;
    int          d_groupId;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_GROUP_ID          = 0
      , ATTRIBUTE_ID_GROUP_DESCRIPTION = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_GROUP_ID          = 0
      , ATTRIBUTE_INDEX_GROUP_DESCRIPTION = 1
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
    explicit Group(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'Group' having the default value.  Use the
        // optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    Group(const Group& original,
          bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'Group' having the value of the specified
        // 'original' object.  Use the optionally specified 'basicAllocator' to
        // supply memory.  If 'basicAllocator' is 0, the currently installed
        // default allocator is used.

    ~Group();
        // Destroy this object.

    // MANIPULATORS
    Group& operator=(const Group& rhs);
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

    int& groupId();
        // Return a reference to the modifiable "GroupId" attribute of this
        // object.

    bsl::string& groupDescription();
        // Return a reference to the modifiable "GroupDescription" attribute of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int groupId() const;
        // Return a reference to the non-modifiable "GroupId" attribute of this
        // object.

    const bsl::string& groupDescription() const;
        // Return a reference to the non-modifiable "GroupDescription"
        // attribute of this object.
};

// FREE OPERATORS
inline
bool operator==(const Group& lhs, const Group& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const Group& lhs, const Group& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const Group& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::Group)

namespace s_breguisvc {

                           // =====================                            
                           // class InheritanceType                            
                           // =====================                            

struct InheritanceType {
    // Inheritance Types

  public:
    // TYPES
    enum Value {
        USE_PARENT_NODE                = 0
      , USE_INSTEAD_OF_PARENT_NODE     = 1
      , USE_IN_ADDITION_TO_PARENT_NODE = 2
    };

    enum {
        NUM_ENUMERATORS = 3
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
                          const bsl::string&  string);
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

    static bsl::ostream& print(bsl::ostream& stream, Value value);
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
bsl::ostream& operator<<(bsl::ostream& stream, InheritanceType::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_breguisvc::InheritanceType)


namespace s_breguisvc {

                        // ============================                        
                        // class MarkForDeletionRequest                        
                        // ============================                        

class MarkForDeletionRequest {

    // INSTANCE DATA
    int  d_entryId;
    int  d_updateUuid;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_ID    = 0
      , ATTRIBUTE_ID_UPDATE_UUID = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_ID    = 0
      , ATTRIBUTE_INDEX_UPDATE_UUID = 1
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
    MarkForDeletionRequest();
        // Create an object of type 'MarkForDeletionRequest' having the default
        // value.

    MarkForDeletionRequest(const MarkForDeletionRequest& original);
        // Create an object of type 'MarkForDeletionRequest' having the value
        // of the specified 'original' object.

    ~MarkForDeletionRequest();
        // Destroy this object.

    // MANIPULATORS
    MarkForDeletionRequest& operator=(const MarkForDeletionRequest& rhs);
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

    int& updateUuid();
        // Return a reference to the modifiable "UpdateUuid" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int updateUuid() const;
        // Return a reference to the non-modifiable "UpdateUuid" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const MarkForDeletionRequest& lhs, const MarkForDeletionRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const MarkForDeletionRequest& lhs, const MarkForDeletionRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const MarkForDeletionRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::MarkForDeletionRequest)

namespace s_breguisvc {

                             // =================                              
                             // class MoveRequest                              
                             // =================                              

class MoveRequest {

    // INSTANCE DATA
    int  d_registryId;
    int  d_moveToNodeId;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_REGISTRY_ID     = 0
      , ATTRIBUTE_ID_MOVE_TO_NODE_ID = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_REGISTRY_ID     = 0
      , ATTRIBUTE_INDEX_MOVE_TO_NODE_ID = 1
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
    MoveRequest();
        // Create an object of type 'MoveRequest' having the default value.

    MoveRequest(const MoveRequest& original);
        // Create an object of type 'MoveRequest' having the value of the
        // specified 'original' object.

    ~MoveRequest();
        // Destroy this object.

    // MANIPULATORS
    MoveRequest& operator=(const MoveRequest& rhs);
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

    int& registryId();
        // Return a reference to the modifiable "RegistryId" attribute of this
        // object.

    int& moveToNodeId();
        // Return a reference to the modifiable "MoveToNodeId" attribute of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int registryId() const;
        // Return a reference to the non-modifiable "RegistryId" attribute of
        // this object.

    int moveToNodeId() const;
        // Return a reference to the non-modifiable "MoveToNodeId" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const MoveRequest& lhs, const MoveRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const MoveRequest& lhs, const MoveRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const MoveRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::MoveRequest)

namespace s_breguisvc {

                                 // ==========                                 
                                 // class Node                                 
                                 // ==========                                 

class Node {

    // INSTANCE DATA
    bsl::vector<Node>  d_children;
    bsl::string        d_name;
    bsl::string        d_description;
    bsl::string        d_expiryTsp;
    int                d_id;
    int                d_type;
    bool               d_hasExpired;
    bool               d_obsoleteTraceEnabled;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_NAME                   = 0
      , ATTRIBUTE_ID_ID                     = 1
      , ATTRIBUTE_ID_TYPE                   = 2
      , ATTRIBUTE_ID_DESCRIPTION            = 3
      , ATTRIBUTE_ID_HAS_EXPIRED            = 4
      , ATTRIBUTE_ID_EXPIRY_TSP             = 5
      , ATTRIBUTE_ID_CHILDREN               = 6
      , ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED = 7
    };

    enum {
        NUM_ATTRIBUTES = 8
    };

    enum {
        ATTRIBUTE_INDEX_NAME                   = 0
      , ATTRIBUTE_INDEX_ID                     = 1
      , ATTRIBUTE_INDEX_TYPE                   = 2
      , ATTRIBUTE_INDEX_DESCRIPTION            = 3
      , ATTRIBUTE_INDEX_HAS_EXPIRED            = 4
      , ATTRIBUTE_INDEX_EXPIRY_TSP             = 5
      , ATTRIBUTE_INDEX_CHILDREN               = 6
      , ATTRIBUTE_INDEX_OBSOLETE_TRACE_ENABLED = 7
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
    explicit Node(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'Node' having the default value.  Use the
        // optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    Node(const Node& original,
         bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'Node' having the value of the specified
        // 'original' object.  Use the optionally specified 'basicAllocator' to
        // supply memory.  If 'basicAllocator' is 0, the currently installed
        // default allocator is used.

    ~Node();
        // Destroy this object.

    // MANIPULATORS
    Node& operator=(const Node& rhs);
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

    bsl::string& name();
        // Return a reference to the modifiable "Name" attribute of this
        // object.

    int& id();
        // Return a reference to the modifiable "Id" attribute of this object.

    int& type();
        // Return a reference to the modifiable "Type" attribute of this
        // object.

    bsl::string& description();
        // Return a reference to the modifiable "Description" attribute of this
        // object.

    bool& hasExpired();
        // Return a reference to the modifiable "HasExpired" attribute of this
        // object.

    bsl::string& expiryTsp();
        // Return a reference to the modifiable "ExpiryTsp" attribute of this
        // object.

    bsl::vector<Node>& children();
        // Return a reference to the modifiable "Children" attribute of this
        // object.

    bool& obsoleteTraceEnabled();
        // Return a reference to the modifiable "ObsoleteTraceEnabled"
        // attribute of this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::string& name() const;
        // Return a reference to the non-modifiable "Name" attribute of this
        // object.

    int id() const;
        // Return a reference to the non-modifiable "Id" attribute of this
        // object.

    int type() const;
        // Return a reference to the non-modifiable "Type" attribute of this
        // object.

    const bsl::string& description() const;
        // Return a reference to the non-modifiable "Description" attribute of
        // this object.

    bool hasExpired() const;
        // Return a reference to the non-modifiable "HasExpired" attribute of
        // this object.

    const bsl::string& expiryTsp() const;
        // Return a reference to the non-modifiable "ExpiryTsp" attribute of
        // this object.

    const bsl::vector<Node>& children() const;
        // Return a reference to the non-modifiable "Children" attribute of
        // this object.

    bool obsoleteTraceEnabled() const;
        // Return a reference to the non-modifiable "ObsoleteTraceEnabled"
        // attribute of this object.
};

// FREE OPERATORS
inline
bool operator==(const Node& lhs, const Node& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const Node& lhs, const Node& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const Node& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::Node)

namespace s_breguisvc {

                            // ===================                             
                            // class NodePrivilege                             
                            // ===================                             

class NodePrivilege {

    // INSTANCE DATA
    bool  d_isPrivilegeAdmin;
    bool  d_canUpdateProd;
    bool  d_canUpdateDesc;
    bool  d_canReleaseCode;
    bool  d_canUpdateDev;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN = 0
      , ATTRIBUTE_ID_CAN_UPDATE_PROD    = 1
      , ATTRIBUTE_ID_CAN_UPDATE_DESC    = 2
      , ATTRIBUTE_ID_CAN_RELEASE_CODE   = 3
      , ATTRIBUTE_ID_CAN_UPDATE_DEV     = 4
    };

    enum {
        NUM_ATTRIBUTES = 5
    };

    enum {
        ATTRIBUTE_INDEX_IS_PRIVILEGE_ADMIN = 0
      , ATTRIBUTE_INDEX_CAN_UPDATE_PROD    = 1
      , ATTRIBUTE_INDEX_CAN_UPDATE_DESC    = 2
      , ATTRIBUTE_INDEX_CAN_RELEASE_CODE   = 3
      , ATTRIBUTE_INDEX_CAN_UPDATE_DEV     = 4
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
    NodePrivilege();
        // Create an object of type 'NodePrivilege' having the default value.

    NodePrivilege(const NodePrivilege& original);
        // Create an object of type 'NodePrivilege' having the value of the
        // specified 'original' object.

    ~NodePrivilege();
        // Destroy this object.

    // MANIPULATORS
    NodePrivilege& operator=(const NodePrivilege& rhs);
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

    bool& isPrivilegeAdmin();
        // Return a reference to the modifiable "IsPrivilegeAdmin" attribute of
        // this object.

    bool& canUpdateProd();
        // Return a reference to the modifiable "CanUpdateProd" attribute of
        // this object.

    bool& canUpdateDesc();
        // Return a reference to the modifiable "CanUpdateDesc" attribute of
        // this object.

    bool& canReleaseCode();
        // Return a reference to the modifiable "CanReleaseCode" attribute of
        // this object.

    bool& canUpdateDev();
        // Return a reference to the modifiable "CanUpdateDev" attribute of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bool isPrivilegeAdmin() const;
        // Return a reference to the non-modifiable "IsPrivilegeAdmin"
        // attribute of this object.

    bool canUpdateProd() const;
        // Return a reference to the non-modifiable "CanUpdateProd" attribute
        // of this object.

    bool canUpdateDesc() const;
        // Return a reference to the non-modifiable "CanUpdateDesc" attribute
        // of this object.

    bool canReleaseCode() const;
        // Return a reference to the non-modifiable "CanReleaseCode" attribute
        // of this object.

    bool canUpdateDev() const;
        // Return a reference to the non-modifiable "CanUpdateDev" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const NodePrivilege& lhs, const NodePrivilege& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const NodePrivilege& lhs, const NodePrivilege& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const NodePrivilege& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::NodePrivilege)

namespace s_breguisvc {

                             // ==================                             
                             // class OverrideType                             
                             // ==================                             

struct OverrideType {

  public:
    // TYPES
    enum Value {
        UNKNOWN           = 0
      , MACHINE_OR_GROUP  = 1
      , CUSTOMER          = 2
      , UUID              = 3
      , FIRM_NUMBER       = 4
      , TS_PRICING_NUMBER = 5
      , DEPARTMENT_CODE   = 6
      , SERIAL_NUMBER     = 7
      , PINDEX            = 8
      , UUID_PERCENT      = 9
    };

    enum {
        NUM_ENUMERATORS = 10
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
                          const bsl::string&  string);
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

    static bsl::ostream& print(bsl::ostream& stream, Value value);
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
bsl::ostream& operator<<(bsl::ostream& stream, OverrideType::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_breguisvc::OverrideType)


namespace s_breguisvc {

                         // ==========================                         
                         // class RelatedTicketRequest                         
                         // ==========================                         

class RelatedTicketRequest {

    // INSTANCE DATA
    bsl::string  d_type;
    int          d_number;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_TYPE   = 0
      , ATTRIBUTE_ID_NUMBER = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_TYPE   = 0
      , ATTRIBUTE_INDEX_NUMBER = 1
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
    explicit RelatedTicketRequest(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'RelatedTicketRequest' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    RelatedTicketRequest(const RelatedTicketRequest& original,
                         bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'RelatedTicketRequest' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~RelatedTicketRequest();
        // Destroy this object.

    // MANIPULATORS
    RelatedTicketRequest& operator=(const RelatedTicketRequest& rhs);
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

    bsl::string& type();
        // Return a reference to the modifiable "Type" attribute of this
        // object.

    int& number();
        // Return a reference to the modifiable "Number" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::string& type() const;
        // Return a reference to the non-modifiable "Type" attribute of this
        // object.

    int number() const;
        // Return a reference to the non-modifiable "Number" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const RelatedTicketRequest& lhs, const RelatedTicketRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const RelatedTicketRequest& lhs, const RelatedTicketRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const RelatedTicketRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::RelatedTicketRequest)

namespace s_breguisvc {

                           // ======================                           
                           // class SearchByContacts                           
                           // ======================                           

class SearchByContacts {

    // INSTANCE DATA
    int  d_uuid;
    int  d_contactType;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_UUID         = 0
      , ATTRIBUTE_ID_CONTACT_TYPE = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_UUID         = 0
      , ATTRIBUTE_INDEX_CONTACT_TYPE = 1
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
    SearchByContacts();
        // Create an object of type 'SearchByContacts' having the default
        // value.

    SearchByContacts(const SearchByContacts& original);
        // Create an object of type 'SearchByContacts' having the value of the
        // specified 'original' object.

    ~SearchByContacts();
        // Destroy this object.

    // MANIPULATORS
    SearchByContacts& operator=(const SearchByContacts& rhs);
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

    int& uuid();
        // Return a reference to the modifiable "Uuid" attribute of this
        // object.

    int& contactType();
        // Return a reference to the modifiable "ContactType" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int uuid() const;
        // Return a reference to the non-modifiable "Uuid" attribute of this
        // object.

    int contactType() const;
        // Return a reference to the non-modifiable "ContactType" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const SearchByContacts& lhs, const SearchByContacts& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const SearchByContacts& lhs, const SearchByContacts& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const SearchByContacts& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::SearchByContacts)

namespace s_breguisvc {

                           // ======================                           
                           // class SearchByKeywords                           
                           // ======================                           

class SearchByKeywords {

    // INSTANCE DATA
    bsl::vector<bsl::string>  d_keywords;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_KEYWORDS = 0
    };

    enum {
        NUM_ATTRIBUTES = 1
    };

    enum {
        ATTRIBUTE_INDEX_KEYWORDS = 0
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
    explicit SearchByKeywords(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'SearchByKeywords' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    SearchByKeywords(const SearchByKeywords& original,
                     bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'SearchByKeywords' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~SearchByKeywords();
        // Destroy this object.

    // MANIPULATORS
    SearchByKeywords& operator=(const SearchByKeywords& rhs);
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

    bsl::vector<bsl::string>& keywords();
        // Return a reference to the modifiable "Keywords" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::vector<bsl::string>& keywords() const;
        // Return a reference to the non-modifiable "Keywords" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const SearchByKeywords& lhs, const SearchByKeywords& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const SearchByKeywords& lhs, const SearchByKeywords& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const SearchByKeywords& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::SearchByKeywords)

namespace s_breguisvc {

                             // ==================                             
                             // class TodoListItem                             
                             // ==================                             

class TodoListItem {

    // INSTANCE DATA
    bsl::string  d_ticketType;
    bsl::string  d_drqsType;
    bsl::string  d_status;
    bsl::string  d_summary;
    int          d_ticketNumber;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_TICKET_NUMBER = 0
      , ATTRIBUTE_ID_TICKET_TYPE   = 1
      , ATTRIBUTE_ID_DRQS_TYPE     = 2
      , ATTRIBUTE_ID_STATUS        = 3
      , ATTRIBUTE_ID_SUMMARY       = 4
    };

    enum {
        NUM_ATTRIBUTES = 5
    };

    enum {
        ATTRIBUTE_INDEX_TICKET_NUMBER = 0
      , ATTRIBUTE_INDEX_TICKET_TYPE   = 1
      , ATTRIBUTE_INDEX_DRQS_TYPE     = 2
      , ATTRIBUTE_INDEX_STATUS        = 3
      , ATTRIBUTE_INDEX_SUMMARY       = 4
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
    explicit TodoListItem(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'TodoListItem' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    TodoListItem(const TodoListItem& original,
                 bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'TodoListItem' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~TodoListItem();
        // Destroy this object.

    // MANIPULATORS
    TodoListItem& operator=(const TodoListItem& rhs);
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

    int& ticketNumber();
        // Return a reference to the modifiable "TicketNumber" attribute of
        // this object.

    bsl::string& ticketType();
        // Return a reference to the modifiable "TicketType" attribute of this
        // object.

    bsl::string& drqsType();
        // Return a reference to the modifiable "DrqsType" attribute of this
        // object.

    bsl::string& status();
        // Return a reference to the modifiable "Status" attribute of this
        // object.

    bsl::string& summary();
        // Return a reference to the modifiable "Summary" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int ticketNumber() const;
        // Return a reference to the non-modifiable "TicketNumber" attribute of
        // this object.

    const bsl::string& ticketType() const;
        // Return a reference to the non-modifiable "TicketType" attribute of
        // this object.

    const bsl::string& drqsType() const;
        // Return a reference to the non-modifiable "DrqsType" attribute of
        // this object.

    const bsl::string& status() const;
        // Return a reference to the non-modifiable "Status" attribute of this
        // object.

    const bsl::string& summary() const;
        // Return a reference to the non-modifiable "Summary" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const TodoListItem& lhs, const TodoListItem& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const TodoListItem& lhs, const TodoListItem& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const TodoListItem& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::TodoListItem)

namespace s_breguisvc {

                               // ==============                               
                               // class UserData                               
                               // ==============                               

class UserData {

    // INSTANCE DATA
    bsls::Types::Int64               d_userNumber;
    bsl::vector<bsls::Types::Int64>  d_userFlags;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_USER_FLAGS  = 0
      , ATTRIBUTE_ID_USER_NUMBER = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_USER_FLAGS  = 0
      , ATTRIBUTE_INDEX_USER_NUMBER = 1
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
    explicit UserData(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'UserData' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    UserData(const UserData& original,
             bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'UserData' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~UserData();
        // Destroy this object.

    // MANIPULATORS
    UserData& operator=(const UserData& rhs);
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

    bsl::vector<bsls::Types::Int64>& userFlags();
        // Return a reference to the modifiable "UserFlags" attribute of this
        // object.

    bsls::Types::Int64& userNumber();
        // Return a reference to the modifiable "UserNumber" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::vector<bsls::Types::Int64>& userFlags() const;
        // Return a reference to the non-modifiable "UserFlags" attribute of
        // this object.

    bsls::Types::Int64 userNumber() const;
        // Return a reference to the non-modifiable "UserNumber" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const UserData& lhs, const UserData& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const UserData& lhs, const UserData& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const UserData& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::UserData)

namespace s_breguisvc {

                             // ==================                             
                             // class ValueRequest                             
                             // ==================                             

class ValueRequest {

    // INSTANCE DATA
    int  d_entryId;
    int  d_version;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_ID = 0
      , ATTRIBUTE_ID_VERSION  = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_ID = 0
      , ATTRIBUTE_INDEX_VERSION  = 1
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
    ValueRequest();
        // Create an object of type 'ValueRequest' having the default value.

    ValueRequest(const ValueRequest& original);
        // Create an object of type 'ValueRequest' having the value of the
        // specified 'original' object.

    ~ValueRequest();
        // Destroy this object.

    // MANIPULATORS
    ValueRequest& operator=(const ValueRequest& rhs);
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

    int& version();
        // Return a reference to the modifiable "Version" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int version() const;
        // Return a reference to the non-modifiable "Version" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const ValueRequest& lhs, const ValueRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const ValueRequest& lhs, const ValueRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const ValueRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::ValueRequest)

namespace s_breguisvc {

                              // ===============                               
                              // class ValueType                               
                              // ===============                               

struct ValueType {

  public:
    // TYPES
    enum Value {
        UNKNOWN                = 0
      , BOOLEAN                = 1
      , INTEGER                = 2
      , CHARACTER              = 3
      , DOUBLE                 = 4
      , LIST_OF_INTEGERS       = 5
      , STRING                 = 6
      , EXT_LIST_OF_INTEGERS   = 7
      , EXTENDED_STRING        = 8
      , INTEGER_TABLE          = 9
      , CHARACTER_TABLE        = 10
      , BOOLEAN_TABLE          = 11
      , STRING_TABLE           = 12
      , LIST_OF_INTEGERS_TABLE = 13
      , DOUBLE_TABLE           = 14
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
                          const bsl::string&  string);
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

    static bsl::ostream& print(bsl::ostream& stream, Value value);
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
bsl::ostream& operator<<(bsl::ostream& stream, ValueType::Value rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_ENUMERATION_TRAITS(s_breguisvc::ValueType)


namespace s_breguisvc {

                              // ================                              
                              // class VersionTsp                              
                              // ================                              

class VersionTsp {

    // INSTANCE DATA
    bsls::Types::Int64  d_version;
    bsl::string         d_prqsStatus;
    bsl::string         d_updateTsp;
    int                 d_updateEpoch;
    int                 d_prqsNumber;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_VERSION      = 0
      , ATTRIBUTE_ID_UPDATE_EPOCH = 1
      , ATTRIBUTE_ID_PRQS_NUMBER  = 2
      , ATTRIBUTE_ID_PRQS_STATUS  = 3
      , ATTRIBUTE_ID_UPDATE_TSP   = 4
    };

    enum {
        NUM_ATTRIBUTES = 5
    };

    enum {
        ATTRIBUTE_INDEX_VERSION      = 0
      , ATTRIBUTE_INDEX_UPDATE_EPOCH = 1
      , ATTRIBUTE_INDEX_PRQS_NUMBER  = 2
      , ATTRIBUTE_INDEX_PRQS_STATUS  = 3
      , ATTRIBUTE_INDEX_UPDATE_TSP   = 4
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
    explicit VersionTsp(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'VersionTsp' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    VersionTsp(const VersionTsp& original,
               bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'VersionTsp' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~VersionTsp();
        // Destroy this object.

    // MANIPULATORS
    VersionTsp& operator=(const VersionTsp& rhs);
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

    bsls::Types::Int64& version();
        // Return a reference to the modifiable "Version" attribute of this
        // object.

    int& updateEpoch();
        // Return a reference to the modifiable "UpdateEpoch" attribute of this
        // object.

    int& prqsNumber();
        // Return a reference to the modifiable "PrqsNumber" attribute of this
        // object.

    bsl::string& prqsStatus();
        // Return a reference to the modifiable "PrqsStatus" attribute of this
        // object.

    bsl::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 version() const;
        // Return a reference to the non-modifiable "Version" attribute of this
        // object.

    int updateEpoch() const;
        // Return a reference to the non-modifiable "UpdateEpoch" attribute of
        // this object.

    int prqsNumber() const;
        // Return a reference to the non-modifiable "PrqsNumber" attribute of
        // this object.

    const bsl::string& prqsStatus() const;
        // Return a reference to the non-modifiable "PrqsStatus" attribute of
        // this object.

    const bsl::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const VersionTsp& lhs, const VersionTsp& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const VersionTsp& lhs, const VersionTsp& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const VersionTsp& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::VersionTsp)

namespace s_breguisvc {

                                 // ==========                                 
                                 // class Void                                 
                                 // ==========                                 

class Void {

    // INSTANCE DATA

  public:
    // TYPES
    enum {
        NUM_ATTRIBUTES = 0
    };


    // CONSTANTS
    static const char CLASS_NAME[];

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
    Void();
        // Create an object of type 'Void' having the default value.

    Void(const Void& original);
        // Create an object of type 'Void' having the value of the specified
        // 'original' object.

    ~Void();
        // Destroy this object.

    // MANIPULATORS
    Void& operator=(const Void& rhs);
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

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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
};

// FREE OPERATORS
inline
bool operator==(const Void& lhs, const Void& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const Void& lhs, const Void& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const Void& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_BITWISEMOVEABLE_TRAITS(s_breguisvc::Void)

namespace s_breguisvc {

                             // =================                              
                             // class AuditRecord                              
                             // =================                              

class AuditRecord {

    // INSTANCE DATA
    bsls::Types::Int64  d_entryId;
    bsls::Types::Int64  d_prqsNumber;
    bsls::Types::Int64  d_uuid;
    bsls::Types::Int64  d_oldValue;
    bsls::Types::Int64  d_newValue;
    bsls::Types::Int64  d_ticketType;
    bsls::Types::Int64  d_ticketNumber;
    bsl::string         d_prqsStatus;
    bsl::string         d_updateTsp;
    bsl::string         d_logNote;
    EventTypeEnum       d_eventType;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_ID      = 0
      , ATTRIBUTE_ID_PRQS_NUMBER   = 1
      , ATTRIBUTE_ID_PRQS_STATUS   = 2
      , ATTRIBUTE_ID_UUID          = 3
      , ATTRIBUTE_ID_UPDATE_TSP    = 4
      , ATTRIBUTE_ID_EVENT_TYPE    = 5
      , ATTRIBUTE_ID_OLD_VALUE     = 6
      , ATTRIBUTE_ID_NEW_VALUE     = 7
      , ATTRIBUTE_ID_TICKET_TYPE   = 8
      , ATTRIBUTE_ID_TICKET_NUMBER = 9
      , ATTRIBUTE_ID_LOG_NOTE      = 10
    };

    enum {
        NUM_ATTRIBUTES = 11
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_ID      = 0
      , ATTRIBUTE_INDEX_PRQS_NUMBER   = 1
      , ATTRIBUTE_INDEX_PRQS_STATUS   = 2
      , ATTRIBUTE_INDEX_UUID          = 3
      , ATTRIBUTE_INDEX_UPDATE_TSP    = 4
      , ATTRIBUTE_INDEX_EVENT_TYPE    = 5
      , ATTRIBUTE_INDEX_OLD_VALUE     = 6
      , ATTRIBUTE_INDEX_NEW_VALUE     = 7
      , ATTRIBUTE_INDEX_TICKET_TYPE   = 8
      , ATTRIBUTE_INDEX_TICKET_NUMBER = 9
      , ATTRIBUTE_INDEX_LOG_NOTE      = 10
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
    explicit AuditRecord(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'AuditRecord' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    AuditRecord(const AuditRecord& original,
                bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'AuditRecord' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~AuditRecord();
        // Destroy this object.

    // MANIPULATORS
    AuditRecord& operator=(const AuditRecord& rhs);
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

    bsls::Types::Int64& entryId();
        // Return a reference to the modifiable "EntryId" attribute of this
        // object.

    bsls::Types::Int64& prqsNumber();
        // Return a reference to the modifiable "PrqsNumber" attribute of this
        // object.

    bsl::string& prqsStatus();
        // Return a reference to the modifiable "PrqsStatus" attribute of this
        // object.

    bsls::Types::Int64& uuid();
        // Return a reference to the modifiable "Uuid" attribute of this
        // object.

    bsl::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    EventTypeEnum& eventType();
        // Return a reference to the modifiable "EventType" attribute of this
        // object.

    bsls::Types::Int64& oldValue();
        // Return a reference to the modifiable "OldValue" attribute of this
        // object.

    bsls::Types::Int64& newValue();
        // Return a reference to the modifiable "NewValue" attribute of this
        // object.

    bsls::Types::Int64& ticketType();
        // Return a reference to the modifiable "TicketType" attribute of this
        // object.

    bsls::Types::Int64& ticketNumber();
        // Return a reference to the modifiable "TicketNumber" attribute of
        // this object.

    bsl::string& logNote();
        // Return a reference to the modifiable "LogNote" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 entryId() const;
        // Return a reference to the non-modifiable "EntryId" attribute of this
        // object.

    bsls::Types::Int64 prqsNumber() const;
        // Return a reference to the non-modifiable "PrqsNumber" attribute of
        // this object.

    const bsl::string& prqsStatus() const;
        // Return a reference to the non-modifiable "PrqsStatus" attribute of
        // this object.

    bsls::Types::Int64 uuid() const;
        // Return a reference to the non-modifiable "Uuid" attribute of this
        // object.

    const bsl::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    const EventTypeEnum& eventType() const;
        // Return a reference to the non-modifiable "EventType" attribute of
        // this object.

    bsls::Types::Int64 oldValue() const;
        // Return a reference to the non-modifiable "OldValue" attribute of
        // this object.

    bsls::Types::Int64 newValue() const;
        // Return a reference to the non-modifiable "NewValue" attribute of
        // this object.

    bsls::Types::Int64 ticketType() const;
        // Return a reference to the non-modifiable "TicketType" attribute of
        // this object.

    bsls::Types::Int64 ticketNumber() const;
        // Return a reference to the non-modifiable "TicketNumber" attribute of
        // this object.

    const bsl::string& logNote() const;
        // Return a reference to the non-modifiable "LogNote" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const AuditRecord& lhs, const AuditRecord& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const AuditRecord& lhs, const AuditRecord& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const AuditRecord& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::AuditRecord)

namespace s_breguisvc {

                              // ===============                               
                              // class EntryInfo                               
                              // ===============                               

class EntryInfo {

    // INSTANCE DATA
    bsls::Types::Int64                       d_entryId;
    bsls::Types::Int64                       d_currentVersion;
    bsls::Types::Int64                       d_maxNumValuesInList;
    bsls::Types::Int64                       d_pwhoId;
    bsl::string                              d_apiName;
    bsl::string                              d_expiryTsp;
    bdeut_NullableValue<bsls::Types::Int64>  d_apiDate;
    ValueType::Value                         d_valueType;
    ApiStatus::Value                         d_apiStatus;
    bool                                     d_isPermanent;
    bool                                     d_isSharedMemory;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_ID               = 0
      , ATTRIBUTE_ID_CURRENT_VERSION        = 1
      , ATTRIBUTE_ID_VALUE_TYPE             = 2
      , ATTRIBUTE_ID_API_NAME               = 3
      , ATTRIBUTE_ID_API_STATUS             = 4
      , ATTRIBUTE_ID_EXPIRY_TSP             = 5
      , ATTRIBUTE_ID_IS_PERMANENT           = 6
      , ATTRIBUTE_ID_IS_SHARED_MEMORY       = 7
      , ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST = 8
      , ATTRIBUTE_ID_PWHO_ID                = 9
      , ATTRIBUTE_ID_API_DATE               = 10
    };

    enum {
        NUM_ATTRIBUTES = 11
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_ID               = 0
      , ATTRIBUTE_INDEX_CURRENT_VERSION        = 1
      , ATTRIBUTE_INDEX_VALUE_TYPE             = 2
      , ATTRIBUTE_INDEX_API_NAME               = 3
      , ATTRIBUTE_INDEX_API_STATUS             = 4
      , ATTRIBUTE_INDEX_EXPIRY_TSP             = 5
      , ATTRIBUTE_INDEX_IS_PERMANENT           = 6
      , ATTRIBUTE_INDEX_IS_SHARED_MEMORY       = 7
      , ATTRIBUTE_INDEX_MAX_NUM_VALUES_IN_LIST = 8
      , ATTRIBUTE_INDEX_PWHO_ID                = 9
      , ATTRIBUTE_INDEX_API_DATE               = 10
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
    explicit EntryInfo(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryInfo' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    EntryInfo(const EntryInfo& original,
              bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryInfo' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EntryInfo();
        // Destroy this object.

    // MANIPULATORS
    EntryInfo& operator=(const EntryInfo& rhs);
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

    bsls::Types::Int64& entryId();
        // Return a reference to the modifiable "EntryId" attribute of this
        // object.

    bsls::Types::Int64& currentVersion();
        // Return a reference to the modifiable "CurrentVersion" attribute of
        // this object.

    ValueType::Value& valueType();
        // Return a reference to the modifiable "ValueType" attribute of this
        // object.

    bsl::string& apiName();
        // Return a reference to the modifiable "ApiName" attribute of this
        // object.

    ApiStatus::Value& apiStatus();
        // Return a reference to the modifiable "ApiStatus" attribute of this
        // object.

    bsl::string& expiryTsp();
        // Return a reference to the modifiable "ExpiryTsp" attribute of this
        // object.

    bool& isPermanent();
        // Return a reference to the modifiable "IsPermanent" attribute of this
        // object.

    bool& isSharedMemory();
        // Return a reference to the modifiable "IsSharedMemory" attribute of
        // this object.

    bsls::Types::Int64& maxNumValuesInList();
        // Return a reference to the modifiable "MaxNumValuesInList" attribute
        // of this object.

    bsls::Types::Int64& pwhoId();
        // Return a reference to the modifiable "PwhoId" attribute of this
        // object.

    bdeut_NullableValue<bsls::Types::Int64>& apiDate();
        // Return a reference to the modifiable "ApiDate" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 entryId() const;
        // Return a reference to the non-modifiable "EntryId" attribute of this
        // object.

    bsls::Types::Int64 currentVersion() const;
        // Return a reference to the non-modifiable "CurrentVersion" attribute
        // of this object.

    ValueType::Value valueType() const;
        // Return a reference to the non-modifiable "ValueType" attribute of
        // this object.

    const bsl::string& apiName() const;
        // Return a reference to the non-modifiable "ApiName" attribute of this
        // object.

    ApiStatus::Value apiStatus() const;
        // Return a reference to the non-modifiable "ApiStatus" attribute of
        // this object.

    const bsl::string& expiryTsp() const;
        // Return a reference to the non-modifiable "ExpiryTsp" attribute of
        // this object.

    bool isPermanent() const;
        // Return a reference to the non-modifiable "IsPermanent" attribute of
        // this object.

    bool isSharedMemory() const;
        // Return a reference to the non-modifiable "IsSharedMemory" attribute
        // of this object.

    bsls::Types::Int64 maxNumValuesInList() const;
        // Return a reference to the non-modifiable "MaxNumValuesInList"
        // attribute of this object.

    bsls::Types::Int64 pwhoId() const;
        // Return a reference to the non-modifiable "PwhoId" attribute of this
        // object.

    const bdeut_NullableValue<bsls::Types::Int64>& apiDate() const;
        // Return a reference to the non-modifiable "ApiDate" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const EntryInfo& lhs, const EntryInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EntryInfo& lhs, const EntryInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EntryInfo& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EntryInfo)

namespace s_breguisvc {

                            // ===================                             
                            // class EntryOverride                             
                            // ===================                             

class EntryOverride {

    // INSTANCE DATA
    bsls::Types::Int64   d_seq;
    bsl::string          d_value;
    EntryData            d_entryData;
    OverrideType::Value  d_type;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_SEQ        = 0
      , ATTRIBUTE_ID_TYPE       = 1
      , ATTRIBUTE_ID_VALUE      = 2
      , ATTRIBUTE_ID_ENTRY_DATA = 3
    };

    enum {
        NUM_ATTRIBUTES = 4
    };

    enum {
        ATTRIBUTE_INDEX_SEQ        = 0
      , ATTRIBUTE_INDEX_TYPE       = 1
      , ATTRIBUTE_INDEX_VALUE      = 2
      , ATTRIBUTE_INDEX_ENTRY_DATA = 3
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
    explicit EntryOverride(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryOverride' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    EntryOverride(const EntryOverride& original,
                  bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryOverride' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EntryOverride();
        // Destroy this object.

    // MANIPULATORS
    EntryOverride& operator=(const EntryOverride& rhs);
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

    bsls::Types::Int64& seq();
        // Return a reference to the modifiable "Seq" attribute of this object.

    OverrideType::Value& type();
        // Return a reference to the modifiable "Type" attribute of this
        // object.

    bsl::string& value();
        // Return a reference to the modifiable "Value" attribute of this
        // object.

    EntryData& entryData();
        // Return a reference to the modifiable "EntryData" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 seq() const;
        // Return a reference to the non-modifiable "Seq" attribute of this
        // object.

    OverrideType::Value type() const;
        // Return a reference to the non-modifiable "Type" attribute of this
        // object.

    const bsl::string& value() const;
        // Return a reference to the non-modifiable "Value" attribute of this
        // object.

    const EntryData& entryData() const;
        // Return a reference to the non-modifiable "EntryData" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const EntryOverride& lhs, const EntryOverride& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EntryOverride& lhs, const EntryOverride& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EntryOverride& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EntryOverride)

namespace s_breguisvc {

                         // ==========================                         
                         // class GetBregValuesRequest                         
                         // ==========================                         

class GetBregValuesRequest {

    // INSTANCE DATA
    EvaluateOverrides  d_overrides;
    BregValueObject    d_object;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_OBJECT    = 0
      , ATTRIBUTE_ID_OVERRIDES = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_OBJECT    = 0
      , ATTRIBUTE_INDEX_OVERRIDES = 1
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
    explicit GetBregValuesRequest(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'GetBregValuesRequest' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    GetBregValuesRequest(const GetBregValuesRequest& original,
                         bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'GetBregValuesRequest' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~GetBregValuesRequest();
        // Destroy this object.

    // MANIPULATORS
    GetBregValuesRequest& operator=(const GetBregValuesRequest& rhs);
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

    BregValueObject& object();
        // Return a reference to the modifiable "Object" attribute of this
        // object.

    EvaluateOverrides& overrides();
        // Return a reference to the modifiable "Overrides" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const BregValueObject& object() const;
        // Return a reference to the non-modifiable "Object" attribute of this
        // object.

    const EvaluateOverrides& overrides() const;
        // Return a reference to the non-modifiable "Overrides" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const GetBregValuesRequest& lhs, const GetBregValuesRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const GetBregValuesRequest& lhs, const GetBregValuesRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const GetBregValuesRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::GetBregValuesRequest)

namespace s_breguisvc {

                             // ==================                             
                             // class OverrideInfo                             
                             // ==================                             

class OverrideInfo {
    // For override validation

    // INSTANCE DATA
    bsl::string          d_setting;
    OverrideType::Value  d_type;
    bool                 d_isProduction;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_IS_PRODUCTION = 0
      , ATTRIBUTE_ID_TYPE          = 1
      , ATTRIBUTE_ID_SETTING       = 2
    };

    enum {
        NUM_ATTRIBUTES = 3
    };

    enum {
        ATTRIBUTE_INDEX_IS_PRODUCTION = 0
      , ATTRIBUTE_INDEX_TYPE          = 1
      , ATTRIBUTE_INDEX_SETTING       = 2
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
    explicit OverrideInfo(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'OverrideInfo' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    OverrideInfo(const OverrideInfo& original,
                 bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'OverrideInfo' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~OverrideInfo();
        // Destroy this object.

    // MANIPULATORS
    OverrideInfo& operator=(const OverrideInfo& rhs);
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

    bool& isProduction();
        // Return a reference to the modifiable "IsProduction" attribute of
        // this object.

    OverrideType::Value& type();
        // Return a reference to the modifiable "Type" attribute of this
        // object.

    bsl::string& setting();
        // Return a reference to the modifiable "Setting" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bool isProduction() const;
        // Return a reference to the non-modifiable "IsProduction" attribute of
        // this object.

    OverrideType::Value type() const;
        // Return a reference to the non-modifiable "Type" attribute of this
        // object.

    const bsl::string& setting() const;
        // Return a reference to the non-modifiable "Setting" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const OverrideInfo& lhs, const OverrideInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const OverrideInfo& lhs, const OverrideInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const OverrideInfo& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::OverrideInfo)

namespace s_breguisvc {

                           // =====================                            
                           // class OverrideSummary                            
                           // =====================                            

class OverrideSummary {

    // INSTANCE DATA
    bsl::string          d_typeString;
    bsl::string          d_setting;
    bsl::string          d_settingTooltip;
    bsl::string          d_value;
    int                  d_type;
    OverrideType::Value  d_typeEnum;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_TYPE            = 0
      , ATTRIBUTE_ID_TYPE_STRING     = 1
      , ATTRIBUTE_ID_TYPE_ENUM       = 2
      , ATTRIBUTE_ID_SETTING         = 3
      , ATTRIBUTE_ID_SETTING_TOOLTIP = 4
      , ATTRIBUTE_ID_VALUE           = 5
    };

    enum {
        NUM_ATTRIBUTES = 6
    };

    enum {
        ATTRIBUTE_INDEX_TYPE            = 0
      , ATTRIBUTE_INDEX_TYPE_STRING     = 1
      , ATTRIBUTE_INDEX_TYPE_ENUM       = 2
      , ATTRIBUTE_INDEX_SETTING         = 3
      , ATTRIBUTE_INDEX_SETTING_TOOLTIP = 4
      , ATTRIBUTE_INDEX_VALUE           = 5
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
    explicit OverrideSummary(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'OverrideSummary' having the default value.
        //  Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    OverrideSummary(const OverrideSummary& original,
                    bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'OverrideSummary' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~OverrideSummary();
        // Destroy this object.

    // MANIPULATORS
    OverrideSummary& operator=(const OverrideSummary& rhs);
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

    int& type();
        // Return a reference to the modifiable "Type" attribute of this
        // object.

    bsl::string& typeString();
        // Return a reference to the modifiable "TypeString" attribute of this
        // object.

    OverrideType::Value& typeEnum();
        // Return a reference to the modifiable "TypeEnum" attribute of this
        // object.

    bsl::string& setting();
        // Return a reference to the modifiable "Setting" attribute of this
        // object.

    bsl::string& settingTooltip();
        // Return a reference to the modifiable "SettingTooltip" attribute of
        // this object.

    bsl::string& value();
        // Return a reference to the modifiable "Value" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int type() const;
        // Return a reference to the non-modifiable "Type" attribute of this
        // object.

    const bsl::string& typeString() const;
        // Return a reference to the non-modifiable "TypeString" attribute of
        // this object.

    OverrideType::Value typeEnum() const;
        // Return a reference to the non-modifiable "TypeEnum" attribute of
        // this object.

    const bsl::string& setting() const;
        // Return a reference to the non-modifiable "Setting" attribute of this
        // object.

    const bsl::string& settingTooltip() const;
        // Return a reference to the non-modifiable "SettingTooltip" attribute
        // of this object.

    const bsl::string& value() const;
        // Return a reference to the non-modifiable "Value" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const OverrideSummary& lhs, const OverrideSummary& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const OverrideSummary& lhs, const OverrideSummary& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const OverrideSummary& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::OverrideSummary)

namespace s_breguisvc {

                            // ===================                             
                            // class PrivilegeList                             
                            // ===================                             

class PrivilegeList {

    // INSTANCE DATA
    bsl::vector<UserData>  d_userDataList;
    int                    d_registryId;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_REGISTRY_ID    = 0
      , ATTRIBUTE_ID_USER_DATA_LIST = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_REGISTRY_ID    = 0
      , ATTRIBUTE_INDEX_USER_DATA_LIST = 1
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
    explicit PrivilegeList(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'PrivilegeList' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    PrivilegeList(const PrivilegeList& original,
                  bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'PrivilegeList' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~PrivilegeList();
        // Destroy this object.

    // MANIPULATORS
    PrivilegeList& operator=(const PrivilegeList& rhs);
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

    int& registryId();
        // Return a reference to the modifiable "RegistryId" attribute of this
        // object.

    bsl::vector<UserData>& userDataList();
        // Return a reference to the modifiable "UserDataList" attribute of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int registryId() const;
        // Return a reference to the non-modifiable "RegistryId" attribute of
        // this object.

    const bsl::vector<UserData>& userDataList() const;
        // Return a reference to the non-modifiable "UserDataList" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const PrivilegeList& lhs, const PrivilegeList& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const PrivilegeList& lhs, const PrivilegeList& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const PrivilegeList& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::PrivilegeList)

namespace s_breguisvc {

                               // ==============                               
                               // class TodoList                               
                               // ==============                               

class TodoList {

    // INSTANCE DATA
    bsl::vector<TodoListItem>  d_list;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_LIST = 0
    };

    enum {
        NUM_ATTRIBUTES = 1
    };

    enum {
        ATTRIBUTE_INDEX_LIST = 0
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
    explicit TodoList(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'TodoList' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    TodoList(const TodoList& original,
             bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'TodoList' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~TodoList();
        // Destroy this object.

    // MANIPULATORS
    TodoList& operator=(const TodoList& rhs);
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

    bsl::vector<TodoListItem>& list();
        // Return a reference to the modifiable "List" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::vector<TodoListItem>& list() const;
        // Return a reference to the non-modifiable "List" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const TodoList& lhs, const TodoList& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const TodoList& lhs, const TodoList& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const TodoList& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::TodoList)

namespace s_breguisvc {

                            // ====================                            
                            // class VersionHistory                            
                            // ====================                            

class VersionHistory {

    // INSTANCE DATA
    bsl::vector<VersionTsp>  d_versionHistory;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_VERSION_HISTORY = 0
    };

    enum {
        NUM_ATTRIBUTES = 1
    };

    enum {
        ATTRIBUTE_INDEX_VERSION_HISTORY = 0
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
    explicit VersionHistory(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'VersionHistory' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    VersionHistory(const VersionHistory& original,
                   bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'VersionHistory' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~VersionHistory();
        // Destroy this object.

    // MANIPULATORS
    VersionHistory& operator=(const VersionHistory& rhs);
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

    bsl::vector<VersionTsp>& versionHistory();
        // Return a reference to the modifiable "VersionHistory" attribute of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::vector<VersionTsp>& versionHistory() const;
        // Return a reference to the non-modifiable "VersionHistory" attribute
        // of this object.
};

// FREE OPERATORS
inline
bool operator==(const VersionHistory& lhs, const VersionHistory& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const VersionHistory& lhs, const VersionHistory& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const VersionHistory& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::VersionHistory)

namespace s_breguisvc {

                            // ===================                             
                            // class EntryContacts                             
                            // ===================                             

class EntryContacts {

    // INSTANCE DATA
    bsls::Types::Int64  d_primaryUuid;
    bsls::Types::Int64  d_backupUuid;
    bsls::Types::Int64  d_operationalUuid;
    bsls::Types::Int64  d_drqsGroup;
    AuditRecord         d_auditRecord;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_PRIMARY_UUID     = 0
      , ATTRIBUTE_ID_BACKUP_UUID      = 1
      , ATTRIBUTE_ID_OPERATIONAL_UUID = 2
      , ATTRIBUTE_ID_DRQS_GROUP       = 3
      , ATTRIBUTE_ID_AUDIT_RECORD     = 4
    };

    enum {
        NUM_ATTRIBUTES = 5
    };

    enum {
        ATTRIBUTE_INDEX_PRIMARY_UUID     = 0
      , ATTRIBUTE_INDEX_BACKUP_UUID      = 1
      , ATTRIBUTE_INDEX_OPERATIONAL_UUID = 2
      , ATTRIBUTE_INDEX_DRQS_GROUP       = 3
      , ATTRIBUTE_INDEX_AUDIT_RECORD     = 4
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
    explicit EntryContacts(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryContacts' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    EntryContacts(const EntryContacts& original,
                  bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryContacts' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EntryContacts();
        // Destroy this object.

    // MANIPULATORS
    EntryContacts& operator=(const EntryContacts& rhs);
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

    bsls::Types::Int64& primaryUuid();
        // Return a reference to the modifiable "PrimaryUuid" attribute of this
        // object.

    bsls::Types::Int64& backupUuid();
        // Return a reference to the modifiable "BackupUuid" attribute of this
        // object.

    bsls::Types::Int64& operationalUuid();
        // Return a reference to the modifiable "OperationalUuid" attribute of
        // this object.

    bsls::Types::Int64& drqsGroup();
        // Return a reference to the modifiable "DrqsGroup" attribute of this
        // object.

    AuditRecord& auditRecord();
        // Return a reference to the modifiable "AuditRecord" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 primaryUuid() const;
        // Return a reference to the non-modifiable "PrimaryUuid" attribute of
        // this object.

    bsls::Types::Int64 backupUuid() const;
        // Return a reference to the non-modifiable "BackupUuid" attribute of
        // this object.

    bsls::Types::Int64 operationalUuid() const;
        // Return a reference to the non-modifiable "OperationalUuid" attribute
        // of this object.

    bsls::Types::Int64 drqsGroup() const;
        // Return a reference to the non-modifiable "DrqsGroup" attribute of
        // this object.

    const AuditRecord& auditRecord() const;
        // Return a reference to the non-modifiable "AuditRecord" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const EntryContacts& lhs, const EntryContacts& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EntryContacts& lhs, const EntryContacts& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EntryContacts& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EntryContacts)

namespace s_breguisvc {

                           // ======================                           
                           // class EntrySubscribers                           
                           // ======================                           

class EntrySubscribers {

    // INSTANCE DATA
    bsls::Types::Int64     d_registryId;
    bsl::vector<UserData>  d_userDataList;
    AuditRecord            d_auditRecord;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_REGISTRY_ID    = 0
      , ATTRIBUTE_ID_USER_DATA_LIST = 1
      , ATTRIBUTE_ID_AUDIT_RECORD   = 2
    };

    enum {
        NUM_ATTRIBUTES = 3
    };

    enum {
        ATTRIBUTE_INDEX_REGISTRY_ID    = 0
      , ATTRIBUTE_INDEX_USER_DATA_LIST = 1
      , ATTRIBUTE_INDEX_AUDIT_RECORD   = 2
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
    explicit EntrySubscribers(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntrySubscribers' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    EntrySubscribers(const EntrySubscribers& original,
                     bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntrySubscribers' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EntrySubscribers();
        // Destroy this object.

    // MANIPULATORS
    EntrySubscribers& operator=(const EntrySubscribers& rhs);
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

    bsls::Types::Int64& registryId();
        // Return a reference to the modifiable "RegistryId" attribute of this
        // object.

    bsl::vector<UserData>& userDataList();
        // Return a reference to the modifiable "UserDataList" attribute of
        // this object.

    AuditRecord& auditRecord();
        // Return a reference to the modifiable "AuditRecord" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 registryId() const;
        // Return a reference to the non-modifiable "RegistryId" attribute of
        // this object.

    const bsl::vector<UserData>& userDataList() const;
        // Return a reference to the non-modifiable "UserDataList" attribute of
        // this object.

    const AuditRecord& auditRecord() const;
        // Return a reference to the non-modifiable "AuditRecord" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const EntrySubscribers& lhs, const EntrySubscribers& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EntrySubscribers& lhs, const EntrySubscribers& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EntrySubscribers& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EntrySubscribers)

namespace s_breguisvc {

                              // ================                              
                              // class EntryValue                              
                              // ================                              

class EntryValue {

    // INSTANCE DATA
    bsls::Types::Int64              d_entryId;
    bsls::Types::Int64              d_version;
    bsl::vector<EntryOverride>      d_entryOverrides;
    bdeut_NullableValue<EntryData>  d_entryData;
    AuditRecord                     d_auditRecord;
    bool                            d_isObsolete;
    bool                            d_isSharedMemory;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_ENTRY_ID         = 0
      , ATTRIBUTE_ID_VERSION          = 1
      , ATTRIBUTE_ID_ENTRY_DATA       = 2
      , ATTRIBUTE_ID_ENTRY_OVERRIDES  = 3
      , ATTRIBUTE_ID_IS_OBSOLETE      = 4
      , ATTRIBUTE_ID_IS_SHARED_MEMORY = 5
      , ATTRIBUTE_ID_AUDIT_RECORD     = 6
    };

    enum {
        NUM_ATTRIBUTES = 7
    };

    enum {
        ATTRIBUTE_INDEX_ENTRY_ID         = 0
      , ATTRIBUTE_INDEX_VERSION          = 1
      , ATTRIBUTE_INDEX_ENTRY_DATA       = 2
      , ATTRIBUTE_INDEX_ENTRY_OVERRIDES  = 3
      , ATTRIBUTE_INDEX_IS_OBSOLETE      = 4
      , ATTRIBUTE_INDEX_IS_SHARED_MEMORY = 5
      , ATTRIBUTE_INDEX_AUDIT_RECORD     = 6
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
    explicit EntryValue(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryValue' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    EntryValue(const EntryValue& original,
               bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'EntryValue' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~EntryValue();
        // Destroy this object.

    // MANIPULATORS
    EntryValue& operator=(const EntryValue& rhs);
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

    bsls::Types::Int64& entryId();
        // Return a reference to the modifiable "EntryId" attribute of this
        // object.

    bsls::Types::Int64& version();
        // Return a reference to the modifiable "Version" attribute of this
        // object.

    bdeut_NullableValue<EntryData>& entryData();
        // Return a reference to the modifiable "EntryData" attribute of this
        // object.

    bsl::vector<EntryOverride>& entryOverrides();
        // Return a reference to the modifiable "EntryOverrides" attribute of
        // this object.

    bool& isObsolete();
        // Return a reference to the modifiable "IsObsolete" attribute of this
        // object.

    bool& isSharedMemory();
        // Return a reference to the modifiable "IsSharedMemory" attribute of
        // this object.

    AuditRecord& auditRecord();
        // Return a reference to the modifiable "AuditRecord" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 entryId() const;
        // Return a reference to the non-modifiable "EntryId" attribute of this
        // object.

    bsls::Types::Int64 version() const;
        // Return a reference to the non-modifiable "Version" attribute of this
        // object.

    const bdeut_NullableValue<EntryData>& entryData() const;
        // Return a reference to the non-modifiable "EntryData" attribute of
        // this object.

    const bsl::vector<EntryOverride>& entryOverrides() const;
        // Return a reference to the non-modifiable "EntryOverrides" attribute
        // of this object.

    bool isObsolete() const;
        // Return a reference to the non-modifiable "IsObsolete" attribute of
        // this object.

    bool isSharedMemory() const;
        // Return a reference to the non-modifiable "IsSharedMemory" attribute
        // of this object.

    const AuditRecord& auditRecord() const;
        // Return a reference to the non-modifiable "AuditRecord" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const EntryValue& lhs, const EntryValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const EntryValue& lhs, const EntryValue& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const EntryValue& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::EntryValue)

namespace s_breguisvc {

                             // =================                              
                             // class NodeDetails                              
                             // =================                              

class NodeDetails {

    // INSTANCE DATA
    bsl::vector<OverrideSummary>  d_prodOverrides;
    bsl::vector<OverrideSummary>  d_testOverrides;
    bsl::string                   d_name;
    bsl::string                   d_description;
    bsl::string                   d_accessor;
    bsl::string                   d_updateTsp;
    bsl::string                   d_valueTypeString;
    bsl::string                   d_isInMemoryString;
    bsl::string                   d_expiryTsp;
    bsl::string                   d_isPermanentString;
    bsl::string                   d_keywords;
    bsl::string                   d_prodValue;
    bsl::string                   d_testValue;
    int                           d_id;
    int                           d_type;
    int                           d_valueType;
    int                           d_prodVersion;
    ValueType::Value              d_valueTypeEnum;
    bool                          d_isInMemory;
    bool                          d_hasExpired;
    bool                          d_isPermanent;
    bool                          d_inProd;
    bool                          d_inTest;
    bool                          d_canAddNode;
    bool                          d_canAddEntry;
    bool                          d_prodObsoleteTraceEnabled;
    bool                          d_devObsoleteTraceEnabled;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_NAME                        = 0
      , ATTRIBUTE_ID_ID                          = 1
      , ATTRIBUTE_ID_TYPE                        = 2
      , ATTRIBUTE_ID_DESCRIPTION                 = 3
      , ATTRIBUTE_ID_ACCESSOR                    = 4
      , ATTRIBUTE_ID_UPDATE_TSP                  = 5
      , ATTRIBUTE_ID_VALUE_TYPE                  = 6
      , ATTRIBUTE_ID_VALUE_TYPE_STRING           = 7
      , ATTRIBUTE_ID_VALUE_TYPE_ENUM             = 8
      , ATTRIBUTE_ID_IS_IN_MEMORY                = 9
      , ATTRIBUTE_ID_IS_IN_MEMORY_STRING         = 10
      , ATTRIBUTE_ID_HAS_EXPIRED                 = 11
      , ATTRIBUTE_ID_EXPIRY_TSP                  = 12
      , ATTRIBUTE_ID_IS_PERMANENT                = 13
      , ATTRIBUTE_ID_IS_PERMANENT_STRING         = 14
      , ATTRIBUTE_ID_KEYWORDS                    = 15
      , ATTRIBUTE_ID_IN_PROD                     = 16
      , ATTRIBUTE_ID_PROD_VALUE                  = 17
      , ATTRIBUTE_ID_PROD_VERSION                = 18
      , ATTRIBUTE_ID_PROD_OVERRIDES              = 19
      , ATTRIBUTE_ID_IN_TEST                     = 20
      , ATTRIBUTE_ID_TEST_VALUE                  = 21
      , ATTRIBUTE_ID_TEST_OVERRIDES              = 22
      , ATTRIBUTE_ID_CAN_ADD_NODE                = 23
      , ATTRIBUTE_ID_CAN_ADD_ENTRY               = 24
      , ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED = 25
      , ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED  = 26
    };

    enum {
        NUM_ATTRIBUTES = 27
    };

    enum {
        ATTRIBUTE_INDEX_NAME                        = 0
      , ATTRIBUTE_INDEX_ID                          = 1
      , ATTRIBUTE_INDEX_TYPE                        = 2
      , ATTRIBUTE_INDEX_DESCRIPTION                 = 3
      , ATTRIBUTE_INDEX_ACCESSOR                    = 4
      , ATTRIBUTE_INDEX_UPDATE_TSP                  = 5
      , ATTRIBUTE_INDEX_VALUE_TYPE                  = 6
      , ATTRIBUTE_INDEX_VALUE_TYPE_STRING           = 7
      , ATTRIBUTE_INDEX_VALUE_TYPE_ENUM             = 8
      , ATTRIBUTE_INDEX_IS_IN_MEMORY                = 9
      , ATTRIBUTE_INDEX_IS_IN_MEMORY_STRING         = 10
      , ATTRIBUTE_INDEX_HAS_EXPIRED                 = 11
      , ATTRIBUTE_INDEX_EXPIRY_TSP                  = 12
      , ATTRIBUTE_INDEX_IS_PERMANENT                = 13
      , ATTRIBUTE_INDEX_IS_PERMANENT_STRING         = 14
      , ATTRIBUTE_INDEX_KEYWORDS                    = 15
      , ATTRIBUTE_INDEX_IN_PROD                     = 16
      , ATTRIBUTE_INDEX_PROD_VALUE                  = 17
      , ATTRIBUTE_INDEX_PROD_VERSION                = 18
      , ATTRIBUTE_INDEX_PROD_OVERRIDES              = 19
      , ATTRIBUTE_INDEX_IN_TEST                     = 20
      , ATTRIBUTE_INDEX_TEST_VALUE                  = 21
      , ATTRIBUTE_INDEX_TEST_OVERRIDES              = 22
      , ATTRIBUTE_INDEX_CAN_ADD_NODE                = 23
      , ATTRIBUTE_INDEX_CAN_ADD_ENTRY               = 24
      , ATTRIBUTE_INDEX_PROD_OBSOLETE_TRACE_ENABLED = 25
      , ATTRIBUTE_INDEX_DEV_OBSOLETE_TRACE_ENABLED  = 26
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
    explicit NodeDetails(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'NodeDetails' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    NodeDetails(const NodeDetails& original,
                bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'NodeDetails' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~NodeDetails();
        // Destroy this object.

    // MANIPULATORS
    NodeDetails& operator=(const NodeDetails& rhs);
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

    bsl::string& name();
        // Return a reference to the modifiable "Name" attribute of this
        // object.

    int& id();
        // Return a reference to the modifiable "Id" attribute of this object.

    int& type();
        // Return a reference to the modifiable "Type" attribute of this
        // object.

    bsl::string& description();
        // Return a reference to the modifiable "Description" attribute of this
        // object.

    bsl::string& accessor();
        // Return a reference to the modifiable "Accessor" attribute of this
        // object.

    bsl::string& updateTsp();
        // Return a reference to the modifiable "UpdateTsp" attribute of this
        // object.

    int& valueType();
        // Return a reference to the modifiable "ValueType" attribute of this
        // object.

    bsl::string& valueTypeString();
        // Return a reference to the modifiable "ValueTypeString" attribute of
        // this object.

    ValueType::Value& valueTypeEnum();
        // Return a reference to the modifiable "ValueTypeEnum" attribute of
        // this object.

    bool& isInMemory();
        // Return a reference to the modifiable "IsInMemory" attribute of this
        // object.

    bsl::string& isInMemoryString();
        // Return a reference to the modifiable "IsInMemoryString" attribute of
        // this object.

    bool& hasExpired();
        // Return a reference to the modifiable "HasExpired" attribute of this
        // object.

    bsl::string& expiryTsp();
        // Return a reference to the modifiable "ExpiryTsp" attribute of this
        // object.

    bool& isPermanent();
        // Return a reference to the modifiable "IsPermanent" attribute of this
        // object.

    bsl::string& isPermanentString();
        // Return a reference to the modifiable "IsPermanentString" attribute
        // of this object.

    bsl::string& keywords();
        // Return a reference to the modifiable "Keywords" attribute of this
        // object.

    bool& inProd();
        // Return a reference to the modifiable "InProd" attribute of this
        // object.

    bsl::string& prodValue();
        // Return a reference to the modifiable "ProdValue" attribute of this
        // object.

    int& prodVersion();
        // Return a reference to the modifiable "ProdVersion" attribute of this
        // object.

    bsl::vector<OverrideSummary>& prodOverrides();
        // Return a reference to the modifiable "ProdOverrides" attribute of
        // this object.

    bool& inTest();
        // Return a reference to the modifiable "InTest" attribute of this
        // object.

    bsl::string& testValue();
        // Return a reference to the modifiable "TestValue" attribute of this
        // object.

    bsl::vector<OverrideSummary>& testOverrides();
        // Return a reference to the modifiable "TestOverrides" attribute of
        // this object.

    bool& canAddNode();
        // Return a reference to the modifiable "CanAddNode" attribute of this
        // object.

    bool& canAddEntry();
        // Return a reference to the modifiable "CanAddEntry" attribute of this
        // object.

    bool& prodObsoleteTraceEnabled();
        // Return a reference to the modifiable "ProdObsoleteTraceEnabled"
        // attribute of this object.

    bool& devObsoleteTraceEnabled();
        // Return a reference to the modifiable "DevObsoleteTraceEnabled"
        // attribute of this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const bsl::string& name() const;
        // Return a reference to the non-modifiable "Name" attribute of this
        // object.

    int id() const;
        // Return a reference to the non-modifiable "Id" attribute of this
        // object.

    int type() const;
        // Return a reference to the non-modifiable "Type" attribute of this
        // object.

    const bsl::string& description() const;
        // Return a reference to the non-modifiable "Description" attribute of
        // this object.

    const bsl::string& accessor() const;
        // Return a reference to the non-modifiable "Accessor" attribute of
        // this object.

    const bsl::string& updateTsp() const;
        // Return a reference to the non-modifiable "UpdateTsp" attribute of
        // this object.

    int valueType() const;
        // Return a reference to the non-modifiable "ValueType" attribute of
        // this object.

    const bsl::string& valueTypeString() const;
        // Return a reference to the non-modifiable "ValueTypeString" attribute
        // of this object.

    ValueType::Value valueTypeEnum() const;
        // Return a reference to the non-modifiable "ValueTypeEnum" attribute
        // of this object.

    bool isInMemory() const;
        // Return a reference to the non-modifiable "IsInMemory" attribute of
        // this object.

    const bsl::string& isInMemoryString() const;
        // Return a reference to the non-modifiable "IsInMemoryString"
        // attribute of this object.

    bool hasExpired() const;
        // Return a reference to the non-modifiable "HasExpired" attribute of
        // this object.

    const bsl::string& expiryTsp() const;
        // Return a reference to the non-modifiable "ExpiryTsp" attribute of
        // this object.

    bool isPermanent() const;
        // Return a reference to the non-modifiable "IsPermanent" attribute of
        // this object.

    const bsl::string& isPermanentString() const;
        // Return a reference to the non-modifiable "IsPermanentString"
        // attribute of this object.

    const bsl::string& keywords() const;
        // Return a reference to the non-modifiable "Keywords" attribute of
        // this object.

    bool inProd() const;
        // Return a reference to the non-modifiable "InProd" attribute of this
        // object.

    const bsl::string& prodValue() const;
        // Return a reference to the non-modifiable "ProdValue" attribute of
        // this object.

    int prodVersion() const;
        // Return a reference to the non-modifiable "ProdVersion" attribute of
        // this object.

    const bsl::vector<OverrideSummary>& prodOverrides() const;
        // Return a reference to the non-modifiable "ProdOverrides" attribute
        // of this object.

    bool inTest() const;
        // Return a reference to the non-modifiable "InTest" attribute of this
        // object.

    const bsl::string& testValue() const;
        // Return a reference to the non-modifiable "TestValue" attribute of
        // this object.

    const bsl::vector<OverrideSummary>& testOverrides() const;
        // Return a reference to the non-modifiable "TestOverrides" attribute
        // of this object.

    bool canAddNode() const;
        // Return a reference to the non-modifiable "CanAddNode" attribute of
        // this object.

    bool canAddEntry() const;
        // Return a reference to the non-modifiable "CanAddEntry" attribute of
        // this object.

    bool prodObsoleteTraceEnabled() const;
        // Return a reference to the non-modifiable "ProdObsoleteTraceEnabled"
        // attribute of this object.

    bool devObsoleteTraceEnabled() const;
        // Return a reference to the non-modifiable "DevObsoleteTraceEnabled"
        // attribute of this object.
};

// FREE OPERATORS
inline
bool operator==(const NodeDetails& lhs, const NodeDetails& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const NodeDetails& lhs, const NodeDetails& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const NodeDetails& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::NodeDetails)

namespace s_breguisvc {

                               // ==============                               
                               // class NodeInfo                               
                               // ==============                               

class NodeInfo {

    // INSTANCE DATA
    bsls::Types::Int64        d_nodeId;
    bsls::Types::Int64        d_parentId;
    bsl::vector<bsl::string>  d_keywords;
    bsl::string               d_name;
    bsl::string               d_description;
    EntryContacts             d_contacts;
    AuditRecord               d_auditRecord;
    bool                      d_isLeaf;
    bool                      d_isDeleted;
    bool                      d_isToDelete;
    NodePrivilege             d_privilege;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_NODE_ID      = 0
      , ATTRIBUTE_ID_PARENT_ID    = 1
      , ATTRIBUTE_ID_NAME         = 2
      , ATTRIBUTE_ID_DESCRIPTION  = 3
      , ATTRIBUTE_ID_IS_LEAF      = 4
      , ATTRIBUTE_ID_IS_DELETED   = 5
      , ATTRIBUTE_ID_AUDIT_RECORD = 6
      , ATTRIBUTE_ID_KEYWORDS     = 7
      , ATTRIBUTE_ID_PRIVILEGE    = 8
      , ATTRIBUTE_ID_CONTACTS     = 9
      , ATTRIBUTE_ID_IS_TO_DELETE = 10
    };

    enum {
        NUM_ATTRIBUTES = 11
    };

    enum {
        ATTRIBUTE_INDEX_NODE_ID      = 0
      , ATTRIBUTE_INDEX_PARENT_ID    = 1
      , ATTRIBUTE_INDEX_NAME         = 2
      , ATTRIBUTE_INDEX_DESCRIPTION  = 3
      , ATTRIBUTE_INDEX_IS_LEAF      = 4
      , ATTRIBUTE_INDEX_IS_DELETED   = 5
      , ATTRIBUTE_INDEX_AUDIT_RECORD = 6
      , ATTRIBUTE_INDEX_KEYWORDS     = 7
      , ATTRIBUTE_INDEX_PRIVILEGE    = 8
      , ATTRIBUTE_INDEX_CONTACTS     = 9
      , ATTRIBUTE_INDEX_IS_TO_DELETE = 10
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
    explicit NodeInfo(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'NodeInfo' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    NodeInfo(const NodeInfo& original,
             bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'NodeInfo' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~NodeInfo();
        // Destroy this object.

    // MANIPULATORS
    NodeInfo& operator=(const NodeInfo& rhs);
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

    bsls::Types::Int64& nodeId();
        // Return a reference to the modifiable "NodeId" attribute of this
        // object.

    bsls::Types::Int64& parentId();
        // Return a reference to the modifiable "ParentId" attribute of this
        // object.

    bsl::string& name();
        // Return a reference to the modifiable "Name" attribute of this
        // object.

    bsl::string& description();
        // Return a reference to the modifiable "Description" attribute of this
        // object.

    bool& isLeaf();
        // Return a reference to the modifiable "IsLeaf" attribute of this
        // object.

    bool& isDeleted();
        // Return a reference to the modifiable "IsDeleted" attribute of this
        // object.

    AuditRecord& auditRecord();
        // Return a reference to the modifiable "AuditRecord" attribute of this
        // object.

    bsl::vector<bsl::string>& keywords();
        // Return a reference to the modifiable "Keywords" attribute of this
        // object.

    NodePrivilege& privilege();
        // Return a reference to the modifiable "Privilege" attribute of this
        // object.

    EntryContacts& contacts();
        // Return a reference to the modifiable "Contacts" attribute of this
        // object.

    bool& isToDelete();
        // Return a reference to the modifiable "IsToDelete" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    bsls::Types::Int64 nodeId() const;
        // Return a reference to the non-modifiable "NodeId" attribute of this
        // object.

    bsls::Types::Int64 parentId() const;
        // Return a reference to the non-modifiable "ParentId" attribute of
        // this object.

    const bsl::string& name() const;
        // Return a reference to the non-modifiable "Name" attribute of this
        // object.

    const bsl::string& description() const;
        // Return a reference to the non-modifiable "Description" attribute of
        // this object.

    bool isLeaf() const;
        // Return a reference to the non-modifiable "IsLeaf" attribute of this
        // object.

    bool isDeleted() const;
        // Return a reference to the non-modifiable "IsDeleted" attribute of
        // this object.

    const AuditRecord& auditRecord() const;
        // Return a reference to the non-modifiable "AuditRecord" attribute of
        // this object.

    const bsl::vector<bsl::string>& keywords() const;
        // Return a reference to the non-modifiable "Keywords" attribute of
        // this object.

    const NodePrivilege& privilege() const;
        // Return a reference to the non-modifiable "Privilege" attribute of
        // this object.

    const EntryContacts& contacts() const;
        // Return a reference to the non-modifiable "Contacts" attribute of
        // this object.

    bool isToDelete() const;
        // Return a reference to the non-modifiable "IsToDelete" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const NodeInfo& lhs, const NodeInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const NodeInfo& lhs, const NodeInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const NodeInfo& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::NodeInfo)

namespace s_breguisvc {

                         // ==========================                         
                         // class UpdateContactRequest                         
                         // ==========================                         

class UpdateContactRequest {

    // INSTANCE DATA
    EntryContacts  d_contacts;
    AuditRecord    d_auditRecord;
    int            d_registryId;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_REGISTRY_ID  = 0
      , ATTRIBUTE_ID_CONTACTS     = 1
      , ATTRIBUTE_ID_AUDIT_RECORD = 2
    };

    enum {
        NUM_ATTRIBUTES = 3
    };

    enum {
        ATTRIBUTE_INDEX_REGISTRY_ID  = 0
      , ATTRIBUTE_INDEX_CONTACTS     = 1
      , ATTRIBUTE_INDEX_AUDIT_RECORD = 2
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
    explicit UpdateContactRequest(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'UpdateContactRequest' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    UpdateContactRequest(const UpdateContactRequest& original,
                         bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'UpdateContactRequest' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~UpdateContactRequest();
        // Destroy this object.

    // MANIPULATORS
    UpdateContactRequest& operator=(const UpdateContactRequest& rhs);
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

    int& registryId();
        // Return a reference to the modifiable "RegistryId" attribute of this
        // object.

    EntryContacts& contacts();
        // Return a reference to the modifiable "Contacts" attribute of this
        // object.

    AuditRecord& auditRecord();
        // Return a reference to the modifiable "AuditRecord" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int registryId() const;
        // Return a reference to the non-modifiable "RegistryId" attribute of
        // this object.

    const EntryContacts& contacts() const;
        // Return a reference to the non-modifiable "Contacts" attribute of
        // this object.

    const AuditRecord& auditRecord() const;
        // Return a reference to the non-modifiable "AuditRecord" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const UpdateContactRequest& lhs, const UpdateContactRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const UpdateContactRequest& lhs, const UpdateContactRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const UpdateContactRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::UpdateContactRequest)

namespace s_breguisvc {

                             // ==================                             
                             // class RegistryInfo                             
                             // ==================                             

class RegistryInfo {

    // INSTANCE DATA
    bdeut_NullableValue<EntryInfo>  d_entry;
    NodeInfo                        d_node;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_NODE  = 0
      , ATTRIBUTE_ID_ENTRY = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_NODE  = 0
      , ATTRIBUTE_INDEX_ENTRY = 1
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
    explicit RegistryInfo(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'RegistryInfo' having the default value. 
        // Use the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    RegistryInfo(const RegistryInfo& original,
                 bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'RegistryInfo' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~RegistryInfo();
        // Destroy this object.

    // MANIPULATORS
    RegistryInfo& operator=(const RegistryInfo& rhs);
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

    NodeInfo& node();
        // Return a reference to the modifiable "Node" attribute of this
        // object.

    bdeut_NullableValue<EntryInfo>& entry();
        // Return a reference to the modifiable "Entry" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const NodeInfo& node() const;
        // Return a reference to the non-modifiable "Node" attribute of this
        // object.

    const bdeut_NullableValue<EntryInfo>& entry() const;
        // Return a reference to the non-modifiable "Entry" attribute of this
        // object.
};

// FREE OPERATORS
inline
bool operator==(const RegistryInfo& lhs, const RegistryInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const RegistryInfo& lhs, const RegistryInfo& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const RegistryInfo& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::RegistryInfo)

namespace s_breguisvc {

                          // =======================                           
                          // class BregChangeRequest                           
                          // =======================                           

class BregChangeRequest {

    // INSTANCE DATA
    RegistryInfo  d_registry;
    EntryValue    d_entryValue;
    int           d_approverUuid;
    int           d_prqsPriority;
    bool          d_covgRequired;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_APPROVER_UUID = 0
      , ATTRIBUTE_ID_REGISTRY      = 1
      , ATTRIBUTE_ID_ENTRY_VALUE   = 2
      , ATTRIBUTE_ID_PRQS_PRIORITY = 3
      , ATTRIBUTE_ID_COVG_REQUIRED = 4
    };

    enum {
        NUM_ATTRIBUTES = 5
    };

    enum {
        ATTRIBUTE_INDEX_APPROVER_UUID = 0
      , ATTRIBUTE_INDEX_REGISTRY      = 1
      , ATTRIBUTE_INDEX_ENTRY_VALUE   = 2
      , ATTRIBUTE_INDEX_PRQS_PRIORITY = 3
      , ATTRIBUTE_INDEX_COVG_REQUIRED = 4
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
    explicit BregChangeRequest(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'BregChangeRequest' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    BregChangeRequest(const BregChangeRequest& original,
                      bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'BregChangeRequest' having the value of the
        // specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~BregChangeRequest();
        // Destroy this object.

    // MANIPULATORS
    BregChangeRequest& operator=(const BregChangeRequest& rhs);
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

    int& approverUuid();
        // Return a reference to the modifiable "ApproverUuid" attribute of
        // this object.

    RegistryInfo& registry();
        // Return a reference to the modifiable "Registry" attribute of this
        // object.

    EntryValue& entryValue();
        // Return a reference to the modifiable "EntryValue" attribute of this
        // object.

    int& prqsPriority();
        // Return a reference to the modifiable "PrqsPriority" attribute of
        // this object.

    bool& covgRequired();
        // Return a reference to the modifiable "CovgRequired" attribute of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    int approverUuid() const;
        // Return a reference to the non-modifiable "ApproverUuid" attribute of
        // this object.

    const RegistryInfo& registry() const;
        // Return a reference to the non-modifiable "Registry" attribute of
        // this object.

    const EntryValue& entryValue() const;
        // Return a reference to the non-modifiable "EntryValue" attribute of
        // this object.

    int prqsPriority() const;
        // Return a reference to the non-modifiable "PrqsPriority" attribute of
        // this object.

    bool covgRequired() const;
        // Return a reference to the non-modifiable "CovgRequired" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const BregChangeRequest& lhs, const BregChangeRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const BregChangeRequest& lhs, const BregChangeRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const BregChangeRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::BregChangeRequest)

namespace s_breguisvc {

                         // =========================                          
                         // class GenerateCodeRequest                          
                         // =========================                          

class GenerateCodeRequest {

    // INSTANCE DATA
    RegistryInfo  d_registry;
    EntryValue    d_entryValue;

  public:
    // TYPES
    enum {
        ATTRIBUTE_ID_REGISTRY    = 0
      , ATTRIBUTE_ID_ENTRY_VALUE = 1
    };

    enum {
        NUM_ATTRIBUTES = 2
    };

    enum {
        ATTRIBUTE_INDEX_REGISTRY    = 0
      , ATTRIBUTE_INDEX_ENTRY_VALUE = 1
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
    explicit GenerateCodeRequest(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'GenerateCodeRequest' having the default
        // value.  Use the optionally specified 'basicAllocator' to supply
        // memory.  If 'basicAllocator' is 0, the currently installed default
        // allocator is used.

    GenerateCodeRequest(const GenerateCodeRequest& original,
                        bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'GenerateCodeRequest' having the value of
        // the specified 'original' object.  Use the optionally specified
        // 'basicAllocator' to supply memory.  If 'basicAllocator' is 0, the
        // currently installed default allocator is used.

    ~GenerateCodeRequest();
        // Destroy this object.

    // MANIPULATORS
    GenerateCodeRequest& operator=(const GenerateCodeRequest& rhs);
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

    RegistryInfo& registry();
        // Return a reference to the modifiable "Registry" attribute of this
        // object.

    EntryValue& entryValue();
        // Return a reference to the modifiable "EntryValue" attribute of this
        // object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const RegistryInfo& registry() const;
        // Return a reference to the non-modifiable "Registry" attribute of
        // this object.

    const EntryValue& entryValue() const;
        // Return a reference to the non-modifiable "EntryValue" attribute of
        // this object.
};

// FREE OPERATORS
inline
bool operator==(const GenerateCodeRequest& lhs, const GenerateCodeRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects have
    // the same value, and 'false' otherwise.  Two attribute objects have the
    // same value if each respective attribute has the same value.

inline
bool operator!=(const GenerateCodeRequest& lhs, const GenerateCodeRequest& rhs);
    // Return 'true' if the specified 'lhs' and 'rhs' attribute objects do not
    // have the same value, and 'false' otherwise.  Two attribute objects do
    // not have the same value if one or more respective attributes differ in
    // values.

inline
bsl::ostream& operator<<(bsl::ostream& stream, const GenerateCodeRequest& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_SEQUENCE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::GenerateCodeRequest)

namespace s_breguisvc {

                               // ==============                               
                               // class Response                               
                               // ==============                               

class Response {

    // INSTANCE DATA
    union {
        bsls::ObjectBuffer< ErrorInfoResponse >       d_errorResponse;
        bsls::ObjectBuffer< bsl::vector<Node> >       d_nodeTree;
        bsls::ObjectBuffer< NodeDetails >             d_nodeDetails;
        bsls::ObjectBuffer< int >                     d_nodeId;
        bsls::ObjectBuffer< bsl::vector<BregValue> >  d_values;
        bsls::ObjectBuffer< NodeInfo >                d_nodeInfo;
        bsls::ObjectBuffer< EntryInfo >               d_entryInfo;
        bsls::ObjectBuffer< RegistryInfo >            d_registryInfo;
        bsls::ObjectBuffer< EntryValue >              d_entryValue;
        bsls::ObjectBuffer< EntrySubscribers >        d_entrySubscribers;
        bsls::ObjectBuffer< bsl::vector<VersionTsp> > d_versionHistory;
        bsls::ObjectBuffer< PrivilegeList >           d_privilegeList;
        bsls::ObjectBuffer< Group >                   d_outGroup;
        bsls::ObjectBuffer< bsl::vector<Group> >      d_deptChain;
        bsls::ObjectBuffer< Group >                   d_drqsGroup;
        bsls::ObjectBuffer< bsl::string >             d_machineGroup;
        bsls::ObjectBuffer< TodoList >                d_todoList;
        bsls::ObjectBuffer< bsl::string >             d_relatedTicketSummary;
        bsls::ObjectBuffer< bsl::string >             d_nodeType;
    };

    int                                               d_selectionId;
    bslma::Allocator                                 *d_allocator_p;

  public:
    // TYPES
    typedef s_breguisvc::SchemaUtil EncoderUtil;
    typedef s_breguisvc::SchemaUtil DecoderUtil;

    enum {
        SELECTION_ID_UNDEFINED              = -1

      , SELECTION_ID_ERROR_RESPONSE         = 0
      , SELECTION_ID_NODE_TREE              = 1
      , SELECTION_ID_NODE_DETAILS           = 2
      , SELECTION_ID_NODE_ID                = 3
      , SELECTION_ID_VALUES                 = 4
      , SELECTION_ID_NODE_INFO              = 5
      , SELECTION_ID_ENTRY_INFO             = 6
      , SELECTION_ID_REGISTRY_INFO          = 7
      , SELECTION_ID_ENTRY_VALUE            = 8
      , SELECTION_ID_ENTRY_SUBSCRIBERS      = 9
      , SELECTION_ID_VERSION_HISTORY        = 10
      , SELECTION_ID_PRIVILEGE_LIST         = 11
      , SELECTION_ID_OUT_GROUP              = 12
      , SELECTION_ID_DEPT_CHAIN             = 13
      , SELECTION_ID_DRQS_GROUP             = 14
      , SELECTION_ID_MACHINE_GROUP          = 15
      , SELECTION_ID_TODO_LIST              = 16
      , SELECTION_ID_RELATED_TICKET_SUMMARY = 17
      , SELECTION_ID_NODE_TYPE              = 18
    };

    enum {
        NUM_SELECTIONS = 19
    };

    enum {
        SELECTION_INDEX_ERROR_RESPONSE         = 0
      , SELECTION_INDEX_NODE_TREE              = 1
      , SELECTION_INDEX_NODE_DETAILS           = 2
      , SELECTION_INDEX_NODE_ID                = 3
      , SELECTION_INDEX_VALUES                 = 4
      , SELECTION_INDEX_NODE_INFO              = 5
      , SELECTION_INDEX_ENTRY_INFO             = 6
      , SELECTION_INDEX_REGISTRY_INFO          = 7
      , SELECTION_INDEX_ENTRY_VALUE            = 8
      , SELECTION_INDEX_ENTRY_SUBSCRIBERS      = 9
      , SELECTION_INDEX_VERSION_HISTORY        = 10
      , SELECTION_INDEX_PRIVILEGE_LIST         = 11
      , SELECTION_INDEX_OUT_GROUP              = 12
      , SELECTION_INDEX_DEPT_CHAIN             = 13
      , SELECTION_INDEX_DRQS_GROUP             = 14
      , SELECTION_INDEX_MACHINE_GROUP          = 15
      , SELECTION_INDEX_TODO_LIST              = 16
      , SELECTION_INDEX_RELATED_TICKET_SUMMARY = 17
      , SELECTION_INDEX_NODE_TYPE              = 18
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

    // TRAITS
    BSLALG_DECLARE_NESTED_TRAITS(Response,
                                 bscalg::TypeTraitHasCodecUtil);

    // CREATORS
    explicit Response(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'Response' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    Response(const Response& original,
            bslma::Allocator *basicAllocator = 0);
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

    ErrorInfoResponse& makeErrorResponse();
    ErrorInfoResponse& makeErrorResponse(const ErrorInfoResponse& value);
        // Set the value of this object to be a "ErrorResponse" value. 
        // Optionally specify the 'value' of the "ErrorResponse".  If 'value'
        // is not specified, the default "ErrorResponse" value is used.

    bsl::vector<Node>& makeNodeTree();
    bsl::vector<Node>& makeNodeTree(const bsl::vector<Node>& value);
        // Set the value of this object to be a "NodeTree" value.  Optionally
        // specify the 'value' of the "NodeTree".  If 'value' is not specified,
        // the default "NodeTree" value is used.

    NodeDetails& makeNodeDetails();
    NodeDetails& makeNodeDetails(const NodeDetails& value);
        // Set the value of this object to be a "NodeDetails" value. 
        // Optionally specify the 'value' of the "NodeDetails".  If 'value' is
        // not specified, the default "NodeDetails" value is used.

    int& makeNodeId();
    int& makeNodeId(int value);
        // Set the value of this object to be a "NodeId" value.  Optionally
        // specify the 'value' of the "NodeId".  If 'value' is not specified,
        // the default "NodeId" value is used.

    bsl::vector<BregValue>& makeValues();
    bsl::vector<BregValue>& makeValues(const bsl::vector<BregValue>& value);
        // Set the value of this object to be a "Values" value.  Optionally
        // specify the 'value' of the "Values".  If 'value' is not specified,
        // the default "Values" value is used.

    NodeInfo& makeNodeInfo();
    NodeInfo& makeNodeInfo(const NodeInfo& value);
        // Set the value of this object to be a "NodeInfo" value.  Optionally
        // specify the 'value' of the "NodeInfo".  If 'value' is not specified,
        // the default "NodeInfo" value is used.

    EntryInfo& makeEntryInfo();
    EntryInfo& makeEntryInfo(const EntryInfo& value);
        // Set the value of this object to be a "EntryInfo" value.  Optionally
        // specify the 'value' of the "EntryInfo".  If 'value' is not
        // specified, the default "EntryInfo" value is used.

    RegistryInfo& makeRegistryInfo();
    RegistryInfo& makeRegistryInfo(const RegistryInfo& value);
        // Set the value of this object to be a "RegistryInfo" value. 
        // Optionally specify the 'value' of the "RegistryInfo".  If 'value' is
        // not specified, the default "RegistryInfo" value is used.

    EntryValue& makeEntryValue();
    EntryValue& makeEntryValue(const EntryValue& value);
        // Set the value of this object to be a "EntryValue" value.  Optionally
        // specify the 'value' of the "EntryValue".  If 'value' is not
        // specified, the default "EntryValue" value is used.

    EntrySubscribers& makeEntrySubscribers();
    EntrySubscribers& makeEntrySubscribers(const EntrySubscribers& value);
        // Set the value of this object to be a "EntrySubscribers" value. 
        // Optionally specify the 'value' of the "EntrySubscribers".  If
        // 'value' is not specified, the default "EntrySubscribers" value is
        // used.

    bsl::vector<VersionTsp>& makeVersionHistory();
    bsl::vector<VersionTsp>& makeVersionHistory(const bsl::vector<VersionTsp>& value);
        // Set the value of this object to be a "VersionHistory" value. 
        // Optionally specify the 'value' of the "VersionHistory".  If 'value'
        // is not specified, the default "VersionHistory" value is used.

    PrivilegeList& makePrivilegeList();
    PrivilegeList& makePrivilegeList(const PrivilegeList& value);
        // Set the value of this object to be a "PrivilegeList" value. 
        // Optionally specify the 'value' of the "PrivilegeList".  If 'value'
        // is not specified, the default "PrivilegeList" value is used.

    Group& makeOutGroup();
    Group& makeOutGroup(const Group& value);
        // Set the value of this object to be a "OutGroup" value.  Optionally
        // specify the 'value' of the "OutGroup".  If 'value' is not specified,
        // the default "OutGroup" value is used.

    bsl::vector<Group>& makeDeptChain();
    bsl::vector<Group>& makeDeptChain(const bsl::vector<Group>& value);
        // Set the value of this object to be a "DeptChain" value.  Optionally
        // specify the 'value' of the "DeptChain".  If 'value' is not
        // specified, the default "DeptChain" value is used.

    Group& makeDrqsGroup();
    Group& makeDrqsGroup(const Group& value);
        // Set the value of this object to be a "DrqsGroup" value.  Optionally
        // specify the 'value' of the "DrqsGroup".  If 'value' is not
        // specified, the default "DrqsGroup" value is used.

    bsl::string& makeMachineGroup();
    bsl::string& makeMachineGroup(const bsl::string& value);
        // Set the value of this object to be a "MachineGroup" value. 
        // Optionally specify the 'value' of the "MachineGroup".  If 'value' is
        // not specified, the default "MachineGroup" value is used.

    TodoList& makeTodoList();
    TodoList& makeTodoList(const TodoList& value);
        // Set the value of this object to be a "TodoList" value.  Optionally
        // specify the 'value' of the "TodoList".  If 'value' is not specified,
        // the default "TodoList" value is used.

    bsl::string& makeRelatedTicketSummary();
    bsl::string& makeRelatedTicketSummary(const bsl::string& value);
        // Set the value of this object to be a "RelatedTicketSummary" value. 
        // Optionally specify the 'value' of the "RelatedTicketSummary".  If
        // 'value' is not specified, the default "RelatedTicketSummary" value
        // is used.

    bsl::string& makeNodeType();
    bsl::string& makeNodeType(const bsl::string& value);
        // Set the value of this object to be a "NodeType" value.  Optionally
        // specify the 'value' of the "NodeType".  If 'value' is not specified,
        // the default "NodeType" value is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    ErrorInfoResponse& errorResponse();
        // Return a reference to the modifiable "ErrorResponse" selection of
        // this object if "ErrorResponse" is the current selection.  The
        // behavior is undefined unless "ErrorResponse" is the selection of
        // this object.

    bsl::vector<Node>& nodeTree();
        // Return a reference to the modifiable "NodeTree" selection of this
        // object if "NodeTree" is the current selection.  The behavior is
        // undefined unless "NodeTree" is the selection of this object.

    NodeDetails& nodeDetails();
        // Return a reference to the modifiable "NodeDetails" selection of this
        // object if "NodeDetails" is the current selection.  The behavior is
        // undefined unless "NodeDetails" is the selection of this object.

    int& nodeId();
        // Return a reference to the modifiable "NodeId" selection of this
        // object if "NodeId" is the current selection.  The behavior is
        // undefined unless "NodeId" is the selection of this object.

    bsl::vector<BregValue>& values();
        // Return a reference to the modifiable "Values" selection of this
        // object if "Values" is the current selection.  The behavior is
        // undefined unless "Values" is the selection of this object.

    NodeInfo& nodeInfo();
        // Return a reference to the modifiable "NodeInfo" selection of this
        // object if "NodeInfo" is the current selection.  The behavior is
        // undefined unless "NodeInfo" is the selection of this object.

    EntryInfo& entryInfo();
        // Return a reference to the modifiable "EntryInfo" selection of this
        // object if "EntryInfo" is the current selection.  The behavior is
        // undefined unless "EntryInfo" is the selection of this object.

    RegistryInfo& registryInfo();
        // Return a reference to the modifiable "RegistryInfo" selection of
        // this object if "RegistryInfo" is the current selection.  The
        // behavior is undefined unless "RegistryInfo" is the selection of this
        // object.

    EntryValue& entryValue();
        // Return a reference to the modifiable "EntryValue" selection of this
        // object if "EntryValue" is the current selection.  The behavior is
        // undefined unless "EntryValue" is the selection of this object.

    EntrySubscribers& entrySubscribers();
        // Return a reference to the modifiable "EntrySubscribers" selection of
        // this object if "EntrySubscribers" is the current selection.  The
        // behavior is undefined unless "EntrySubscribers" is the selection of
        // this object.

    bsl::vector<VersionTsp>& versionHistory();
        // Return a reference to the modifiable "VersionHistory" selection of
        // this object if "VersionHistory" is the current selection.  The
        // behavior is undefined unless "VersionHistory" is the selection of
        // this object.

    PrivilegeList& privilegeList();
        // Return a reference to the modifiable "PrivilegeList" selection of
        // this object if "PrivilegeList" is the current selection.  The
        // behavior is undefined unless "PrivilegeList" is the selection of
        // this object.

    Group& outGroup();
        // Return a reference to the modifiable "OutGroup" selection of this
        // object if "OutGroup" is the current selection.  The behavior is
        // undefined unless "OutGroup" is the selection of this object.

    bsl::vector<Group>& deptChain();
        // Return a reference to the modifiable "DeptChain" selection of this
        // object if "DeptChain" is the current selection.  The behavior is
        // undefined unless "DeptChain" is the selection of this object.

    Group& drqsGroup();
        // Return a reference to the modifiable "DrqsGroup" selection of this
        // object if "DrqsGroup" is the current selection.  The behavior is
        // undefined unless "DrqsGroup" is the selection of this object.

    bsl::string& machineGroup();
        // Return a reference to the modifiable "MachineGroup" selection of
        // this object if "MachineGroup" is the current selection.  The
        // behavior is undefined unless "MachineGroup" is the selection of this
        // object.

    TodoList& todoList();
        // Return a reference to the modifiable "TodoList" selection of this
        // object if "TodoList" is the current selection.  The behavior is
        // undefined unless "TodoList" is the selection of this object.

    bsl::string& relatedTicketSummary();
        // Return a reference to the modifiable "RelatedTicketSummary"
        // selection of this object if "RelatedTicketSummary" is the current
        // selection.  The behavior is undefined unless "RelatedTicketSummary"
        // is the selection of this object.

    bsl::string& nodeType();
        // Return a reference to the modifiable "NodeType" selection of this
        // object if "NodeType" is the current selection.  The behavior is
        // undefined unless "NodeType" is the selection of this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const ErrorInfoResponse& errorResponse() const;
        // Return a reference to the non-modifiable "ErrorResponse" selection
        // of this object if "ErrorResponse" is the current selection.  The
        // behavior is undefined unless "ErrorResponse" is the selection of
        // this object.

    const bsl::vector<Node>& nodeTree() const;
        // Return a reference to the non-modifiable "NodeTree" selection of
        // this object if "NodeTree" is the current selection.  The behavior is
        // undefined unless "NodeTree" is the selection of this object.

    const NodeDetails& nodeDetails() const;
        // Return a reference to the non-modifiable "NodeDetails" selection of
        // this object if "NodeDetails" is the current selection.  The behavior
        // is undefined unless "NodeDetails" is the selection of this object.

    const int& nodeId() const;
        // Return a reference to the non-modifiable "NodeId" selection of this
        // object if "NodeId" is the current selection.  The behavior is
        // undefined unless "NodeId" is the selection of this object.

    const bsl::vector<BregValue>& values() const;
        // Return a reference to the non-modifiable "Values" selection of this
        // object if "Values" is the current selection.  The behavior is
        // undefined unless "Values" is the selection of this object.

    const NodeInfo& nodeInfo() const;
        // Return a reference to the non-modifiable "NodeInfo" selection of
        // this object if "NodeInfo" is the current selection.  The behavior is
        // undefined unless "NodeInfo" is the selection of this object.

    const EntryInfo& entryInfo() const;
        // Return a reference to the non-modifiable "EntryInfo" selection of
        // this object if "EntryInfo" is the current selection.  The behavior
        // is undefined unless "EntryInfo" is the selection of this object.

    const RegistryInfo& registryInfo() const;
        // Return a reference to the non-modifiable "RegistryInfo" selection of
        // this object if "RegistryInfo" is the current selection.  The
        // behavior is undefined unless "RegistryInfo" is the selection of this
        // object.

    const EntryValue& entryValue() const;
        // Return a reference to the non-modifiable "EntryValue" selection of
        // this object if "EntryValue" is the current selection.  The behavior
        // is undefined unless "EntryValue" is the selection of this object.

    const EntrySubscribers& entrySubscribers() const;
        // Return a reference to the non-modifiable "EntrySubscribers"
        // selection of this object if "EntrySubscribers" is the current
        // selection.  The behavior is undefined unless "EntrySubscribers" is
        // the selection of this object.

    const bsl::vector<VersionTsp>& versionHistory() const;
        // Return a reference to the non-modifiable "VersionHistory" selection
        // of this object if "VersionHistory" is the current selection.  The
        // behavior is undefined unless "VersionHistory" is the selection of
        // this object.

    const PrivilegeList& privilegeList() const;
        // Return a reference to the non-modifiable "PrivilegeList" selection
        // of this object if "PrivilegeList" is the current selection.  The
        // behavior is undefined unless "PrivilegeList" is the selection of
        // this object.

    const Group& outGroup() const;
        // Return a reference to the non-modifiable "OutGroup" selection of
        // this object if "OutGroup" is the current selection.  The behavior is
        // undefined unless "OutGroup" is the selection of this object.

    const bsl::vector<Group>& deptChain() const;
        // Return a reference to the non-modifiable "DeptChain" selection of
        // this object if "DeptChain" is the current selection.  The behavior
        // is undefined unless "DeptChain" is the selection of this object.

    const Group& drqsGroup() const;
        // Return a reference to the non-modifiable "DrqsGroup" selection of
        // this object if "DrqsGroup" is the current selection.  The behavior
        // is undefined unless "DrqsGroup" is the selection of this object.

    const bsl::string& machineGroup() const;
        // Return a reference to the non-modifiable "MachineGroup" selection of
        // this object if "MachineGroup" is the current selection.  The
        // behavior is undefined unless "MachineGroup" is the selection of this
        // object.

    const TodoList& todoList() const;
        // Return a reference to the non-modifiable "TodoList" selection of
        // this object if "TodoList" is the current selection.  The behavior is
        // undefined unless "TodoList" is the selection of this object.

    const bsl::string& relatedTicketSummary() const;
        // Return a reference to the non-modifiable "RelatedTicketSummary"
        // selection of this object if "RelatedTicketSummary" is the current
        // selection.  The behavior is undefined unless "RelatedTicketSummary"
        // is the selection of this object.

    const bsl::string& nodeType() const;
        // Return a reference to the non-modifiable "NodeType" selection of
        // this object if "NodeType" is the current selection.  The behavior is
        // undefined unless "NodeType" is the selection of this object.

    bool isErrorResponseValue() const;
        // Return 'true' if the value of this object is a "ErrorResponse"
        // value, and return 'false' otherwise.

    bool isNodeTreeValue() const;
        // Return 'true' if the value of this object is a "NodeTree" value, and
        // return 'false' otherwise.

    bool isNodeDetailsValue() const;
        // Return 'true' if the value of this object is a "NodeDetails" value,
        // and return 'false' otherwise.

    bool isNodeIdValue() const;
        // Return 'true' if the value of this object is a "NodeId" value, and
        // return 'false' otherwise.

    bool isValuesValue() const;
        // Return 'true' if the value of this object is a "Values" value, and
        // return 'false' otherwise.

    bool isNodeInfoValue() const;
        // Return 'true' if the value of this object is a "NodeInfo" value, and
        // return 'false' otherwise.

    bool isEntryInfoValue() const;
        // Return 'true' if the value of this object is a "EntryInfo" value,
        // and return 'false' otherwise.

    bool isRegistryInfoValue() const;
        // Return 'true' if the value of this object is a "RegistryInfo" value,
        // and return 'false' otherwise.

    bool isEntryValueValue() const;
        // Return 'true' if the value of this object is a "EntryValue" value,
        // and return 'false' otherwise.

    bool isEntrySubscribersValue() const;
        // Return 'true' if the value of this object is a "EntrySubscribers"
        // value, and return 'false' otherwise.

    bool isVersionHistoryValue() const;
        // Return 'true' if the value of this object is a "VersionHistory"
        // value, and return 'false' otherwise.

    bool isPrivilegeListValue() const;
        // Return 'true' if the value of this object is a "PrivilegeList"
        // value, and return 'false' otherwise.

    bool isOutGroupValue() const;
        // Return 'true' if the value of this object is a "OutGroup" value, and
        // return 'false' otherwise.

    bool isDeptChainValue() const;
        // Return 'true' if the value of this object is a "DeptChain" value,
        // and return 'false' otherwise.

    bool isDrqsGroupValue() const;
        // Return 'true' if the value of this object is a "DrqsGroup" value,
        // and return 'false' otherwise.

    bool isMachineGroupValue() const;
        // Return 'true' if the value of this object is a "MachineGroup" value,
        // and return 'false' otherwise.

    bool isTodoListValue() const;
        // Return 'true' if the value of this object is a "TodoList" value, and
        // return 'false' otherwise.

    bool isRelatedTicketSummaryValue() const;
        // Return 'true' if the value of this object is a
        // "RelatedTicketSummary" value, and return 'false' otherwise.

    bool isNodeTypeValue() const;
        // Return 'true' if the value of this object is a "NodeType" value, and
        // return 'false' otherwise.

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
bsl::ostream& operator<<(bsl::ostream& stream, const Response& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::Response)

namespace s_breguisvc {

                               // =============                                
                               // class Request                                
                               // =============                                

class Request {

    // INSTANCE DATA
    union {
        bsls::ObjectBuffer< int >                    d_getTree;
        bsls::ObjectBuffer< int >                    d_getExpandedTree;
        bsls::ObjectBuffer< Void >                   d_getDefaultTree;
        bsls::ObjectBuffer< int >                    d_getChildren;
        bsls::ObjectBuffer< Void >                   d_getDefaultNode;
        bsls::ObjectBuffer< int >                    d_getNodeDetails;
        bsls::ObjectBuffer< int >                    d_setDefaultNode;
        bsls::ObjectBuffer< bsl::string >            d_searchByName;
        bsls::ObjectBuffer< int >                    d_searchById;
        bsls::ObjectBuffer< bsl::string >            d_searchByAccessor;
        bsls::ObjectBuffer< SearchByContacts >       d_searchByContacts;
        bsls::ObjectBuffer< SearchByKeywords >       d_searchByKeywords;
        bsls::ObjectBuffer< int >                    d_searchByDrqsGroup;
        bsls::ObjectBuffer< int >                    d_isDeleted;
        bsls::ObjectBuffer< GetBregValuesRequest >   d_getBregValues;
        bsls::ObjectBuffer< int >                    d_getRegistry;
        bsls::ObjectBuffer< ValueRequest >           d_getEntryValue;
        bsls::ObjectBuffer< int >                    d_getSubscribers;
        bsls::ObjectBuffer< int >                    d_getVersionHistory;
        bsls::ObjectBuffer< RegistryInfo >           d_updateRegistry;
        bsls::ObjectBuffer< int >                    d_deleteNode;
        bsls::ObjectBuffer< MoveRequest >            d_moveRegistry;
        bsls::ObjectBuffer< UpdateContactRequest >   d_updateContact;
        bsls::ObjectBuffer< int >                    d_getPrivilegeList;
        bsls::ObjectBuffer< EntrySubscribers >       d_updateSubscribers;
        bsls::ObjectBuffer< PrivilegeList >          d_updatePrivileges;
        bsls::ObjectBuffer< int >                    d_getOutGroup;
        bsls::ObjectBuffer< int >                    d_getDeptChain;
        bsls::ObjectBuffer< int >                    d_getDrqsGroup;
        bsls::ObjectBuffer< EntryValue >             d_updateDevValue;
        bsls::ObjectBuffer< int >                    d_getMachineGroupName;
        bsls::ObjectBuffer< OverrideInfo >           d_validateOverride;
        bsls::ObjectBuffer< GenerateCodeRequest >    d_generateCode;
        bsls::ObjectBuffer< BregChangeRequest >      d_releaseCode;
        bsls::ObjectBuffer< int >                    d_getTodoList;
        bsls::ObjectBuffer< RelatedTicketRequest >   d_getRelatedTicket;
        bsls::ObjectBuffer< int >                    d_getNodeType;
        bsls::ObjectBuffer< BregChangeRequest >      d_changeBreg;
        bsls::ObjectBuffer< BregChangeRequest >      d_validatePrqsApprover;
        bsls::ObjectBuffer< BregChangeRequest >      d_generateReleaseCode;
        bsls::ObjectBuffer< MarkForDeletionRequest > d_markForDeletion;
    };

    int                                              d_selectionId;
    bslma::Allocator                                *d_allocator_p;

  public:
    // TYPES
    typedef s_breguisvc::SchemaUtil EncoderUtil;
    typedef s_breguisvc::SchemaUtil DecoderUtil;

    enum {
        SELECTION_ID_UNDEFINED              = -1

      , SELECTION_ID_GET_TREE               = 0
      , SELECTION_ID_GET_EXPANDED_TREE      = 1
      , SELECTION_ID_GET_DEFAULT_TREE       = 2
      , SELECTION_ID_GET_CHILDREN           = 3
      , SELECTION_ID_GET_DEFAULT_NODE       = 4
      , SELECTION_ID_GET_NODE_DETAILS       = 5
      , SELECTION_ID_SET_DEFAULT_NODE       = 6
      , SELECTION_ID_SEARCH_BY_NAME         = 7
      , SELECTION_ID_SEARCH_BY_ID           = 8
      , SELECTION_ID_SEARCH_BY_ACCESSOR     = 9
      , SELECTION_ID_SEARCH_BY_CONTACTS     = 10
      , SELECTION_ID_SEARCH_BY_KEYWORDS     = 11
      , SELECTION_ID_SEARCH_BY_DRQS_GROUP   = 12
      , SELECTION_ID_IS_DELETED             = 13
      , SELECTION_ID_GET_BREG_VALUES        = 14
      , SELECTION_ID_GET_REGISTRY           = 15
      , SELECTION_ID_GET_ENTRY_VALUE        = 16
      , SELECTION_ID_GET_SUBSCRIBERS        = 17
      , SELECTION_ID_GET_VERSION_HISTORY    = 18
      , SELECTION_ID_UPDATE_REGISTRY        = 19
      , SELECTION_ID_DELETE_NODE            = 20
      , SELECTION_ID_MOVE_REGISTRY          = 21
      , SELECTION_ID_UPDATE_CONTACT         = 22
      , SELECTION_ID_GET_PRIVILEGE_LIST     = 23
      , SELECTION_ID_UPDATE_SUBSCRIBERS     = 24
      , SELECTION_ID_UPDATE_PRIVILEGES      = 25
      , SELECTION_ID_GET_OUT_GROUP          = 26
      , SELECTION_ID_GET_DEPT_CHAIN         = 27
      , SELECTION_ID_GET_DRQS_GROUP         = 28
      , SELECTION_ID_UPDATE_DEV_VALUE       = 29
      , SELECTION_ID_GET_MACHINE_GROUP_NAME = 30
      , SELECTION_ID_VALIDATE_OVERRIDE      = 31
      , SELECTION_ID_GENERATE_CODE          = 32
      , SELECTION_ID_RELEASE_CODE           = 33
      , SELECTION_ID_GET_TODO_LIST          = 34
      , SELECTION_ID_GET_RELATED_TICKET     = 35
      , SELECTION_ID_GET_NODE_TYPE          = 36
      , SELECTION_ID_CHANGE_BREG            = 37
      , SELECTION_ID_VALIDATE_PRQS_APPROVER = 38
      , SELECTION_ID_GENERATE_RELEASE_CODE  = 39
      , SELECTION_ID_MARK_FOR_DELETION      = 40
    };

    enum {
        NUM_SELECTIONS = 41
    };

    enum {
        SELECTION_INDEX_GET_TREE               = 0
      , SELECTION_INDEX_GET_EXPANDED_TREE      = 1
      , SELECTION_INDEX_GET_DEFAULT_TREE       = 2
      , SELECTION_INDEX_GET_CHILDREN           = 3
      , SELECTION_INDEX_GET_DEFAULT_NODE       = 4
      , SELECTION_INDEX_GET_NODE_DETAILS       = 5
      , SELECTION_INDEX_SET_DEFAULT_NODE       = 6
      , SELECTION_INDEX_SEARCH_BY_NAME         = 7
      , SELECTION_INDEX_SEARCH_BY_ID           = 8
      , SELECTION_INDEX_SEARCH_BY_ACCESSOR     = 9
      , SELECTION_INDEX_SEARCH_BY_CONTACTS     = 10
      , SELECTION_INDEX_SEARCH_BY_KEYWORDS     = 11
      , SELECTION_INDEX_SEARCH_BY_DRQS_GROUP   = 12
      , SELECTION_INDEX_IS_DELETED             = 13
      , SELECTION_INDEX_GET_BREG_VALUES        = 14
      , SELECTION_INDEX_GET_REGISTRY           = 15
      , SELECTION_INDEX_GET_ENTRY_VALUE        = 16
      , SELECTION_INDEX_GET_SUBSCRIBERS        = 17
      , SELECTION_INDEX_GET_VERSION_HISTORY    = 18
      , SELECTION_INDEX_UPDATE_REGISTRY        = 19
      , SELECTION_INDEX_DELETE_NODE            = 20
      , SELECTION_INDEX_MOVE_REGISTRY          = 21
      , SELECTION_INDEX_UPDATE_CONTACT         = 22
      , SELECTION_INDEX_GET_PRIVILEGE_LIST     = 23
      , SELECTION_INDEX_UPDATE_SUBSCRIBERS     = 24
      , SELECTION_INDEX_UPDATE_PRIVILEGES      = 25
      , SELECTION_INDEX_GET_OUT_GROUP          = 26
      , SELECTION_INDEX_GET_DEPT_CHAIN         = 27
      , SELECTION_INDEX_GET_DRQS_GROUP         = 28
      , SELECTION_INDEX_UPDATE_DEV_VALUE       = 29
      , SELECTION_INDEX_GET_MACHINE_GROUP_NAME = 30
      , SELECTION_INDEX_VALIDATE_OVERRIDE      = 31
      , SELECTION_INDEX_GENERATE_CODE          = 32
      , SELECTION_INDEX_RELEASE_CODE           = 33
      , SELECTION_INDEX_GET_TODO_LIST          = 34
      , SELECTION_INDEX_GET_RELATED_TICKET     = 35
      , SELECTION_INDEX_GET_NODE_TYPE          = 36
      , SELECTION_INDEX_CHANGE_BREG            = 37
      , SELECTION_INDEX_VALIDATE_PRQS_APPROVER = 38
      , SELECTION_INDEX_GENERATE_RELEASE_CODE  = 39
      , SELECTION_INDEX_MARK_FOR_DELETION      = 40
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

    // TRAITS
    BSLALG_DECLARE_NESTED_TRAITS(Request,
                                 bscalg::TypeTraitHasCodecUtil);

    // CREATORS
    explicit Request(bslma::Allocator *basicAllocator = 0);
        // Create an object of type 'Request' having the default value.  Use
        // the optionally specified 'basicAllocator' to supply memory.  If
        // 'basicAllocator' is 0, the currently installed default allocator is
        // used.

    Request(const Request& original,
           bslma::Allocator *basicAllocator = 0);
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

    int& makeGetTree();
    int& makeGetTree(int value);
        // Set the value of this object to be a "GetTree" value.  Optionally
        // specify the 'value' of the "GetTree".  If 'value' is not specified,
        // the default "GetTree" value is used.

    int& makeGetExpandedTree();
    int& makeGetExpandedTree(int value);
        // Set the value of this object to be a "GetExpandedTree" value. 
        // Optionally specify the 'value' of the "GetExpandedTree".  If 'value'
        // is not specified, the default "GetExpandedTree" value is used.

    Void& makeGetDefaultTree();
    Void& makeGetDefaultTree(const Void& value);
        // Set the value of this object to be a "GetDefaultTree" value. 
        // Optionally specify the 'value' of the "GetDefaultTree".  If 'value'
        // is not specified, the default "GetDefaultTree" value is used.

    int& makeGetChildren();
    int& makeGetChildren(int value);
        // Set the value of this object to be a "GetChildren" value. 
        // Optionally specify the 'value' of the "GetChildren".  If 'value' is
        // not specified, the default "GetChildren" value is used.

    Void& makeGetDefaultNode();
    Void& makeGetDefaultNode(const Void& value);
        // Set the value of this object to be a "GetDefaultNode" value. 
        // Optionally specify the 'value' of the "GetDefaultNode".  If 'value'
        // is not specified, the default "GetDefaultNode" value is used.

    int& makeGetNodeDetails();
    int& makeGetNodeDetails(int value);
        // Set the value of this object to be a "GetNodeDetails" value. 
        // Optionally specify the 'value' of the "GetNodeDetails".  If 'value'
        // is not specified, the default "GetNodeDetails" value is used.

    int& makeSetDefaultNode();
    int& makeSetDefaultNode(int value);
        // Set the value of this object to be a "SetDefaultNode" value. 
        // Optionally specify the 'value' of the "SetDefaultNode".  If 'value'
        // is not specified, the default "SetDefaultNode" value is used.

    bsl::string& makeSearchByName();
    bsl::string& makeSearchByName(const bsl::string& value);
        // Set the value of this object to be a "SearchByName" value. 
        // Optionally specify the 'value' of the "SearchByName".  If 'value' is
        // not specified, the default "SearchByName" value is used.

    int& makeSearchById();
    int& makeSearchById(int value);
        // Set the value of this object to be a "SearchById" value.  Optionally
        // specify the 'value' of the "SearchById".  If 'value' is not
        // specified, the default "SearchById" value is used.

    bsl::string& makeSearchByAccessor();
    bsl::string& makeSearchByAccessor(const bsl::string& value);
        // Set the value of this object to be a "SearchByAccessor" value. 
        // Optionally specify the 'value' of the "SearchByAccessor".  If
        // 'value' is not specified, the default "SearchByAccessor" value is
        // used.

    SearchByContacts& makeSearchByContacts();
    SearchByContacts& makeSearchByContacts(const SearchByContacts& value);
        // Set the value of this object to be a "SearchByContacts" value. 
        // Optionally specify the 'value' of the "SearchByContacts".  If
        // 'value' is not specified, the default "SearchByContacts" value is
        // used.

    SearchByKeywords& makeSearchByKeywords();
    SearchByKeywords& makeSearchByKeywords(const SearchByKeywords& value);
        // Set the value of this object to be a "SearchByKeywords" value. 
        // Optionally specify the 'value' of the "SearchByKeywords".  If
        // 'value' is not specified, the default "SearchByKeywords" value is
        // used.

    int& makeSearchByDrqsGroup();
    int& makeSearchByDrqsGroup(int value);
        // Set the value of this object to be a "SearchByDrqsGroup" value. 
        // Optionally specify the 'value' of the "SearchByDrqsGroup".  If
        // 'value' is not specified, the default "SearchByDrqsGroup" value is
        // used.

    int& makeIsDeleted();
    int& makeIsDeleted(int value);
        // Set the value of this object to be a "IsDeleted" value.  Optionally
        // specify the 'value' of the "IsDeleted".  If 'value' is not
        // specified, the default "IsDeleted" value is used.

    GetBregValuesRequest& makeGetBregValues();
    GetBregValuesRequest& makeGetBregValues(const GetBregValuesRequest& value);
        // Set the value of this object to be a "GetBregValues" value. 
        // Optionally specify the 'value' of the "GetBregValues".  If 'value'
        // is not specified, the default "GetBregValues" value is used.

    int& makeGetRegistry();
    int& makeGetRegistry(int value);
        // Set the value of this object to be a "GetRegistry" value. 
        // Optionally specify the 'value' of the "GetRegistry".  If 'value' is
        // not specified, the default "GetRegistry" value is used.

    ValueRequest& makeGetEntryValue();
    ValueRequest& makeGetEntryValue(const ValueRequest& value);
        // Set the value of this object to be a "GetEntryValue" value. 
        // Optionally specify the 'value' of the "GetEntryValue".  If 'value'
        // is not specified, the default "GetEntryValue" value is used.

    int& makeGetSubscribers();
    int& makeGetSubscribers(int value);
        // Set the value of this object to be a "GetSubscribers" value. 
        // Optionally specify the 'value' of the "GetSubscribers".  If 'value'
        // is not specified, the default "GetSubscribers" value is used.

    int& makeGetVersionHistory();
    int& makeGetVersionHistory(int value);
        // Set the value of this object to be a "GetVersionHistory" value. 
        // Optionally specify the 'value' of the "GetVersionHistory".  If
        // 'value' is not specified, the default "GetVersionHistory" value is
        // used.

    RegistryInfo& makeUpdateRegistry();
    RegistryInfo& makeUpdateRegistry(const RegistryInfo& value);
        // Set the value of this object to be a "UpdateRegistry" value. 
        // Optionally specify the 'value' of the "UpdateRegistry".  If 'value'
        // is not specified, the default "UpdateRegistry" value is used.

    int& makeDeleteNode();
    int& makeDeleteNode(int value);
        // Set the value of this object to be a "DeleteNode" value.  Optionally
        // specify the 'value' of the "DeleteNode".  If 'value' is not
        // specified, the default "DeleteNode" value is used.

    MoveRequest& makeMoveRegistry();
    MoveRequest& makeMoveRegistry(const MoveRequest& value);
        // Set the value of this object to be a "MoveRegistry" value. 
        // Optionally specify the 'value' of the "MoveRegistry".  If 'value' is
        // not specified, the default "MoveRegistry" value is used.

    UpdateContactRequest& makeUpdateContact();
    UpdateContactRequest& makeUpdateContact(const UpdateContactRequest& value);
        // Set the value of this object to be a "UpdateContact" value. 
        // Optionally specify the 'value' of the "UpdateContact".  If 'value'
        // is not specified, the default "UpdateContact" value is used.

    int& makeGetPrivilegeList();
    int& makeGetPrivilegeList(int value);
        // Set the value of this object to be a "GetPrivilegeList" value. 
        // Optionally specify the 'value' of the "GetPrivilegeList".  If
        // 'value' is not specified, the default "GetPrivilegeList" value is
        // used.

    EntrySubscribers& makeUpdateSubscribers();
    EntrySubscribers& makeUpdateSubscribers(const EntrySubscribers& value);
        // Set the value of this object to be a "UpdateSubscribers" value. 
        // Optionally specify the 'value' of the "UpdateSubscribers".  If
        // 'value' is not specified, the default "UpdateSubscribers" value is
        // used.

    PrivilegeList& makeUpdatePrivileges();
    PrivilegeList& makeUpdatePrivileges(const PrivilegeList& value);
        // Set the value of this object to be a "UpdatePrivileges" value. 
        // Optionally specify the 'value' of the "UpdatePrivileges".  If
        // 'value' is not specified, the default "UpdatePrivileges" value is
        // used.

    int& makeGetOutGroup();
    int& makeGetOutGroup(int value);
        // Set the value of this object to be a "GetOutGroup" value. 
        // Optionally specify the 'value' of the "GetOutGroup".  If 'value' is
        // not specified, the default "GetOutGroup" value is used.

    int& makeGetDeptChain();
    int& makeGetDeptChain(int value);
        // Set the value of this object to be a "GetDeptChain" value. 
        // Optionally specify the 'value' of the "GetDeptChain".  If 'value' is
        // not specified, the default "GetDeptChain" value is used.

    int& makeGetDrqsGroup();
    int& makeGetDrqsGroup(int value);
        // Set the value of this object to be a "GetDrqsGroup" value. 
        // Optionally specify the 'value' of the "GetDrqsGroup".  If 'value' is
        // not specified, the default "GetDrqsGroup" value is used.

    EntryValue& makeUpdateDevValue();
    EntryValue& makeUpdateDevValue(const EntryValue& value);
        // Set the value of this object to be a "UpdateDevValue" value. 
        // Optionally specify the 'value' of the "UpdateDevValue".  If 'value'
        // is not specified, the default "UpdateDevValue" value is used.

    int& makeGetMachineGroupName();
    int& makeGetMachineGroupName(int value);
        // Set the value of this object to be a "GetMachineGroupName" value. 
        // Optionally specify the 'value' of the "GetMachineGroupName".  If
        // 'value' is not specified, the default "GetMachineGroupName" value is
        // used.

    OverrideInfo& makeValidateOverride();
    OverrideInfo& makeValidateOverride(const OverrideInfo& value);
        // Set the value of this object to be a "ValidateOverride" value. 
        // Optionally specify the 'value' of the "ValidateOverride".  If
        // 'value' is not specified, the default "ValidateOverride" value is
        // used.

    GenerateCodeRequest& makeGenerateCode();
    GenerateCodeRequest& makeGenerateCode(const GenerateCodeRequest& value);
        // Set the value of this object to be a "GenerateCode" value. 
        // Optionally specify the 'value' of the "GenerateCode".  If 'value' is
        // not specified, the default "GenerateCode" value is used.

    BregChangeRequest& makeReleaseCode();
    BregChangeRequest& makeReleaseCode(const BregChangeRequest& value);
        // Set the value of this object to be a "ReleaseCode" value. 
        // Optionally specify the 'value' of the "ReleaseCode".  If 'value' is
        // not specified, the default "ReleaseCode" value is used.

    int& makeGetTodoList();
    int& makeGetTodoList(int value);
        // Set the value of this object to be a "GetTodoList" value. 
        // Optionally specify the 'value' of the "GetTodoList".  If 'value' is
        // not specified, the default "GetTodoList" value is used.

    RelatedTicketRequest& makeGetRelatedTicket();
    RelatedTicketRequest& makeGetRelatedTicket(const RelatedTicketRequest& value);
        // Set the value of this object to be a "GetRelatedTicket" value. 
        // Optionally specify the 'value' of the "GetRelatedTicket".  If
        // 'value' is not specified, the default "GetRelatedTicket" value is
        // used.

    int& makeGetNodeType();
    int& makeGetNodeType(int value);
        // Set the value of this object to be a "GetNodeType" value. 
        // Optionally specify the 'value' of the "GetNodeType".  If 'value' is
        // not specified, the default "GetNodeType" value is used.

    BregChangeRequest& makeChangeBreg();
    BregChangeRequest& makeChangeBreg(const BregChangeRequest& value);
        // Set the value of this object to be a "ChangeBreg" value.  Optionally
        // specify the 'value' of the "ChangeBreg".  If 'value' is not
        // specified, the default "ChangeBreg" value is used.

    BregChangeRequest& makeValidatePrqsApprover();
    BregChangeRequest& makeValidatePrqsApprover(const BregChangeRequest& value);
        // Set the value of this object to be a "ValidatePrqsApprover" value. 
        // Optionally specify the 'value' of the "ValidatePrqsApprover".  If
        // 'value' is not specified, the default "ValidatePrqsApprover" value
        // is used.

    BregChangeRequest& makeGenerateReleaseCode();
    BregChangeRequest& makeGenerateReleaseCode(const BregChangeRequest& value);
        // Set the value of this object to be a "GenerateReleaseCode" value. 
        // Optionally specify the 'value' of the "GenerateReleaseCode".  If
        // 'value' is not specified, the default "GenerateReleaseCode" value is
        // used.

    MarkForDeletionRequest& makeMarkForDeletion();
    MarkForDeletionRequest& makeMarkForDeletion(const MarkForDeletionRequest& value);
        // Set the value of this object to be a "MarkForDeletion" value. 
        // Optionally specify the 'value' of the "MarkForDeletion".  If 'value'
        // is not specified, the default "MarkForDeletion" value is used.

    template<class MANIPULATOR>
    int manipulateSelection(MANIPULATOR& manipulator);
        // Invoke the specified 'manipulator' on the address of the modifiable
        // selection, supplying 'manipulator' with the corresponding selection
        // information structure.  Return the value returned from the
        // invocation of 'manipulator' if this object has a defined selection,
        // and -1 otherwise.

    int& getTree();
        // Return a reference to the modifiable "GetTree" selection of this
        // object if "GetTree" is the current selection.  The behavior is
        // undefined unless "GetTree" is the selection of this object.

    int& getExpandedTree();
        // Return a reference to the modifiable "GetExpandedTree" selection of
        // this object if "GetExpandedTree" is the current selection.  The
        // behavior is undefined unless "GetExpandedTree" is the selection of
        // this object.

    Void& getDefaultTree();
        // Return a reference to the modifiable "GetDefaultTree" selection of
        // this object if "GetDefaultTree" is the current selection.  The
        // behavior is undefined unless "GetDefaultTree" is the selection of
        // this object.

    int& getChildren();
        // Return a reference to the modifiable "GetChildren" selection of this
        // object if "GetChildren" is the current selection.  The behavior is
        // undefined unless "GetChildren" is the selection of this object.

    Void& getDefaultNode();
        // Return a reference to the modifiable "GetDefaultNode" selection of
        // this object if "GetDefaultNode" is the current selection.  The
        // behavior is undefined unless "GetDefaultNode" is the selection of
        // this object.

    int& getNodeDetails();
        // Return a reference to the modifiable "GetNodeDetails" selection of
        // this object if "GetNodeDetails" is the current selection.  The
        // behavior is undefined unless "GetNodeDetails" is the selection of
        // this object.

    int& setDefaultNode();
        // Return a reference to the modifiable "SetDefaultNode" selection of
        // this object if "SetDefaultNode" is the current selection.  The
        // behavior is undefined unless "SetDefaultNode" is the selection of
        // this object.

    bsl::string& searchByName();
        // Return a reference to the modifiable "SearchByName" selection of
        // this object if "SearchByName" is the current selection.  The
        // behavior is undefined unless "SearchByName" is the selection of this
        // object.

    int& searchById();
        // Return a reference to the modifiable "SearchById" selection of this
        // object if "SearchById" is the current selection.  The behavior is
        // undefined unless "SearchById" is the selection of this object.

    bsl::string& searchByAccessor();
        // Return a reference to the modifiable "SearchByAccessor" selection of
        // this object if "SearchByAccessor" is the current selection.  The
        // behavior is undefined unless "SearchByAccessor" is the selection of
        // this object.

    SearchByContacts& searchByContacts();
        // Return a reference to the modifiable "SearchByContacts" selection of
        // this object if "SearchByContacts" is the current selection.  The
        // behavior is undefined unless "SearchByContacts" is the selection of
        // this object.

    SearchByKeywords& searchByKeywords();
        // Return a reference to the modifiable "SearchByKeywords" selection of
        // this object if "SearchByKeywords" is the current selection.  The
        // behavior is undefined unless "SearchByKeywords" is the selection of
        // this object.

    int& searchByDrqsGroup();
        // Return a reference to the modifiable "SearchByDrqsGroup" selection
        // of this object if "SearchByDrqsGroup" is the current selection.  The
        // behavior is undefined unless "SearchByDrqsGroup" is the selection of
        // this object.

    int& isDeleted();
        // Return a reference to the modifiable "IsDeleted" selection of this
        // object if "IsDeleted" is the current selection.  The behavior is
        // undefined unless "IsDeleted" is the selection of this object.

    GetBregValuesRequest& getBregValues();
        // Return a reference to the modifiable "GetBregValues" selection of
        // this object if "GetBregValues" is the current selection.  The
        // behavior is undefined unless "GetBregValues" is the selection of
        // this object.

    int& getRegistry();
        // Return a reference to the modifiable "GetRegistry" selection of this
        // object if "GetRegistry" is the current selection.  The behavior is
        // undefined unless "GetRegistry" is the selection of this object.

    ValueRequest& getEntryValue();
        // Return a reference to the modifiable "GetEntryValue" selection of
        // this object if "GetEntryValue" is the current selection.  The
        // behavior is undefined unless "GetEntryValue" is the selection of
        // this object.

    int& getSubscribers();
        // Return a reference to the modifiable "GetSubscribers" selection of
        // this object if "GetSubscribers" is the current selection.  The
        // behavior is undefined unless "GetSubscribers" is the selection of
        // this object.

    int& getVersionHistory();
        // Return a reference to the modifiable "GetVersionHistory" selection
        // of this object if "GetVersionHistory" is the current selection.  The
        // behavior is undefined unless "GetVersionHistory" is the selection of
        // this object.

    RegistryInfo& updateRegistry();
        // Return a reference to the modifiable "UpdateRegistry" selection of
        // this object if "UpdateRegistry" is the current selection.  The
        // behavior is undefined unless "UpdateRegistry" is the selection of
        // this object.

    int& deleteNode();
        // Return a reference to the modifiable "DeleteNode" selection of this
        // object if "DeleteNode" is the current selection.  The behavior is
        // undefined unless "DeleteNode" is the selection of this object.

    MoveRequest& moveRegistry();
        // Return a reference to the modifiable "MoveRegistry" selection of
        // this object if "MoveRegistry" is the current selection.  The
        // behavior is undefined unless "MoveRegistry" is the selection of this
        // object.

    UpdateContactRequest& updateContact();
        // Return a reference to the modifiable "UpdateContact" selection of
        // this object if "UpdateContact" is the current selection.  The
        // behavior is undefined unless "UpdateContact" is the selection of
        // this object.

    int& getPrivilegeList();
        // Return a reference to the modifiable "GetPrivilegeList" selection of
        // this object if "GetPrivilegeList" is the current selection.  The
        // behavior is undefined unless "GetPrivilegeList" is the selection of
        // this object.

    EntrySubscribers& updateSubscribers();
        // Return a reference to the modifiable "UpdateSubscribers" selection
        // of this object if "UpdateSubscribers" is the current selection.  The
        // behavior is undefined unless "UpdateSubscribers" is the selection of
        // this object.

    PrivilegeList& updatePrivileges();
        // Return a reference to the modifiable "UpdatePrivileges" selection of
        // this object if "UpdatePrivileges" is the current selection.  The
        // behavior is undefined unless "UpdatePrivileges" is the selection of
        // this object.

    int& getOutGroup();
        // Return a reference to the modifiable "GetOutGroup" selection of this
        // object if "GetOutGroup" is the current selection.  The behavior is
        // undefined unless "GetOutGroup" is the selection of this object.

    int& getDeptChain();
        // Return a reference to the modifiable "GetDeptChain" selection of
        // this object if "GetDeptChain" is the current selection.  The
        // behavior is undefined unless "GetDeptChain" is the selection of this
        // object.

    int& getDrqsGroup();
        // Return a reference to the modifiable "GetDrqsGroup" selection of
        // this object if "GetDrqsGroup" is the current selection.  The
        // behavior is undefined unless "GetDrqsGroup" is the selection of this
        // object.

    EntryValue& updateDevValue();
        // Return a reference to the modifiable "UpdateDevValue" selection of
        // this object if "UpdateDevValue" is the current selection.  The
        // behavior is undefined unless "UpdateDevValue" is the selection of
        // this object.

    int& getMachineGroupName();
        // Return a reference to the modifiable "GetMachineGroupName" selection
        // of this object if "GetMachineGroupName" is the current selection. 
        // The behavior is undefined unless "GetMachineGroupName" is the
        // selection of this object.

    OverrideInfo& validateOverride();
        // Return a reference to the modifiable "ValidateOverride" selection of
        // this object if "ValidateOverride" is the current selection.  The
        // behavior is undefined unless "ValidateOverride" is the selection of
        // this object.

    GenerateCodeRequest& generateCode();
        // Return a reference to the modifiable "GenerateCode" selection of
        // this object if "GenerateCode" is the current selection.  The
        // behavior is undefined unless "GenerateCode" is the selection of this
        // object.

    BregChangeRequest& releaseCode();
        // Return a reference to the modifiable "ReleaseCode" selection of this
        // object if "ReleaseCode" is the current selection.  The behavior is
        // undefined unless "ReleaseCode" is the selection of this object.

    int& getTodoList();
        // Return a reference to the modifiable "GetTodoList" selection of this
        // object if "GetTodoList" is the current selection.  The behavior is
        // undefined unless "GetTodoList" is the selection of this object.

    RelatedTicketRequest& getRelatedTicket();
        // Return a reference to the modifiable "GetRelatedTicket" selection of
        // this object if "GetRelatedTicket" is the current selection.  The
        // behavior is undefined unless "GetRelatedTicket" is the selection of
        // this object.

    int& getNodeType();
        // Return a reference to the modifiable "GetNodeType" selection of this
        // object if "GetNodeType" is the current selection.  The behavior is
        // undefined unless "GetNodeType" is the selection of this object.

    BregChangeRequest& changeBreg();
        // Return a reference to the modifiable "ChangeBreg" selection of this
        // object if "ChangeBreg" is the current selection.  The behavior is
        // undefined unless "ChangeBreg" is the selection of this object.

    BregChangeRequest& validatePrqsApprover();
        // Return a reference to the modifiable "ValidatePrqsApprover"
        // selection of this object if "ValidatePrqsApprover" is the current
        // selection.  The behavior is undefined unless "ValidatePrqsApprover"
        // is the selection of this object.

    BregChangeRequest& generateReleaseCode();
        // Return a reference to the modifiable "GenerateReleaseCode" selection
        // of this object if "GenerateReleaseCode" is the current selection. 
        // The behavior is undefined unless "GenerateReleaseCode" is the
        // selection of this object.

    MarkForDeletionRequest& markForDeletion();
        // Return a reference to the modifiable "MarkForDeletion" selection of
        // this object if "MarkForDeletion" is the current selection.  The
        // behavior is undefined unless "MarkForDeletion" is the selection of
        // this object.

    // ACCESSORS
    bsl::ostream& print(bsl::ostream& stream,
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

    const int& getTree() const;
        // Return a reference to the non-modifiable "GetTree" selection of this
        // object if "GetTree" is the current selection.  The behavior is
        // undefined unless "GetTree" is the selection of this object.

    const int& getExpandedTree() const;
        // Return a reference to the non-modifiable "GetExpandedTree" selection
        // of this object if "GetExpandedTree" is the current selection.  The
        // behavior is undefined unless "GetExpandedTree" is the selection of
        // this object.

    const Void& getDefaultTree() const;
        // Return a reference to the non-modifiable "GetDefaultTree" selection
        // of this object if "GetDefaultTree" is the current selection.  The
        // behavior is undefined unless "GetDefaultTree" is the selection of
        // this object.

    const int& getChildren() const;
        // Return a reference to the non-modifiable "GetChildren" selection of
        // this object if "GetChildren" is the current selection.  The behavior
        // is undefined unless "GetChildren" is the selection of this object.

    const Void& getDefaultNode() const;
        // Return a reference to the non-modifiable "GetDefaultNode" selection
        // of this object if "GetDefaultNode" is the current selection.  The
        // behavior is undefined unless "GetDefaultNode" is the selection of
        // this object.

    const int& getNodeDetails() const;
        // Return a reference to the non-modifiable "GetNodeDetails" selection
        // of this object if "GetNodeDetails" is the current selection.  The
        // behavior is undefined unless "GetNodeDetails" is the selection of
        // this object.

    const int& setDefaultNode() const;
        // Return a reference to the non-modifiable "SetDefaultNode" selection
        // of this object if "SetDefaultNode" is the current selection.  The
        // behavior is undefined unless "SetDefaultNode" is the selection of
        // this object.

    const bsl::string& searchByName() const;
        // Return a reference to the non-modifiable "SearchByName" selection of
        // this object if "SearchByName" is the current selection.  The
        // behavior is undefined unless "SearchByName" is the selection of this
        // object.

    const int& searchById() const;
        // Return a reference to the non-modifiable "SearchById" selection of
        // this object if "SearchById" is the current selection.  The behavior
        // is undefined unless "SearchById" is the selection of this object.

    const bsl::string& searchByAccessor() const;
        // Return a reference to the non-modifiable "SearchByAccessor"
        // selection of this object if "SearchByAccessor" is the current
        // selection.  The behavior is undefined unless "SearchByAccessor" is
        // the selection of this object.

    const SearchByContacts& searchByContacts() const;
        // Return a reference to the non-modifiable "SearchByContacts"
        // selection of this object if "SearchByContacts" is the current
        // selection.  The behavior is undefined unless "SearchByContacts" is
        // the selection of this object.

    const SearchByKeywords& searchByKeywords() const;
        // Return a reference to the non-modifiable "SearchByKeywords"
        // selection of this object if "SearchByKeywords" is the current
        // selection.  The behavior is undefined unless "SearchByKeywords" is
        // the selection of this object.

    const int& searchByDrqsGroup() const;
        // Return a reference to the non-modifiable "SearchByDrqsGroup"
        // selection of this object if "SearchByDrqsGroup" is the current
        // selection.  The behavior is undefined unless "SearchByDrqsGroup" is
        // the selection of this object.

    const int& isDeleted() const;
        // Return a reference to the non-modifiable "IsDeleted" selection of
        // this object if "IsDeleted" is the current selection.  The behavior
        // is undefined unless "IsDeleted" is the selection of this object.

    const GetBregValuesRequest& getBregValues() const;
        // Return a reference to the non-modifiable "GetBregValues" selection
        // of this object if "GetBregValues" is the current selection.  The
        // behavior is undefined unless "GetBregValues" is the selection of
        // this object.

    const int& getRegistry() const;
        // Return a reference to the non-modifiable "GetRegistry" selection of
        // this object if "GetRegistry" is the current selection.  The behavior
        // is undefined unless "GetRegistry" is the selection of this object.

    const ValueRequest& getEntryValue() const;
        // Return a reference to the non-modifiable "GetEntryValue" selection
        // of this object if "GetEntryValue" is the current selection.  The
        // behavior is undefined unless "GetEntryValue" is the selection of
        // this object.

    const int& getSubscribers() const;
        // Return a reference to the non-modifiable "GetSubscribers" selection
        // of this object if "GetSubscribers" is the current selection.  The
        // behavior is undefined unless "GetSubscribers" is the selection of
        // this object.

    const int& getVersionHistory() const;
        // Return a reference to the non-modifiable "GetVersionHistory"
        // selection of this object if "GetVersionHistory" is the current
        // selection.  The behavior is undefined unless "GetVersionHistory" is
        // the selection of this object.

    const RegistryInfo& updateRegistry() const;
        // Return a reference to the non-modifiable "UpdateRegistry" selection
        // of this object if "UpdateRegistry" is the current selection.  The
        // behavior is undefined unless "UpdateRegistry" is the selection of
        // this object.

    const int& deleteNode() const;
        // Return a reference to the non-modifiable "DeleteNode" selection of
        // this object if "DeleteNode" is the current selection.  The behavior
        // is undefined unless "DeleteNode" is the selection of this object.

    const MoveRequest& moveRegistry() const;
        // Return a reference to the non-modifiable "MoveRegistry" selection of
        // this object if "MoveRegistry" is the current selection.  The
        // behavior is undefined unless "MoveRegistry" is the selection of this
        // object.

    const UpdateContactRequest& updateContact() const;
        // Return a reference to the non-modifiable "UpdateContact" selection
        // of this object if "UpdateContact" is the current selection.  The
        // behavior is undefined unless "UpdateContact" is the selection of
        // this object.

    const int& getPrivilegeList() const;
        // Return a reference to the non-modifiable "GetPrivilegeList"
        // selection of this object if "GetPrivilegeList" is the current
        // selection.  The behavior is undefined unless "GetPrivilegeList" is
        // the selection of this object.

    const EntrySubscribers& updateSubscribers() const;
        // Return a reference to the non-modifiable "UpdateSubscribers"
        // selection of this object if "UpdateSubscribers" is the current
        // selection.  The behavior is undefined unless "UpdateSubscribers" is
        // the selection of this object.

    const PrivilegeList& updatePrivileges() const;
        // Return a reference to the non-modifiable "UpdatePrivileges"
        // selection of this object if "UpdatePrivileges" is the current
        // selection.  The behavior is undefined unless "UpdatePrivileges" is
        // the selection of this object.

    const int& getOutGroup() const;
        // Return a reference to the non-modifiable "GetOutGroup" selection of
        // this object if "GetOutGroup" is the current selection.  The behavior
        // is undefined unless "GetOutGroup" is the selection of this object.

    const int& getDeptChain() const;
        // Return a reference to the non-modifiable "GetDeptChain" selection of
        // this object if "GetDeptChain" is the current selection.  The
        // behavior is undefined unless "GetDeptChain" is the selection of this
        // object.

    const int& getDrqsGroup() const;
        // Return a reference to the non-modifiable "GetDrqsGroup" selection of
        // this object if "GetDrqsGroup" is the current selection.  The
        // behavior is undefined unless "GetDrqsGroup" is the selection of this
        // object.

    const EntryValue& updateDevValue() const;
        // Return a reference to the non-modifiable "UpdateDevValue" selection
        // of this object if "UpdateDevValue" is the current selection.  The
        // behavior is undefined unless "UpdateDevValue" is the selection of
        // this object.

    const int& getMachineGroupName() const;
        // Return a reference to the non-modifiable "GetMachineGroupName"
        // selection of this object if "GetMachineGroupName" is the current
        // selection.  The behavior is undefined unless "GetMachineGroupName"
        // is the selection of this object.

    const OverrideInfo& validateOverride() const;
        // Return a reference to the non-modifiable "ValidateOverride"
        // selection of this object if "ValidateOverride" is the current
        // selection.  The behavior is undefined unless "ValidateOverride" is
        // the selection of this object.

    const GenerateCodeRequest& generateCode() const;
        // Return a reference to the non-modifiable "GenerateCode" selection of
        // this object if "GenerateCode" is the current selection.  The
        // behavior is undefined unless "GenerateCode" is the selection of this
        // object.

    const BregChangeRequest& releaseCode() const;
        // Return a reference to the non-modifiable "ReleaseCode" selection of
        // this object if "ReleaseCode" is the current selection.  The behavior
        // is undefined unless "ReleaseCode" is the selection of this object.

    const int& getTodoList() const;
        // Return a reference to the non-modifiable "GetTodoList" selection of
        // this object if "GetTodoList" is the current selection.  The behavior
        // is undefined unless "GetTodoList" is the selection of this object.

    const RelatedTicketRequest& getRelatedTicket() const;
        // Return a reference to the non-modifiable "GetRelatedTicket"
        // selection of this object if "GetRelatedTicket" is the current
        // selection.  The behavior is undefined unless "GetRelatedTicket" is
        // the selection of this object.

    const int& getNodeType() const;
        // Return a reference to the non-modifiable "GetNodeType" selection of
        // this object if "GetNodeType" is the current selection.  The behavior
        // is undefined unless "GetNodeType" is the selection of this object.

    const BregChangeRequest& changeBreg() const;
        // Return a reference to the non-modifiable "ChangeBreg" selection of
        // this object if "ChangeBreg" is the current selection.  The behavior
        // is undefined unless "ChangeBreg" is the selection of this object.

    const BregChangeRequest& validatePrqsApprover() const;
        // Return a reference to the non-modifiable "ValidatePrqsApprover"
        // selection of this object if "ValidatePrqsApprover" is the current
        // selection.  The behavior is undefined unless "ValidatePrqsApprover"
        // is the selection of this object.

    const BregChangeRequest& generateReleaseCode() const;
        // Return a reference to the non-modifiable "GenerateReleaseCode"
        // selection of this object if "GenerateReleaseCode" is the current
        // selection.  The behavior is undefined unless "GenerateReleaseCode"
        // is the selection of this object.

    const MarkForDeletionRequest& markForDeletion() const;
        // Return a reference to the non-modifiable "MarkForDeletion" selection
        // of this object if "MarkForDeletion" is the current selection.  The
        // behavior is undefined unless "MarkForDeletion" is the selection of
        // this object.

    bool isGetTreeValue() const;
        // Return 'true' if the value of this object is a "GetTree" value, and
        // return 'false' otherwise.

    bool isGetExpandedTreeValue() const;
        // Return 'true' if the value of this object is a "GetExpandedTree"
        // value, and return 'false' otherwise.

    bool isGetDefaultTreeValue() const;
        // Return 'true' if the value of this object is a "GetDefaultTree"
        // value, and return 'false' otherwise.

    bool isGetChildrenValue() const;
        // Return 'true' if the value of this object is a "GetChildren" value,
        // and return 'false' otherwise.

    bool isGetDefaultNodeValue() const;
        // Return 'true' if the value of this object is a "GetDefaultNode"
        // value, and return 'false' otherwise.

    bool isGetNodeDetailsValue() const;
        // Return 'true' if the value of this object is a "GetNodeDetails"
        // value, and return 'false' otherwise.

    bool isSetDefaultNodeValue() const;
        // Return 'true' if the value of this object is a "SetDefaultNode"
        // value, and return 'false' otherwise.

    bool isSearchByNameValue() const;
        // Return 'true' if the value of this object is a "SearchByName" value,
        // and return 'false' otherwise.

    bool isSearchByIdValue() const;
        // Return 'true' if the value of this object is a "SearchById" value,
        // and return 'false' otherwise.

    bool isSearchByAccessorValue() const;
        // Return 'true' if the value of this object is a "SearchByAccessor"
        // value, and return 'false' otherwise.

    bool isSearchByContactsValue() const;
        // Return 'true' if the value of this object is a "SearchByContacts"
        // value, and return 'false' otherwise.

    bool isSearchByKeywordsValue() const;
        // Return 'true' if the value of this object is a "SearchByKeywords"
        // value, and return 'false' otherwise.

    bool isSearchByDrqsGroupValue() const;
        // Return 'true' if the value of this object is a "SearchByDrqsGroup"
        // value, and return 'false' otherwise.

    bool isIsDeletedValue() const;
        // Return 'true' if the value of this object is a "IsDeleted" value,
        // and return 'false' otherwise.

    bool isGetBregValuesValue() const;
        // Return 'true' if the value of this object is a "GetBregValues"
        // value, and return 'false' otherwise.

    bool isGetRegistryValue() const;
        // Return 'true' if the value of this object is a "GetRegistry" value,
        // and return 'false' otherwise.

    bool isGetEntryValueValue() const;
        // Return 'true' if the value of this object is a "GetEntryValue"
        // value, and return 'false' otherwise.

    bool isGetSubscribersValue() const;
        // Return 'true' if the value of this object is a "GetSubscribers"
        // value, and return 'false' otherwise.

    bool isGetVersionHistoryValue() const;
        // Return 'true' if the value of this object is a "GetVersionHistory"
        // value, and return 'false' otherwise.

    bool isUpdateRegistryValue() const;
        // Return 'true' if the value of this object is a "UpdateRegistry"
        // value, and return 'false' otherwise.

    bool isDeleteNodeValue() const;
        // Return 'true' if the value of this object is a "DeleteNode" value,
        // and return 'false' otherwise.

    bool isMoveRegistryValue() const;
        // Return 'true' if the value of this object is a "MoveRegistry" value,
        // and return 'false' otherwise.

    bool isUpdateContactValue() const;
        // Return 'true' if the value of this object is a "UpdateContact"
        // value, and return 'false' otherwise.

    bool isGetPrivilegeListValue() const;
        // Return 'true' if the value of this object is a "GetPrivilegeList"
        // value, and return 'false' otherwise.

    bool isUpdateSubscribersValue() const;
        // Return 'true' if the value of this object is a "UpdateSubscribers"
        // value, and return 'false' otherwise.

    bool isUpdatePrivilegesValue() const;
        // Return 'true' if the value of this object is a "UpdatePrivileges"
        // value, and return 'false' otherwise.

    bool isGetOutGroupValue() const;
        // Return 'true' if the value of this object is a "GetOutGroup" value,
        // and return 'false' otherwise.

    bool isGetDeptChainValue() const;
        // Return 'true' if the value of this object is a "GetDeptChain" value,
        // and return 'false' otherwise.

    bool isGetDrqsGroupValue() const;
        // Return 'true' if the value of this object is a "GetDrqsGroup" value,
        // and return 'false' otherwise.

    bool isUpdateDevValueValue() const;
        // Return 'true' if the value of this object is a "UpdateDevValue"
        // value, and return 'false' otherwise.

    bool isGetMachineGroupNameValue() const;
        // Return 'true' if the value of this object is a "GetMachineGroupName"
        // value, and return 'false' otherwise.

    bool isValidateOverrideValue() const;
        // Return 'true' if the value of this object is a "ValidateOverride"
        // value, and return 'false' otherwise.

    bool isGenerateCodeValue() const;
        // Return 'true' if the value of this object is a "GenerateCode" value,
        // and return 'false' otherwise.

    bool isReleaseCodeValue() const;
        // Return 'true' if the value of this object is a "ReleaseCode" value,
        // and return 'false' otherwise.

    bool isGetTodoListValue() const;
        // Return 'true' if the value of this object is a "GetTodoList" value,
        // and return 'false' otherwise.

    bool isGetRelatedTicketValue() const;
        // Return 'true' if the value of this object is a "GetRelatedTicket"
        // value, and return 'false' otherwise.

    bool isGetNodeTypeValue() const;
        // Return 'true' if the value of this object is a "GetNodeType" value,
        // and return 'false' otherwise.

    bool isChangeBregValue() const;
        // Return 'true' if the value of this object is a "ChangeBreg" value,
        // and return 'false' otherwise.

    bool isValidatePrqsApproverValue() const;
        // Return 'true' if the value of this object is a
        // "ValidatePrqsApprover" value, and return 'false' otherwise.

    bool isGenerateReleaseCodeValue() const;
        // Return 'true' if the value of this object is a "GenerateReleaseCode"
        // value, and return 'false' otherwise.

    bool isMarkForDeletionValue() const;
        // Return 'true' if the value of this object is a "MarkForDeletion"
        // value, and return 'false' otherwise.

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
bsl::ostream& operator<<(bsl::ostream& stream, const Request& rhs);
    // Format the specified 'rhs' to the specified output 'stream' and
    // return a reference to the modifiable 'stream'.

}  // close package namespace

// TRAITS

BDEAT_DECL_CHOICE_WITH_ALLOCATOR_BITWISEMOVEABLE_TRAITS(s_breguisvc::Request)

// ============================================================================
//                         INLINE FUNCTION DEFINITIONS
// ============================================================================

namespace s_breguisvc {

                               // -------------                                
                               // class AclType                                
                               // -------------                                

// CLASS METHODS
inline
int AclType::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int AclType::fromString(Value *result, const bsl::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
bsl::ostream& AclType::print(bsl::ostream&      stream,
                                 AclType::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& AclType::bdexStreamIn(STREAM&             stream,
                                   AclType::Value& value,
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
STREAM& AclType::bdexStreamOut(STREAM&              stream,
                                    AclType::Value value,
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
                              // class ApiStatus                               
                              // ---------------                               

// CLASS METHODS
inline
int ApiStatus::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int ApiStatus::fromString(Value *result, const bsl::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
bsl::ostream& ApiStatus::print(bsl::ostream&      stream,
                                 ApiStatus::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& ApiStatus::bdexStreamIn(STREAM&             stream,
                                   ApiStatus::Value& value,
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
STREAM& ApiStatus::bdexStreamOut(STREAM&              stream,
                                    ApiStatus::Value value,
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

// MANIPULATORS
template <class STREAM>
STREAM& BregValue::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_id, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valueType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valueTypeString, 1);
            bdex_InStreamFunctions::streamIn(stream, d_typeString, 1);
            bdex_InStreamFunctions::streamIn(stream, d_accessor, 1);
            bdex_InStreamFunctions::streamIn(stream, d_value, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregValue::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregValue::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ID: {
        return manipulator(&d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE_STRING: {
        return manipulator(&d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_TYPE_STRING: {
        return manipulator(&d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_ACCESSOR: {
        return manipulator(&d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
      } break;
      case ATTRIBUTE_ID_VALUE: {
        return manipulator(&d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregValue::manipulateAttribute(
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
int& BregValue::id()
{
    return d_id;
}

inline
int& BregValue::valueType()
{
    return d_valueType;
}

inline
bsl::string& BregValue::valueTypeString()
{
    return d_valueTypeString;
}

inline
bsl::string& BregValue::typeString()
{
    return d_typeString;
}

inline
bsl::string& BregValue::accessor()
{
    return d_accessor;
}

inline
bsl::string& BregValue::value()
{
    return d_value;
}

// ACCESSORS
template <class STREAM>
STREAM& BregValue::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_id, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueTypeString, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_typeString, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_accessor, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_value, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregValue::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregValue::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ID: {
        return accessor(d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE_STRING: {
        return accessor(d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_TYPE_STRING: {
        return accessor(d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_ACCESSOR: {
        return accessor(d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
      } break;
      case ATTRIBUTE_ID_VALUE: {
        return accessor(d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregValue::accessAttribute(
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
int BregValue::id() const
{
    return d_id;
}

inline
int BregValue::valueType() const
{
    return d_valueType;
}

inline
const bsl::string& BregValue::valueTypeString() const
{
    return d_valueTypeString;
}

inline
const bsl::string& BregValue::typeString() const
{
    return d_typeString;
}

inline
const bsl::string& BregValue::accessor() const
{
    return d_accessor;
}

inline
const bsl::string& BregValue::value() const
{
    return d_value;
}



                           // ---------------------                            
                           // class BregValueObject                            
                           // ---------------------                            

// CLASS METHODS
inline
int BregValueObject::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// CREATORS
inline
BregValueObject::BregValueObject(bslma::Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
}

inline
BregValueObject::~BregValueObject()
{
    reset();
}

// MANIPULATORS
template <class STREAM>
STREAM& BregValueObject::bdexStreamIn(STREAM& stream, int version)
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
              case SELECTION_ID_ID: {
                makeId();
                bdex_InStreamFunctions::streamIn(
                    stream, d_id.object(), 1);
              } break;
              case SELECTION_ID_GOBXML: {
                makeGobxml();
                bdex_InStreamFunctions::streamIn(
                    stream, d_gobxml.object(), 1);
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
int BregValueObject::manipulateSelection(MANIPULATOR& manipulator)
{
    switch (d_selectionId) {
      case BregValueObject::SELECTION_ID_ID:
        return manipulator(&d_id.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ID]);
      case BregValueObject::SELECTION_ID_GOBXML:
        return manipulator(&d_gobxml.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GOBXML]);
      default:
        BSLS_ASSERT(BregValueObject::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
int& BregValueObject::id()
{
    BSLS_ASSERT(SELECTION_ID_ID == d_selectionId);
    return d_id.object();
}

inline
bsl::string& BregValueObject::gobxml()
{
    BSLS_ASSERT(SELECTION_ID_GOBXML == d_selectionId);
    return d_gobxml.object();
}

// ACCESSORS
template <class STREAM>
STREAM& BregValueObject::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_ID: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_id.object(), 1);
              } break;
              case SELECTION_ID_GOBXML: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_gobxml.object(), 1);
              } break;
              default:
                BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
            }
      } break;
    }
    return stream;
}

inline
int BregValueObject::selectionId() const
{
    return d_selectionId;
}

template <class ACCESSOR>
int BregValueObject::accessSelection(ACCESSOR& accessor) const
{
    switch (d_selectionId) {
      case SELECTION_ID_ID:
        return accessor(d_id.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ID]);
      case SELECTION_ID_GOBXML:
        return accessor(d_gobxml.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GOBXML]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const int& BregValueObject::id() const
{
    BSLS_ASSERT(SELECTION_ID_ID == d_selectionId);
    return d_id.object();
}

inline
const bsl::string& BregValueObject::gobxml() const
{
    BSLS_ASSERT(SELECTION_ID_GOBXML == d_selectionId);
    return d_gobxml.object();
}

inline
bool BregValueObject::isIdValue() const
{
    return SELECTION_ID_ID == d_selectionId;
}

inline
bool BregValueObject::isGobxmlValue() const
{
    return SELECTION_ID_GOBXML == d_selectionId;
}

inline
bool BregValueObject::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
}


                              // ---------------                               
                              // class EntryData                               
                              // ---------------                               

// CLASS METHODS
inline
int EntryData::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// CREATORS
inline
EntryData::EntryData(bslma::Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
{
}

inline
EntryData::~EntryData()
{
    reset();
}

// MANIPULATORS
template <class STREAM>
STREAM& EntryData::bdexStreamIn(STREAM& stream, int version)
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
              case SELECTION_ID_BOOL_VALUE: {
                makeBoolValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_bool.object(), 1);
              } break;
              case SELECTION_ID_DOUBLE_VALUE: {
                makeDoubleValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_double.object(), 1);
              } break;
              case SELECTION_ID_INT_VALUE: {
                makeIntValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_int.object(), 1);
              } break;
              case SELECTION_ID_INT_LIST: {
                makeIntList();
                bdex_InStreamFunctions::streamIn(
                    stream, d_intList.object(), 1);
              } break;
              case SELECTION_ID_CHAR_VALUE: {
                makeCharValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_char.object(), 1);
              } break;
              case SELECTION_ID_STR: {
                makeStr();
                bdex_InStreamFunctions::streamIn(
                    stream, d_str.object(), 1);
              } break;
              case SELECTION_ID_EXT_INT_LIST: {
                makeExtIntList();
                bdex_InStreamFunctions::streamIn(
                    stream, d_extIntList.object(), 1);
              } break;
              case SELECTION_ID_EXT_STRING: {
                makeExtString();
                bdex_InStreamFunctions::streamIn(
                    stream, d_extString.object(), 1);
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
int EntryData::manipulateSelection(MANIPULATOR& manipulator)
{
    switch (d_selectionId) {
      case EntryData::SELECTION_ID_BOOL_VALUE:
        return manipulator(&d_bool.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOL_VALUE]);
      case EntryData::SELECTION_ID_DOUBLE_VALUE:
        return manipulator(&d_double.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE]);
      case EntryData::SELECTION_ID_INT_VALUE:
        return manipulator(&d_int.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_VALUE]);
      case EntryData::SELECTION_ID_INT_LIST:
        return manipulator(&d_intList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_LIST]);
      case EntryData::SELECTION_ID_CHAR_VALUE:
        return manipulator(&d_char.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHAR_VALUE]);
      case EntryData::SELECTION_ID_STR:
        return manipulator(&d_str.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_STR]);
      case EntryData::SELECTION_ID_EXT_INT_LIST:
        return manipulator(&d_extIntList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_INT_LIST]);
      case EntryData::SELECTION_ID_EXT_STRING:
        return manipulator(&d_extString.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_STRING]);
      default:
        BSLS_ASSERT(EntryData::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
bool& EntryData::boolValue()
{
    BSLS_ASSERT(SELECTION_ID_BOOL_VALUE == d_selectionId);
    return d_bool.object();
}

inline
double& EntryData::doubleValue()
{
    BSLS_ASSERT(SELECTION_ID_DOUBLE_VALUE == d_selectionId);
    return d_double.object();
}

inline
bsls::Types::Int64& EntryData::intValue()
{
    BSLS_ASSERT(SELECTION_ID_INT_VALUE == d_selectionId);
    return d_int.object();
}

inline
bsl::vector<bsls::Types::Int64>& EntryData::intList()
{
    BSLS_ASSERT(SELECTION_ID_INT_LIST == d_selectionId);
    return d_intList.object();
}

inline
bsl::string& EntryData::charValue()
{
    BSLS_ASSERT(SELECTION_ID_CHAR_VALUE == d_selectionId);
    return d_char.object();
}

inline
bsl::string& EntryData::str()
{
    BSLS_ASSERT(SELECTION_ID_STR == d_selectionId);
    return d_str.object();
}

inline
bsl::vector<bsls::Types::Int64>& EntryData::extIntList()
{
    BSLS_ASSERT(SELECTION_ID_EXT_INT_LIST == d_selectionId);
    return d_extIntList.object();
}

inline
bsl::string& EntryData::extString()
{
    BSLS_ASSERT(SELECTION_ID_EXT_STRING == d_selectionId);
    return d_extString.object();
}

// ACCESSORS
template <class STREAM>
STREAM& EntryData::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_BOOL_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_bool.object(), 1);
              } break;
              case SELECTION_ID_DOUBLE_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_double.object(), 1);
              } break;
              case SELECTION_ID_INT_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_int.object(), 1);
              } break;
              case SELECTION_ID_INT_LIST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_intList.object(), 1);
              } break;
              case SELECTION_ID_CHAR_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_char.object(), 1);
              } break;
              case SELECTION_ID_STR: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_str.object(), 1);
              } break;
              case SELECTION_ID_EXT_INT_LIST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_extIntList.object(), 1);
              } break;
              case SELECTION_ID_EXT_STRING: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_extString.object(), 1);
              } break;
              default:
                BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
            }
      } break;
    }
    return stream;
}

inline
int EntryData::selectionId() const
{
    return d_selectionId;
}

template <class ACCESSOR>
int EntryData::accessSelection(ACCESSOR& accessor) const
{
    switch (d_selectionId) {
      case SELECTION_ID_BOOL_VALUE:
        return accessor(d_bool.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_BOOL_VALUE]);
      case SELECTION_ID_DOUBLE_VALUE:
        return accessor(d_double.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DOUBLE_VALUE]);
      case SELECTION_ID_INT_VALUE:
        return accessor(d_int.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_VALUE]);
      case SELECTION_ID_INT_LIST:
        return accessor(d_intList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_INT_LIST]);
      case SELECTION_ID_CHAR_VALUE:
        return accessor(d_char.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHAR_VALUE]);
      case SELECTION_ID_STR:
        return accessor(d_str.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_STR]);
      case SELECTION_ID_EXT_INT_LIST:
        return accessor(d_extIntList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_INT_LIST]);
      case SELECTION_ID_EXT_STRING:
        return accessor(d_extString.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_EXT_STRING]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const bool& EntryData::boolValue() const
{
    BSLS_ASSERT(SELECTION_ID_BOOL_VALUE == d_selectionId);
    return d_bool.object();
}

inline
const double& EntryData::doubleValue() const
{
    BSLS_ASSERT(SELECTION_ID_DOUBLE_VALUE == d_selectionId);
    return d_double.object();
}

inline
const bsls::Types::Int64& EntryData::intValue() const
{
    BSLS_ASSERT(SELECTION_ID_INT_VALUE == d_selectionId);
    return d_int.object();
}

inline
const bsl::vector<bsls::Types::Int64>& EntryData::intList() const
{
    BSLS_ASSERT(SELECTION_ID_INT_LIST == d_selectionId);
    return d_intList.object();
}

inline
const bsl::string& EntryData::charValue() const
{
    BSLS_ASSERT(SELECTION_ID_CHAR_VALUE == d_selectionId);
    return d_char.object();
}

inline
const bsl::string& EntryData::str() const
{
    BSLS_ASSERT(SELECTION_ID_STR == d_selectionId);
    return d_str.object();
}

inline
const bsl::vector<bsls::Types::Int64>& EntryData::extIntList() const
{
    BSLS_ASSERT(SELECTION_ID_EXT_INT_LIST == d_selectionId);
    return d_extIntList.object();
}

inline
const bsl::string& EntryData::extString() const
{
    BSLS_ASSERT(SELECTION_ID_EXT_STRING == d_selectionId);
    return d_extString.object();
}

inline
bool EntryData::isBoolValueValue() const
{
    return SELECTION_ID_BOOL_VALUE == d_selectionId;
}

inline
bool EntryData::isDoubleValueValue() const
{
    return SELECTION_ID_DOUBLE_VALUE == d_selectionId;
}

inline
bool EntryData::isIntValueValue() const
{
    return SELECTION_ID_INT_VALUE == d_selectionId;
}

inline
bool EntryData::isIntListValue() const
{
    return SELECTION_ID_INT_LIST == d_selectionId;
}

inline
bool EntryData::isCharValueValue() const
{
    return SELECTION_ID_CHAR_VALUE == d_selectionId;
}

inline
bool EntryData::isStrValue() const
{
    return SELECTION_ID_STR == d_selectionId;
}

inline
bool EntryData::isExtIntListValue() const
{
    return SELECTION_ID_EXT_INT_LIST == d_selectionId;
}

inline
bool EntryData::isExtStringValue() const
{
    return SELECTION_ID_EXT_STRING == d_selectionId;
}

inline
bool EntryData::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
}


                          // -----------------------                           
                          // class ErrorInfoResponse                           
                          // -----------------------                           

// CLASS METHODS
inline
int ErrorInfoResponse::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& ErrorInfoResponse::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_code, 1);
            bdex_InStreamFunctions::streamIn(stream, d_message, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int ErrorInfoResponse::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_code, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CODE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_message, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MESSAGE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int ErrorInfoResponse::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_CODE: {
        return manipulator(&d_code, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CODE]);
      } break;
      case ATTRIBUTE_ID_MESSAGE: {
        return manipulator(&d_message, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MESSAGE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int ErrorInfoResponse::manipulateAttribute(
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
int& ErrorInfoResponse::code()
{
    return d_code;
}

inline
bsl::string& ErrorInfoResponse::message()
{
    return d_message;
}

// ACCESSORS
template <class STREAM>
STREAM& ErrorInfoResponse::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_code, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_message, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int ErrorInfoResponse::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_code, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CODE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_message, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MESSAGE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int ErrorInfoResponse::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_CODE: {
        return accessor(d_code, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CODE]);
      } break;
      case ATTRIBUTE_ID_MESSAGE: {
        return accessor(d_message, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MESSAGE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int ErrorInfoResponse::accessAttribute(
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
int ErrorInfoResponse::code() const
{
    return d_code;
}

inline
const bsl::string& ErrorInfoResponse::message() const
{
    return d_message;
}



                          // -----------------------                           
                          // class EvaluateOverrides                           
                          // -----------------------                           

// CLASS METHODS
inline
int EvaluateOverrides::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& EvaluateOverrides::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_p6uuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_p3firm, 1);
            bdex_InStreamFunctions::streamIn(stream, d_p3cust, 1);
            bdex_InStreamFunctions::streamIn(stream, d_p3prcnum, 1);
            bdex_InStreamFunctions::streamIn(stream, d_p3sn, 1);
            bdex_InStreamFunctions::streamIn(stream, d_p9departmentcode, 1);
            bdex_InStreamFunctions::streamIn(stream, d_pindex, 1);
            bdex_InStreamFunctions::streamIn(stream, d_uuidprc, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int EvaluateOverrides::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_p6uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P6UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_p3firm, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3FIRM]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_p3cust, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3CUST]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_p3prcnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3PRCNUM]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_p3sn, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3SN]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_p9departmentcode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P9DEPARTMENTCODE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_pindex, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PINDEX]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_uuidprc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUIDPRC]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int EvaluateOverrides::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_P6UUID: {
        return manipulator(&d_p6uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P6UUID]);
      } break;
      case ATTRIBUTE_ID_P3FIRM: {
        return manipulator(&d_p3firm, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3FIRM]);
      } break;
      case ATTRIBUTE_ID_P3CUST: {
        return manipulator(&d_p3cust, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3CUST]);
      } break;
      case ATTRIBUTE_ID_P3PRCNUM: {
        return manipulator(&d_p3prcnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3PRCNUM]);
      } break;
      case ATTRIBUTE_ID_P3SN: {
        return manipulator(&d_p3sn, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3SN]);
      } break;
      case ATTRIBUTE_ID_P9DEPARTMENTCODE: {
        return manipulator(&d_p9departmentcode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P9DEPARTMENTCODE]);
      } break;
      case ATTRIBUTE_ID_PINDEX: {
        return manipulator(&d_pindex, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PINDEX]);
      } break;
      case ATTRIBUTE_ID_UUIDPRC: {
        return manipulator(&d_uuidprc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUIDPRC]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int EvaluateOverrides::manipulateAttribute(
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
bdeut_NullableValue<int>& EvaluateOverrides::p6uuid()
{
    return d_p6uuid;
}

inline
bdeut_NullableValue<int>& EvaluateOverrides::p3firm()
{
    return d_p3firm;
}

inline
bdeut_NullableValue<int>& EvaluateOverrides::p3cust()
{
    return d_p3cust;
}

inline
bdeut_NullableValue<int>& EvaluateOverrides::p3prcnum()
{
    return d_p3prcnum;
}

inline
bdeut_NullableValue<int>& EvaluateOverrides::p3sn()
{
    return d_p3sn;
}

inline
bdeut_NullableValue<bsl::string>& EvaluateOverrides::p9departmentcode()
{
    return d_p9departmentcode;
}

inline
bdeut_NullableValue<int>& EvaluateOverrides::pindex()
{
    return d_pindex;
}

inline
bdeut_NullableValue<int>& EvaluateOverrides::uuidprc()
{
    return d_uuidprc;
}

// ACCESSORS
template <class STREAM>
STREAM& EvaluateOverrides::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_p6uuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_p3firm, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_p3cust, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_p3prcnum, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_p3sn, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_p9departmentcode, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_pindex, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_uuidprc, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int EvaluateOverrides::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_p6uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P6UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_p3firm, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3FIRM]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_p3cust, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3CUST]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_p3prcnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3PRCNUM]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_p3sn, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3SN]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_p9departmentcode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P9DEPARTMENTCODE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_pindex, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PINDEX]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_uuidprc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUIDPRC]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int EvaluateOverrides::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_P6UUID: {
        return accessor(d_p6uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P6UUID]);
      } break;
      case ATTRIBUTE_ID_P3FIRM: {
        return accessor(d_p3firm, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3FIRM]);
      } break;
      case ATTRIBUTE_ID_P3CUST: {
        return accessor(d_p3cust, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3CUST]);
      } break;
      case ATTRIBUTE_ID_P3PRCNUM: {
        return accessor(d_p3prcnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3PRCNUM]);
      } break;
      case ATTRIBUTE_ID_P3SN: {
        return accessor(d_p3sn, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P3SN]);
      } break;
      case ATTRIBUTE_ID_P9DEPARTMENTCODE: {
        return accessor(d_p9departmentcode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_P9DEPARTMENTCODE]);
      } break;
      case ATTRIBUTE_ID_PINDEX: {
        return accessor(d_pindex, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PINDEX]);
      } break;
      case ATTRIBUTE_ID_UUIDPRC: {
        return accessor(d_uuidprc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUIDPRC]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int EvaluateOverrides::accessAttribute(
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
const bdeut_NullableValue<int>& EvaluateOverrides::p6uuid() const
{
    return d_p6uuid;
}

inline
const bdeut_NullableValue<int>& EvaluateOverrides::p3firm() const
{
    return d_p3firm;
}

inline
const bdeut_NullableValue<int>& EvaluateOverrides::p3cust() const
{
    return d_p3cust;
}

inline
const bdeut_NullableValue<int>& EvaluateOverrides::p3prcnum() const
{
    return d_p3prcnum;
}

inline
const bdeut_NullableValue<int>& EvaluateOverrides::p3sn() const
{
    return d_p3sn;
}

inline
const bdeut_NullableValue<bsl::string>& EvaluateOverrides::p9departmentcode() const
{
    return d_p9departmentcode;
}

inline
const bdeut_NullableValue<int>& EvaluateOverrides::pindex() const
{
    return d_pindex;
}

inline
const bdeut_NullableValue<int>& EvaluateOverrides::uuidprc() const
{
    return d_uuidprc;
}



                            // -------------------                             
                            // class EventTypeEnum                             
                            // -------------------                             

// CREATORS
inline
EventTypeEnum::EventTypeEnum()
: d_value()
{
}

inline
EventTypeEnum::EventTypeEnum(const EventTypeEnum& original)
: d_value(original.d_value)
{
}

inline
EventTypeEnum::EventTypeEnum(const bsls::Types::Int64& value)
: d_value(value)
{
    BSLS_ASSERT(checkRestrictions(value) == 0);
}

inline
EventTypeEnum::~EventTypeEnum()
{
}

// MANIPULATORS
inline
EventTypeEnum& EventTypeEnum::operator=(const EventTypeEnum& rhs)
{
    d_value = rhs.d_value;
    return *this;
}

template <class STREAM>
STREAM& EventTypeEnum::bdexStreamIn(STREAM& stream, int version)
{
    bsls::Types::Int64 temp;

    bdex_InStreamFunctions::streamIn(stream, temp, version);

    if (!stream) {
        return stream;
    }

    if (fromInt64(temp)!=0) {
        stream.invalidate();
    }

    return stream;
}

inline
int EventTypeEnum::fromAggregate(const bcem_Aggregate& aggregate)
{
    return fromInt64(aggregate.asInt64());
}

inline
void EventTypeEnum::reset()
{
    bdeat_ValueTypeFunctions::reset(&d_value);
}

inline
int EventTypeEnum::fromInt64(const bsls::Types::Int64& value)
{
    int ret = checkRestrictions(value);
    if (0 == ret) {
        d_value = value;
    }

    return ret;
}

// ACCESSORS
template <class STREAM>
STREAM& EventTypeEnum::bdexStreamOut(STREAM& stream, int version) const
{
    return bdex_OutStreamFunctions::streamOut(stream, d_value, version);
}

inline
int EventTypeEnum::toAggregate(bcem_Aggregate *result) const
{
    return result->setValue(toInt64()).isError();
}

inline
int EventTypeEnum::maxSupportedBdexVersion() const
{
    return bdex_VersionFunctions::maxSupportedVersion(d_value);
}

inline
bsl::ostream& EventTypeEnum::print(bsl::ostream& stream,
                                 int           level,
                                 int           spacesPerLevel) const
{
    return bdeu_PrintMethods::print(stream, d_value, level, spacesPerLevel);
}

inline
const bsls::Types::Int64& EventTypeEnum::toInt64() const
{
    return d_value;
}



                                // -----------                                 
                                // class Group                                 
                                // -----------                                 

// CLASS METHODS
inline
int Group::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& Group::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_groupId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_groupDescription, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int Group::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_groupId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_groupDescription, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int Group::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_GROUP_ID: {
        return manipulator(&d_groupId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_ID]);
      } break;
      case ATTRIBUTE_ID_GROUP_DESCRIPTION: {
        return manipulator(&d_groupDescription, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_DESCRIPTION]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int Group::manipulateAttribute(
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
int& Group::groupId()
{
    return d_groupId;
}

inline
bsl::string& Group::groupDescription()
{
    return d_groupDescription;
}

// ACCESSORS
template <class STREAM>
STREAM& Group::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_groupId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_groupDescription, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int Group::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_groupId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_groupDescription, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int Group::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_GROUP_ID: {
        return accessor(d_groupId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_ID]);
      } break;
      case ATTRIBUTE_ID_GROUP_DESCRIPTION: {
        return accessor(d_groupDescription, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_GROUP_DESCRIPTION]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int Group::accessAttribute(
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
int Group::groupId() const
{
    return d_groupId;
}

inline
const bsl::string& Group::groupDescription() const
{
    return d_groupDescription;
}



                           // ---------------------                            
                           // class InheritanceType                            
                           // ---------------------                            

// CLASS METHODS
inline
int InheritanceType::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int InheritanceType::fromString(Value *result, const bsl::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
bsl::ostream& InheritanceType::print(bsl::ostream&      stream,
                                 InheritanceType::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& InheritanceType::bdexStreamIn(STREAM&             stream,
                                   InheritanceType::Value& value,
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
STREAM& InheritanceType::bdexStreamOut(STREAM&              stream,
                                    InheritanceType::Value value,
                                    int                version)
{
    switch (version) {
      case 1: {
        stream.putInt32(value);  // Write the value as an int
      } break;
    }
    return stream;
}



                        // ----------------------------                        
                        // class MarkForDeletionRequest                        
                        // ----------------------------                        

// CLASS METHODS
inline
int MarkForDeletionRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& MarkForDeletionRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateUuid, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int MarkForDeletionRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_UUID]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int MarkForDeletionRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_UUID: {
        return manipulator(&d_updateUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_UUID]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int MarkForDeletionRequest::manipulateAttribute(
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
int& MarkForDeletionRequest::entryId()
{
    return d_entryId;
}

inline
int& MarkForDeletionRequest::updateUuid()
{
    return d_updateUuid;
}

// ACCESSORS
template <class STREAM>
STREAM& MarkForDeletionRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateUuid, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int MarkForDeletionRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_UUID]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int MarkForDeletionRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_UUID: {
        return accessor(d_updateUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_UUID]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int MarkForDeletionRequest::accessAttribute(
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
int MarkForDeletionRequest::entryId() const
{
    return d_entryId;
}

inline
int MarkForDeletionRequest::updateUuid() const
{
    return d_updateUuid;
}



                             // -----------------                              
                             // class MoveRequest                              
                             // -----------------                              

// CLASS METHODS
inline
int MoveRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& MoveRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_registryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_moveToNodeId, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int MoveRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_moveToNodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MOVE_TO_NODE_ID]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int MoveRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_MOVE_TO_NODE_ID: {
        return manipulator(&d_moveToNodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MOVE_TO_NODE_ID]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int MoveRequest::manipulateAttribute(
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
int& MoveRequest::registryId()
{
    return d_registryId;
}

inline
int& MoveRequest::moveToNodeId()
{
    return d_moveToNodeId;
}

// ACCESSORS
template <class STREAM>
STREAM& MoveRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_registryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_moveToNodeId, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int MoveRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_moveToNodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MOVE_TO_NODE_ID]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int MoveRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_MOVE_TO_NODE_ID: {
        return accessor(d_moveToNodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MOVE_TO_NODE_ID]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int MoveRequest::accessAttribute(
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
int MoveRequest::registryId() const
{
    return d_registryId;
}

inline
int MoveRequest::moveToNodeId() const
{
    return d_moveToNodeId;
}



                                 // ----------                                 
                                 // class Node                                 
                                 // ----------                                 

// CLASS METHODS
inline
int Node::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& Node::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_name, 1);
            bdex_InStreamFunctions::streamIn(stream, d_id, 1);
            bdex_InStreamFunctions::streamIn(stream, d_type, 1);
            bdex_InStreamFunctions::streamIn(stream, d_description, 1);
            bdex_InStreamFunctions::streamIn(stream, d_hasExpired, 1);
            bdex_InStreamFunctions::streamIn(stream, d_expiryTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_children, 1);
            bdex_InStreamFunctions::streamIn(stream, d_obsoleteTraceEnabled, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int Node::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_children, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CHILDREN]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_obsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBSOLETE_TRACE_ENABLED]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int Node::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NAME: {
        return manipulator(&d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
      } break;
      case ATTRIBUTE_ID_ID: {
        return manipulator(&d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_DESCRIPTION: {
        return manipulator(&d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
      } break;
      case ATTRIBUTE_ID_HAS_EXPIRED: {
        return manipulator(&d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_CHILDREN: {
        return manipulator(&d_children, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CHILDREN]);
      } break;
      case ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED: {
        return manipulator(&d_obsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBSOLETE_TRACE_ENABLED]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int Node::manipulateAttribute(
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
bsl::string& Node::name()
{
    return d_name;
}

inline
int& Node::id()
{
    return d_id;
}

inline
int& Node::type()
{
    return d_type;
}

inline
bsl::string& Node::description()
{
    return d_description;
}

inline
bool& Node::hasExpired()
{
    return d_hasExpired;
}

inline
bsl::string& Node::expiryTsp()
{
    return d_expiryTsp;
}

inline
bsl::vector<Node>& Node::children()
{
    return d_children;
}

inline
bool& Node::obsoleteTraceEnabled()
{
    return d_obsoleteTraceEnabled;
}

// ACCESSORS
template <class STREAM>
STREAM& Node::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_name, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_id, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_type, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_description, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_hasExpired, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_expiryTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_children, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_obsoleteTraceEnabled, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int Node::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_children, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CHILDREN]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_obsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBSOLETE_TRACE_ENABLED]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int Node::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NAME: {
        return accessor(d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
      } break;
      case ATTRIBUTE_ID_ID: {
        return accessor(d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_DESCRIPTION: {
        return accessor(d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
      } break;
      case ATTRIBUTE_ID_HAS_EXPIRED: {
        return accessor(d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_CHILDREN: {
        return accessor(d_children, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CHILDREN]);
      } break;
      case ATTRIBUTE_ID_OBSOLETE_TRACE_ENABLED: {
        return accessor(d_obsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBSOLETE_TRACE_ENABLED]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int Node::accessAttribute(
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
const bsl::string& Node::name() const
{
    return d_name;
}

inline
int Node::id() const
{
    return d_id;
}

inline
int Node::type() const
{
    return d_type;
}

inline
const bsl::string& Node::description() const
{
    return d_description;
}

inline
bool Node::hasExpired() const
{
    return d_hasExpired;
}

inline
const bsl::string& Node::expiryTsp() const
{
    return d_expiryTsp;
}

inline
const bsl::vector<Node>& Node::children() const
{
    return d_children;
}

inline
bool Node::obsoleteTraceEnabled() const
{
    return d_obsoleteTraceEnabled;
}



                            // -------------------                             
                            // class NodePrivilege                             
                            // -------------------                             

// CLASS METHODS
inline
int NodePrivilege::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& NodePrivilege::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_isPrivilegeAdmin, 1);
            bdex_InStreamFunctions::streamIn(stream, d_canUpdateProd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_canUpdateDesc, 1);
            bdex_InStreamFunctions::streamIn(stream, d_canReleaseCode, 1);
            bdex_InStreamFunctions::streamIn(stream, d_canUpdateDev, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int NodePrivilege::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_isPrivilegeAdmin, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRIVILEGE_ADMIN]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_canUpdateProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_PROD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_canUpdateDesc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DESC]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_canReleaseCode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_RELEASE_CODE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_canUpdateDev, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DEV]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int NodePrivilege::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN: {
        return manipulator(&d_isPrivilegeAdmin, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRIVILEGE_ADMIN]);
      } break;
      case ATTRIBUTE_ID_CAN_UPDATE_PROD: {
        return manipulator(&d_canUpdateProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_PROD]);
      } break;
      case ATTRIBUTE_ID_CAN_UPDATE_DESC: {
        return manipulator(&d_canUpdateDesc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DESC]);
      } break;
      case ATTRIBUTE_ID_CAN_RELEASE_CODE: {
        return manipulator(&d_canReleaseCode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_RELEASE_CODE]);
      } break;
      case ATTRIBUTE_ID_CAN_UPDATE_DEV: {
        return manipulator(&d_canUpdateDev, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DEV]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int NodePrivilege::manipulateAttribute(
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
bool& NodePrivilege::isPrivilegeAdmin()
{
    return d_isPrivilegeAdmin;
}

inline
bool& NodePrivilege::canUpdateProd()
{
    return d_canUpdateProd;
}

inline
bool& NodePrivilege::canUpdateDesc()
{
    return d_canUpdateDesc;
}

inline
bool& NodePrivilege::canReleaseCode()
{
    return d_canReleaseCode;
}

inline
bool& NodePrivilege::canUpdateDev()
{
    return d_canUpdateDev;
}

// ACCESSORS
template <class STREAM>
STREAM& NodePrivilege::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_isPrivilegeAdmin, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_canUpdateProd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_canUpdateDesc, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_canReleaseCode, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_canUpdateDev, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int NodePrivilege::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_isPrivilegeAdmin, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRIVILEGE_ADMIN]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_canUpdateProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_PROD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_canUpdateDesc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DESC]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_canReleaseCode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_RELEASE_CODE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_canUpdateDev, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DEV]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int NodePrivilege::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_IS_PRIVILEGE_ADMIN: {
        return accessor(d_isPrivilegeAdmin, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRIVILEGE_ADMIN]);
      } break;
      case ATTRIBUTE_ID_CAN_UPDATE_PROD: {
        return accessor(d_canUpdateProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_PROD]);
      } break;
      case ATTRIBUTE_ID_CAN_UPDATE_DESC: {
        return accessor(d_canUpdateDesc, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DESC]);
      } break;
      case ATTRIBUTE_ID_CAN_RELEASE_CODE: {
        return accessor(d_canReleaseCode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_RELEASE_CODE]);
      } break;
      case ATTRIBUTE_ID_CAN_UPDATE_DEV: {
        return accessor(d_canUpdateDev, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_UPDATE_DEV]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int NodePrivilege::accessAttribute(
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
bool NodePrivilege::isPrivilegeAdmin() const
{
    return d_isPrivilegeAdmin;
}

inline
bool NodePrivilege::canUpdateProd() const
{
    return d_canUpdateProd;
}

inline
bool NodePrivilege::canUpdateDesc() const
{
    return d_canUpdateDesc;
}

inline
bool NodePrivilege::canReleaseCode() const
{
    return d_canReleaseCode;
}

inline
bool NodePrivilege::canUpdateDev() const
{
    return d_canUpdateDev;
}



                             // ------------------                             
                             // class OverrideType                             
                             // ------------------                             

// CLASS METHODS
inline
int OverrideType::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int OverrideType::fromString(Value *result, const bsl::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
bsl::ostream& OverrideType::print(bsl::ostream&      stream,
                                 OverrideType::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& OverrideType::bdexStreamIn(STREAM&             stream,
                                   OverrideType::Value& value,
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
STREAM& OverrideType::bdexStreamOut(STREAM&              stream,
                                    OverrideType::Value value,
                                    int                version)
{
    switch (version) {
      case 1: {
        stream.putInt32(value);  // Write the value as an int
      } break;
    }
    return stream;
}



                         // --------------------------                         
                         // class RelatedTicketRequest                         
                         // --------------------------                         

// CLASS METHODS
inline
int RelatedTicketRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& RelatedTicketRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_type, 1);
            bdex_InStreamFunctions::streamIn(stream, d_number, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int RelatedTicketRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_number, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUMBER]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int RelatedTicketRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TYPE: {
        return manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_NUMBER: {
        return manipulator(&d_number, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUMBER]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int RelatedTicketRequest::manipulateAttribute(
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
bsl::string& RelatedTicketRequest::type()
{
    return d_type;
}

inline
int& RelatedTicketRequest::number()
{
    return d_number;
}

// ACCESSORS
template <class STREAM>
STREAM& RelatedTicketRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_type, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_number, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int RelatedTicketRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_number, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUMBER]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int RelatedTicketRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TYPE: {
        return accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_NUMBER: {
        return accessor(d_number, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NUMBER]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int RelatedTicketRequest::accessAttribute(
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
const bsl::string& RelatedTicketRequest::type() const
{
    return d_type;
}

inline
int RelatedTicketRequest::number() const
{
    return d_number;
}



                           // ----------------------                           
                           // class SearchByContacts                           
                           // ----------------------                           

// CLASS METHODS
inline
int SearchByContacts::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& SearchByContacts::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_uuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_contactType, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int SearchByContacts::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_contactType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACT_TYPE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int SearchByContacts::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_UUID: {
        return manipulator(&d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
      } break;
      case ATTRIBUTE_ID_CONTACT_TYPE: {
        return manipulator(&d_contactType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACT_TYPE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int SearchByContacts::manipulateAttribute(
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
int& SearchByContacts::uuid()
{
    return d_uuid;
}

inline
int& SearchByContacts::contactType()
{
    return d_contactType;
}

// ACCESSORS
template <class STREAM>
STREAM& SearchByContacts::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_uuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_contactType, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int SearchByContacts::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_contactType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACT_TYPE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int SearchByContacts::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_UUID: {
        return accessor(d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
      } break;
      case ATTRIBUTE_ID_CONTACT_TYPE: {
        return accessor(d_contactType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACT_TYPE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int SearchByContacts::accessAttribute(
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
int SearchByContacts::uuid() const
{
    return d_uuid;
}

inline
int SearchByContacts::contactType() const
{
    return d_contactType;
}



                           // ----------------------                           
                           // class SearchByKeywords                           
                           // ----------------------                           

// CLASS METHODS
inline
int SearchByKeywords::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& SearchByKeywords::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_keywords, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int SearchByKeywords::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int SearchByKeywords::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_KEYWORDS: {
        return manipulator(&d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int SearchByKeywords::manipulateAttribute(
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
bsl::vector<bsl::string>& SearchByKeywords::keywords()
{
    return d_keywords;
}

// ACCESSORS
template <class STREAM>
STREAM& SearchByKeywords::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_keywords, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int SearchByKeywords::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int SearchByKeywords::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_KEYWORDS: {
        return accessor(d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int SearchByKeywords::accessAttribute(
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
const bsl::vector<bsl::string>& SearchByKeywords::keywords() const
{
    return d_keywords;
}



                             // ------------------                             
                             // class TodoListItem                             
                             // ------------------                             

// CLASS METHODS
inline
int TodoListItem::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& TodoListItem::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_ticketNumber, 1);
            bdex_InStreamFunctions::streamIn(stream, d_ticketType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_drqsType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_status, 1);
            bdex_InStreamFunctions::streamIn(stream, d_summary, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int TodoListItem::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_drqsType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_status, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_summary, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SUMMARY]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int TodoListItem::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TICKET_NUMBER: {
        return manipulator(&d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
      } break;
      case ATTRIBUTE_ID_TICKET_TYPE: {
        return manipulator(&d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
      } break;
      case ATTRIBUTE_ID_DRQS_TYPE: {
        return manipulator(&d_drqsType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_TYPE]);
      } break;
      case ATTRIBUTE_ID_STATUS: {
        return manipulator(&d_status, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS]);
      } break;
      case ATTRIBUTE_ID_SUMMARY: {
        return manipulator(&d_summary, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SUMMARY]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int TodoListItem::manipulateAttribute(
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
int& TodoListItem::ticketNumber()
{
    return d_ticketNumber;
}

inline
bsl::string& TodoListItem::ticketType()
{
    return d_ticketType;
}

inline
bsl::string& TodoListItem::drqsType()
{
    return d_drqsType;
}

inline
bsl::string& TodoListItem::status()
{
    return d_status;
}

inline
bsl::string& TodoListItem::summary()
{
    return d_summary;
}

// ACCESSORS
template <class STREAM>
STREAM& TodoListItem::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_ticketNumber, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_ticketType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_drqsType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_status, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_summary, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int TodoListItem::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_drqsType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_status, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_summary, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SUMMARY]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int TodoListItem::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TICKET_NUMBER: {
        return accessor(d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
      } break;
      case ATTRIBUTE_ID_TICKET_TYPE: {
        return accessor(d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
      } break;
      case ATTRIBUTE_ID_DRQS_TYPE: {
        return accessor(d_drqsType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_TYPE]);
      } break;
      case ATTRIBUTE_ID_STATUS: {
        return accessor(d_status, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_STATUS]);
      } break;
      case ATTRIBUTE_ID_SUMMARY: {
        return accessor(d_summary, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SUMMARY]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int TodoListItem::accessAttribute(
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
int TodoListItem::ticketNumber() const
{
    return d_ticketNumber;
}

inline
const bsl::string& TodoListItem::ticketType() const
{
    return d_ticketType;
}

inline
const bsl::string& TodoListItem::drqsType() const
{
    return d_drqsType;
}

inline
const bsl::string& TodoListItem::status() const
{
    return d_status;
}

inline
const bsl::string& TodoListItem::summary() const
{
    return d_summary;
}



                               // --------------                               
                               // class UserData                               
                               // --------------                               

// CLASS METHODS
inline
int UserData::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& UserData::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_userFlags, 1);
            bdex_InStreamFunctions::streamIn(stream, d_userNumber, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int UserData::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_userFlags, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_FLAGS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_userNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_NUMBER]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int UserData::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_USER_FLAGS: {
        return manipulator(&d_userFlags, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_FLAGS]);
      } break;
      case ATTRIBUTE_ID_USER_NUMBER: {
        return manipulator(&d_userNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_NUMBER]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int UserData::manipulateAttribute(
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
bsl::vector<bsls::Types::Int64>& UserData::userFlags()
{
    return d_userFlags;
}

inline
bsls::Types::Int64& UserData::userNumber()
{
    return d_userNumber;
}

// ACCESSORS
template <class STREAM>
STREAM& UserData::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_userFlags, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_userNumber, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int UserData::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_userFlags, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_FLAGS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_userNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_NUMBER]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int UserData::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_USER_FLAGS: {
        return accessor(d_userFlags, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_FLAGS]);
      } break;
      case ATTRIBUTE_ID_USER_NUMBER: {
        return accessor(d_userNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_NUMBER]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int UserData::accessAttribute(
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
const bsl::vector<bsls::Types::Int64>& UserData::userFlags() const
{
    return d_userFlags;
}

inline
bsls::Types::Int64 UserData::userNumber() const
{
    return d_userNumber;
}



                             // ------------------                             
                             // class ValueRequest                             
                             // ------------------                             

// CLASS METHODS
inline
int ValueRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& ValueRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_version, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int ValueRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int ValueRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_VERSION: {
        return manipulator(&d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int ValueRequest::manipulateAttribute(
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
int& ValueRequest::entryId()
{
    return d_entryId;
}

inline
int& ValueRequest::version()
{
    return d_version;
}

// ACCESSORS
template <class STREAM>
STREAM& ValueRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_version, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int ValueRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int ValueRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_VERSION: {
        return accessor(d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int ValueRequest::accessAttribute(
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
int ValueRequest::entryId() const
{
    return d_entryId;
}

inline
int ValueRequest::version() const
{
    return d_version;
}



                              // ---------------                               
                              // class ValueType                               
                              // ---------------                               

// CLASS METHODS
inline
int ValueType::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1
}

inline
int ValueType::fromString(Value *result, const bsl::string& string)
{
    return fromString(result, string.c_str(), string.length());
}

inline
bsl::ostream& ValueType::print(bsl::ostream&      stream,
                                 ValueType::Value value)
{
    return stream << toString(value);
}

template <class STREAM>
STREAM& ValueType::bdexStreamIn(STREAM&             stream,
                                   ValueType::Value& value,
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
STREAM& ValueType::bdexStreamOut(STREAM&              stream,
                                    ValueType::Value value,
                                    int                version)
{
    switch (version) {
      case 1: {
        stream.putInt32(value);  // Write the value as an int
      } break;
    }
    return stream;
}



                              // ----------------                              
                              // class VersionTsp                              
                              // ----------------                              

// CLASS METHODS
inline
int VersionTsp::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& VersionTsp::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_version, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateEpoch, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prqsNumber, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prqsStatus, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int VersionTsp::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateEpoch, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_EPOCH]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int VersionTsp::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_VERSION: {
        return manipulator(&d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
      } break;
      case ATTRIBUTE_ID_UPDATE_EPOCH: {
        return manipulator(&d_updateEpoch, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_EPOCH]);
      } break;
      case ATTRIBUTE_ID_PRQS_NUMBER: {
        return manipulator(&d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
      } break;
      case ATTRIBUTE_ID_PRQS_STATUS: {
        return manipulator(&d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int VersionTsp::manipulateAttribute(
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
bsls::Types::Int64& VersionTsp::version()
{
    return d_version;
}

inline
int& VersionTsp::updateEpoch()
{
    return d_updateEpoch;
}

inline
int& VersionTsp::prqsNumber()
{
    return d_prqsNumber;
}

inline
bsl::string& VersionTsp::prqsStatus()
{
    return d_prqsStatus;
}

inline
bsl::string& VersionTsp::updateTsp()
{
    return d_updateTsp;
}

// ACCESSORS
template <class STREAM>
STREAM& VersionTsp::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_version, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateEpoch, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prqsNumber, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prqsStatus, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int VersionTsp::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateEpoch, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_EPOCH]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int VersionTsp::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_VERSION: {
        return accessor(d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
      } break;
      case ATTRIBUTE_ID_UPDATE_EPOCH: {
        return accessor(d_updateEpoch, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_EPOCH]);
      } break;
      case ATTRIBUTE_ID_PRQS_NUMBER: {
        return accessor(d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
      } break;
      case ATTRIBUTE_ID_PRQS_STATUS: {
        return accessor(d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int VersionTsp::accessAttribute(
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
bsls::Types::Int64 VersionTsp::version() const
{
    return d_version;
}

inline
int VersionTsp::updateEpoch() const
{
    return d_updateEpoch;
}

inline
int VersionTsp::prqsNumber() const
{
    return d_prqsNumber;
}

inline
const bsl::string& VersionTsp::prqsStatus() const
{
    return d_prqsStatus;
}

inline
const bsl::string& VersionTsp::updateTsp() const
{
    return d_updateTsp;
}



                                 // ----------                                 
                                 // class Void                                 
                                 // ----------                                 

// CLASS METHODS
inline
int Void::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& Void::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int Void::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret = 0;

    return ret;
}

template <class MANIPULATOR>
int Void::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int Void::manipulateAttribute(
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

// ACCESSORS
template <class STREAM>
STREAM& Void::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int Void::accessAttributes(ACCESSOR& accessor) const
{
    int ret = 0;

    return ret;
}

template <class ACCESSOR>
int Void::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int Void::accessAttribute(
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



                             // -----------------                              
                             // class AuditRecord                              
                             // -----------------                              

// CLASS METHODS
inline
int AuditRecord::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& AuditRecord::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prqsNumber, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prqsStatus, 1);
            bdex_InStreamFunctions::streamIn(stream, d_uuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_eventType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_oldValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_newValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_ticketType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_ticketNumber, 1);
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
int AuditRecord::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_eventType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EVENT_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_oldValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OLD_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_newValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NEW_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
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
int AuditRecord::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_PRQS_NUMBER: {
        return manipulator(&d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
      } break;
      case ATTRIBUTE_ID_PRQS_STATUS: {
        return manipulator(&d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
      } break;
      case ATTRIBUTE_ID_UUID: {
        return manipulator(&d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_EVENT_TYPE: {
        return manipulator(&d_eventType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EVENT_TYPE]);
      } break;
      case ATTRIBUTE_ID_OLD_VALUE: {
        return manipulator(&d_oldValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OLD_VALUE]);
      } break;
      case ATTRIBUTE_ID_NEW_VALUE: {
        return manipulator(&d_newValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NEW_VALUE]);
      } break;
      case ATTRIBUTE_ID_TICKET_TYPE: {
        return manipulator(&d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
      } break;
      case ATTRIBUTE_ID_TICKET_NUMBER: {
        return manipulator(&d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
      } break;
      case ATTRIBUTE_ID_LOG_NOTE: {
        return manipulator(&d_logNote, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int AuditRecord::manipulateAttribute(
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
bsls::Types::Int64& AuditRecord::entryId()
{
    return d_entryId;
}

inline
bsls::Types::Int64& AuditRecord::prqsNumber()
{
    return d_prqsNumber;
}

inline
bsl::string& AuditRecord::prqsStatus()
{
    return d_prqsStatus;
}

inline
bsls::Types::Int64& AuditRecord::uuid()
{
    return d_uuid;
}

inline
bsl::string& AuditRecord::updateTsp()
{
    return d_updateTsp;
}

inline
EventTypeEnum& AuditRecord::eventType()
{
    return d_eventType;
}

inline
bsls::Types::Int64& AuditRecord::oldValue()
{
    return d_oldValue;
}

inline
bsls::Types::Int64& AuditRecord::newValue()
{
    return d_newValue;
}

inline
bsls::Types::Int64& AuditRecord::ticketType()
{
    return d_ticketType;
}

inline
bsls::Types::Int64& AuditRecord::ticketNumber()
{
    return d_ticketNumber;
}

inline
bsl::string& AuditRecord::logNote()
{
    return d_logNote;
}

// ACCESSORS
template <class STREAM>
STREAM& AuditRecord::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prqsNumber, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prqsStatus, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_uuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_eventType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_oldValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_newValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_ticketType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_ticketNumber, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_logNote, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int AuditRecord::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_eventType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EVENT_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_oldValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OLD_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_newValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NEW_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
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
int AuditRecord::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_PRQS_NUMBER: {
        return accessor(d_prqsNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_NUMBER]);
      } break;
      case ATTRIBUTE_ID_PRQS_STATUS: {
        return accessor(d_prqsStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_STATUS]);
      } break;
      case ATTRIBUTE_ID_UUID: {
        return accessor(d_uuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UUID]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_EVENT_TYPE: {
        return accessor(d_eventType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EVENT_TYPE]);
      } break;
      case ATTRIBUTE_ID_OLD_VALUE: {
        return accessor(d_oldValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OLD_VALUE]);
      } break;
      case ATTRIBUTE_ID_NEW_VALUE: {
        return accessor(d_newValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NEW_VALUE]);
      } break;
      case ATTRIBUTE_ID_TICKET_TYPE: {
        return accessor(d_ticketType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_TYPE]);
      } break;
      case ATTRIBUTE_ID_TICKET_NUMBER: {
        return accessor(d_ticketNumber, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TICKET_NUMBER]);
      } break;
      case ATTRIBUTE_ID_LOG_NOTE: {
        return accessor(d_logNote, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LOG_NOTE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int AuditRecord::accessAttribute(
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
bsls::Types::Int64 AuditRecord::entryId() const
{
    return d_entryId;
}

inline
bsls::Types::Int64 AuditRecord::prqsNumber() const
{
    return d_prqsNumber;
}

inline
const bsl::string& AuditRecord::prqsStatus() const
{
    return d_prqsStatus;
}

inline
bsls::Types::Int64 AuditRecord::uuid() const
{
    return d_uuid;
}

inline
const bsl::string& AuditRecord::updateTsp() const
{
    return d_updateTsp;
}

inline
const EventTypeEnum& AuditRecord::eventType() const
{
    return d_eventType;
}

inline
bsls::Types::Int64 AuditRecord::oldValue() const
{
    return d_oldValue;
}

inline
bsls::Types::Int64 AuditRecord::newValue() const
{
    return d_newValue;
}

inline
bsls::Types::Int64 AuditRecord::ticketType() const
{
    return d_ticketType;
}

inline
bsls::Types::Int64 AuditRecord::ticketNumber() const
{
    return d_ticketNumber;
}

inline
const bsl::string& AuditRecord::logNote() const
{
    return d_logNote;
}



                              // ---------------                               
                              // class EntryInfo                               
                              // ---------------                               

// CLASS METHODS
inline
int EntryInfo::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& EntryInfo::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_currentVersion, 1);
            ValueType::bdexStreamIn(stream, d_valueType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_apiName, 1);
            ApiStatus::bdexStreamIn(stream, d_apiStatus, 1);
            bdex_InStreamFunctions::streamIn(stream, d_expiryTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isPermanent, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isSharedMemory, 1);
            bdex_InStreamFunctions::streamIn(stream, d_maxNumValuesInList, 1);
            bdex_InStreamFunctions::streamIn(stream, d_pwhoId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_apiDate, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int EntryInfo::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_currentVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CURRENT_VERSION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_apiStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_maxNumValuesInList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NUM_VALUES_IN_LIST]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_pwhoId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PWHO_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_apiDate, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_DATE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int EntryInfo::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_CURRENT_VERSION: {
        return manipulator(&d_currentVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CURRENT_VERSION]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_API_NAME: {
        return manipulator(&d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
      } break;
      case ATTRIBUTE_ID_API_STATUS: {
        return manipulator(&d_apiStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_IS_PERMANENT: {
        return manipulator(&d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
      } break;
      case ATTRIBUTE_ID_IS_SHARED_MEMORY: {
        return manipulator(&d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
      } break;
      case ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST: {
        return manipulator(&d_maxNumValuesInList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NUM_VALUES_IN_LIST]);
      } break;
      case ATTRIBUTE_ID_PWHO_ID: {
        return manipulator(&d_pwhoId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PWHO_ID]);
      } break;
      case ATTRIBUTE_ID_API_DATE: {
        return manipulator(&d_apiDate, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_DATE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int EntryInfo::manipulateAttribute(
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
bsls::Types::Int64& EntryInfo::entryId()
{
    return d_entryId;
}

inline
bsls::Types::Int64& EntryInfo::currentVersion()
{
    return d_currentVersion;
}

inline
ValueType::Value& EntryInfo::valueType()
{
    return d_valueType;
}

inline
bsl::string& EntryInfo::apiName()
{
    return d_apiName;
}

inline
ApiStatus::Value& EntryInfo::apiStatus()
{
    return d_apiStatus;
}

inline
bsl::string& EntryInfo::expiryTsp()
{
    return d_expiryTsp;
}

inline
bool& EntryInfo::isPermanent()
{
    return d_isPermanent;
}

inline
bool& EntryInfo::isSharedMemory()
{
    return d_isSharedMemory;
}

inline
bsls::Types::Int64& EntryInfo::maxNumValuesInList()
{
    return d_maxNumValuesInList;
}

inline
bsls::Types::Int64& EntryInfo::pwhoId()
{
    return d_pwhoId;
}

inline
bdeut_NullableValue<bsls::Types::Int64>& EntryInfo::apiDate()
{
    return d_apiDate;
}

// ACCESSORS
template <class STREAM>
STREAM& EntryInfo::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_currentVersion, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_apiName, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_apiStatus, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_expiryTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isPermanent, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isSharedMemory, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_maxNumValuesInList, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_pwhoId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_apiDate, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int EntryInfo::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_currentVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CURRENT_VERSION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_apiStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_maxNumValuesInList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NUM_VALUES_IN_LIST]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_pwhoId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PWHO_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_apiDate, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_DATE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int EntryInfo::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_CURRENT_VERSION: {
        return accessor(d_currentVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CURRENT_VERSION]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_API_NAME: {
        return accessor(d_apiName, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_NAME]);
      } break;
      case ATTRIBUTE_ID_API_STATUS: {
        return accessor(d_apiStatus, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_STATUS]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_IS_PERMANENT: {
        return accessor(d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
      } break;
      case ATTRIBUTE_ID_IS_SHARED_MEMORY: {
        return accessor(d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
      } break;
      case ATTRIBUTE_ID_MAX_NUM_VALUES_IN_LIST: {
        return accessor(d_maxNumValuesInList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_MAX_NUM_VALUES_IN_LIST]);
      } break;
      case ATTRIBUTE_ID_PWHO_ID: {
        return accessor(d_pwhoId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PWHO_ID]);
      } break;
      case ATTRIBUTE_ID_API_DATE: {
        return accessor(d_apiDate, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_API_DATE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int EntryInfo::accessAttribute(
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
bsls::Types::Int64 EntryInfo::entryId() const
{
    return d_entryId;
}

inline
bsls::Types::Int64 EntryInfo::currentVersion() const
{
    return d_currentVersion;
}

inline
ValueType::Value EntryInfo::valueType() const
{
    return d_valueType;
}

inline
const bsl::string& EntryInfo::apiName() const
{
    return d_apiName;
}

inline
ApiStatus::Value EntryInfo::apiStatus() const
{
    return d_apiStatus;
}

inline
const bsl::string& EntryInfo::expiryTsp() const
{
    return d_expiryTsp;
}

inline
bool EntryInfo::isPermanent() const
{
    return d_isPermanent;
}

inline
bool EntryInfo::isSharedMemory() const
{
    return d_isSharedMemory;
}

inline
bsls::Types::Int64 EntryInfo::maxNumValuesInList() const
{
    return d_maxNumValuesInList;
}

inline
bsls::Types::Int64 EntryInfo::pwhoId() const
{
    return d_pwhoId;
}

inline
const bdeut_NullableValue<bsls::Types::Int64>& EntryInfo::apiDate() const
{
    return d_apiDate;
}



                            // -------------------                             
                            // class EntryOverride                             
                            // -------------------                             

// CLASS METHODS
inline
int EntryOverride::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& EntryOverride::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_seq, 1);
            OverrideType::bdexStreamIn(stream, d_type, 1);
            bdex_InStreamFunctions::streamIn(stream, d_value, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryData, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int EntryOverride::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_seq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SEQ]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int EntryOverride::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_SEQ: {
        return manipulator(&d_seq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SEQ]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_VALUE: {
        return manipulator(&d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
      } break;
      case ATTRIBUTE_ID_ENTRY_DATA: {
        return manipulator(&d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int EntryOverride::manipulateAttribute(
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
bsls::Types::Int64& EntryOverride::seq()
{
    return d_seq;
}

inline
OverrideType::Value& EntryOverride::type()
{
    return d_type;
}

inline
bsl::string& EntryOverride::value()
{
    return d_value;
}

inline
EntryData& EntryOverride::entryData()
{
    return d_entryData;
}

// ACCESSORS
template <class STREAM>
STREAM& EntryOverride::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_seq, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_type, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_value, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryData, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int EntryOverride::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_seq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SEQ]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int EntryOverride::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_SEQ: {
        return accessor(d_seq, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SEQ]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_VALUE: {
        return accessor(d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
      } break;
      case ATTRIBUTE_ID_ENTRY_DATA: {
        return accessor(d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int EntryOverride::accessAttribute(
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
bsls::Types::Int64 EntryOverride::seq() const
{
    return d_seq;
}

inline
OverrideType::Value EntryOverride::type() const
{
    return d_type;
}

inline
const bsl::string& EntryOverride::value() const
{
    return d_value;
}

inline
const EntryData& EntryOverride::entryData() const
{
    return d_entryData;
}



                         // --------------------------                         
                         // class GetBregValuesRequest                         
                         // --------------------------                         

// CLASS METHODS
inline
int GetBregValuesRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& GetBregValuesRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_object, 1);
            bdex_InStreamFunctions::streamIn(stream, d_overrides, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int GetBregValuesRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_object, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBJECT]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_overrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDES]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int GetBregValuesRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_OBJECT: {
        return manipulator(&d_object, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBJECT]);
      } break;
      case ATTRIBUTE_ID_OVERRIDES: {
        return manipulator(&d_overrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDES]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int GetBregValuesRequest::manipulateAttribute(
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
BregValueObject& GetBregValuesRequest::object()
{
    return d_object;
}

inline
EvaluateOverrides& GetBregValuesRequest::overrides()
{
    return d_overrides;
}

// ACCESSORS
template <class STREAM>
STREAM& GetBregValuesRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_object, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_overrides, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int GetBregValuesRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_object, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBJECT]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_overrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDES]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int GetBregValuesRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_OBJECT: {
        return accessor(d_object, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OBJECT]);
      } break;
      case ATTRIBUTE_ID_OVERRIDES: {
        return accessor(d_overrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OVERRIDES]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int GetBregValuesRequest::accessAttribute(
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
const BregValueObject& GetBregValuesRequest::object() const
{
    return d_object;
}

inline
const EvaluateOverrides& GetBregValuesRequest::overrides() const
{
    return d_overrides;
}



                             // ------------------                             
                             // class OverrideInfo                             
                             // ------------------                             

// CLASS METHODS
inline
int OverrideInfo::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& OverrideInfo::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_isProduction, 1);
            OverrideType::bdexStreamIn(stream, d_type, 1);
            bdex_InStreamFunctions::streamIn(stream, d_setting, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int OverrideInfo::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_isProduction, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRODUCTION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int OverrideInfo::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_IS_PRODUCTION: {
        return manipulator(&d_isProduction, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRODUCTION]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_SETTING: {
        return manipulator(&d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int OverrideInfo::manipulateAttribute(
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
bool& OverrideInfo::isProduction()
{
    return d_isProduction;
}

inline
OverrideType::Value& OverrideInfo::type()
{
    return d_type;
}

inline
bsl::string& OverrideInfo::setting()
{
    return d_setting;
}

// ACCESSORS
template <class STREAM>
STREAM& OverrideInfo::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_isProduction, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_type, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_setting, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int OverrideInfo::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_isProduction, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRODUCTION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int OverrideInfo::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_IS_PRODUCTION: {
        return accessor(d_isProduction, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PRODUCTION]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_SETTING: {
        return accessor(d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int OverrideInfo::accessAttribute(
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
bool OverrideInfo::isProduction() const
{
    return d_isProduction;
}

inline
OverrideType::Value OverrideInfo::type() const
{
    return d_type;
}

inline
const bsl::string& OverrideInfo::setting() const
{
    return d_setting;
}



                           // ---------------------                            
                           // class OverrideSummary                            
                           // ---------------------                            

// CLASS METHODS
inline
int OverrideSummary::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& OverrideSummary::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_type, 1);
            bdex_InStreamFunctions::streamIn(stream, d_typeString, 1);
            OverrideType::bdexStreamIn(stream, d_typeEnum, 1);
            bdex_InStreamFunctions::streamIn(stream, d_setting, 1);
            bdex_InStreamFunctions::streamIn(stream, d_settingTooltip, 1);
            bdex_InStreamFunctions::streamIn(stream, d_value, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int OverrideSummary::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_typeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_ENUM]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_settingTooltip, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING_TOOLTIP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int OverrideSummary::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TYPE: {
        return manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_TYPE_STRING: {
        return manipulator(&d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_TYPE_ENUM: {
        return manipulator(&d_typeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_ENUM]);
      } break;
      case ATTRIBUTE_ID_SETTING: {
        return manipulator(&d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
      } break;
      case ATTRIBUTE_ID_SETTING_TOOLTIP: {
        return manipulator(&d_settingTooltip, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING_TOOLTIP]);
      } break;
      case ATTRIBUTE_ID_VALUE: {
        return manipulator(&d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int OverrideSummary::manipulateAttribute(
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
int& OverrideSummary::type()
{
    return d_type;
}

inline
bsl::string& OverrideSummary::typeString()
{
    return d_typeString;
}

inline
OverrideType::Value& OverrideSummary::typeEnum()
{
    return d_typeEnum;
}

inline
bsl::string& OverrideSummary::setting()
{
    return d_setting;
}

inline
bsl::string& OverrideSummary::settingTooltip()
{
    return d_settingTooltip;
}

inline
bsl::string& OverrideSummary::value()
{
    return d_value;
}

// ACCESSORS
template <class STREAM>
STREAM& OverrideSummary::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_type, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_typeString, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_typeEnum, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_setting, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_settingTooltip, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_value, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int OverrideSummary::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_typeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_ENUM]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_settingTooltip, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING_TOOLTIP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int OverrideSummary::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_TYPE: {
        return accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_TYPE_STRING: {
        return accessor(d_typeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_TYPE_ENUM: {
        return accessor(d_typeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE_ENUM]);
      } break;
      case ATTRIBUTE_ID_SETTING: {
        return accessor(d_setting, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING]);
      } break;
      case ATTRIBUTE_ID_SETTING_TOOLTIP: {
        return accessor(d_settingTooltip, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_SETTING_TOOLTIP]);
      } break;
      case ATTRIBUTE_ID_VALUE: {
        return accessor(d_value, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int OverrideSummary::accessAttribute(
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
int OverrideSummary::type() const
{
    return d_type;
}

inline
const bsl::string& OverrideSummary::typeString() const
{
    return d_typeString;
}

inline
OverrideType::Value OverrideSummary::typeEnum() const
{
    return d_typeEnum;
}

inline
const bsl::string& OverrideSummary::setting() const
{
    return d_setting;
}

inline
const bsl::string& OverrideSummary::settingTooltip() const
{
    return d_settingTooltip;
}

inline
const bsl::string& OverrideSummary::value() const
{
    return d_value;
}



                            // -------------------                             
                            // class PrivilegeList                             
                            // -------------------                             

// CLASS METHODS
inline
int PrivilegeList::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& PrivilegeList::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_registryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_userDataList, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int PrivilegeList::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int PrivilegeList::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_USER_DATA_LIST: {
        return manipulator(&d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int PrivilegeList::manipulateAttribute(
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
int& PrivilegeList::registryId()
{
    return d_registryId;
}

inline
bsl::vector<UserData>& PrivilegeList::userDataList()
{
    return d_userDataList;
}

// ACCESSORS
template <class STREAM>
STREAM& PrivilegeList::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_registryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_userDataList, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int PrivilegeList::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int PrivilegeList::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_USER_DATA_LIST: {
        return accessor(d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int PrivilegeList::accessAttribute(
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
int PrivilegeList::registryId() const
{
    return d_registryId;
}

inline
const bsl::vector<UserData>& PrivilegeList::userDataList() const
{
    return d_userDataList;
}



                               // --------------                               
                               // class TodoList                               
                               // --------------                               

// CLASS METHODS
inline
int TodoList::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& TodoList::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_list, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int TodoList::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_list, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LIST]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int TodoList::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_LIST: {
        return manipulator(&d_list, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LIST]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int TodoList::manipulateAttribute(
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
bsl::vector<TodoListItem>& TodoList::list()
{
    return d_list;
}

// ACCESSORS
template <class STREAM>
STREAM& TodoList::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_list, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int TodoList::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_list, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LIST]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int TodoList::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_LIST: {
        return accessor(d_list, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_LIST]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int TodoList::accessAttribute(
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
const bsl::vector<TodoListItem>& TodoList::list() const
{
    return d_list;
}



                            // --------------------                            
                            // class VersionHistory                            
                            // --------------------                            

// CLASS METHODS
inline
int VersionHistory::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& VersionHistory::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_versionHistory, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int VersionHistory::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_versionHistory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_HISTORY]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int VersionHistory::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_VERSION_HISTORY: {
        return manipulator(&d_versionHistory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_HISTORY]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int VersionHistory::manipulateAttribute(
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
bsl::vector<VersionTsp>& VersionHistory::versionHistory()
{
    return d_versionHistory;
}

// ACCESSORS
template <class STREAM>
STREAM& VersionHistory::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_versionHistory, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int VersionHistory::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_versionHistory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_HISTORY]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int VersionHistory::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_VERSION_HISTORY: {
        return accessor(d_versionHistory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION_HISTORY]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int VersionHistory::accessAttribute(
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
const bsl::vector<VersionTsp>& VersionHistory::versionHistory() const
{
    return d_versionHistory;
}



                            // -------------------                             
                            // class EntryContacts                             
                            // -------------------                             

// CLASS METHODS
inline
int EntryContacts::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& EntryContacts::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_primaryUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_backupUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_operationalUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_drqsGroup, 1);
            bdex_InStreamFunctions::streamIn(stream, d_auditRecord, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int EntryContacts::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_primaryUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIMARY_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_backupUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BACKUP_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_operationalUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OPERATIONAL_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_drqsGroup, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_GROUP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int EntryContacts::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_PRIMARY_UUID: {
        return manipulator(&d_primaryUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIMARY_UUID]);
      } break;
      case ATTRIBUTE_ID_BACKUP_UUID: {
        return manipulator(&d_backupUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BACKUP_UUID]);
      } break;
      case ATTRIBUTE_ID_OPERATIONAL_UUID: {
        return manipulator(&d_operationalUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OPERATIONAL_UUID]);
      } break;
      case ATTRIBUTE_ID_DRQS_GROUP: {
        return manipulator(&d_drqsGroup, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_GROUP]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int EntryContacts::manipulateAttribute(
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
bsls::Types::Int64& EntryContacts::primaryUuid()
{
    return d_primaryUuid;
}

inline
bsls::Types::Int64& EntryContacts::backupUuid()
{
    return d_backupUuid;
}

inline
bsls::Types::Int64& EntryContacts::operationalUuid()
{
    return d_operationalUuid;
}

inline
bsls::Types::Int64& EntryContacts::drqsGroup()
{
    return d_drqsGroup;
}

inline
AuditRecord& EntryContacts::auditRecord()
{
    return d_auditRecord;
}

// ACCESSORS
template <class STREAM>
STREAM& EntryContacts::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_primaryUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_backupUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_operationalUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_drqsGroup, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_auditRecord, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int EntryContacts::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_primaryUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIMARY_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_backupUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BACKUP_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_operationalUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OPERATIONAL_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_drqsGroup, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_GROUP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int EntryContacts::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_PRIMARY_UUID: {
        return accessor(d_primaryUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIMARY_UUID]);
      } break;
      case ATTRIBUTE_ID_BACKUP_UUID: {
        return accessor(d_backupUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_BACKUP_UUID]);
      } break;
      case ATTRIBUTE_ID_OPERATIONAL_UUID: {
        return accessor(d_operationalUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_OPERATIONAL_UUID]);
      } break;
      case ATTRIBUTE_ID_DRQS_GROUP: {
        return accessor(d_drqsGroup, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DRQS_GROUP]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int EntryContacts::accessAttribute(
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
bsls::Types::Int64 EntryContacts::primaryUuid() const
{
    return d_primaryUuid;
}

inline
bsls::Types::Int64 EntryContacts::backupUuid() const
{
    return d_backupUuid;
}

inline
bsls::Types::Int64 EntryContacts::operationalUuid() const
{
    return d_operationalUuid;
}

inline
bsls::Types::Int64 EntryContacts::drqsGroup() const
{
    return d_drqsGroup;
}

inline
const AuditRecord& EntryContacts::auditRecord() const
{
    return d_auditRecord;
}



                           // ----------------------                           
                           // class EntrySubscribers                           
                           // ----------------------                           

// CLASS METHODS
inline
int EntrySubscribers::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& EntrySubscribers::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_registryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_userDataList, 1);
            bdex_InStreamFunctions::streamIn(stream, d_auditRecord, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int EntrySubscribers::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int EntrySubscribers::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_USER_DATA_LIST: {
        return manipulator(&d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int EntrySubscribers::manipulateAttribute(
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
bsls::Types::Int64& EntrySubscribers::registryId()
{
    return d_registryId;
}

inline
bsl::vector<UserData>& EntrySubscribers::userDataList()
{
    return d_userDataList;
}

inline
AuditRecord& EntrySubscribers::auditRecord()
{
    return d_auditRecord;
}

// ACCESSORS
template <class STREAM>
STREAM& EntrySubscribers::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_registryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_userDataList, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_auditRecord, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int EntrySubscribers::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int EntrySubscribers::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_USER_DATA_LIST: {
        return accessor(d_userDataList, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_USER_DATA_LIST]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int EntrySubscribers::accessAttribute(
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
bsls::Types::Int64 EntrySubscribers::registryId() const
{
    return d_registryId;
}

inline
const bsl::vector<UserData>& EntrySubscribers::userDataList() const
{
    return d_userDataList;
}

inline
const AuditRecord& EntrySubscribers::auditRecord() const
{
    return d_auditRecord;
}



                              // ----------------                              
                              // class EntryValue                              
                              // ----------------                              

// CLASS METHODS
inline
int EntryValue::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& EntryValue::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_entryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_version, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryData, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryOverrides, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isObsolete, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isSharedMemory, 1);
            bdex_InStreamFunctions::streamIn(stream, d_auditRecord, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int EntryValue::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isObsolete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_OBSOLETE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int EntryValue::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return manipulator(&d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_VERSION: {
        return manipulator(&d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
      } break;
      case ATTRIBUTE_ID_ENTRY_DATA: {
        return manipulator(&d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
      } break;
      case ATTRIBUTE_ID_ENTRY_OVERRIDES: {
        return manipulator(&d_entryOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_IS_OBSOLETE: {
        return manipulator(&d_isObsolete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_OBSOLETE]);
      } break;
      case ATTRIBUTE_ID_IS_SHARED_MEMORY: {
        return manipulator(&d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int EntryValue::manipulateAttribute(
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
bsls::Types::Int64& EntryValue::entryId()
{
    return d_entryId;
}

inline
bsls::Types::Int64& EntryValue::version()
{
    return d_version;
}

inline
bdeut_NullableValue<EntryData>& EntryValue::entryData()
{
    return d_entryData;
}

inline
bsl::vector<EntryOverride>& EntryValue::entryOverrides()
{
    return d_entryOverrides;
}

inline
bool& EntryValue::isObsolete()
{
    return d_isObsolete;
}

inline
bool& EntryValue::isSharedMemory()
{
    return d_isSharedMemory;
}

inline
AuditRecord& EntryValue::auditRecord()
{
    return d_auditRecord;
}

// ACCESSORS
template <class STREAM>
STREAM& EntryValue::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_entryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_version, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryData, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryOverrides, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isObsolete, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isSharedMemory, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_auditRecord, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int EntryValue::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isObsolete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_OBSOLETE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int EntryValue::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_ENTRY_ID: {
        return accessor(d_entryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_ID]);
      } break;
      case ATTRIBUTE_ID_VERSION: {
        return accessor(d_version, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VERSION]);
      } break;
      case ATTRIBUTE_ID_ENTRY_DATA: {
        return accessor(d_entryData, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_DATA]);
      } break;
      case ATTRIBUTE_ID_ENTRY_OVERRIDES: {
        return accessor(d_entryOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_IS_OBSOLETE: {
        return accessor(d_isObsolete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_OBSOLETE]);
      } break;
      case ATTRIBUTE_ID_IS_SHARED_MEMORY: {
        return accessor(d_isSharedMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_SHARED_MEMORY]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int EntryValue::accessAttribute(
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
bsls::Types::Int64 EntryValue::entryId() const
{
    return d_entryId;
}

inline
bsls::Types::Int64 EntryValue::version() const
{
    return d_version;
}

inline
const bdeut_NullableValue<EntryData>& EntryValue::entryData() const
{
    return d_entryData;
}

inline
const bsl::vector<EntryOverride>& EntryValue::entryOverrides() const
{
    return d_entryOverrides;
}

inline
bool EntryValue::isObsolete() const
{
    return d_isObsolete;
}

inline
bool EntryValue::isSharedMemory() const
{
    return d_isSharedMemory;
}

inline
const AuditRecord& EntryValue::auditRecord() const
{
    return d_auditRecord;
}



                             // -----------------                              
                             // class NodeDetails                              
                             // -----------------                              

// CLASS METHODS
inline
int NodeDetails::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& NodeDetails::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_name, 1);
            bdex_InStreamFunctions::streamIn(stream, d_id, 1);
            bdex_InStreamFunctions::streamIn(stream, d_type, 1);
            bdex_InStreamFunctions::streamIn(stream, d_description, 1);
            bdex_InStreamFunctions::streamIn(stream, d_accessor, 1);
            bdex_InStreamFunctions::streamIn(stream, d_updateTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valueType, 1);
            bdex_InStreamFunctions::streamIn(stream, d_valueTypeString, 1);
            ValueType::bdexStreamIn(stream, d_valueTypeEnum, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isInMemory, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isInMemoryString, 1);
            bdex_InStreamFunctions::streamIn(stream, d_hasExpired, 1);
            bdex_InStreamFunctions::streamIn(stream, d_expiryTsp, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isPermanent, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isPermanentString, 1);
            bdex_InStreamFunctions::streamIn(stream, d_keywords, 1);
            bdex_InStreamFunctions::streamIn(stream, d_inProd, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prodValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prodVersion, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prodOverrides, 1);
            bdex_InStreamFunctions::streamIn(stream, d_inTest, 1);
            bdex_InStreamFunctions::streamIn(stream, d_testValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_testOverrides, 1);
            bdex_InStreamFunctions::streamIn(stream, d_canAddNode, 1);
            bdex_InStreamFunctions::streamIn(stream, d_canAddEntry, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prodObsoleteTraceEnabled, 1);
            bdex_InStreamFunctions::streamIn(stream, d_devObsoleteTraceEnabled, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int NodeDetails::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_valueTypeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_ENUM]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isInMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isInMemoryString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_STRING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isPermanentString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT_STRING]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_inProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_PROD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prodValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prodVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VERSION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prodOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_inTest, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_TEST]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_testValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_testOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_canAddNode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_NODE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_canAddEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_ENTRY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prodObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OBSOLETE_TRACE_ENABLED]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_devObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DEV_OBSOLETE_TRACE_ENABLED]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int NodeDetails::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NAME: {
        return manipulator(&d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
      } break;
      case ATTRIBUTE_ID_ID: {
        return manipulator(&d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return manipulator(&d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_DESCRIPTION: {
        return manipulator(&d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
      } break;
      case ATTRIBUTE_ID_ACCESSOR: {
        return manipulator(&d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return manipulator(&d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return manipulator(&d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE_STRING: {
        return manipulator(&d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE_ENUM: {
        return manipulator(&d_valueTypeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_ENUM]);
      } break;
      case ATTRIBUTE_ID_IS_IN_MEMORY: {
        return manipulator(&d_isInMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY]);
      } break;
      case ATTRIBUTE_ID_IS_IN_MEMORY_STRING: {
        return manipulator(&d_isInMemoryString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_STRING]);
      } break;
      case ATTRIBUTE_ID_HAS_EXPIRED: {
        return manipulator(&d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return manipulator(&d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_IS_PERMANENT: {
        return manipulator(&d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
      } break;
      case ATTRIBUTE_ID_IS_PERMANENT_STRING: {
        return manipulator(&d_isPermanentString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT_STRING]);
      } break;
      case ATTRIBUTE_ID_KEYWORDS: {
        return manipulator(&d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
      } break;
      case ATTRIBUTE_ID_IN_PROD: {
        return manipulator(&d_inProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_PROD]);
      } break;
      case ATTRIBUTE_ID_PROD_VALUE: {
        return manipulator(&d_prodValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VALUE]);
      } break;
      case ATTRIBUTE_ID_PROD_VERSION: {
        return manipulator(&d_prodVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VERSION]);
      } break;
      case ATTRIBUTE_ID_PROD_OVERRIDES: {
        return manipulator(&d_prodOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_IN_TEST: {
        return manipulator(&d_inTest, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_TEST]);
      } break;
      case ATTRIBUTE_ID_TEST_VALUE: {
        return manipulator(&d_testValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VALUE]);
      } break;
      case ATTRIBUTE_ID_TEST_OVERRIDES: {
        return manipulator(&d_testOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_CAN_ADD_NODE: {
        return manipulator(&d_canAddNode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_NODE]);
      } break;
      case ATTRIBUTE_ID_CAN_ADD_ENTRY: {
        return manipulator(&d_canAddEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_ENTRY]);
      } break;
      case ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED: {
        return manipulator(&d_prodObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OBSOLETE_TRACE_ENABLED]);
      } break;
      case ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED: {
        return manipulator(&d_devObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DEV_OBSOLETE_TRACE_ENABLED]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int NodeDetails::manipulateAttribute(
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
bsl::string& NodeDetails::name()
{
    return d_name;
}

inline
int& NodeDetails::id()
{
    return d_id;
}

inline
int& NodeDetails::type()
{
    return d_type;
}

inline
bsl::string& NodeDetails::description()
{
    return d_description;
}

inline
bsl::string& NodeDetails::accessor()
{
    return d_accessor;
}

inline
bsl::string& NodeDetails::updateTsp()
{
    return d_updateTsp;
}

inline
int& NodeDetails::valueType()
{
    return d_valueType;
}

inline
bsl::string& NodeDetails::valueTypeString()
{
    return d_valueTypeString;
}

inline
ValueType::Value& NodeDetails::valueTypeEnum()
{
    return d_valueTypeEnum;
}

inline
bool& NodeDetails::isInMemory()
{
    return d_isInMemory;
}

inline
bsl::string& NodeDetails::isInMemoryString()
{
    return d_isInMemoryString;
}

inline
bool& NodeDetails::hasExpired()
{
    return d_hasExpired;
}

inline
bsl::string& NodeDetails::expiryTsp()
{
    return d_expiryTsp;
}

inline
bool& NodeDetails::isPermanent()
{
    return d_isPermanent;
}

inline
bsl::string& NodeDetails::isPermanentString()
{
    return d_isPermanentString;
}

inline
bsl::string& NodeDetails::keywords()
{
    return d_keywords;
}

inline
bool& NodeDetails::inProd()
{
    return d_inProd;
}

inline
bsl::string& NodeDetails::prodValue()
{
    return d_prodValue;
}

inline
int& NodeDetails::prodVersion()
{
    return d_prodVersion;
}

inline
bsl::vector<OverrideSummary>& NodeDetails::prodOverrides()
{
    return d_prodOverrides;
}

inline
bool& NodeDetails::inTest()
{
    return d_inTest;
}

inline
bsl::string& NodeDetails::testValue()
{
    return d_testValue;
}

inline
bsl::vector<OverrideSummary>& NodeDetails::testOverrides()
{
    return d_testOverrides;
}

inline
bool& NodeDetails::canAddNode()
{
    return d_canAddNode;
}

inline
bool& NodeDetails::canAddEntry()
{
    return d_canAddEntry;
}

inline
bool& NodeDetails::prodObsoleteTraceEnabled()
{
    return d_prodObsoleteTraceEnabled;
}

inline
bool& NodeDetails::devObsoleteTraceEnabled()
{
    return d_devObsoleteTraceEnabled;
}

// ACCESSORS
template <class STREAM>
STREAM& NodeDetails::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_name, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_id, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_type, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_description, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_accessor, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_updateTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueType, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueTypeString, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_valueTypeEnum, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isInMemory, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isInMemoryString, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_hasExpired, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_expiryTsp, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isPermanent, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isPermanentString, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_keywords, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_inProd, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prodValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prodVersion, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prodOverrides, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_inTest, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_testValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_testOverrides, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_canAddNode, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_canAddEntry, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prodObsoleteTraceEnabled, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_devObsoleteTraceEnabled, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int NodeDetails::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_valueTypeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_ENUM]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isInMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isInMemoryString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_STRING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isPermanentString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT_STRING]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_inProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_PROD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prodValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prodVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VERSION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prodOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_inTest, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_TEST]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_testValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_testOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_OVERRIDES]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_canAddNode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_NODE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_canAddEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_ENTRY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prodObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OBSOLETE_TRACE_ENABLED]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_devObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DEV_OBSOLETE_TRACE_ENABLED]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int NodeDetails::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NAME: {
        return accessor(d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
      } break;
      case ATTRIBUTE_ID_ID: {
        return accessor(d_id, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ID]);
      } break;
      case ATTRIBUTE_ID_TYPE: {
        return accessor(d_type, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TYPE]);
      } break;
      case ATTRIBUTE_ID_DESCRIPTION: {
        return accessor(d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
      } break;
      case ATTRIBUTE_ID_ACCESSOR: {
        return accessor(d_accessor, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ACCESSOR]);
      } break;
      case ATTRIBUTE_ID_UPDATE_TSP: {
        return accessor(d_updateTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UPDATE_TSP]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE: {
        return accessor(d_valueType, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE_STRING: {
        return accessor(d_valueTypeString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_STRING]);
      } break;
      case ATTRIBUTE_ID_VALUE_TYPE_ENUM: {
        return accessor(d_valueTypeEnum, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_VALUE_TYPE_ENUM]);
      } break;
      case ATTRIBUTE_ID_IS_IN_MEMORY: {
        return accessor(d_isInMemory, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY]);
      } break;
      case ATTRIBUTE_ID_IS_IN_MEMORY_STRING: {
        return accessor(d_isInMemoryString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_IN_MEMORY_STRING]);
      } break;
      case ATTRIBUTE_ID_HAS_EXPIRED: {
        return accessor(d_hasExpired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_HAS_EXPIRED]);
      } break;
      case ATTRIBUTE_ID_EXPIRY_TSP: {
        return accessor(d_expiryTsp, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_EXPIRY_TSP]);
      } break;
      case ATTRIBUTE_ID_IS_PERMANENT: {
        return accessor(d_isPermanent, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT]);
      } break;
      case ATTRIBUTE_ID_IS_PERMANENT_STRING: {
        return accessor(d_isPermanentString, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_PERMANENT_STRING]);
      } break;
      case ATTRIBUTE_ID_KEYWORDS: {
        return accessor(d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
      } break;
      case ATTRIBUTE_ID_IN_PROD: {
        return accessor(d_inProd, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_PROD]);
      } break;
      case ATTRIBUTE_ID_PROD_VALUE: {
        return accessor(d_prodValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VALUE]);
      } break;
      case ATTRIBUTE_ID_PROD_VERSION: {
        return accessor(d_prodVersion, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_VERSION]);
      } break;
      case ATTRIBUTE_ID_PROD_OVERRIDES: {
        return accessor(d_prodOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_IN_TEST: {
        return accessor(d_inTest, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IN_TEST]);
      } break;
      case ATTRIBUTE_ID_TEST_VALUE: {
        return accessor(d_testValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_VALUE]);
      } break;
      case ATTRIBUTE_ID_TEST_OVERRIDES: {
        return accessor(d_testOverrides, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_TEST_OVERRIDES]);
      } break;
      case ATTRIBUTE_ID_CAN_ADD_NODE: {
        return accessor(d_canAddNode, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_NODE]);
      } break;
      case ATTRIBUTE_ID_CAN_ADD_ENTRY: {
        return accessor(d_canAddEntry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CAN_ADD_ENTRY]);
      } break;
      case ATTRIBUTE_ID_PROD_OBSOLETE_TRACE_ENABLED: {
        return accessor(d_prodObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PROD_OBSOLETE_TRACE_ENABLED]);
      } break;
      case ATTRIBUTE_ID_DEV_OBSOLETE_TRACE_ENABLED: {
        return accessor(d_devObsoleteTraceEnabled, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DEV_OBSOLETE_TRACE_ENABLED]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int NodeDetails::accessAttribute(
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
const bsl::string& NodeDetails::name() const
{
    return d_name;
}

inline
int NodeDetails::id() const
{
    return d_id;
}

inline
int NodeDetails::type() const
{
    return d_type;
}

inline
const bsl::string& NodeDetails::description() const
{
    return d_description;
}

inline
const bsl::string& NodeDetails::accessor() const
{
    return d_accessor;
}

inline
const bsl::string& NodeDetails::updateTsp() const
{
    return d_updateTsp;
}

inline
int NodeDetails::valueType() const
{
    return d_valueType;
}

inline
const bsl::string& NodeDetails::valueTypeString() const
{
    return d_valueTypeString;
}

inline
ValueType::Value NodeDetails::valueTypeEnum() const
{
    return d_valueTypeEnum;
}

inline
bool NodeDetails::isInMemory() const
{
    return d_isInMemory;
}

inline
const bsl::string& NodeDetails::isInMemoryString() const
{
    return d_isInMemoryString;
}

inline
bool NodeDetails::hasExpired() const
{
    return d_hasExpired;
}

inline
const bsl::string& NodeDetails::expiryTsp() const
{
    return d_expiryTsp;
}

inline
bool NodeDetails::isPermanent() const
{
    return d_isPermanent;
}

inline
const bsl::string& NodeDetails::isPermanentString() const
{
    return d_isPermanentString;
}

inline
const bsl::string& NodeDetails::keywords() const
{
    return d_keywords;
}

inline
bool NodeDetails::inProd() const
{
    return d_inProd;
}

inline
const bsl::string& NodeDetails::prodValue() const
{
    return d_prodValue;
}

inline
int NodeDetails::prodVersion() const
{
    return d_prodVersion;
}

inline
const bsl::vector<OverrideSummary>& NodeDetails::prodOverrides() const
{
    return d_prodOverrides;
}

inline
bool NodeDetails::inTest() const
{
    return d_inTest;
}

inline
const bsl::string& NodeDetails::testValue() const
{
    return d_testValue;
}

inline
const bsl::vector<OverrideSummary>& NodeDetails::testOverrides() const
{
    return d_testOverrides;
}

inline
bool NodeDetails::canAddNode() const
{
    return d_canAddNode;
}

inline
bool NodeDetails::canAddEntry() const
{
    return d_canAddEntry;
}

inline
bool NodeDetails::prodObsoleteTraceEnabled() const
{
    return d_prodObsoleteTraceEnabled;
}

inline
bool NodeDetails::devObsoleteTraceEnabled() const
{
    return d_devObsoleteTraceEnabled;
}



                               // --------------                               
                               // class NodeInfo                               
                               // --------------                               

// CLASS METHODS
inline
int NodeInfo::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& NodeInfo::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_nodeId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_parentId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_name, 1);
            bdex_InStreamFunctions::streamIn(stream, d_description, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isLeaf, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isDeleted, 1);
            bdex_InStreamFunctions::streamIn(stream, d_auditRecord, 1);
            bdex_InStreamFunctions::streamIn(stream, d_keywords, 1);
            bdex_InStreamFunctions::streamIn(stream, d_privilege, 1);
            bdex_InStreamFunctions::streamIn(stream, d_contacts, 1);
            bdex_InStreamFunctions::streamIn(stream, d_isToDelete, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int NodeInfo::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_nodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_parentId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PARENT_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isLeaf, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_LEAF]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isDeleted, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_DELETED]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_privilege, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIVILEGE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_isToDelete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TO_DELETE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int NodeInfo::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NODE_ID: {
        return manipulator(&d_nodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE_ID]);
      } break;
      case ATTRIBUTE_ID_PARENT_ID: {
        return manipulator(&d_parentId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PARENT_ID]);
      } break;
      case ATTRIBUTE_ID_NAME: {
        return manipulator(&d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
      } break;
      case ATTRIBUTE_ID_DESCRIPTION: {
        return manipulator(&d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
      } break;
      case ATTRIBUTE_ID_IS_LEAF: {
        return manipulator(&d_isLeaf, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_LEAF]);
      } break;
      case ATTRIBUTE_ID_IS_DELETED: {
        return manipulator(&d_isDeleted, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_DELETED]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      case ATTRIBUTE_ID_KEYWORDS: {
        return manipulator(&d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
      } break;
      case ATTRIBUTE_ID_PRIVILEGE: {
        return manipulator(&d_privilege, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIVILEGE]);
      } break;
      case ATTRIBUTE_ID_CONTACTS: {
        return manipulator(&d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
      } break;
      case ATTRIBUTE_ID_IS_TO_DELETE: {
        return manipulator(&d_isToDelete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TO_DELETE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int NodeInfo::manipulateAttribute(
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
bsls::Types::Int64& NodeInfo::nodeId()
{
    return d_nodeId;
}

inline
bsls::Types::Int64& NodeInfo::parentId()
{
    return d_parentId;
}

inline
bsl::string& NodeInfo::name()
{
    return d_name;
}

inline
bsl::string& NodeInfo::description()
{
    return d_description;
}

inline
bool& NodeInfo::isLeaf()
{
    return d_isLeaf;
}

inline
bool& NodeInfo::isDeleted()
{
    return d_isDeleted;
}

inline
AuditRecord& NodeInfo::auditRecord()
{
    return d_auditRecord;
}

inline
bsl::vector<bsl::string>& NodeInfo::keywords()
{
    return d_keywords;
}

inline
NodePrivilege& NodeInfo::privilege()
{
    return d_privilege;
}

inline
EntryContacts& NodeInfo::contacts()
{
    return d_contacts;
}

inline
bool& NodeInfo::isToDelete()
{
    return d_isToDelete;
}

// ACCESSORS
template <class STREAM>
STREAM& NodeInfo::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_nodeId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_parentId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_name, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_description, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isLeaf, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isDeleted, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_auditRecord, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_keywords, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_privilege, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_contacts, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_isToDelete, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int NodeInfo::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_nodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_parentId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PARENT_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isLeaf, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_LEAF]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isDeleted, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_DELETED]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_privilege, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIVILEGE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_isToDelete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TO_DELETE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int NodeInfo::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NODE_ID: {
        return accessor(d_nodeId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE_ID]);
      } break;
      case ATTRIBUTE_ID_PARENT_ID: {
        return accessor(d_parentId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PARENT_ID]);
      } break;
      case ATTRIBUTE_ID_NAME: {
        return accessor(d_name, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NAME]);
      } break;
      case ATTRIBUTE_ID_DESCRIPTION: {
        return accessor(d_description, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_DESCRIPTION]);
      } break;
      case ATTRIBUTE_ID_IS_LEAF: {
        return accessor(d_isLeaf, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_LEAF]);
      } break;
      case ATTRIBUTE_ID_IS_DELETED: {
        return accessor(d_isDeleted, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_DELETED]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      case ATTRIBUTE_ID_KEYWORDS: {
        return accessor(d_keywords, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_KEYWORDS]);
      } break;
      case ATTRIBUTE_ID_PRIVILEGE: {
        return accessor(d_privilege, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRIVILEGE]);
      } break;
      case ATTRIBUTE_ID_CONTACTS: {
        return accessor(d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
      } break;
      case ATTRIBUTE_ID_IS_TO_DELETE: {
        return accessor(d_isToDelete, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_IS_TO_DELETE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int NodeInfo::accessAttribute(
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
bsls::Types::Int64 NodeInfo::nodeId() const
{
    return d_nodeId;
}

inline
bsls::Types::Int64 NodeInfo::parentId() const
{
    return d_parentId;
}

inline
const bsl::string& NodeInfo::name() const
{
    return d_name;
}

inline
const bsl::string& NodeInfo::description() const
{
    return d_description;
}

inline
bool NodeInfo::isLeaf() const
{
    return d_isLeaf;
}

inline
bool NodeInfo::isDeleted() const
{
    return d_isDeleted;
}

inline
const AuditRecord& NodeInfo::auditRecord() const
{
    return d_auditRecord;
}

inline
const bsl::vector<bsl::string>& NodeInfo::keywords() const
{
    return d_keywords;
}

inline
const NodePrivilege& NodeInfo::privilege() const
{
    return d_privilege;
}

inline
const EntryContacts& NodeInfo::contacts() const
{
    return d_contacts;
}

inline
bool NodeInfo::isToDelete() const
{
    return d_isToDelete;
}



                         // --------------------------                         
                         // class UpdateContactRequest                         
                         // --------------------------                         

// CLASS METHODS
inline
int UpdateContactRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& UpdateContactRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_registryId, 1);
            bdex_InStreamFunctions::streamIn(stream, d_contacts, 1);
            bdex_InStreamFunctions::streamIn(stream, d_auditRecord, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int UpdateContactRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int UpdateContactRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return manipulator(&d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_CONTACTS: {
        return manipulator(&d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return manipulator(&d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int UpdateContactRequest::manipulateAttribute(
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
int& UpdateContactRequest::registryId()
{
    return d_registryId;
}

inline
EntryContacts& UpdateContactRequest::contacts()
{
    return d_contacts;
}

inline
AuditRecord& UpdateContactRequest::auditRecord()
{
    return d_auditRecord;
}

// ACCESSORS
template <class STREAM>
STREAM& UpdateContactRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_registryId, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_contacts, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_auditRecord, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int UpdateContactRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int UpdateContactRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY_ID: {
        return accessor(d_registryId, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY_ID]);
      } break;
      case ATTRIBUTE_ID_CONTACTS: {
        return accessor(d_contacts, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CONTACTS]);
      } break;
      case ATTRIBUTE_ID_AUDIT_RECORD: {
        return accessor(d_auditRecord, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_AUDIT_RECORD]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int UpdateContactRequest::accessAttribute(
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
int UpdateContactRequest::registryId() const
{
    return d_registryId;
}

inline
const EntryContacts& UpdateContactRequest::contacts() const
{
    return d_contacts;
}

inline
const AuditRecord& UpdateContactRequest::auditRecord() const
{
    return d_auditRecord;
}



                             // ------------------                             
                             // class RegistryInfo                             
                             // ------------------                             

// CLASS METHODS
inline
int RegistryInfo::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& RegistryInfo::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_node, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entry, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int RegistryInfo::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_node, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int RegistryInfo::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NODE: {
        return manipulator(&d_node, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE]);
      } break;
      case ATTRIBUTE_ID_ENTRY: {
        return manipulator(&d_entry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int RegistryInfo::manipulateAttribute(
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
NodeInfo& RegistryInfo::node()
{
    return d_node;
}

inline
bdeut_NullableValue<EntryInfo>& RegistryInfo::entry()
{
    return d_entry;
}

// ACCESSORS
template <class STREAM>
STREAM& RegistryInfo::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_node, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entry, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int RegistryInfo::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_node, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int RegistryInfo::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_NODE: {
        return accessor(d_node, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_NODE]);
      } break;
      case ATTRIBUTE_ID_ENTRY: {
        return accessor(d_entry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int RegistryInfo::accessAttribute(
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
const NodeInfo& RegistryInfo::node() const
{
    return d_node;
}

inline
const bdeut_NullableValue<EntryInfo>& RegistryInfo::entry() const
{
    return d_entry;
}



                          // -----------------------                           
                          // class BregChangeRequest                           
                          // -----------------------                           

// CLASS METHODS
inline
int BregChangeRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& BregChangeRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_approverUuid, 1);
            bdex_InStreamFunctions::streamIn(stream, d_registry, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryValue, 1);
            bdex_InStreamFunctions::streamIn(stream, d_prqsPriority, 1);
            bdex_InStreamFunctions::streamIn(stream, d_covgRequired, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int BregChangeRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_approverUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_APPROVER_UUID]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_prqsPriority, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_PRIORITY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_covgRequired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_COVG_REQUIRED]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int BregChangeRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_APPROVER_UUID: {
        return manipulator(&d_approverUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_APPROVER_UUID]);
      } break;
      case ATTRIBUTE_ID_REGISTRY: {
        return manipulator(&d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
      } break;
      case ATTRIBUTE_ID_ENTRY_VALUE: {
        return manipulator(&d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
      } break;
      case ATTRIBUTE_ID_PRQS_PRIORITY: {
        return manipulator(&d_prqsPriority, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_PRIORITY]);
      } break;
      case ATTRIBUTE_ID_COVG_REQUIRED: {
        return manipulator(&d_covgRequired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_COVG_REQUIRED]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int BregChangeRequest::manipulateAttribute(
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
int& BregChangeRequest::approverUuid()
{
    return d_approverUuid;
}

inline
RegistryInfo& BregChangeRequest::registry()
{
    return d_registry;
}

inline
EntryValue& BregChangeRequest::entryValue()
{
    return d_entryValue;
}

inline
int& BregChangeRequest::prqsPriority()
{
    return d_prqsPriority;
}

inline
bool& BregChangeRequest::covgRequired()
{
    return d_covgRequired;
}

// ACCESSORS
template <class STREAM>
STREAM& BregChangeRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_approverUuid, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_registry, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryValue, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_prqsPriority, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_covgRequired, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int BregChangeRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_approverUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_APPROVER_UUID]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_prqsPriority, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_PRIORITY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_covgRequired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_COVG_REQUIRED]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int BregChangeRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_APPROVER_UUID: {
        return accessor(d_approverUuid, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_APPROVER_UUID]);
      } break;
      case ATTRIBUTE_ID_REGISTRY: {
        return accessor(d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
      } break;
      case ATTRIBUTE_ID_ENTRY_VALUE: {
        return accessor(d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
      } break;
      case ATTRIBUTE_ID_PRQS_PRIORITY: {
        return accessor(d_prqsPriority, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_PRQS_PRIORITY]);
      } break;
      case ATTRIBUTE_ID_COVG_REQUIRED: {
        return accessor(d_covgRequired, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_COVG_REQUIRED]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int BregChangeRequest::accessAttribute(
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
int BregChangeRequest::approverUuid() const
{
    return d_approverUuid;
}

inline
const RegistryInfo& BregChangeRequest::registry() const
{
    return d_registry;
}

inline
const EntryValue& BregChangeRequest::entryValue() const
{
    return d_entryValue;
}

inline
int BregChangeRequest::prqsPriority() const
{
    return d_prqsPriority;
}

inline
bool BregChangeRequest::covgRequired() const
{
    return d_covgRequired;
}



                         // -------------------------                          
                         // class GenerateCodeRequest                          
                         // -------------------------                          

// CLASS METHODS
inline
int GenerateCodeRequest::maxSupportedBdexVersion()
{
    return 1;  // versions start at 1.
}

// MANIPULATORS
template <class STREAM>
STREAM& GenerateCodeRequest::bdexStreamIn(STREAM& stream, int version)
{
    if (stream) {
        switch (version) {
          case 1: {
            bdex_InStreamFunctions::streamIn(stream, d_registry, 1);
            bdex_InStreamFunctions::streamIn(stream, d_entryValue, 1);
          } break;
          default: {
            stream.invalidate();
          }
        }
    }
    return stream;
}

template <class MANIPULATOR>
int GenerateCodeRequest::manipulateAttributes(MANIPULATOR& manipulator)
{
    int ret;

    ret = manipulator(&d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
    if (ret) {
        return ret;
    }

    ret = manipulator(&d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class MANIPULATOR>
int GenerateCodeRequest::manipulateAttribute(MANIPULATOR& manipulator, int id)
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY: {
        return manipulator(&d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
      } break;
      case ATTRIBUTE_ID_ENTRY_VALUE: {
        return manipulator(&d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class MANIPULATOR>
int GenerateCodeRequest::manipulateAttribute(
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
RegistryInfo& GenerateCodeRequest::registry()
{
    return d_registry;
}

inline
EntryValue& GenerateCodeRequest::entryValue()
{
    return d_entryValue;
}

// ACCESSORS
template <class STREAM>
STREAM& GenerateCodeRequest::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
        bdex_OutStreamFunctions::streamOut(stream, d_registry, 1);
        bdex_OutStreamFunctions::streamOut(stream, d_entryValue, 1);
      } break;
    }
    return stream;
}

template <class ACCESSOR>
int GenerateCodeRequest::accessAttributes(ACCESSOR& accessor) const
{
    int ret;

    ret = accessor(d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
    if (ret) {
        return ret;
    }

    ret = accessor(d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
    if (ret) {
        return ret;
    }

    return ret;
}

template <class ACCESSOR>
int GenerateCodeRequest::accessAttribute(ACCESSOR& accessor, int id) const
{
    enum { NOT_FOUND = -1 };

    switch (id) {
      case ATTRIBUTE_ID_REGISTRY: {
        return accessor(d_registry, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_REGISTRY]);
      } break;
      case ATTRIBUTE_ID_ENTRY_VALUE: {
        return accessor(d_entryValue, ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_ENTRY_VALUE]);
      } break;
      default:
        return NOT_FOUND;
    }
}

template <class ACCESSOR>
int GenerateCodeRequest::accessAttribute(
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
const RegistryInfo& GenerateCodeRequest::registry() const
{
    return d_registry;
}

inline
const EntryValue& GenerateCodeRequest::entryValue() const
{
    return d_entryValue;
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
Response::Response(bslma::Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
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
              case SELECTION_ID_ERROR_RESPONSE: {
                makeErrorResponse();
                bdex_InStreamFunctions::streamIn(
                    stream, d_errorResponse.object(), 1);
              } break;
              case SELECTION_ID_NODE_TREE: {
                makeNodeTree();
                bdex_InStreamFunctions::streamIn(
                    stream, d_nodeTree.object(), 1);
              } break;
              case SELECTION_ID_NODE_DETAILS: {
                makeNodeDetails();
                bdex_InStreamFunctions::streamIn(
                    stream, d_nodeDetails.object(), 1);
              } break;
              case SELECTION_ID_NODE_ID: {
                makeNodeId();
                bdex_InStreamFunctions::streamIn(
                    stream, d_nodeId.object(), 1);
              } break;
              case SELECTION_ID_VALUES: {
                makeValues();
                bdex_InStreamFunctions::streamIn(
                    stream, d_values.object(), 1);
              } break;
              case SELECTION_ID_NODE_INFO: {
                makeNodeInfo();
                bdex_InStreamFunctions::streamIn(
                    stream, d_nodeInfo.object(), 1);
              } break;
              case SELECTION_ID_ENTRY_INFO: {
                makeEntryInfo();
                bdex_InStreamFunctions::streamIn(
                    stream, d_entryInfo.object(), 1);
              } break;
              case SELECTION_ID_REGISTRY_INFO: {
                makeRegistryInfo();
                bdex_InStreamFunctions::streamIn(
                    stream, d_registryInfo.object(), 1);
              } break;
              case SELECTION_ID_ENTRY_VALUE: {
                makeEntryValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_entryValue.object(), 1);
              } break;
              case SELECTION_ID_ENTRY_SUBSCRIBERS: {
                makeEntrySubscribers();
                bdex_InStreamFunctions::streamIn(
                    stream, d_entrySubscribers.object(), 1);
              } break;
              case SELECTION_ID_VERSION_HISTORY: {
                makeVersionHistory();
                bdex_InStreamFunctions::streamIn(
                    stream, d_versionHistory.object(), 1);
              } break;
              case SELECTION_ID_PRIVILEGE_LIST: {
                makePrivilegeList();
                bdex_InStreamFunctions::streamIn(
                    stream, d_privilegeList.object(), 1);
              } break;
              case SELECTION_ID_OUT_GROUP: {
                makeOutGroup();
                bdex_InStreamFunctions::streamIn(
                    stream, d_outGroup.object(), 1);
              } break;
              case SELECTION_ID_DEPT_CHAIN: {
                makeDeptChain();
                bdex_InStreamFunctions::streamIn(
                    stream, d_deptChain.object(), 1);
              } break;
              case SELECTION_ID_DRQS_GROUP: {
                makeDrqsGroup();
                bdex_InStreamFunctions::streamIn(
                    stream, d_drqsGroup.object(), 1);
              } break;
              case SELECTION_ID_MACHINE_GROUP: {
                makeMachineGroup();
                bdex_InStreamFunctions::streamIn(
                    stream, d_machineGroup.object(), 1);
              } break;
              case SELECTION_ID_TODO_LIST: {
                makeTodoList();
                bdex_InStreamFunctions::streamIn(
                    stream, d_todoList.object(), 1);
              } break;
              case SELECTION_ID_RELATED_TICKET_SUMMARY: {
                makeRelatedTicketSummary();
                bdex_InStreamFunctions::streamIn(
                    stream, d_relatedTicketSummary.object(), 1);
              } break;
              case SELECTION_ID_NODE_TYPE: {
                makeNodeType();
                bdex_InStreamFunctions::streamIn(
                    stream, d_nodeType.object(), 1);
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
      case Response::SELECTION_ID_ERROR_RESPONSE:
        return manipulator(&d_errorResponse.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ERROR_RESPONSE]);
      case Response::SELECTION_ID_NODE_TREE:
        return manipulator(&d_nodeTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TREE]);
      case Response::SELECTION_ID_NODE_DETAILS:
        return manipulator(&d_nodeDetails.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_DETAILS]);
      case Response::SELECTION_ID_NODE_ID:
        return manipulator(&d_nodeId.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_ID]);
      case Response::SELECTION_ID_VALUES:
        return manipulator(&d_values.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VALUES]);
      case Response::SELECTION_ID_NODE_INFO:
        return manipulator(&d_nodeInfo.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_INFO]);
      case Response::SELECTION_ID_ENTRY_INFO:
        return manipulator(&d_entryInfo.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_INFO]);
      case Response::SELECTION_ID_REGISTRY_INFO:
        return manipulator(&d_registryInfo.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_REGISTRY_INFO]);
      case Response::SELECTION_ID_ENTRY_VALUE:
        return manipulator(&d_entryValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_VALUE]);
      case Response::SELECTION_ID_ENTRY_SUBSCRIBERS:
        return manipulator(&d_entrySubscribers.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_SUBSCRIBERS]);
      case Response::SELECTION_ID_VERSION_HISTORY:
        return manipulator(&d_versionHistory.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VERSION_HISTORY]);
      case Response::SELECTION_ID_PRIVILEGE_LIST:
        return manipulator(&d_privilegeList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_PRIVILEGE_LIST]);
      case Response::SELECTION_ID_OUT_GROUP:
        return manipulator(&d_outGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_OUT_GROUP]);
      case Response::SELECTION_ID_DEPT_CHAIN:
        return manipulator(&d_deptChain.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DEPT_CHAIN]);
      case Response::SELECTION_ID_DRQS_GROUP:
        return manipulator(&d_drqsGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DRQS_GROUP]);
      case Response::SELECTION_ID_MACHINE_GROUP:
        return manipulator(&d_machineGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_MACHINE_GROUP]);
      case Response::SELECTION_ID_TODO_LIST:
        return manipulator(&d_todoList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_TODO_LIST]);
      case Response::SELECTION_ID_RELATED_TICKET_SUMMARY:
        return manipulator(&d_relatedTicketSummary.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_RELATED_TICKET_SUMMARY]);
      case Response::SELECTION_ID_NODE_TYPE:
        return manipulator(&d_nodeType.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TYPE]);
      default:
        BSLS_ASSERT(Response::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
ErrorInfoResponse& Response::errorResponse()
{
    BSLS_ASSERT(SELECTION_ID_ERROR_RESPONSE == d_selectionId);
    return d_errorResponse.object();
}

inline
bsl::vector<Node>& Response::nodeTree()
{
    BSLS_ASSERT(SELECTION_ID_NODE_TREE == d_selectionId);
    return d_nodeTree.object();
}

inline
NodeDetails& Response::nodeDetails()
{
    BSLS_ASSERT(SELECTION_ID_NODE_DETAILS == d_selectionId);
    return d_nodeDetails.object();
}

inline
int& Response::nodeId()
{
    BSLS_ASSERT(SELECTION_ID_NODE_ID == d_selectionId);
    return d_nodeId.object();
}

inline
bsl::vector<BregValue>& Response::values()
{
    BSLS_ASSERT(SELECTION_ID_VALUES == d_selectionId);
    return d_values.object();
}

inline
NodeInfo& Response::nodeInfo()
{
    BSLS_ASSERT(SELECTION_ID_NODE_INFO == d_selectionId);
    return d_nodeInfo.object();
}

inline
EntryInfo& Response::entryInfo()
{
    BSLS_ASSERT(SELECTION_ID_ENTRY_INFO == d_selectionId);
    return d_entryInfo.object();
}

inline
RegistryInfo& Response::registryInfo()
{
    BSLS_ASSERT(SELECTION_ID_REGISTRY_INFO == d_selectionId);
    return d_registryInfo.object();
}

inline
EntryValue& Response::entryValue()
{
    BSLS_ASSERT(SELECTION_ID_ENTRY_VALUE == d_selectionId);
    return d_entryValue.object();
}

inline
EntrySubscribers& Response::entrySubscribers()
{
    BSLS_ASSERT(SELECTION_ID_ENTRY_SUBSCRIBERS == d_selectionId);
    return d_entrySubscribers.object();
}

inline
bsl::vector<VersionTsp>& Response::versionHistory()
{
    BSLS_ASSERT(SELECTION_ID_VERSION_HISTORY == d_selectionId);
    return d_versionHistory.object();
}

inline
PrivilegeList& Response::privilegeList()
{
    BSLS_ASSERT(SELECTION_ID_PRIVILEGE_LIST == d_selectionId);
    return d_privilegeList.object();
}

inline
Group& Response::outGroup()
{
    BSLS_ASSERT(SELECTION_ID_OUT_GROUP == d_selectionId);
    return d_outGroup.object();
}

inline
bsl::vector<Group>& Response::deptChain()
{
    BSLS_ASSERT(SELECTION_ID_DEPT_CHAIN == d_selectionId);
    return d_deptChain.object();
}

inline
Group& Response::drqsGroup()
{
    BSLS_ASSERT(SELECTION_ID_DRQS_GROUP == d_selectionId);
    return d_drqsGroup.object();
}

inline
bsl::string& Response::machineGroup()
{
    BSLS_ASSERT(SELECTION_ID_MACHINE_GROUP == d_selectionId);
    return d_machineGroup.object();
}

inline
TodoList& Response::todoList()
{
    BSLS_ASSERT(SELECTION_ID_TODO_LIST == d_selectionId);
    return d_todoList.object();
}

inline
bsl::string& Response::relatedTicketSummary()
{
    BSLS_ASSERT(SELECTION_ID_RELATED_TICKET_SUMMARY == d_selectionId);
    return d_relatedTicketSummary.object();
}

inline
bsl::string& Response::nodeType()
{
    BSLS_ASSERT(SELECTION_ID_NODE_TYPE == d_selectionId);
    return d_nodeType.object();
}

// ACCESSORS
template <class STREAM>
STREAM& Response::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_ERROR_RESPONSE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_errorResponse.object(), 1);
              } break;
              case SELECTION_ID_NODE_TREE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_nodeTree.object(), 1);
              } break;
              case SELECTION_ID_NODE_DETAILS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_nodeDetails.object(), 1);
              } break;
              case SELECTION_ID_NODE_ID: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_nodeId.object(), 1);
              } break;
              case SELECTION_ID_VALUES: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_values.object(), 1);
              } break;
              case SELECTION_ID_NODE_INFO: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_nodeInfo.object(), 1);
              } break;
              case SELECTION_ID_ENTRY_INFO: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_entryInfo.object(), 1);
              } break;
              case SELECTION_ID_REGISTRY_INFO: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_registryInfo.object(), 1);
              } break;
              case SELECTION_ID_ENTRY_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_entryValue.object(), 1);
              } break;
              case SELECTION_ID_ENTRY_SUBSCRIBERS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_entrySubscribers.object(), 1);
              } break;
              case SELECTION_ID_VERSION_HISTORY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_versionHistory.object(), 1);
              } break;
              case SELECTION_ID_PRIVILEGE_LIST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_privilegeList.object(), 1);
              } break;
              case SELECTION_ID_OUT_GROUP: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_outGroup.object(), 1);
              } break;
              case SELECTION_ID_DEPT_CHAIN: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_deptChain.object(), 1);
              } break;
              case SELECTION_ID_DRQS_GROUP: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_drqsGroup.object(), 1);
              } break;
              case SELECTION_ID_MACHINE_GROUP: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_machineGroup.object(), 1);
              } break;
              case SELECTION_ID_TODO_LIST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_todoList.object(), 1);
              } break;
              case SELECTION_ID_RELATED_TICKET_SUMMARY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_relatedTicketSummary.object(), 1);
              } break;
              case SELECTION_ID_NODE_TYPE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_nodeType.object(), 1);
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
      case SELECTION_ID_ERROR_RESPONSE:
        return accessor(d_errorResponse.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ERROR_RESPONSE]);
      case SELECTION_ID_NODE_TREE:
        return accessor(d_nodeTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TREE]);
      case SELECTION_ID_NODE_DETAILS:
        return accessor(d_nodeDetails.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_DETAILS]);
      case SELECTION_ID_NODE_ID:
        return accessor(d_nodeId.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_ID]);
      case SELECTION_ID_VALUES:
        return accessor(d_values.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VALUES]);
      case SELECTION_ID_NODE_INFO:
        return accessor(d_nodeInfo.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_INFO]);
      case SELECTION_ID_ENTRY_INFO:
        return accessor(d_entryInfo.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_INFO]);
      case SELECTION_ID_REGISTRY_INFO:
        return accessor(d_registryInfo.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_REGISTRY_INFO]);
      case SELECTION_ID_ENTRY_VALUE:
        return accessor(d_entryValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_VALUE]);
      case SELECTION_ID_ENTRY_SUBSCRIBERS:
        return accessor(d_entrySubscribers.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_ENTRY_SUBSCRIBERS]);
      case SELECTION_ID_VERSION_HISTORY:
        return accessor(d_versionHistory.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VERSION_HISTORY]);
      case SELECTION_ID_PRIVILEGE_LIST:
        return accessor(d_privilegeList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_PRIVILEGE_LIST]);
      case SELECTION_ID_OUT_GROUP:
        return accessor(d_outGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_OUT_GROUP]);
      case SELECTION_ID_DEPT_CHAIN:
        return accessor(d_deptChain.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DEPT_CHAIN]);
      case SELECTION_ID_DRQS_GROUP:
        return accessor(d_drqsGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DRQS_GROUP]);
      case SELECTION_ID_MACHINE_GROUP:
        return accessor(d_machineGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_MACHINE_GROUP]);
      case SELECTION_ID_TODO_LIST:
        return accessor(d_todoList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_TODO_LIST]);
      case SELECTION_ID_RELATED_TICKET_SUMMARY:
        return accessor(d_relatedTicketSummary.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_RELATED_TICKET_SUMMARY]);
      case SELECTION_ID_NODE_TYPE:
        return accessor(d_nodeType.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_NODE_TYPE]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const ErrorInfoResponse& Response::errorResponse() const
{
    BSLS_ASSERT(SELECTION_ID_ERROR_RESPONSE == d_selectionId);
    return d_errorResponse.object();
}

inline
const bsl::vector<Node>& Response::nodeTree() const
{
    BSLS_ASSERT(SELECTION_ID_NODE_TREE == d_selectionId);
    return d_nodeTree.object();
}

inline
const NodeDetails& Response::nodeDetails() const
{
    BSLS_ASSERT(SELECTION_ID_NODE_DETAILS == d_selectionId);
    return d_nodeDetails.object();
}

inline
const int& Response::nodeId() const
{
    BSLS_ASSERT(SELECTION_ID_NODE_ID == d_selectionId);
    return d_nodeId.object();
}

inline
const bsl::vector<BregValue>& Response::values() const
{
    BSLS_ASSERT(SELECTION_ID_VALUES == d_selectionId);
    return d_values.object();
}

inline
const NodeInfo& Response::nodeInfo() const
{
    BSLS_ASSERT(SELECTION_ID_NODE_INFO == d_selectionId);
    return d_nodeInfo.object();
}

inline
const EntryInfo& Response::entryInfo() const
{
    BSLS_ASSERT(SELECTION_ID_ENTRY_INFO == d_selectionId);
    return d_entryInfo.object();
}

inline
const RegistryInfo& Response::registryInfo() const
{
    BSLS_ASSERT(SELECTION_ID_REGISTRY_INFO == d_selectionId);
    return d_registryInfo.object();
}

inline
const EntryValue& Response::entryValue() const
{
    BSLS_ASSERT(SELECTION_ID_ENTRY_VALUE == d_selectionId);
    return d_entryValue.object();
}

inline
const EntrySubscribers& Response::entrySubscribers() const
{
    BSLS_ASSERT(SELECTION_ID_ENTRY_SUBSCRIBERS == d_selectionId);
    return d_entrySubscribers.object();
}

inline
const bsl::vector<VersionTsp>& Response::versionHistory() const
{
    BSLS_ASSERT(SELECTION_ID_VERSION_HISTORY == d_selectionId);
    return d_versionHistory.object();
}

inline
const PrivilegeList& Response::privilegeList() const
{
    BSLS_ASSERT(SELECTION_ID_PRIVILEGE_LIST == d_selectionId);
    return d_privilegeList.object();
}

inline
const Group& Response::outGroup() const
{
    BSLS_ASSERT(SELECTION_ID_OUT_GROUP == d_selectionId);
    return d_outGroup.object();
}

inline
const bsl::vector<Group>& Response::deptChain() const
{
    BSLS_ASSERT(SELECTION_ID_DEPT_CHAIN == d_selectionId);
    return d_deptChain.object();
}

inline
const Group& Response::drqsGroup() const
{
    BSLS_ASSERT(SELECTION_ID_DRQS_GROUP == d_selectionId);
    return d_drqsGroup.object();
}

inline
const bsl::string& Response::machineGroup() const
{
    BSLS_ASSERT(SELECTION_ID_MACHINE_GROUP == d_selectionId);
    return d_machineGroup.object();
}

inline
const TodoList& Response::todoList() const
{
    BSLS_ASSERT(SELECTION_ID_TODO_LIST == d_selectionId);
    return d_todoList.object();
}

inline
const bsl::string& Response::relatedTicketSummary() const
{
    BSLS_ASSERT(SELECTION_ID_RELATED_TICKET_SUMMARY == d_selectionId);
    return d_relatedTicketSummary.object();
}

inline
const bsl::string& Response::nodeType() const
{
    BSLS_ASSERT(SELECTION_ID_NODE_TYPE == d_selectionId);
    return d_nodeType.object();
}

inline
bool Response::isErrorResponseValue() const
{
    return SELECTION_ID_ERROR_RESPONSE == d_selectionId;
}

inline
bool Response::isNodeTreeValue() const
{
    return SELECTION_ID_NODE_TREE == d_selectionId;
}

inline
bool Response::isNodeDetailsValue() const
{
    return SELECTION_ID_NODE_DETAILS == d_selectionId;
}

inline
bool Response::isNodeIdValue() const
{
    return SELECTION_ID_NODE_ID == d_selectionId;
}

inline
bool Response::isValuesValue() const
{
    return SELECTION_ID_VALUES == d_selectionId;
}

inline
bool Response::isNodeInfoValue() const
{
    return SELECTION_ID_NODE_INFO == d_selectionId;
}

inline
bool Response::isEntryInfoValue() const
{
    return SELECTION_ID_ENTRY_INFO == d_selectionId;
}

inline
bool Response::isRegistryInfoValue() const
{
    return SELECTION_ID_REGISTRY_INFO == d_selectionId;
}

inline
bool Response::isEntryValueValue() const
{
    return SELECTION_ID_ENTRY_VALUE == d_selectionId;
}

inline
bool Response::isEntrySubscribersValue() const
{
    return SELECTION_ID_ENTRY_SUBSCRIBERS == d_selectionId;
}

inline
bool Response::isVersionHistoryValue() const
{
    return SELECTION_ID_VERSION_HISTORY == d_selectionId;
}

inline
bool Response::isPrivilegeListValue() const
{
    return SELECTION_ID_PRIVILEGE_LIST == d_selectionId;
}

inline
bool Response::isOutGroupValue() const
{
    return SELECTION_ID_OUT_GROUP == d_selectionId;
}

inline
bool Response::isDeptChainValue() const
{
    return SELECTION_ID_DEPT_CHAIN == d_selectionId;
}

inline
bool Response::isDrqsGroupValue() const
{
    return SELECTION_ID_DRQS_GROUP == d_selectionId;
}

inline
bool Response::isMachineGroupValue() const
{
    return SELECTION_ID_MACHINE_GROUP == d_selectionId;
}

inline
bool Response::isTodoListValue() const
{
    return SELECTION_ID_TODO_LIST == d_selectionId;
}

inline
bool Response::isRelatedTicketSummaryValue() const
{
    return SELECTION_ID_RELATED_TICKET_SUMMARY == d_selectionId;
}

inline
bool Response::isNodeTypeValue() const
{
    return SELECTION_ID_NODE_TYPE == d_selectionId;
}

inline
bool Response::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
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
Request::Request(bslma::Allocator *basicAllocator)
: d_selectionId(SELECTION_ID_UNDEFINED)
, d_allocator_p(bslma::Default::allocator(basicAllocator))
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
              case SELECTION_ID_GET_TREE: {
                makeGetTree();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getTree.object(), 1);
              } break;
              case SELECTION_ID_GET_EXPANDED_TREE: {
                makeGetExpandedTree();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getExpandedTree.object(), 1);
              } break;
              case SELECTION_ID_GET_DEFAULT_TREE: {
                makeGetDefaultTree();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getDefaultTree.object(), 1);
              } break;
              case SELECTION_ID_GET_CHILDREN: {
                makeGetChildren();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getChildren.object(), 1);
              } break;
              case SELECTION_ID_GET_DEFAULT_NODE: {
                makeGetDefaultNode();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getDefaultNode.object(), 1);
              } break;
              case SELECTION_ID_GET_NODE_DETAILS: {
                makeGetNodeDetails();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getNodeDetails.object(), 1);
              } break;
              case SELECTION_ID_SET_DEFAULT_NODE: {
                makeSetDefaultNode();
                bdex_InStreamFunctions::streamIn(
                    stream, d_setDefaultNode.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_NAME: {
                makeSearchByName();
                bdex_InStreamFunctions::streamIn(
                    stream, d_searchByName.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_ID: {
                makeSearchById();
                bdex_InStreamFunctions::streamIn(
                    stream, d_searchById.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_ACCESSOR: {
                makeSearchByAccessor();
                bdex_InStreamFunctions::streamIn(
                    stream, d_searchByAccessor.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_CONTACTS: {
                makeSearchByContacts();
                bdex_InStreamFunctions::streamIn(
                    stream, d_searchByContacts.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_KEYWORDS: {
                makeSearchByKeywords();
                bdex_InStreamFunctions::streamIn(
                    stream, d_searchByKeywords.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
                makeSearchByDrqsGroup();
                bdex_InStreamFunctions::streamIn(
                    stream, d_searchByDrqsGroup.object(), 1);
              } break;
              case SELECTION_ID_IS_DELETED: {
                makeIsDeleted();
                bdex_InStreamFunctions::streamIn(
                    stream, d_isDeleted.object(), 1);
              } break;
              case SELECTION_ID_GET_BREG_VALUES: {
                makeGetBregValues();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getBregValues.object(), 1);
              } break;
              case SELECTION_ID_GET_REGISTRY: {
                makeGetRegistry();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getRegistry.object(), 1);
              } break;
              case SELECTION_ID_GET_ENTRY_VALUE: {
                makeGetEntryValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getEntryValue.object(), 1);
              } break;
              case SELECTION_ID_GET_SUBSCRIBERS: {
                makeGetSubscribers();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getSubscribers.object(), 1);
              } break;
              case SELECTION_ID_GET_VERSION_HISTORY: {
                makeGetVersionHistory();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getVersionHistory.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_REGISTRY: {
                makeUpdateRegistry();
                bdex_InStreamFunctions::streamIn(
                    stream, d_updateRegistry.object(), 1);
              } break;
              case SELECTION_ID_DELETE_NODE: {
                makeDeleteNode();
                bdex_InStreamFunctions::streamIn(
                    stream, d_deleteNode.object(), 1);
              } break;
              case SELECTION_ID_MOVE_REGISTRY: {
                makeMoveRegistry();
                bdex_InStreamFunctions::streamIn(
                    stream, d_moveRegistry.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_CONTACT: {
                makeUpdateContact();
                bdex_InStreamFunctions::streamIn(
                    stream, d_updateContact.object(), 1);
              } break;
              case SELECTION_ID_GET_PRIVILEGE_LIST: {
                makeGetPrivilegeList();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getPrivilegeList.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_SUBSCRIBERS: {
                makeUpdateSubscribers();
                bdex_InStreamFunctions::streamIn(
                    stream, d_updateSubscribers.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_PRIVILEGES: {
                makeUpdatePrivileges();
                bdex_InStreamFunctions::streamIn(
                    stream, d_updatePrivileges.object(), 1);
              } break;
              case SELECTION_ID_GET_OUT_GROUP: {
                makeGetOutGroup();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getOutGroup.object(), 1);
              } break;
              case SELECTION_ID_GET_DEPT_CHAIN: {
                makeGetDeptChain();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getDeptChain.object(), 1);
              } break;
              case SELECTION_ID_GET_DRQS_GROUP: {
                makeGetDrqsGroup();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getDrqsGroup.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_DEV_VALUE: {
                makeUpdateDevValue();
                bdex_InStreamFunctions::streamIn(
                    stream, d_updateDevValue.object(), 1);
              } break;
              case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
                makeGetMachineGroupName();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getMachineGroupName.object(), 1);
              } break;
              case SELECTION_ID_VALIDATE_OVERRIDE: {
                makeValidateOverride();
                bdex_InStreamFunctions::streamIn(
                    stream, d_validateOverride.object(), 1);
              } break;
              case SELECTION_ID_GENERATE_CODE: {
                makeGenerateCode();
                bdex_InStreamFunctions::streamIn(
                    stream, d_generateCode.object(), 1);
              } break;
              case SELECTION_ID_RELEASE_CODE: {
                makeReleaseCode();
                bdex_InStreamFunctions::streamIn(
                    stream, d_releaseCode.object(), 1);
              } break;
              case SELECTION_ID_GET_TODO_LIST: {
                makeGetTodoList();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getTodoList.object(), 1);
              } break;
              case SELECTION_ID_GET_RELATED_TICKET: {
                makeGetRelatedTicket();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getRelatedTicket.object(), 1);
              } break;
              case SELECTION_ID_GET_NODE_TYPE: {
                makeGetNodeType();
                bdex_InStreamFunctions::streamIn(
                    stream, d_getNodeType.object(), 1);
              } break;
              case SELECTION_ID_CHANGE_BREG: {
                makeChangeBreg();
                bdex_InStreamFunctions::streamIn(
                    stream, d_changeBreg.object(), 1);
              } break;
              case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
                makeValidatePrqsApprover();
                bdex_InStreamFunctions::streamIn(
                    stream, d_validatePrqsApprover.object(), 1);
              } break;
              case SELECTION_ID_GENERATE_RELEASE_CODE: {
                makeGenerateReleaseCode();
                bdex_InStreamFunctions::streamIn(
                    stream, d_generateReleaseCode.object(), 1);
              } break;
              case SELECTION_ID_MARK_FOR_DELETION: {
                makeMarkForDeletion();
                bdex_InStreamFunctions::streamIn(
                    stream, d_markForDeletion.object(), 1);
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
      case Request::SELECTION_ID_GET_TREE:
        return manipulator(&d_getTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TREE]);
      case Request::SELECTION_ID_GET_EXPANDED_TREE:
        return manipulator(&d_getExpandedTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_EXPANDED_TREE]);
      case Request::SELECTION_ID_GET_DEFAULT_TREE:
        return manipulator(&d_getDefaultTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_TREE]);
      case Request::SELECTION_ID_GET_CHILDREN:
        return manipulator(&d_getChildren.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_CHILDREN]);
      case Request::SELECTION_ID_GET_DEFAULT_NODE:
        return manipulator(&d_getDefaultNode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_NODE]);
      case Request::SELECTION_ID_GET_NODE_DETAILS:
        return manipulator(&d_getNodeDetails.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_DETAILS]);
      case Request::SELECTION_ID_SET_DEFAULT_NODE:
        return manipulator(&d_setDefaultNode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SET_DEFAULT_NODE]);
      case Request::SELECTION_ID_SEARCH_BY_NAME:
        return manipulator(&d_searchByName.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_NAME]);
      case Request::SELECTION_ID_SEARCH_BY_ID:
        return manipulator(&d_searchById.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ID]);
      case Request::SELECTION_ID_SEARCH_BY_ACCESSOR:
        return manipulator(&d_searchByAccessor.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ACCESSOR]);
      case Request::SELECTION_ID_SEARCH_BY_CONTACTS:
        return manipulator(&d_searchByContacts.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_CONTACTS]);
      case Request::SELECTION_ID_SEARCH_BY_KEYWORDS:
        return manipulator(&d_searchByKeywords.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_KEYWORDS]);
      case Request::SELECTION_ID_SEARCH_BY_DRQS_GROUP:
        return manipulator(&d_searchByDrqsGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_DRQS_GROUP]);
      case Request::SELECTION_ID_IS_DELETED:
        return manipulator(&d_isDeleted.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_IS_DELETED]);
      case Request::SELECTION_ID_GET_BREG_VALUES:
        return manipulator(&d_getBregValues.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_BREG_VALUES]);
      case Request::SELECTION_ID_GET_REGISTRY:
        return manipulator(&d_getRegistry.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_REGISTRY]);
      case Request::SELECTION_ID_GET_ENTRY_VALUE:
        return manipulator(&d_getEntryValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_ENTRY_VALUE]);
      case Request::SELECTION_ID_GET_SUBSCRIBERS:
        return manipulator(&d_getSubscribers.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_SUBSCRIBERS]);
      case Request::SELECTION_ID_GET_VERSION_HISTORY:
        return manipulator(&d_getVersionHistory.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_VERSION_HISTORY]);
      case Request::SELECTION_ID_UPDATE_REGISTRY:
        return manipulator(&d_updateRegistry.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_REGISTRY]);
      case Request::SELECTION_ID_DELETE_NODE:
        return manipulator(&d_deleteNode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DELETE_NODE]);
      case Request::SELECTION_ID_MOVE_REGISTRY:
        return manipulator(&d_moveRegistry.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_MOVE_REGISTRY]);
      case Request::SELECTION_ID_UPDATE_CONTACT:
        return manipulator(&d_updateContact.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_CONTACT]);
      case Request::SELECTION_ID_GET_PRIVILEGE_LIST:
        return manipulator(&d_getPrivilegeList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_PRIVILEGE_LIST]);
      case Request::SELECTION_ID_UPDATE_SUBSCRIBERS:
        return manipulator(&d_updateSubscribers.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_SUBSCRIBERS]);
      case Request::SELECTION_ID_UPDATE_PRIVILEGES:
        return manipulator(&d_updatePrivileges.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_PRIVILEGES]);
      case Request::SELECTION_ID_GET_OUT_GROUP:
        return manipulator(&d_getOutGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_OUT_GROUP]);
      case Request::SELECTION_ID_GET_DEPT_CHAIN:
        return manipulator(&d_getDeptChain.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEPT_CHAIN]);
      case Request::SELECTION_ID_GET_DRQS_GROUP:
        return manipulator(&d_getDrqsGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DRQS_GROUP]);
      case Request::SELECTION_ID_UPDATE_DEV_VALUE:
        return manipulator(&d_updateDevValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_DEV_VALUE]);
      case Request::SELECTION_ID_GET_MACHINE_GROUP_NAME:
        return manipulator(&d_getMachineGroupName.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_MACHINE_GROUP_NAME]);
      case Request::SELECTION_ID_VALIDATE_OVERRIDE:
        return manipulator(&d_validateOverride.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_OVERRIDE]);
      case Request::SELECTION_ID_GENERATE_CODE:
        return manipulator(&d_generateCode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_CODE]);
      case Request::SELECTION_ID_RELEASE_CODE:
        return manipulator(&d_releaseCode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_RELEASE_CODE]);
      case Request::SELECTION_ID_GET_TODO_LIST:
        return manipulator(&d_getTodoList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TODO_LIST]);
      case Request::SELECTION_ID_GET_RELATED_TICKET:
        return manipulator(&d_getRelatedTicket.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_RELATED_TICKET]);
      case Request::SELECTION_ID_GET_NODE_TYPE:
        return manipulator(&d_getNodeType.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_TYPE]);
      case Request::SELECTION_ID_CHANGE_BREG:
        return manipulator(&d_changeBreg.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHANGE_BREG]);
      case Request::SELECTION_ID_VALIDATE_PRQS_APPROVER:
        return manipulator(&d_validatePrqsApprover.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_PRQS_APPROVER]);
      case Request::SELECTION_ID_GENERATE_RELEASE_CODE:
        return manipulator(&d_generateReleaseCode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_RELEASE_CODE]);
      case Request::SELECTION_ID_MARK_FOR_DELETION:
        return manipulator(&d_markForDeletion.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_MARK_FOR_DELETION]);
      default:
        BSLS_ASSERT(Request::SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
int& Request::getTree()
{
    BSLS_ASSERT(SELECTION_ID_GET_TREE == d_selectionId);
    return d_getTree.object();
}

inline
int& Request::getExpandedTree()
{
    BSLS_ASSERT(SELECTION_ID_GET_EXPANDED_TREE == d_selectionId);
    return d_getExpandedTree.object();
}

inline
Void& Request::getDefaultTree()
{
    BSLS_ASSERT(SELECTION_ID_GET_DEFAULT_TREE == d_selectionId);
    return d_getDefaultTree.object();
}

inline
int& Request::getChildren()
{
    BSLS_ASSERT(SELECTION_ID_GET_CHILDREN == d_selectionId);
    return d_getChildren.object();
}

inline
Void& Request::getDefaultNode()
{
    BSLS_ASSERT(SELECTION_ID_GET_DEFAULT_NODE == d_selectionId);
    return d_getDefaultNode.object();
}

inline
int& Request::getNodeDetails()
{
    BSLS_ASSERT(SELECTION_ID_GET_NODE_DETAILS == d_selectionId);
    return d_getNodeDetails.object();
}

inline
int& Request::setDefaultNode()
{
    BSLS_ASSERT(SELECTION_ID_SET_DEFAULT_NODE == d_selectionId);
    return d_setDefaultNode.object();
}

inline
bsl::string& Request::searchByName()
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_NAME == d_selectionId);
    return d_searchByName.object();
}

inline
int& Request::searchById()
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_ID == d_selectionId);
    return d_searchById.object();
}

inline
bsl::string& Request::searchByAccessor()
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_ACCESSOR == d_selectionId);
    return d_searchByAccessor.object();
}

inline
SearchByContacts& Request::searchByContacts()
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_CONTACTS == d_selectionId);
    return d_searchByContacts.object();
}

inline
SearchByKeywords& Request::searchByKeywords()
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_KEYWORDS == d_selectionId);
    return d_searchByKeywords.object();
}

inline
int& Request::searchByDrqsGroup()
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_DRQS_GROUP == d_selectionId);
    return d_searchByDrqsGroup.object();
}

inline
int& Request::isDeleted()
{
    BSLS_ASSERT(SELECTION_ID_IS_DELETED == d_selectionId);
    return d_isDeleted.object();
}

inline
GetBregValuesRequest& Request::getBregValues()
{
    BSLS_ASSERT(SELECTION_ID_GET_BREG_VALUES == d_selectionId);
    return d_getBregValues.object();
}

inline
int& Request::getRegistry()
{
    BSLS_ASSERT(SELECTION_ID_GET_REGISTRY == d_selectionId);
    return d_getRegistry.object();
}

inline
ValueRequest& Request::getEntryValue()
{
    BSLS_ASSERT(SELECTION_ID_GET_ENTRY_VALUE == d_selectionId);
    return d_getEntryValue.object();
}

inline
int& Request::getSubscribers()
{
    BSLS_ASSERT(SELECTION_ID_GET_SUBSCRIBERS == d_selectionId);
    return d_getSubscribers.object();
}

inline
int& Request::getVersionHistory()
{
    BSLS_ASSERT(SELECTION_ID_GET_VERSION_HISTORY == d_selectionId);
    return d_getVersionHistory.object();
}

inline
RegistryInfo& Request::updateRegistry()
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_REGISTRY == d_selectionId);
    return d_updateRegistry.object();
}

inline
int& Request::deleteNode()
{
    BSLS_ASSERT(SELECTION_ID_DELETE_NODE == d_selectionId);
    return d_deleteNode.object();
}

inline
MoveRequest& Request::moveRegistry()
{
    BSLS_ASSERT(SELECTION_ID_MOVE_REGISTRY == d_selectionId);
    return d_moveRegistry.object();
}

inline
UpdateContactRequest& Request::updateContact()
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_CONTACT == d_selectionId);
    return d_updateContact.object();
}

inline
int& Request::getPrivilegeList()
{
    BSLS_ASSERT(SELECTION_ID_GET_PRIVILEGE_LIST == d_selectionId);
    return d_getPrivilegeList.object();
}

inline
EntrySubscribers& Request::updateSubscribers()
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_SUBSCRIBERS == d_selectionId);
    return d_updateSubscribers.object();
}

inline
PrivilegeList& Request::updatePrivileges()
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_PRIVILEGES == d_selectionId);
    return d_updatePrivileges.object();
}

inline
int& Request::getOutGroup()
{
    BSLS_ASSERT(SELECTION_ID_GET_OUT_GROUP == d_selectionId);
    return d_getOutGroup.object();
}

inline
int& Request::getDeptChain()
{
    BSLS_ASSERT(SELECTION_ID_GET_DEPT_CHAIN == d_selectionId);
    return d_getDeptChain.object();
}

inline
int& Request::getDrqsGroup()
{
    BSLS_ASSERT(SELECTION_ID_GET_DRQS_GROUP == d_selectionId);
    return d_getDrqsGroup.object();
}

inline
EntryValue& Request::updateDevValue()
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_DEV_VALUE == d_selectionId);
    return d_updateDevValue.object();
}

inline
int& Request::getMachineGroupName()
{
    BSLS_ASSERT(SELECTION_ID_GET_MACHINE_GROUP_NAME == d_selectionId);
    return d_getMachineGroupName.object();
}

inline
OverrideInfo& Request::validateOverride()
{
    BSLS_ASSERT(SELECTION_ID_VALIDATE_OVERRIDE == d_selectionId);
    return d_validateOverride.object();
}

inline
GenerateCodeRequest& Request::generateCode()
{
    BSLS_ASSERT(SELECTION_ID_GENERATE_CODE == d_selectionId);
    return d_generateCode.object();
}

inline
BregChangeRequest& Request::releaseCode()
{
    BSLS_ASSERT(SELECTION_ID_RELEASE_CODE == d_selectionId);
    return d_releaseCode.object();
}

inline
int& Request::getTodoList()
{
    BSLS_ASSERT(SELECTION_ID_GET_TODO_LIST == d_selectionId);
    return d_getTodoList.object();
}

inline
RelatedTicketRequest& Request::getRelatedTicket()
{
    BSLS_ASSERT(SELECTION_ID_GET_RELATED_TICKET == d_selectionId);
    return d_getRelatedTicket.object();
}

inline
int& Request::getNodeType()
{
    BSLS_ASSERT(SELECTION_ID_GET_NODE_TYPE == d_selectionId);
    return d_getNodeType.object();
}

inline
BregChangeRequest& Request::changeBreg()
{
    BSLS_ASSERT(SELECTION_ID_CHANGE_BREG == d_selectionId);
    return d_changeBreg.object();
}

inline
BregChangeRequest& Request::validatePrqsApprover()
{
    BSLS_ASSERT(SELECTION_ID_VALIDATE_PRQS_APPROVER == d_selectionId);
    return d_validatePrqsApprover.object();
}

inline
BregChangeRequest& Request::generateReleaseCode()
{
    BSLS_ASSERT(SELECTION_ID_GENERATE_RELEASE_CODE == d_selectionId);
    return d_generateReleaseCode.object();
}

inline
MarkForDeletionRequest& Request::markForDeletion()
{
    BSLS_ASSERT(SELECTION_ID_MARK_FOR_DELETION == d_selectionId);
    return d_markForDeletion.object();
}

// ACCESSORS
template <class STREAM>
STREAM& Request::bdexStreamOut(STREAM& stream, int version) const
{
    switch (version) {
      case 1: {
            stream.putInt16(d_selectionId);
            switch (d_selectionId) {
              case SELECTION_ID_GET_TREE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getTree.object(), 1);
              } break;
              case SELECTION_ID_GET_EXPANDED_TREE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getExpandedTree.object(), 1);
              } break;
              case SELECTION_ID_GET_DEFAULT_TREE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getDefaultTree.object(), 1);
              } break;
              case SELECTION_ID_GET_CHILDREN: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getChildren.object(), 1);
              } break;
              case SELECTION_ID_GET_DEFAULT_NODE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getDefaultNode.object(), 1);
              } break;
              case SELECTION_ID_GET_NODE_DETAILS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getNodeDetails.object(), 1);
              } break;
              case SELECTION_ID_SET_DEFAULT_NODE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_setDefaultNode.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_NAME: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_searchByName.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_ID: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_searchById.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_ACCESSOR: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_searchByAccessor.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_CONTACTS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_searchByContacts.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_KEYWORDS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_searchByKeywords.object(), 1);
              } break;
              case SELECTION_ID_SEARCH_BY_DRQS_GROUP: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_searchByDrqsGroup.object(), 1);
              } break;
              case SELECTION_ID_IS_DELETED: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_isDeleted.object(), 1);
              } break;
              case SELECTION_ID_GET_BREG_VALUES: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getBregValues.object(), 1);
              } break;
              case SELECTION_ID_GET_REGISTRY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getRegistry.object(), 1);
              } break;
              case SELECTION_ID_GET_ENTRY_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getEntryValue.object(), 1);
              } break;
              case SELECTION_ID_GET_SUBSCRIBERS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getSubscribers.object(), 1);
              } break;
              case SELECTION_ID_GET_VERSION_HISTORY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getVersionHistory.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_REGISTRY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_updateRegistry.object(), 1);
              } break;
              case SELECTION_ID_DELETE_NODE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_deleteNode.object(), 1);
              } break;
              case SELECTION_ID_MOVE_REGISTRY: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_moveRegistry.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_CONTACT: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_updateContact.object(), 1);
              } break;
              case SELECTION_ID_GET_PRIVILEGE_LIST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getPrivilegeList.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_SUBSCRIBERS: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_updateSubscribers.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_PRIVILEGES: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_updatePrivileges.object(), 1);
              } break;
              case SELECTION_ID_GET_OUT_GROUP: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getOutGroup.object(), 1);
              } break;
              case SELECTION_ID_GET_DEPT_CHAIN: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getDeptChain.object(), 1);
              } break;
              case SELECTION_ID_GET_DRQS_GROUP: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getDrqsGroup.object(), 1);
              } break;
              case SELECTION_ID_UPDATE_DEV_VALUE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_updateDevValue.object(), 1);
              } break;
              case SELECTION_ID_GET_MACHINE_GROUP_NAME: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getMachineGroupName.object(), 1);
              } break;
              case SELECTION_ID_VALIDATE_OVERRIDE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_validateOverride.object(), 1);
              } break;
              case SELECTION_ID_GENERATE_CODE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_generateCode.object(), 1);
              } break;
              case SELECTION_ID_RELEASE_CODE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_releaseCode.object(), 1);
              } break;
              case SELECTION_ID_GET_TODO_LIST: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getTodoList.object(), 1);
              } break;
              case SELECTION_ID_GET_RELATED_TICKET: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getRelatedTicket.object(), 1);
              } break;
              case SELECTION_ID_GET_NODE_TYPE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_getNodeType.object(), 1);
              } break;
              case SELECTION_ID_CHANGE_BREG: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_changeBreg.object(), 1);
              } break;
              case SELECTION_ID_VALIDATE_PRQS_APPROVER: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_validatePrqsApprover.object(), 1);
              } break;
              case SELECTION_ID_GENERATE_RELEASE_CODE: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_generateReleaseCode.object(), 1);
              } break;
              case SELECTION_ID_MARK_FOR_DELETION: {
                bdex_OutStreamFunctions::streamOut(
                    stream, d_markForDeletion.object(), 1);
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
      case SELECTION_ID_GET_TREE:
        return accessor(d_getTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TREE]);
      case SELECTION_ID_GET_EXPANDED_TREE:
        return accessor(d_getExpandedTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_EXPANDED_TREE]);
      case SELECTION_ID_GET_DEFAULT_TREE:
        return accessor(d_getDefaultTree.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_TREE]);
      case SELECTION_ID_GET_CHILDREN:
        return accessor(d_getChildren.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_CHILDREN]);
      case SELECTION_ID_GET_DEFAULT_NODE:
        return accessor(d_getDefaultNode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEFAULT_NODE]);
      case SELECTION_ID_GET_NODE_DETAILS:
        return accessor(d_getNodeDetails.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_DETAILS]);
      case SELECTION_ID_SET_DEFAULT_NODE:
        return accessor(d_setDefaultNode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SET_DEFAULT_NODE]);
      case SELECTION_ID_SEARCH_BY_NAME:
        return accessor(d_searchByName.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_NAME]);
      case SELECTION_ID_SEARCH_BY_ID:
        return accessor(d_searchById.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ID]);
      case SELECTION_ID_SEARCH_BY_ACCESSOR:
        return accessor(d_searchByAccessor.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_ACCESSOR]);
      case SELECTION_ID_SEARCH_BY_CONTACTS:
        return accessor(d_searchByContacts.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_CONTACTS]);
      case SELECTION_ID_SEARCH_BY_KEYWORDS:
        return accessor(d_searchByKeywords.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_KEYWORDS]);
      case SELECTION_ID_SEARCH_BY_DRQS_GROUP:
        return accessor(d_searchByDrqsGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_SEARCH_BY_DRQS_GROUP]);
      case SELECTION_ID_IS_DELETED:
        return accessor(d_isDeleted.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_IS_DELETED]);
      case SELECTION_ID_GET_BREG_VALUES:
        return accessor(d_getBregValues.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_BREG_VALUES]);
      case SELECTION_ID_GET_REGISTRY:
        return accessor(d_getRegistry.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_REGISTRY]);
      case SELECTION_ID_GET_ENTRY_VALUE:
        return accessor(d_getEntryValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_ENTRY_VALUE]);
      case SELECTION_ID_GET_SUBSCRIBERS:
        return accessor(d_getSubscribers.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_SUBSCRIBERS]);
      case SELECTION_ID_GET_VERSION_HISTORY:
        return accessor(d_getVersionHistory.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_VERSION_HISTORY]);
      case SELECTION_ID_UPDATE_REGISTRY:
        return accessor(d_updateRegistry.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_REGISTRY]);
      case SELECTION_ID_DELETE_NODE:
        return accessor(d_deleteNode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_DELETE_NODE]);
      case SELECTION_ID_MOVE_REGISTRY:
        return accessor(d_moveRegistry.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_MOVE_REGISTRY]);
      case SELECTION_ID_UPDATE_CONTACT:
        return accessor(d_updateContact.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_CONTACT]);
      case SELECTION_ID_GET_PRIVILEGE_LIST:
        return accessor(d_getPrivilegeList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_PRIVILEGE_LIST]);
      case SELECTION_ID_UPDATE_SUBSCRIBERS:
        return accessor(d_updateSubscribers.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_SUBSCRIBERS]);
      case SELECTION_ID_UPDATE_PRIVILEGES:
        return accessor(d_updatePrivileges.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_PRIVILEGES]);
      case SELECTION_ID_GET_OUT_GROUP:
        return accessor(d_getOutGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_OUT_GROUP]);
      case SELECTION_ID_GET_DEPT_CHAIN:
        return accessor(d_getDeptChain.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DEPT_CHAIN]);
      case SELECTION_ID_GET_DRQS_GROUP:
        return accessor(d_getDrqsGroup.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_DRQS_GROUP]);
      case SELECTION_ID_UPDATE_DEV_VALUE:
        return accessor(d_updateDevValue.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_UPDATE_DEV_VALUE]);
      case SELECTION_ID_GET_MACHINE_GROUP_NAME:
        return accessor(d_getMachineGroupName.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_MACHINE_GROUP_NAME]);
      case SELECTION_ID_VALIDATE_OVERRIDE:
        return accessor(d_validateOverride.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_OVERRIDE]);
      case SELECTION_ID_GENERATE_CODE:
        return accessor(d_generateCode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_CODE]);
      case SELECTION_ID_RELEASE_CODE:
        return accessor(d_releaseCode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_RELEASE_CODE]);
      case SELECTION_ID_GET_TODO_LIST:
        return accessor(d_getTodoList.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_TODO_LIST]);
      case SELECTION_ID_GET_RELATED_TICKET:
        return accessor(d_getRelatedTicket.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_RELATED_TICKET]);
      case SELECTION_ID_GET_NODE_TYPE:
        return accessor(d_getNodeType.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GET_NODE_TYPE]);
      case SELECTION_ID_CHANGE_BREG:
        return accessor(d_changeBreg.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_CHANGE_BREG]);
      case SELECTION_ID_VALIDATE_PRQS_APPROVER:
        return accessor(d_validatePrqsApprover.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_VALIDATE_PRQS_APPROVER]);
      case SELECTION_ID_GENERATE_RELEASE_CODE:
        return accessor(d_generateReleaseCode.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_GENERATE_RELEASE_CODE]);
      case SELECTION_ID_MARK_FOR_DELETION:
        return accessor(d_markForDeletion.object(),
                SELECTION_INFO_ARRAY[SELECTION_INDEX_MARK_FOR_DELETION]);
      default:
        BSLS_ASSERT(SELECTION_ID_UNDEFINED == d_selectionId);
        return -1;
    }
}

inline
const int& Request::getTree() const
{
    BSLS_ASSERT(SELECTION_ID_GET_TREE == d_selectionId);
    return d_getTree.object();
}

inline
const int& Request::getExpandedTree() const
{
    BSLS_ASSERT(SELECTION_ID_GET_EXPANDED_TREE == d_selectionId);
    return d_getExpandedTree.object();
}

inline
const Void& Request::getDefaultTree() const
{
    BSLS_ASSERT(SELECTION_ID_GET_DEFAULT_TREE == d_selectionId);
    return d_getDefaultTree.object();
}

inline
const int& Request::getChildren() const
{
    BSLS_ASSERT(SELECTION_ID_GET_CHILDREN == d_selectionId);
    return d_getChildren.object();
}

inline
const Void& Request::getDefaultNode() const
{
    BSLS_ASSERT(SELECTION_ID_GET_DEFAULT_NODE == d_selectionId);
    return d_getDefaultNode.object();
}

inline
const int& Request::getNodeDetails() const
{
    BSLS_ASSERT(SELECTION_ID_GET_NODE_DETAILS == d_selectionId);
    return d_getNodeDetails.object();
}

inline
const int& Request::setDefaultNode() const
{
    BSLS_ASSERT(SELECTION_ID_SET_DEFAULT_NODE == d_selectionId);
    return d_setDefaultNode.object();
}

inline
const bsl::string& Request::searchByName() const
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_NAME == d_selectionId);
    return d_searchByName.object();
}

inline
const int& Request::searchById() const
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_ID == d_selectionId);
    return d_searchById.object();
}

inline
const bsl::string& Request::searchByAccessor() const
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_ACCESSOR == d_selectionId);
    return d_searchByAccessor.object();
}

inline
const SearchByContacts& Request::searchByContacts() const
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_CONTACTS == d_selectionId);
    return d_searchByContacts.object();
}

inline
const SearchByKeywords& Request::searchByKeywords() const
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_KEYWORDS == d_selectionId);
    return d_searchByKeywords.object();
}

inline
const int& Request::searchByDrqsGroup() const
{
    BSLS_ASSERT(SELECTION_ID_SEARCH_BY_DRQS_GROUP == d_selectionId);
    return d_searchByDrqsGroup.object();
}

inline
const int& Request::isDeleted() const
{
    BSLS_ASSERT(SELECTION_ID_IS_DELETED == d_selectionId);
    return d_isDeleted.object();
}

inline
const GetBregValuesRequest& Request::getBregValues() const
{
    BSLS_ASSERT(SELECTION_ID_GET_BREG_VALUES == d_selectionId);
    return d_getBregValues.object();
}

inline
const int& Request::getRegistry() const
{
    BSLS_ASSERT(SELECTION_ID_GET_REGISTRY == d_selectionId);
    return d_getRegistry.object();
}

inline
const ValueRequest& Request::getEntryValue() const
{
    BSLS_ASSERT(SELECTION_ID_GET_ENTRY_VALUE == d_selectionId);
    return d_getEntryValue.object();
}

inline
const int& Request::getSubscribers() const
{
    BSLS_ASSERT(SELECTION_ID_GET_SUBSCRIBERS == d_selectionId);
    return d_getSubscribers.object();
}

inline
const int& Request::getVersionHistory() const
{
    BSLS_ASSERT(SELECTION_ID_GET_VERSION_HISTORY == d_selectionId);
    return d_getVersionHistory.object();
}

inline
const RegistryInfo& Request::updateRegistry() const
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_REGISTRY == d_selectionId);
    return d_updateRegistry.object();
}

inline
const int& Request::deleteNode() const
{
    BSLS_ASSERT(SELECTION_ID_DELETE_NODE == d_selectionId);
    return d_deleteNode.object();
}

inline
const MoveRequest& Request::moveRegistry() const
{
    BSLS_ASSERT(SELECTION_ID_MOVE_REGISTRY == d_selectionId);
    return d_moveRegistry.object();
}

inline
const UpdateContactRequest& Request::updateContact() const
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_CONTACT == d_selectionId);
    return d_updateContact.object();
}

inline
const int& Request::getPrivilegeList() const
{
    BSLS_ASSERT(SELECTION_ID_GET_PRIVILEGE_LIST == d_selectionId);
    return d_getPrivilegeList.object();
}

inline
const EntrySubscribers& Request::updateSubscribers() const
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_SUBSCRIBERS == d_selectionId);
    return d_updateSubscribers.object();
}

inline
const PrivilegeList& Request::updatePrivileges() const
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_PRIVILEGES == d_selectionId);
    return d_updatePrivileges.object();
}

inline
const int& Request::getOutGroup() const
{
    BSLS_ASSERT(SELECTION_ID_GET_OUT_GROUP == d_selectionId);
    return d_getOutGroup.object();
}

inline
const int& Request::getDeptChain() const
{
    BSLS_ASSERT(SELECTION_ID_GET_DEPT_CHAIN == d_selectionId);
    return d_getDeptChain.object();
}

inline
const int& Request::getDrqsGroup() const
{
    BSLS_ASSERT(SELECTION_ID_GET_DRQS_GROUP == d_selectionId);
    return d_getDrqsGroup.object();
}

inline
const EntryValue& Request::updateDevValue() const
{
    BSLS_ASSERT(SELECTION_ID_UPDATE_DEV_VALUE == d_selectionId);
    return d_updateDevValue.object();
}

inline
const int& Request::getMachineGroupName() const
{
    BSLS_ASSERT(SELECTION_ID_GET_MACHINE_GROUP_NAME == d_selectionId);
    return d_getMachineGroupName.object();
}

inline
const OverrideInfo& Request::validateOverride() const
{
    BSLS_ASSERT(SELECTION_ID_VALIDATE_OVERRIDE == d_selectionId);
    return d_validateOverride.object();
}

inline
const GenerateCodeRequest& Request::generateCode() const
{
    BSLS_ASSERT(SELECTION_ID_GENERATE_CODE == d_selectionId);
    return d_generateCode.object();
}

inline
const BregChangeRequest& Request::releaseCode() const
{
    BSLS_ASSERT(SELECTION_ID_RELEASE_CODE == d_selectionId);
    return d_releaseCode.object();
}

inline
const int& Request::getTodoList() const
{
    BSLS_ASSERT(SELECTION_ID_GET_TODO_LIST == d_selectionId);
    return d_getTodoList.object();
}

inline
const RelatedTicketRequest& Request::getRelatedTicket() const
{
    BSLS_ASSERT(SELECTION_ID_GET_RELATED_TICKET == d_selectionId);
    return d_getRelatedTicket.object();
}

inline
const int& Request::getNodeType() const
{
    BSLS_ASSERT(SELECTION_ID_GET_NODE_TYPE == d_selectionId);
    return d_getNodeType.object();
}

inline
const BregChangeRequest& Request::changeBreg() const
{
    BSLS_ASSERT(SELECTION_ID_CHANGE_BREG == d_selectionId);
    return d_changeBreg.object();
}

inline
const BregChangeRequest& Request::validatePrqsApprover() const
{
    BSLS_ASSERT(SELECTION_ID_VALIDATE_PRQS_APPROVER == d_selectionId);
    return d_validatePrqsApprover.object();
}

inline
const BregChangeRequest& Request::generateReleaseCode() const
{
    BSLS_ASSERT(SELECTION_ID_GENERATE_RELEASE_CODE == d_selectionId);
    return d_generateReleaseCode.object();
}

inline
const MarkForDeletionRequest& Request::markForDeletion() const
{
    BSLS_ASSERT(SELECTION_ID_MARK_FOR_DELETION == d_selectionId);
    return d_markForDeletion.object();
}

inline
bool Request::isGetTreeValue() const
{
    return SELECTION_ID_GET_TREE == d_selectionId;
}

inline
bool Request::isGetExpandedTreeValue() const
{
    return SELECTION_ID_GET_EXPANDED_TREE == d_selectionId;
}

inline
bool Request::isGetDefaultTreeValue() const
{
    return SELECTION_ID_GET_DEFAULT_TREE == d_selectionId;
}

inline
bool Request::isGetChildrenValue() const
{
    return SELECTION_ID_GET_CHILDREN == d_selectionId;
}

inline
bool Request::isGetDefaultNodeValue() const
{
    return SELECTION_ID_GET_DEFAULT_NODE == d_selectionId;
}

inline
bool Request::isGetNodeDetailsValue() const
{
    return SELECTION_ID_GET_NODE_DETAILS == d_selectionId;
}

inline
bool Request::isSetDefaultNodeValue() const
{
    return SELECTION_ID_SET_DEFAULT_NODE == d_selectionId;
}

inline
bool Request::isSearchByNameValue() const
{
    return SELECTION_ID_SEARCH_BY_NAME == d_selectionId;
}

inline
bool Request::isSearchByIdValue() const
{
    return SELECTION_ID_SEARCH_BY_ID == d_selectionId;
}

inline
bool Request::isSearchByAccessorValue() const
{
    return SELECTION_ID_SEARCH_BY_ACCESSOR == d_selectionId;
}

inline
bool Request::isSearchByContactsValue() const
{
    return SELECTION_ID_SEARCH_BY_CONTACTS == d_selectionId;
}

inline
bool Request::isSearchByKeywordsValue() const
{
    return SELECTION_ID_SEARCH_BY_KEYWORDS == d_selectionId;
}

inline
bool Request::isSearchByDrqsGroupValue() const
{
    return SELECTION_ID_SEARCH_BY_DRQS_GROUP == d_selectionId;
}

inline
bool Request::isIsDeletedValue() const
{
    return SELECTION_ID_IS_DELETED == d_selectionId;
}

inline
bool Request::isGetBregValuesValue() const
{
    return SELECTION_ID_GET_BREG_VALUES == d_selectionId;
}

inline
bool Request::isGetRegistryValue() const
{
    return SELECTION_ID_GET_REGISTRY == d_selectionId;
}

inline
bool Request::isGetEntryValueValue() const
{
    return SELECTION_ID_GET_ENTRY_VALUE == d_selectionId;
}

inline
bool Request::isGetSubscribersValue() const
{
    return SELECTION_ID_GET_SUBSCRIBERS == d_selectionId;
}

inline
bool Request::isGetVersionHistoryValue() const
{
    return SELECTION_ID_GET_VERSION_HISTORY == d_selectionId;
}

inline
bool Request::isUpdateRegistryValue() const
{
    return SELECTION_ID_UPDATE_REGISTRY == d_selectionId;
}

inline
bool Request::isDeleteNodeValue() const
{
    return SELECTION_ID_DELETE_NODE == d_selectionId;
}

inline
bool Request::isMoveRegistryValue() const
{
    return SELECTION_ID_MOVE_REGISTRY == d_selectionId;
}

inline
bool Request::isUpdateContactValue() const
{
    return SELECTION_ID_UPDATE_CONTACT == d_selectionId;
}

inline
bool Request::isGetPrivilegeListValue() const
{
    return SELECTION_ID_GET_PRIVILEGE_LIST == d_selectionId;
}

inline
bool Request::isUpdateSubscribersValue() const
{
    return SELECTION_ID_UPDATE_SUBSCRIBERS == d_selectionId;
}

inline
bool Request::isUpdatePrivilegesValue() const
{
    return SELECTION_ID_UPDATE_PRIVILEGES == d_selectionId;
}

inline
bool Request::isGetOutGroupValue() const
{
    return SELECTION_ID_GET_OUT_GROUP == d_selectionId;
}

inline
bool Request::isGetDeptChainValue() const
{
    return SELECTION_ID_GET_DEPT_CHAIN == d_selectionId;
}

inline
bool Request::isGetDrqsGroupValue() const
{
    return SELECTION_ID_GET_DRQS_GROUP == d_selectionId;
}

inline
bool Request::isUpdateDevValueValue() const
{
    return SELECTION_ID_UPDATE_DEV_VALUE == d_selectionId;
}

inline
bool Request::isGetMachineGroupNameValue() const
{
    return SELECTION_ID_GET_MACHINE_GROUP_NAME == d_selectionId;
}

inline
bool Request::isValidateOverrideValue() const
{
    return SELECTION_ID_VALIDATE_OVERRIDE == d_selectionId;
}

inline
bool Request::isGenerateCodeValue() const
{
    return SELECTION_ID_GENERATE_CODE == d_selectionId;
}

inline
bool Request::isReleaseCodeValue() const
{
    return SELECTION_ID_RELEASE_CODE == d_selectionId;
}

inline
bool Request::isGetTodoListValue() const
{
    return SELECTION_ID_GET_TODO_LIST == d_selectionId;
}

inline
bool Request::isGetRelatedTicketValue() const
{
    return SELECTION_ID_GET_RELATED_TICKET == d_selectionId;
}

inline
bool Request::isGetNodeTypeValue() const
{
    return SELECTION_ID_GET_NODE_TYPE == d_selectionId;
}

inline
bool Request::isChangeBregValue() const
{
    return SELECTION_ID_CHANGE_BREG == d_selectionId;
}

inline
bool Request::isValidatePrqsApproverValue() const
{
    return SELECTION_ID_VALIDATE_PRQS_APPROVER == d_selectionId;
}

inline
bool Request::isGenerateReleaseCodeValue() const
{
    return SELECTION_ID_GENERATE_RELEASE_CODE == d_selectionId;
}

inline
bool Request::isMarkForDeletionValue() const
{
    return SELECTION_ID_MARK_FOR_DELETION == d_selectionId;
}

inline
bool Request::isUndefinedValue() const
{
    return SELECTION_ID_UNDEFINED == d_selectionId;
}
}  // close package namespace

// FREE FUNCTIONS

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        s_breguisvc::AclType::Value rhs)
{
    return s_breguisvc::AclType::print(stream, rhs);
}


inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        s_breguisvc::ApiStatus::Value rhs)
{
    return s_breguisvc::ApiStatus::print(stream, rhs);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::BregValue& lhs,
        const s_breguisvc::BregValue& rhs)
{
    return  lhs.id() == rhs.id()
         && lhs.valueType() == rhs.valueType()
         && lhs.valueTypeString() == rhs.valueTypeString()
         && lhs.typeString() == rhs.typeString()
         && lhs.accessor() == rhs.accessor()
         && lhs.value() == rhs.value();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::BregValue& lhs,
        const s_breguisvc::BregValue& rhs)
{
    return  lhs.id() != rhs.id()
         || lhs.valueType() != rhs.valueType()
         || lhs.valueTypeString() != rhs.valueTypeString()
         || lhs.typeString() != rhs.typeString()
         || lhs.accessor() != rhs.accessor()
         || lhs.value() != rhs.value();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::BregValue& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::BregValueObject& lhs,
        const s_breguisvc::BregValueObject& rhs)
{
    typedef s_breguisvc::BregValueObject Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_ID:
            return lhs.id() == rhs.id();
          case Class::SELECTION_ID_GOBXML:
            return lhs.gobxml() == rhs.gobxml();
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
bool s_breguisvc::operator!=(
        const s_breguisvc::BregValueObject& lhs,
        const s_breguisvc::BregValueObject& rhs)
{
    return !(lhs == rhs);
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::BregValueObject& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EntryData& lhs,
        const s_breguisvc::EntryData& rhs)
{
    typedef s_breguisvc::EntryData Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_BOOL_VALUE:
            return lhs.boolValue() == rhs.boolValue();
          case Class::SELECTION_ID_DOUBLE_VALUE:
            return lhs.doubleValue() == rhs.doubleValue();
          case Class::SELECTION_ID_INT_VALUE:
            return lhs.intValue() == rhs.intValue();
          case Class::SELECTION_ID_INT_LIST:
            return lhs.intList() == rhs.intList();
          case Class::SELECTION_ID_CHAR_VALUE:
            return lhs.charValue() == rhs.charValue();
          case Class::SELECTION_ID_STR:
            return lhs.str() == rhs.str();
          case Class::SELECTION_ID_EXT_INT_LIST:
            return lhs.extIntList() == rhs.extIntList();
          case Class::SELECTION_ID_EXT_STRING:
            return lhs.extString() == rhs.extString();
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
bool s_breguisvc::operator!=(
        const s_breguisvc::EntryData& lhs,
        const s_breguisvc::EntryData& rhs)
{
    return !(lhs == rhs);
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EntryData& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::ErrorInfoResponse& lhs,
        const s_breguisvc::ErrorInfoResponse& rhs)
{
    return  lhs.code() == rhs.code()
         && lhs.message() == rhs.message();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::ErrorInfoResponse& lhs,
        const s_breguisvc::ErrorInfoResponse& rhs)
{
    return  lhs.code() != rhs.code()
         || lhs.message() != rhs.message();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::ErrorInfoResponse& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EvaluateOverrides& lhs,
        const s_breguisvc::EvaluateOverrides& rhs)
{
    return  lhs.p6uuid() == rhs.p6uuid()
         && lhs.p3firm() == rhs.p3firm()
         && lhs.p3cust() == rhs.p3cust()
         && lhs.p3prcnum() == rhs.p3prcnum()
         && lhs.p3sn() == rhs.p3sn()
         && lhs.p9departmentcode() == rhs.p9departmentcode()
         && lhs.pindex() == rhs.pindex()
         && lhs.uuidprc() == rhs.uuidprc();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EvaluateOverrides& lhs,
        const s_breguisvc::EvaluateOverrides& rhs)
{
    return  lhs.p6uuid() != rhs.p6uuid()
         || lhs.p3firm() != rhs.p3firm()
         || lhs.p3cust() != rhs.p3cust()
         || lhs.p3prcnum() != rhs.p3prcnum()
         || lhs.p3sn() != rhs.p3sn()
         || lhs.p9departmentcode() != rhs.p9departmentcode()
         || lhs.pindex() != rhs.pindex()
         || lhs.uuidprc() != rhs.uuidprc();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EvaluateOverrides& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EventTypeEnum& lhs,
        const s_breguisvc::EventTypeEnum& rhs)
{
    return lhs.d_value == rhs.d_value;
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EventTypeEnum& lhs,
        const s_breguisvc::EventTypeEnum& rhs)
{
    return lhs.d_value != rhs.d_value;
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EventTypeEnum& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::Group& lhs,
        const s_breguisvc::Group& rhs)
{
    return  lhs.groupId() == rhs.groupId()
         && lhs.groupDescription() == rhs.groupDescription();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::Group& lhs,
        const s_breguisvc::Group& rhs)
{
    return  lhs.groupId() != rhs.groupId()
         || lhs.groupDescription() != rhs.groupDescription();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::Group& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        s_breguisvc::InheritanceType::Value rhs)
{
    return s_breguisvc::InheritanceType::print(stream, rhs);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::MarkForDeletionRequest& lhs,
        const s_breguisvc::MarkForDeletionRequest& rhs)
{
    return  lhs.entryId() == rhs.entryId()
         && lhs.updateUuid() == rhs.updateUuid();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::MarkForDeletionRequest& lhs,
        const s_breguisvc::MarkForDeletionRequest& rhs)
{
    return  lhs.entryId() != rhs.entryId()
         || lhs.updateUuid() != rhs.updateUuid();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::MarkForDeletionRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::MoveRequest& lhs,
        const s_breguisvc::MoveRequest& rhs)
{
    return  lhs.registryId() == rhs.registryId()
         && lhs.moveToNodeId() == rhs.moveToNodeId();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::MoveRequest& lhs,
        const s_breguisvc::MoveRequest& rhs)
{
    return  lhs.registryId() != rhs.registryId()
         || lhs.moveToNodeId() != rhs.moveToNodeId();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::MoveRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::Node& lhs,
        const s_breguisvc::Node& rhs)
{
    return  lhs.name() == rhs.name()
         && lhs.id() == rhs.id()
         && lhs.type() == rhs.type()
         && lhs.description() == rhs.description()
         && lhs.hasExpired() == rhs.hasExpired()
         && lhs.expiryTsp() == rhs.expiryTsp()
         && lhs.children() == rhs.children()
         && lhs.obsoleteTraceEnabled() == rhs.obsoleteTraceEnabled();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::Node& lhs,
        const s_breguisvc::Node& rhs)
{
    return  lhs.name() != rhs.name()
         || lhs.id() != rhs.id()
         || lhs.type() != rhs.type()
         || lhs.description() != rhs.description()
         || lhs.hasExpired() != rhs.hasExpired()
         || lhs.expiryTsp() != rhs.expiryTsp()
         || lhs.children() != rhs.children()
         || lhs.obsoleteTraceEnabled() != rhs.obsoleteTraceEnabled();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::Node& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::NodePrivilege& lhs,
        const s_breguisvc::NodePrivilege& rhs)
{
    return  lhs.isPrivilegeAdmin() == rhs.isPrivilegeAdmin()
         && lhs.canUpdateProd() == rhs.canUpdateProd()
         && lhs.canUpdateDesc() == rhs.canUpdateDesc()
         && lhs.canReleaseCode() == rhs.canReleaseCode()
         && lhs.canUpdateDev() == rhs.canUpdateDev();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::NodePrivilege& lhs,
        const s_breguisvc::NodePrivilege& rhs)
{
    return  lhs.isPrivilegeAdmin() != rhs.isPrivilegeAdmin()
         || lhs.canUpdateProd() != rhs.canUpdateProd()
         || lhs.canUpdateDesc() != rhs.canUpdateDesc()
         || lhs.canReleaseCode() != rhs.canReleaseCode()
         || lhs.canUpdateDev() != rhs.canUpdateDev();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::NodePrivilege& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        s_breguisvc::OverrideType::Value rhs)
{
    return s_breguisvc::OverrideType::print(stream, rhs);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::RelatedTicketRequest& lhs,
        const s_breguisvc::RelatedTicketRequest& rhs)
{
    return  lhs.type() == rhs.type()
         && lhs.number() == rhs.number();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::RelatedTicketRequest& lhs,
        const s_breguisvc::RelatedTicketRequest& rhs)
{
    return  lhs.type() != rhs.type()
         || lhs.number() != rhs.number();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::RelatedTicketRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::SearchByContacts& lhs,
        const s_breguisvc::SearchByContacts& rhs)
{
    return  lhs.uuid() == rhs.uuid()
         && lhs.contactType() == rhs.contactType();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::SearchByContacts& lhs,
        const s_breguisvc::SearchByContacts& rhs)
{
    return  lhs.uuid() != rhs.uuid()
         || lhs.contactType() != rhs.contactType();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::SearchByContacts& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::SearchByKeywords& lhs,
        const s_breguisvc::SearchByKeywords& rhs)
{
    return  lhs.keywords() == rhs.keywords();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::SearchByKeywords& lhs,
        const s_breguisvc::SearchByKeywords& rhs)
{
    return  lhs.keywords() != rhs.keywords();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::SearchByKeywords& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::TodoListItem& lhs,
        const s_breguisvc::TodoListItem& rhs)
{
    return  lhs.ticketNumber() == rhs.ticketNumber()
         && lhs.ticketType() == rhs.ticketType()
         && lhs.drqsType() == rhs.drqsType()
         && lhs.status() == rhs.status()
         && lhs.summary() == rhs.summary();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::TodoListItem& lhs,
        const s_breguisvc::TodoListItem& rhs)
{
    return  lhs.ticketNumber() != rhs.ticketNumber()
         || lhs.ticketType() != rhs.ticketType()
         || lhs.drqsType() != rhs.drqsType()
         || lhs.status() != rhs.status()
         || lhs.summary() != rhs.summary();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::TodoListItem& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::UserData& lhs,
        const s_breguisvc::UserData& rhs)
{
    return  lhs.userFlags() == rhs.userFlags()
         && lhs.userNumber() == rhs.userNumber();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::UserData& lhs,
        const s_breguisvc::UserData& rhs)
{
    return  lhs.userFlags() != rhs.userFlags()
         || lhs.userNumber() != rhs.userNumber();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::UserData& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::ValueRequest& lhs,
        const s_breguisvc::ValueRequest& rhs)
{
    return  lhs.entryId() == rhs.entryId()
         && lhs.version() == rhs.version();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::ValueRequest& lhs,
        const s_breguisvc::ValueRequest& rhs)
{
    return  lhs.entryId() != rhs.entryId()
         || lhs.version() != rhs.version();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::ValueRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        s_breguisvc::ValueType::Value rhs)
{
    return s_breguisvc::ValueType::print(stream, rhs);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::VersionTsp& lhs,
        const s_breguisvc::VersionTsp& rhs)
{
    return  lhs.version() == rhs.version()
         && lhs.updateEpoch() == rhs.updateEpoch()
         && lhs.prqsNumber() == rhs.prqsNumber()
         && lhs.prqsStatus() == rhs.prqsStatus()
         && lhs.updateTsp() == rhs.updateTsp();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::VersionTsp& lhs,
        const s_breguisvc::VersionTsp& rhs)
{
    return  lhs.version() != rhs.version()
         || lhs.updateEpoch() != rhs.updateEpoch()
         || lhs.prqsNumber() != rhs.prqsNumber()
         || lhs.prqsStatus() != rhs.prqsStatus()
         || lhs.updateTsp() != rhs.updateTsp();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::VersionTsp& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::Void&,
        const s_breguisvc::Void&)
{
    return true;
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::Void&,
        const s_breguisvc::Void&)
{
    return false;
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::Void& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::AuditRecord& lhs,
        const s_breguisvc::AuditRecord& rhs)
{
    return  lhs.entryId() == rhs.entryId()
         && lhs.prqsNumber() == rhs.prqsNumber()
         && lhs.prqsStatus() == rhs.prqsStatus()
         && lhs.uuid() == rhs.uuid()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.eventType() == rhs.eventType()
         && lhs.oldValue() == rhs.oldValue()
         && lhs.newValue() == rhs.newValue()
         && lhs.ticketType() == rhs.ticketType()
         && lhs.ticketNumber() == rhs.ticketNumber()
         && lhs.logNote() == rhs.logNote();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::AuditRecord& lhs,
        const s_breguisvc::AuditRecord& rhs)
{
    return  lhs.entryId() != rhs.entryId()
         || lhs.prqsNumber() != rhs.prqsNumber()
         || lhs.prqsStatus() != rhs.prqsStatus()
         || lhs.uuid() != rhs.uuid()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.eventType() != rhs.eventType()
         || lhs.oldValue() != rhs.oldValue()
         || lhs.newValue() != rhs.newValue()
         || lhs.ticketType() != rhs.ticketType()
         || lhs.ticketNumber() != rhs.ticketNumber()
         || lhs.logNote() != rhs.logNote();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::AuditRecord& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EntryInfo& lhs,
        const s_breguisvc::EntryInfo& rhs)
{
    return  lhs.entryId() == rhs.entryId()
         && lhs.currentVersion() == rhs.currentVersion()
         && lhs.valueType() == rhs.valueType()
         && lhs.apiName() == rhs.apiName()
         && lhs.apiStatus() == rhs.apiStatus()
         && lhs.expiryTsp() == rhs.expiryTsp()
         && lhs.isPermanent() == rhs.isPermanent()
         && lhs.isSharedMemory() == rhs.isSharedMemory()
         && lhs.maxNumValuesInList() == rhs.maxNumValuesInList()
         && lhs.pwhoId() == rhs.pwhoId()
         && lhs.apiDate() == rhs.apiDate();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EntryInfo& lhs,
        const s_breguisvc::EntryInfo& rhs)
{
    return  lhs.entryId() != rhs.entryId()
         || lhs.currentVersion() != rhs.currentVersion()
         || lhs.valueType() != rhs.valueType()
         || lhs.apiName() != rhs.apiName()
         || lhs.apiStatus() != rhs.apiStatus()
         || lhs.expiryTsp() != rhs.expiryTsp()
         || lhs.isPermanent() != rhs.isPermanent()
         || lhs.isSharedMemory() != rhs.isSharedMemory()
         || lhs.maxNumValuesInList() != rhs.maxNumValuesInList()
         || lhs.pwhoId() != rhs.pwhoId()
         || lhs.apiDate() != rhs.apiDate();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EntryInfo& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EntryOverride& lhs,
        const s_breguisvc::EntryOverride& rhs)
{
    return  lhs.seq() == rhs.seq()
         && lhs.type() == rhs.type()
         && lhs.value() == rhs.value()
         && lhs.entryData() == rhs.entryData();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EntryOverride& lhs,
        const s_breguisvc::EntryOverride& rhs)
{
    return  lhs.seq() != rhs.seq()
         || lhs.type() != rhs.type()
         || lhs.value() != rhs.value()
         || lhs.entryData() != rhs.entryData();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EntryOverride& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::GetBregValuesRequest& lhs,
        const s_breguisvc::GetBregValuesRequest& rhs)
{
    return  lhs.object() == rhs.object()
         && lhs.overrides() == rhs.overrides();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::GetBregValuesRequest& lhs,
        const s_breguisvc::GetBregValuesRequest& rhs)
{
    return  lhs.object() != rhs.object()
         || lhs.overrides() != rhs.overrides();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::GetBregValuesRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::OverrideInfo& lhs,
        const s_breguisvc::OverrideInfo& rhs)
{
    return  lhs.isProduction() == rhs.isProduction()
         && lhs.type() == rhs.type()
         && lhs.setting() == rhs.setting();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::OverrideInfo& lhs,
        const s_breguisvc::OverrideInfo& rhs)
{
    return  lhs.isProduction() != rhs.isProduction()
         || lhs.type() != rhs.type()
         || lhs.setting() != rhs.setting();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::OverrideInfo& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::OverrideSummary& lhs,
        const s_breguisvc::OverrideSummary& rhs)
{
    return  lhs.type() == rhs.type()
         && lhs.typeString() == rhs.typeString()
         && lhs.typeEnum() == rhs.typeEnum()
         && lhs.setting() == rhs.setting()
         && lhs.settingTooltip() == rhs.settingTooltip()
         && lhs.value() == rhs.value();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::OverrideSummary& lhs,
        const s_breguisvc::OverrideSummary& rhs)
{
    return  lhs.type() != rhs.type()
         || lhs.typeString() != rhs.typeString()
         || lhs.typeEnum() != rhs.typeEnum()
         || lhs.setting() != rhs.setting()
         || lhs.settingTooltip() != rhs.settingTooltip()
         || lhs.value() != rhs.value();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::OverrideSummary& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::PrivilegeList& lhs,
        const s_breguisvc::PrivilegeList& rhs)
{
    return  lhs.registryId() == rhs.registryId()
         && lhs.userDataList() == rhs.userDataList();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::PrivilegeList& lhs,
        const s_breguisvc::PrivilegeList& rhs)
{
    return  lhs.registryId() != rhs.registryId()
         || lhs.userDataList() != rhs.userDataList();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::PrivilegeList& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::TodoList& lhs,
        const s_breguisvc::TodoList& rhs)
{
    return  lhs.list() == rhs.list();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::TodoList& lhs,
        const s_breguisvc::TodoList& rhs)
{
    return  lhs.list() != rhs.list();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::TodoList& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::VersionHistory& lhs,
        const s_breguisvc::VersionHistory& rhs)
{
    return  lhs.versionHistory() == rhs.versionHistory();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::VersionHistory& lhs,
        const s_breguisvc::VersionHistory& rhs)
{
    return  lhs.versionHistory() != rhs.versionHistory();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::VersionHistory& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EntryContacts& lhs,
        const s_breguisvc::EntryContacts& rhs)
{
    return  lhs.primaryUuid() == rhs.primaryUuid()
         && lhs.backupUuid() == rhs.backupUuid()
         && lhs.operationalUuid() == rhs.operationalUuid()
         && lhs.drqsGroup() == rhs.drqsGroup()
         && lhs.auditRecord() == rhs.auditRecord();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EntryContacts& lhs,
        const s_breguisvc::EntryContacts& rhs)
{
    return  lhs.primaryUuid() != rhs.primaryUuid()
         || lhs.backupUuid() != rhs.backupUuid()
         || lhs.operationalUuid() != rhs.operationalUuid()
         || lhs.drqsGroup() != rhs.drqsGroup()
         || lhs.auditRecord() != rhs.auditRecord();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EntryContacts& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EntrySubscribers& lhs,
        const s_breguisvc::EntrySubscribers& rhs)
{
    return  lhs.registryId() == rhs.registryId()
         && lhs.userDataList() == rhs.userDataList()
         && lhs.auditRecord() == rhs.auditRecord();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EntrySubscribers& lhs,
        const s_breguisvc::EntrySubscribers& rhs)
{
    return  lhs.registryId() != rhs.registryId()
         || lhs.userDataList() != rhs.userDataList()
         || lhs.auditRecord() != rhs.auditRecord();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EntrySubscribers& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::EntryValue& lhs,
        const s_breguisvc::EntryValue& rhs)
{
    return  lhs.entryId() == rhs.entryId()
         && lhs.version() == rhs.version()
         && lhs.entryData() == rhs.entryData()
         && lhs.entryOverrides() == rhs.entryOverrides()
         && lhs.isObsolete() == rhs.isObsolete()
         && lhs.isSharedMemory() == rhs.isSharedMemory()
         && lhs.auditRecord() == rhs.auditRecord();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::EntryValue& lhs,
        const s_breguisvc::EntryValue& rhs)
{
    return  lhs.entryId() != rhs.entryId()
         || lhs.version() != rhs.version()
         || lhs.entryData() != rhs.entryData()
         || lhs.entryOverrides() != rhs.entryOverrides()
         || lhs.isObsolete() != rhs.isObsolete()
         || lhs.isSharedMemory() != rhs.isSharedMemory()
         || lhs.auditRecord() != rhs.auditRecord();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::EntryValue& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::NodeDetails& lhs,
        const s_breguisvc::NodeDetails& rhs)
{
    return  lhs.name() == rhs.name()
         && lhs.id() == rhs.id()
         && lhs.type() == rhs.type()
         && lhs.description() == rhs.description()
         && lhs.accessor() == rhs.accessor()
         && lhs.updateTsp() == rhs.updateTsp()
         && lhs.valueType() == rhs.valueType()
         && lhs.valueTypeString() == rhs.valueTypeString()
         && lhs.valueTypeEnum() == rhs.valueTypeEnum()
         && lhs.isInMemory() == rhs.isInMemory()
         && lhs.isInMemoryString() == rhs.isInMemoryString()
         && lhs.hasExpired() == rhs.hasExpired()
         && lhs.expiryTsp() == rhs.expiryTsp()
         && lhs.isPermanent() == rhs.isPermanent()
         && lhs.isPermanentString() == rhs.isPermanentString()
         && lhs.keywords() == rhs.keywords()
         && lhs.inProd() == rhs.inProd()
         && lhs.prodValue() == rhs.prodValue()
         && lhs.prodVersion() == rhs.prodVersion()
         && lhs.prodOverrides() == rhs.prodOverrides()
         && lhs.inTest() == rhs.inTest()
         && lhs.testValue() == rhs.testValue()
         && lhs.testOverrides() == rhs.testOverrides()
         && lhs.canAddNode() == rhs.canAddNode()
         && lhs.canAddEntry() == rhs.canAddEntry()
         && lhs.prodObsoleteTraceEnabled() == rhs.prodObsoleteTraceEnabled()
         && lhs.devObsoleteTraceEnabled() == rhs.devObsoleteTraceEnabled();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::NodeDetails& lhs,
        const s_breguisvc::NodeDetails& rhs)
{
    return  lhs.name() != rhs.name()
         || lhs.id() != rhs.id()
         || lhs.type() != rhs.type()
         || lhs.description() != rhs.description()
         || lhs.accessor() != rhs.accessor()
         || lhs.updateTsp() != rhs.updateTsp()
         || lhs.valueType() != rhs.valueType()
         || lhs.valueTypeString() != rhs.valueTypeString()
         || lhs.valueTypeEnum() != rhs.valueTypeEnum()
         || lhs.isInMemory() != rhs.isInMemory()
         || lhs.isInMemoryString() != rhs.isInMemoryString()
         || lhs.hasExpired() != rhs.hasExpired()
         || lhs.expiryTsp() != rhs.expiryTsp()
         || lhs.isPermanent() != rhs.isPermanent()
         || lhs.isPermanentString() != rhs.isPermanentString()
         || lhs.keywords() != rhs.keywords()
         || lhs.inProd() != rhs.inProd()
         || lhs.prodValue() != rhs.prodValue()
         || lhs.prodVersion() != rhs.prodVersion()
         || lhs.prodOverrides() != rhs.prodOverrides()
         || lhs.inTest() != rhs.inTest()
         || lhs.testValue() != rhs.testValue()
         || lhs.testOverrides() != rhs.testOverrides()
         || lhs.canAddNode() != rhs.canAddNode()
         || lhs.canAddEntry() != rhs.canAddEntry()
         || lhs.prodObsoleteTraceEnabled() != rhs.prodObsoleteTraceEnabled()
         || lhs.devObsoleteTraceEnabled() != rhs.devObsoleteTraceEnabled();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::NodeDetails& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::NodeInfo& lhs,
        const s_breguisvc::NodeInfo& rhs)
{
    return  lhs.nodeId() == rhs.nodeId()
         && lhs.parentId() == rhs.parentId()
         && lhs.name() == rhs.name()
         && lhs.description() == rhs.description()
         && lhs.isLeaf() == rhs.isLeaf()
         && lhs.isDeleted() == rhs.isDeleted()
         && lhs.auditRecord() == rhs.auditRecord()
         && lhs.keywords() == rhs.keywords()
         && lhs.privilege() == rhs.privilege()
         && lhs.contacts() == rhs.contacts()
         && lhs.isToDelete() == rhs.isToDelete();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::NodeInfo& lhs,
        const s_breguisvc::NodeInfo& rhs)
{
    return  lhs.nodeId() != rhs.nodeId()
         || lhs.parentId() != rhs.parentId()
         || lhs.name() != rhs.name()
         || lhs.description() != rhs.description()
         || lhs.isLeaf() != rhs.isLeaf()
         || lhs.isDeleted() != rhs.isDeleted()
         || lhs.auditRecord() != rhs.auditRecord()
         || lhs.keywords() != rhs.keywords()
         || lhs.privilege() != rhs.privilege()
         || lhs.contacts() != rhs.contacts()
         || lhs.isToDelete() != rhs.isToDelete();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::NodeInfo& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::UpdateContactRequest& lhs,
        const s_breguisvc::UpdateContactRequest& rhs)
{
    return  lhs.registryId() == rhs.registryId()
         && lhs.contacts() == rhs.contacts()
         && lhs.auditRecord() == rhs.auditRecord();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::UpdateContactRequest& lhs,
        const s_breguisvc::UpdateContactRequest& rhs)
{
    return  lhs.registryId() != rhs.registryId()
         || lhs.contacts() != rhs.contacts()
         || lhs.auditRecord() != rhs.auditRecord();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::UpdateContactRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::RegistryInfo& lhs,
        const s_breguisvc::RegistryInfo& rhs)
{
    return  lhs.node() == rhs.node()
         && lhs.entry() == rhs.entry();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::RegistryInfo& lhs,
        const s_breguisvc::RegistryInfo& rhs)
{
    return  lhs.node() != rhs.node()
         || lhs.entry() != rhs.entry();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::RegistryInfo& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::BregChangeRequest& lhs,
        const s_breguisvc::BregChangeRequest& rhs)
{
    return  lhs.approverUuid() == rhs.approverUuid()
         && lhs.registry() == rhs.registry()
         && lhs.entryValue() == rhs.entryValue()
         && lhs.prqsPriority() == rhs.prqsPriority()
         && lhs.covgRequired() == rhs.covgRequired();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::BregChangeRequest& lhs,
        const s_breguisvc::BregChangeRequest& rhs)
{
    return  lhs.approverUuid() != rhs.approverUuid()
         || lhs.registry() != rhs.registry()
         || lhs.entryValue() != rhs.entryValue()
         || lhs.prqsPriority() != rhs.prqsPriority()
         || lhs.covgRequired() != rhs.covgRequired();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::BregChangeRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::GenerateCodeRequest& lhs,
        const s_breguisvc::GenerateCodeRequest& rhs)
{
    return  lhs.registry() == rhs.registry()
         && lhs.entryValue() == rhs.entryValue();
}

inline
bool s_breguisvc::operator!=(
        const s_breguisvc::GenerateCodeRequest& lhs,
        const s_breguisvc::GenerateCodeRequest& rhs)
{
    return  lhs.registry() != rhs.registry()
         || lhs.entryValue() != rhs.entryValue();
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::GenerateCodeRequest& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::Response& lhs,
        const s_breguisvc::Response& rhs)
{
    typedef s_breguisvc::Response Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_ERROR_RESPONSE:
            return lhs.errorResponse() == rhs.errorResponse();
          case Class::SELECTION_ID_NODE_TREE:
            return lhs.nodeTree() == rhs.nodeTree();
          case Class::SELECTION_ID_NODE_DETAILS:
            return lhs.nodeDetails() == rhs.nodeDetails();
          case Class::SELECTION_ID_NODE_ID:
            return lhs.nodeId() == rhs.nodeId();
          case Class::SELECTION_ID_VALUES:
            return lhs.values() == rhs.values();
          case Class::SELECTION_ID_NODE_INFO:
            return lhs.nodeInfo() == rhs.nodeInfo();
          case Class::SELECTION_ID_ENTRY_INFO:
            return lhs.entryInfo() == rhs.entryInfo();
          case Class::SELECTION_ID_REGISTRY_INFO:
            return lhs.registryInfo() == rhs.registryInfo();
          case Class::SELECTION_ID_ENTRY_VALUE:
            return lhs.entryValue() == rhs.entryValue();
          case Class::SELECTION_ID_ENTRY_SUBSCRIBERS:
            return lhs.entrySubscribers() == rhs.entrySubscribers();
          case Class::SELECTION_ID_VERSION_HISTORY:
            return lhs.versionHistory() == rhs.versionHistory();
          case Class::SELECTION_ID_PRIVILEGE_LIST:
            return lhs.privilegeList() == rhs.privilegeList();
          case Class::SELECTION_ID_OUT_GROUP:
            return lhs.outGroup() == rhs.outGroup();
          case Class::SELECTION_ID_DEPT_CHAIN:
            return lhs.deptChain() == rhs.deptChain();
          case Class::SELECTION_ID_DRQS_GROUP:
            return lhs.drqsGroup() == rhs.drqsGroup();
          case Class::SELECTION_ID_MACHINE_GROUP:
            return lhs.machineGroup() == rhs.machineGroup();
          case Class::SELECTION_ID_TODO_LIST:
            return lhs.todoList() == rhs.todoList();
          case Class::SELECTION_ID_RELATED_TICKET_SUMMARY:
            return lhs.relatedTicketSummary() == rhs.relatedTicketSummary();
          case Class::SELECTION_ID_NODE_TYPE:
            return lhs.nodeType() == rhs.nodeType();
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
bool s_breguisvc::operator!=(
        const s_breguisvc::Response& lhs,
        const s_breguisvc::Response& rhs)
{
    return !(lhs == rhs);
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::Response& rhs)
{
    return rhs.print(stream, 0, -1);
}


inline
bool s_breguisvc::operator==(
        const s_breguisvc::Request& lhs,
        const s_breguisvc::Request& rhs)
{
    typedef s_breguisvc::Request Class;
    if (lhs.selectionId() == rhs.selectionId()) {
        switch (rhs.selectionId()) {
          case Class::SELECTION_ID_GET_TREE:
            return lhs.getTree() == rhs.getTree();
          case Class::SELECTION_ID_GET_EXPANDED_TREE:
            return lhs.getExpandedTree() == rhs.getExpandedTree();
          case Class::SELECTION_ID_GET_DEFAULT_TREE:
            return lhs.getDefaultTree() == rhs.getDefaultTree();
          case Class::SELECTION_ID_GET_CHILDREN:
            return lhs.getChildren() == rhs.getChildren();
          case Class::SELECTION_ID_GET_DEFAULT_NODE:
            return lhs.getDefaultNode() == rhs.getDefaultNode();
          case Class::SELECTION_ID_GET_NODE_DETAILS:
            return lhs.getNodeDetails() == rhs.getNodeDetails();
          case Class::SELECTION_ID_SET_DEFAULT_NODE:
            return lhs.setDefaultNode() == rhs.setDefaultNode();
          case Class::SELECTION_ID_SEARCH_BY_NAME:
            return lhs.searchByName() == rhs.searchByName();
          case Class::SELECTION_ID_SEARCH_BY_ID:
            return lhs.searchById() == rhs.searchById();
          case Class::SELECTION_ID_SEARCH_BY_ACCESSOR:
            return lhs.searchByAccessor() == rhs.searchByAccessor();
          case Class::SELECTION_ID_SEARCH_BY_CONTACTS:
            return lhs.searchByContacts() == rhs.searchByContacts();
          case Class::SELECTION_ID_SEARCH_BY_KEYWORDS:
            return lhs.searchByKeywords() == rhs.searchByKeywords();
          case Class::SELECTION_ID_SEARCH_BY_DRQS_GROUP:
            return lhs.searchByDrqsGroup() == rhs.searchByDrqsGroup();
          case Class::SELECTION_ID_IS_DELETED:
            return lhs.isDeleted() == rhs.isDeleted();
          case Class::SELECTION_ID_GET_BREG_VALUES:
            return lhs.getBregValues() == rhs.getBregValues();
          case Class::SELECTION_ID_GET_REGISTRY:
            return lhs.getRegistry() == rhs.getRegistry();
          case Class::SELECTION_ID_GET_ENTRY_VALUE:
            return lhs.getEntryValue() == rhs.getEntryValue();
          case Class::SELECTION_ID_GET_SUBSCRIBERS:
            return lhs.getSubscribers() == rhs.getSubscribers();
          case Class::SELECTION_ID_GET_VERSION_HISTORY:
            return lhs.getVersionHistory() == rhs.getVersionHistory();
          case Class::SELECTION_ID_UPDATE_REGISTRY:
            return lhs.updateRegistry() == rhs.updateRegistry();
          case Class::SELECTION_ID_DELETE_NODE:
            return lhs.deleteNode() == rhs.deleteNode();
          case Class::SELECTION_ID_MOVE_REGISTRY:
            return lhs.moveRegistry() == rhs.moveRegistry();
          case Class::SELECTION_ID_UPDATE_CONTACT:
            return lhs.updateContact() == rhs.updateContact();
          case Class::SELECTION_ID_GET_PRIVILEGE_LIST:
            return lhs.getPrivilegeList() == rhs.getPrivilegeList();
          case Class::SELECTION_ID_UPDATE_SUBSCRIBERS:
            return lhs.updateSubscribers() == rhs.updateSubscribers();
          case Class::SELECTION_ID_UPDATE_PRIVILEGES:
            return lhs.updatePrivileges() == rhs.updatePrivileges();
          case Class::SELECTION_ID_GET_OUT_GROUP:
            return lhs.getOutGroup() == rhs.getOutGroup();
          case Class::SELECTION_ID_GET_DEPT_CHAIN:
            return lhs.getDeptChain() == rhs.getDeptChain();
          case Class::SELECTION_ID_GET_DRQS_GROUP:
            return lhs.getDrqsGroup() == rhs.getDrqsGroup();
          case Class::SELECTION_ID_UPDATE_DEV_VALUE:
            return lhs.updateDevValue() == rhs.updateDevValue();
          case Class::SELECTION_ID_GET_MACHINE_GROUP_NAME:
            return lhs.getMachineGroupName() == rhs.getMachineGroupName();
          case Class::SELECTION_ID_VALIDATE_OVERRIDE:
            return lhs.validateOverride() == rhs.validateOverride();
          case Class::SELECTION_ID_GENERATE_CODE:
            return lhs.generateCode() == rhs.generateCode();
          case Class::SELECTION_ID_RELEASE_CODE:
            return lhs.releaseCode() == rhs.releaseCode();
          case Class::SELECTION_ID_GET_TODO_LIST:
            return lhs.getTodoList() == rhs.getTodoList();
          case Class::SELECTION_ID_GET_RELATED_TICKET:
            return lhs.getRelatedTicket() == rhs.getRelatedTicket();
          case Class::SELECTION_ID_GET_NODE_TYPE:
            return lhs.getNodeType() == rhs.getNodeType();
          case Class::SELECTION_ID_CHANGE_BREG:
            return lhs.changeBreg() == rhs.changeBreg();
          case Class::SELECTION_ID_VALIDATE_PRQS_APPROVER:
            return lhs.validatePrqsApprover() == rhs.validatePrqsApprover();
          case Class::SELECTION_ID_GENERATE_RELEASE_CODE:
            return lhs.generateReleaseCode() == rhs.generateReleaseCode();
          case Class::SELECTION_ID_MARK_FOR_DELETION:
            return lhs.markForDeletion() == rhs.markForDeletion();
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
bool s_breguisvc::operator!=(
        const s_breguisvc::Request& lhs,
        const s_breguisvc::Request& rhs)
{
    return !(lhs == rhs);
}

inline
bsl::ostream& s_breguisvc::operator<<(
        bsl::ostream& stream,
        const s_breguisvc::Request& rhs)
{
    return rhs.print(stream, 0, -1);
}

}  // close enterprise namespace
#endif

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
