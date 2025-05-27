#include "libft.h"

int ft_atoi(const char *str)
{
    int sign = 1;
    int nb = 0;

    while (*str != '\0')
    {
        while (*str == 32 || (*str >= 9 && *str <= 13))
            str++;
        if (*str == '+' || *str == '-')
        {
            if (*str == '-')
                sign = -1;
            str++;
        }
        while (*str >= '0' && *str <= '9')
        {
            nb = nb * 10 + (*str - '0');
            str++;
        }
    }
    return(nb * sign);

}
