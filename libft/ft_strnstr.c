#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    i = 0;
    size_t need_len = ft_strlen(needle) ;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while(haystack[i] && i < len)
    {
        if(haystack[i] == *needle && len - i >= need_len && ft_strncmp(&haystack[i] , needle , need_len))
            return ((char *)&haystack[i]);
        i++;
    }
    return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    const char *haystack = "reda lbida 3ndo wrida";
    const char *needle = "\0";
    size_t len = 6;
    printf("result : %s\n",ft_strnstr(haystack , needle , len));
}
*/