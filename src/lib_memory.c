#include "c_types.h"
#include "lib_memory.h"

// Optimization of this library must be disabled,
// otherwise when using builder to build shellcode,
// the compiler will mistakenly skip the following
// functions and instead use <stdio.h> or built-in
// functions, causing the function address in the
// shellcode to be incorrect.
#pragma optimize("", off)

bool mem_equal(void* dst, void* src, uint size)
{
    if (size == 0)
    {
        return true;
    }
    byte* d = (byte*)dst;
    byte* s = (byte*)src;
    for (uint i = 0; i < size; i++)
    {
        if (*d != *s)
        {
            return false;
        }
        d++;
        s++;
    }
    return true;
}

bool mem_zero(void* dst, uint size)
{
    if (size == 0)
    {
        return true;
    }
    byte* d = (byte*)dst;
    for (uint i = 0; i < size; i++)
    {
        if (*d != 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

void mem_copy(void* dst, void* src, uint size)
{
    if (size == 0)
    {
        return;
    }
    byte* d = (byte*)dst;
    byte* s = (byte*)src;
    for (uint i = 0; i < size; i++)
    {
        *d = *s;
        d++;
        s++;
    }
}

void mem_set(void* ptr, byte val, uint num)
{
    if (num == 0)
    {
        return;
    }
    byte* addr = (byte*)ptr;
    for (uint i = 0; i < num; i++)
    {
        *addr = val;
        addr++;
    }
}

void mem_clean(void* ptr, uint num)
{
    if (num == 0)
    {
        return;
    }
    mem_set(ptr, 0, num);
}

#pragma optimize("", on)
