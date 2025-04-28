void *memcpy(void *dest, const void *src, size_t n){

    size_t i = 0;
    unsigned char *a = (unsigned char *)dest;
    unsigned char *b = (unsigned char *)src;
    while (i < n){

        a[i] = b[i];
        i++;
    }

    return dest;
}
