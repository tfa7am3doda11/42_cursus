int ft_atoi(char *str)
{
    int i;
    int signe;
    unsigned int result;

    i = 0;
    signe = 1;
    result = 0;
    while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            signe *= -1;
        i++;
    }
    while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * signe);
}
