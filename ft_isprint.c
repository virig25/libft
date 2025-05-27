#include "libft.h"

int ft_isprint(int n)
{
    if (!(n >= 32 && n <= 127))
        return(0);
    return(1);
}