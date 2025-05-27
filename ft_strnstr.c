#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    const char *last = NULL;
    
    while(*s1){
        if(*s1 == *s2)
            last = s1;
        s1++;
    }
    if ((char)c == '\0')
        return (char *)s1;
    return (char *)last;

}