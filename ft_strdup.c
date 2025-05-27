#include "libft.h"

char *ft_strdup(const char *s){
   
    size_t i = ft_strlen (s);
    char *dest = malloc (sizeof (char) * (1 + i));
    if (!dest)
        return NULL;
    ft_memcpy(dest, s, 1 + i);
    return dest;
}