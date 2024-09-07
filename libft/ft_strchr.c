
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
    if(c == '\0')
        return ("\0");
    while(*s)
    {
        if(*s == c)
            return (char *)s;
        s++;
    }
    return (NULL);
}
