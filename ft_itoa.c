#include "libft.h"

int ft_digit(long a)
{
    int i = 1;
    if (a < 0)
    {        
        a = -a;
        i++;
    }
    while (a > 9)
    {
        a = a / 10;
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    long num = n;
    size_t len = ft_digit(num);
    char *dest;
    dest = malloc(sizeof (char) * (len + 1));
    if (!dest)
        return NULL;
    if (n == 0)
    {
        dest[0] = '0';
        dest[1] = '\0';
        return dest;
    }
    dest[len] = '\0';
    if(num < 0)
    {
        num = -num;
        dest[0] = '-';
    }
    while (num > 0)
    {
        dest[len - 1] = (num % 10) + '0';
        num = num / 10;
        len--;
    }
    return dest;
}
