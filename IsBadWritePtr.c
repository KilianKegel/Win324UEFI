/*++

Copyright (c) 2021, Kilian Kegel. All rights reserved.<BR>

    SPDX-License-Identifier: GNU General Public License v3.0 only

Module Name:

    IsBadWritePtr.c

Abstract:

    Win32 API IsBadWritePtr() for UEFI

    Verifies that the calling process has write access to the specified range of memory.

--*/
#include <stdint.h>

/** IsBadWritePtr()
Synopsis
    BOOL IsBadWritePtr(const VOID *lp,UINT_PTR   ucb)
    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-isbadwriteptr#syntax
Description
    Verifies that the calling process has write access to the specified range of memory.

Paramters
    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-isbadwriteptr#parameters
Returns
    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-isbadwriteptr#return-value
**/
int IsBadWritePtr4UEFI(const void* lp, uint32_t*   ucb)
{
    return 0;
}
