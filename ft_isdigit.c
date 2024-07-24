int ft_isdigit(int c)
{
    if( c>= '0' && c <= '9')
        return (1);
    else
        return (0);
}
#include <stdio.h>
int main()
{
    char c = '8';
    printf("return :%i",ft_isdigit(c));
}