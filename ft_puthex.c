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

int ft_puthex(unsigned long long c, unsigned int l)
{
    char *hex1 = "0123456789abcdef";
    char *hex2 = "0123456789ABCDEF";

    if(l == 1)
    {
        if(c >= 16)
                ft_puthex(c / 16, 1);
            write(1, &hex1[c % 16], 1);
    }
    else if(l == 2)
    {
        if(c >= 16)
            ft_puthex(c / 16, 2);
        write(1, &hex2[c % 16], 1);
    }
    else 
        return(-1);
    return(ft_getlen(c));
}
