#include <s_breguisvc_value_checker.h>

#include <bael_log.h>
#include <rapidperm_bregs.h>
#include <query_breg_values.h>

#include <sstream>

#include <bregdb_eval.h>

namespace BloombergLP {
namespace s_breguisvc {
namespace value_checker {

namespace {
const char LOG_CATEGORY[] = "BREGUISVC.VALUE_CHECKER";

const char * get_value_type_string(int value_type)
{
    switch(value_type)
    {
        case BREGDB_BOOL: return "Boolean";
        case BREGDB_CHAR: return "Character";
        case BREGDB_DOUBLE: return "Double";
        case BREGDB_INT: return "Integer";
        case BREGDB_INTLST: return "Integer List";
        case BREGDB_EXTINTLST: return "Ext Integer List";
        case BREGDB_STR: return "String";
        case BREGDB_EXTSTR: return "Extended String";
        case BREGDB_UNSPEC:
        default:
            return "Unspecified";
    }
}


std::string get_value(BregSwitchValue value)
{
    std::ostringstream os;
    if(value.is<BloombergLP::BregValue>())
    {
        BloombergLP::BregValue& bv = value.the<BloombergLP::BregValue>();

        if(bv.is<bool>())
            os << bv.the<bool>();
        else if(bv.is<int>())
            os << bv.the<int>();
        else if(bv.is<bsl::string>())
            os << bv.the<bsl::string>();
        else
            os << "<value of unknown type>";
    }
    else if(value.is<bsl::vector<BloombergLP::BregValue> >())
    {
        bsl::vector<BloombergLP::BregValue>& vbv = value.the<bsl::vector<BloombergLP::BregValue> >();
        if(vbv.empty())
            os << "<empty list>";
        else
        {
            if(vbv[0].is<int>())
            {
                for(bsl::vector<BloombergLP::BregValue>::const_iterator it = vbv.begin();
                        it != vbv.end(); ++it)
                    os << it->the<int>() << " ";
            }
            else
                os << "<list of unknown type>";
        }
    }
    else
    {
        os << "<value of unknown type>";
    }

    return os.str();
}



void get_gobxml_rapid_values(Response * response, const char * gobxml_name)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);

    std::vector<RapidPerm::rapidperm_BregData> rdata;

    RapidPerm::rapidperm_get_breg_data_for_gobxml(&rdata, gobxml_name);

    int num_switches = rdata.size();
    //BAEL_LOG_WARN << "TRACE: rc: " << rc << " num_switches: " << num_switches << BAEL_LOG_END;

    if(num_switches <= 0)
    {
        // TODO return response for no switches found for gobxml
        return;
    }

    bregdb_bitinfo_t * switches = new bregdb_bitinfo_t[num_switches];
    for(int i = 0; i < num_switches; ++i)
    {
        switches[i].id = rdata[i].bregId;
        switches[i].type = rdata[i].bregType;
        switches[i].name = rdata[i].bregAccessor.c_str();
    }

    BregSwitchValue * values = new BregSwitchValue[num_switches];

    queryBregValues(values, switches, num_switches);

    
    std::vector<s_breguisvc::BregValue> response_values;
    
    for(int i = 0; i < num_switches; ++i)
    {
        s_breguisvc::BregValue v;
        v.id() = switches[i].id;
        v.accessor() = switches[i].name;
        v.value() = get_value(values[i]);

        // TODO: make type fields match the output of the other requests
        v.valueType() = switches[i].type;
        v.valueTypeString() = get_value_type_string(switches[i].type);
        v.typeString() = v.valueTypeString();

        response_values.push_back(v);
    }

    response->makeValues(response_values);

    delete [] values;
    delete [] switches;
}

};


void getValues(Response * response,
        const GetBregValuesRequest& request)
{
    BAEL_LOG_SET_CATEGORY(LOG_CATEGORY);
    // TODO: load parmcm
    // TODO: load evaluate overrides

    
    if(request.object().isGobxmlValue())
        get_gobxml_rapid_values(response, request.object().gobxml().c_str());
    else if(request.object().isIdValue())
        ; // TODO: get id value
    
}


} // namespace value_checker
} // namespace s_breguisvc
} // namespace BloombergLP
