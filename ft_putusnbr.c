#include "ft_printf.h"

static int ft_getlen(int c)
{
    int len = 0;

    if(c == 0)
        return(1);
    while(c > 0)
    {
        c /= 10;
        len++;
    }
    return(len);
}

int ft_putusnbr(unsigned int c)
{
    if(c <= 9)
        ft_putchar(c + '0');
    else if(c > 0)
    {
        ft_putusnbr(c /= 10);
        ft_putusnbr(c % 10);
    }
    return(ft_getlen(c));
}