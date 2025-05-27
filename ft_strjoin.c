#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i = ft_strlen (s1);
    size_t j = ft_strlen (s2);
    char *dest = malloc (sizeof (char) * (i + j + 1));
    ft_memcpy(dest, s1, i);
    ft_memcpy(dest, s2, 1 + j);
    if (!dest)
        return NULL;
    return dest;

}
