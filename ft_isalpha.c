#include "libft.h"

int ft_isalpha (int n)
{
    if (!(n >= 'a' && n <= 'z') && !(n >= 'A' && n <= 'Z'))
        return(0);
    return(1);
}