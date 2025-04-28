int ft_isascii (int n)
{
    char str[];
    int i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 0 && str[i] <= 127))
            return(0);
        i++;
    }
    return(1);
}