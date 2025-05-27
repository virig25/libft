#include "libft.h"

void *memchr(const void *ptr, int c, size_t n)
{
    const unsigned char *s1 = ptr;
    if (!ptr)
        return;
    while (n--)
    {
        if(*s1 != (unsigned char)c)
            return (void *)s1;
        s1++;
    }

}