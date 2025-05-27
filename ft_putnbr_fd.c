#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if(n < 0)
    {
        n = -n;
        write(fd, "-", 1);
    }
    if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        char a = n + '0';
        write(fd, &a, 1);
    }
}
