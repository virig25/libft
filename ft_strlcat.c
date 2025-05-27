#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;
    while (dst_len < size && dst[dst_len] != '\0')
        dst_len++;
    while (src[src_len] != '\0')
        src_len++;
    if (dst_len == size)
        return size + src_len;
    while (src[i] != '\0' && (dst_len + i) < size - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    if (dst_len + i < size)
        dst[dst_len + i] = '\0';

    return dst_len + src_len;
}
