#include "ft_printf.h"

int ft_format(char c, va_list list)
{
    if(c == 'c')
        return(ft_putchar(va_arg(list, int)));
    else if(c == 's')
        return(ft_putstr(va_arg(list, char *)));
    else if(c == 'p')
        return(ft_putpointer(va_arg(list, void *)));
    else if(c == 'd' || c == 'i')
        return(ft_putnbr(va_arg(list, int)));
    else if(c == 'u')
        return(ft_putusnbr(va_arg(list, unsigned int)));
    else if(c == 'x')
        return(ft_puthex(va_arg(list, unsigned int), 1));
    else if(c == 'X')
        return(ft_puthex(va_arg(list, unsigned int), 2));
    else if(c == '%')
        return(ft_putchar('%'));
    else 
        return(ft_putchar(c));
}