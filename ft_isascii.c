#include "libft.h"

int ft_isascii (int n)
{
    if (!(n >= 0 && n <= 127))
        return(0);
    return(1);
}