#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }
    if(n < 0)
    {
        n = -n;
        ft_putchar_fd('-', fd);
    }
    if(n < 10)
    {
        ft_putchar_fd(n + '0', fd);
        return;
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd((n % 10 )+'0', fd);
    }
}

int main ()
{
    ft_putnbr_fd(2147483649 , 1);
    write(1,"\n",1);
}