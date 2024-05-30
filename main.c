#include "ft_printf.h"
#include <stdio.h>

int main()
{
    char *s = "hey";
    printf("%d\n", ft_printf("hey there %i\n", 6666));
    printf("%d\n", printf("hey there %i\n", 6666));
   
}