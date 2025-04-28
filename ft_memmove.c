//bellekte overlap-çakışma riski varsa memmove kullanılır
void *memmove(void *dest, const void *src, size_t n){

    unsigned char *a = (unsigned char *)dest;
    unsigned char *b = (unsigned char *)src;
    while (n--){

        a[n] = b[n];

    }
    return dest;

}