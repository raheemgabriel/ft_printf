#include "ft_printf.h"

int ft_putpointer(void *s)
{
    int res;

    res = 0;
    if(s == NULL)
        return(ft_putstr("0x0"));
   
    res += ft_putstr("0x");
    res += ft_puthex((unsigned long)s, 1);
    return(res);
}