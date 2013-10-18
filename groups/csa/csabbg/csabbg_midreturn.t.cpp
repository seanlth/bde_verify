// csabbg_midreturn.t.cpp                                             -*-C++-*-
// ----------------------------------------------------------------------------

#include "csabbg_midreturn.t.hpp"
#include <bdes_ident.h>

namespace cool
{
    namespace csabbg
    {
        int f()
        {
            struct x {
                static bool test() {
                    volatile bool b = true;
                    if (!b) {
                        return false;
                    }
                    return b;
                }
            };
            if (x::test()) {
                return 1;
            }
            if (x::test()) {
                return 2;                                            // RETURN
            }
            if (x::test()) {
                return 3;
            }
            if (f()) {
                return 4;                                             // RETURN
            }
            return 0;
        }

        template <class X>
        int g()
        {
            struct x {
                static bool test() {
                    volatile bool b = true;
                    if (!b) {
                        return false;
                    }
                    return b;
                }
            };
            if (x::test()) {
                return 1;
            }
            if (x::test()) {
                return 2;                                            // RETURN
            }
            if (x::test()) {
                return 3;
            }
            if (f()) {
                return 4;                                             // RETURN
            }
            return 0;
        }

        int h()
        {
            return g<char>() + g<double>();
        }
    }
}
