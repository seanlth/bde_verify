#include <string>

#include "/bbsrc/thirdparty/bbit/include/bbit/200911/bbit_send_to_omx.h"                

#define bregT__value() q()
#define bregF__value() g()



bool q() {
    return true;
}

bool g() {
    return false;
}

void call() {}

void f() 
{
    bool i = bbit_send_to_omx__value();
    
    if (i) {
        int one = 0;
    }

    i = bregF__value();

    if (i) {
        int two = 0;
    }


/*
    if (i) {
        int asd = 0;
    }
    else {
        int asd2 = 0;
    }

    if (i == false) {
        int a = 0;
    }

    



 
    if (bbit_send_to_omx__value() && q()) {
        int i = 0;
    }
    
    if ( bregT__value() ) {int i = 0;}
    


    // test for leaving braces behind
    if ( bregT__value() ) {
        int braces_remain;
    }
     
    //test for removing braces;
    int braces_remove = 0;
    if ( bregT__value() ) {
        braces_remove = 1;
    }

    //test for removing if
    if ( bregF__value() ) {
        int remove_if;
    }
    
    //test for leaving else behind 
    if ( bregF__value() ) {
        int remove_if;
    }
    else {
        int leave_this;
    }

    //test with chained elses, removing if
    int a = 0;
    if ( bregF__value() ) {
        int remove_if;
    }
    else if ( 1 == a ) {
        int this_becomes_if;
    }
    else {
        int leave_this;
    }

    //test leaving braces behind, more complex expression
    if ( !bregF__value() ) {
        int leave_this;
    }
   
    //test leaving braces behind, constant expression
    if ( !(true == false) || q() ) {
        int var = 1; 
    }

    //chained elses, breg removes if
    std::string asd;
    int v1 = 0;

    if ( ( asd == "something" || asd == "something else" ) && bregF__value() ) {
        v1 = 1;
    }
    else if ( asd == "this" ) {
        v1 = 2;
    }
    else {
        v1 = 3;
    }

    //chained elses, breg call removed 
    if ( ( asd == "something" || asd == "something else" ) && bregT__value() ) {
        v1 = 1;
    }
    else if ( asd == "this" ) {
        v1 = 2;
    }
    else {
        v1 = 3;
    }

    //remove if condition
    bool c1;
    bool c2;
    bool c3;

    if ( ((c1 == true && c2 == true) || c3) || bregT__value() ) {
        int asd;
    }

    //remove breg call
    if ( ((c1 == true && c2 == true) || c3) || bregF__value() ) {
        int asd;
    }

    if (bool( (  ( (c1 == true && c2 == true) || c3) || ( bregF__value() == true ) ) || (v1 == 'c') )) {
        int asd;
    }

    //non constant condition
    if ( ( true == g() && bregF__value() ) || g() == false ) {
        
    }

    //non constant condition
    if ( !!!(bregF__value() == true) && q() ) {

    }

    if ( q() ) {

    }
    

    if ( bregT__value() ) { 


    }

    if ( bregF__value() ) {
        
    }

    if (true && q()) {

    }

    if (true) {}

    if ( bregT__value() ) {  }


//    if ( !(bregT__value() == false) || q() ) {
//        int var = 1; 
//    }

    

    //std::string asd;
    //int v1 = 0;

    //if ( ( asd == "something" || asd == "something else" ) && bregF__value() ) {
    //    v1 = 1;
    //}

*/
}
