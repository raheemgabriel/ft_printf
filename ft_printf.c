#include "ft_printf.h"

int ft_printf(char *str, ...)
{
    va_list list;
    int i;
    int sum ;
    int check;
    
    va_start(list, str);
    sum = 0;
    i = 0;

    while(str[i])
    {
        check = sum;
        if(str[i] == '%')
            sum += ft_format(str[++i], list);
        else 
            sum += ft_putchar(str[i]);
        if(sum < check)
            return(-1);
        i++;
    }
    va_end(list);
    return(sum);
}
