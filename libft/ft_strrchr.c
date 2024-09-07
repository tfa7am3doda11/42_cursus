#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    s += len;
    if(c == '\0')
        return("\0");
    while(len >= 0)
    {
        if(s[len] == c)
            return (char *)&s[len];
        len--;
    }
    return (NULL);
}
