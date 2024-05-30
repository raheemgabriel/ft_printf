#ifndef FT_PRINTF
#define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>

int ft_format(char c, va_list list);
int ft_putchar(char c);
int ft_puthex(unsigned long long c, unsigned int l);
int ft_putnbr(int c);
int ft_putpointer(void *s);
int ft_putstr(char *s);
int ft_putusnbr(unsigned int c);
int ft_strlen(char *str);
int ft_printf(char *str, ...);

#endif