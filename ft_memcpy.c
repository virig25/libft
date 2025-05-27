#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){

    size_t i = 0;
    unsigned char *a = (unsigned char *)dest;
    const unsigned char *b = (const unsigned char *)src;
    while (i < n){

        a[i] = b[i];
        i++;
    }

    return dest;
}
