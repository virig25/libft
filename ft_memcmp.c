#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){

    size_t i = 0;
    const unsigned char *ptr1 = s1;
    const unsigned char *ptr2 = s2;
    while (i < n)
    {
        // s1[i] == '\0' || s2[i] == '\0' memcmpte gereksizdir çünkü byte düzleminde karşılaştırma yapılır. boş olmasının bi anlamı yoktor
        //raw byte karşılaştırması
        if(ptr1[i] != ptr2[i])
        {
            return (ptr1[i] - ptr2[i]);
        }
        i++;
    }
    return 0;

}