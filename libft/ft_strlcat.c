#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int dstlen;
    int srclen;
    int i;

    i = 0;
    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    if(dstsize == 0 || dstsize <= dstlen)
        return(srclen + dstsize);
    while(src[i] && i < dstsize - dstlen - 1)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return(srclen + dstlen);
}
