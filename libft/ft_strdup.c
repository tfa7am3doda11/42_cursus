char	*ft_strdup(const char *s1)
{
    int i;
    int slen;
    char *dst;

    slen = ft_strlen(s1);
    dst = malloc(sizof(char) * slen + 1);
    while(s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}
