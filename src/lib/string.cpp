#include <string.h>

void * memset ( void * ptr, int value, u32int num )
{
    char* ret = (char*)ptr;
    while (num--)
        *(ret++) = value;
    return ptr;
}