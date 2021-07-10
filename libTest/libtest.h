#ifndef LIBTEST_H
#define LIBTEST_H

#include "libTest_global.h"

class LIBTEST_EXPORT LibTest
{
public:
    LibTest();
    virtual void test() =  0;

};

#endif // LIBTEST_H
