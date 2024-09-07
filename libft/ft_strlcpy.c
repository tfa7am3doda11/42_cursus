#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;
    int srclen;

    srclen = ft_strlen(src);
    i = 0;
    while(src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return(srclen);
}
