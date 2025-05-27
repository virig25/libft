#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i = 0;
    char *dest; 
    dest = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!dest)
        return NULL;
    while (s[i])
    {
        dest[i] = (*f)(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return dest;

}