#include "libft.h"

//bellekte overlap-çakışma riski varsa memmove kullanılır
void *ft_memmove(void *dest, const void *src, size_t n){

    unsigned char *a = (unsigned char *)dest;
    const unsigned char *b = (const unsigned char *)src;

    if (a < b)
    {
        size_t i = 0;
        while(i < n)
        {
            a[i] = b[i];
            i++;
        }
            
    }
    else if (a > b)
    {
        while (n--)
            a[n] = b[n];
    }

    return dest;

}