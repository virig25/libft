#include "libft.h"

int ft_toupper(int c){
    //end of file tutabilmek için (-1) int c tutyoruz

    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return c;
}
