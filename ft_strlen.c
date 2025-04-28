//kullanıcıdan aldığım değerleri yanlışlıkla değiştirmemek için const kullandık 
size_t strlen(const char *s)
{
    size_t len = 0; //size_t de negatif bi değer almamak için, unsigned int de çalışır ama profesyoneldeil, biz bellek alanı tutmaya çalışıyoruz sayı değil
    while (*s)
        len++;
    return len;
}

