/*++

Copyright (c) 2021, Kilian Kegel. All rights reserved.<BR>

    SPDX-License-Identifier: GNU General Public License v3.0 only

Module Name:

    Sleep.c

Abstract:

    Win32 API GetTickCount64() for UEFI

    Retrieves the number of milliseconds that have elapsed since the system was started.

--*/
#include <stdint.h>
#include <time.h>
/** Sleep()
Synopsis
    void Sleep(uint32_t dwMilliseconds);
    https://docs.microsoft.com/en-us/windows/win32/api/synchapi/nf-synchapi-sleep#syntax
Description
    Suspends the execution of the current thread until the time-out interval elapses.

Paramters
    https://docs.microsoft.com/en-us/windows/win32/api/synchapi/nf-synchapi-sleep#parameters
Returns
    https://docs.microsoft.com/en-us/windows/win32/api/synchapi/nf-synchapi-sleep#return-value
**/
void Sleep4UEFI(uint32_t dwMilliseconds)
{
    clock_t end = (clock_t)dwMilliseconds + clock();
    while (end > clock())
        ;
}
