char *ft_strrchr(const char *s, int c){
    int i = 0
    while(*s){
        if(*s == c)
            return (char *)s;
        s++;
        i
    }
    if (c == '\0')
        return (char *)s;
    return NULL;
}