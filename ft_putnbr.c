#include "ft_printf.h"

static int ft_getlen(int c)
{
    int len = 0;

    if(c == 0)
    {
        len = 1;
        return(len);
    }
    if(c < 0)
    {
        c *= -1;
        len++;
    }
    while(c > 0)
    {
        c /= 10;
        len++;
    }
    return(len);
}

int ft_putnbr(int c)
{
    if (c == -2147483648)
        return(write(1, "-2147483648", 11));
    else if(c < 0)
    {
        ft_putchar('-');
        ft_putnbr(c * -1);
    }
    else if(c <= 9)
        ft_putchar(c + '0');
    else if(c > 0)
    {
        ft_putnbr(c / 10);
        ft_putnbr(c % 10);
    }
    return(ft_getlen(c));
}