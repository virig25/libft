void bzero(void *s, size_t n){
    size_t i = 0;
    unsigned char *p = (unsigned char *)s;
    while (i < n){

        p[i] = '\0';
        i++;
    }
}
