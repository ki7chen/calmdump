#include <stdio.h>
#include <tchar.h>
#include "../src/crashrpt.h"

void run_test()
{
    crEmulateCrash(0);
}

int _tmain(int argc, TCHAR** argv)
{
    __try
    {
        run_test();
    }
    __except(crExceptionFilter(GetExceptionCode(), GetExceptionInformation()))
    {
    }
    return 0;
}

