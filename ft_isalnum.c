#include "libft.h"

int ft_isalnum (int n)
{
    if (!ft_isalpha(n) && !ft_isdigit(n))
        return(0);
    return(1);
}
