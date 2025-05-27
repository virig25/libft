#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    if(!s1 || !set)
        return 0;
    while(*s1 && ft_strchr(set,*s1))
    {
        s1++;
    }
    size_t i = ft_strlen(s1);

    while (i && ft_strchr(set,s1[i - 1]))
    {
        i--;
    }
    return(ft_substr(s1, 0, i));
}
