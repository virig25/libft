void *memset(void *s, int c, size_t n){
    //char yapıp küçük sayı verirsek integer promotion
    //int olmasının nedeni overflow olmaması
    //unsigned char yapmamızın sebebi stringi, void ile s[i], *s, s++ yapamamamız. yani içiyle oynayamayız
    //char c yapmamız ise memsetin 1 byte tutabilmesi
    size_t i = 0;
    unsigned char *p = (unsigned char *)s;
    while (i < n){

        p[i] = (unsigned char)c;
        i++;
    }

    return s;
}