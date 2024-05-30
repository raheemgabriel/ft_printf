NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_format.c ft_printf.c ft_putchar.c ft_puthex.c \
	ft_putnbr.c ft_putpointer.c ft_putstr.c \
	  ft_putusnbr.c ft_strlen.c 

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):	$(OBJ)
	ar -rcs $@ $^

%.o:	%.c
	$(CC)	$(CFLAGS) -c $< -o $@

clean:
	rm -f	$(OBJ)
fclean: clean
	rm -f	$(NAME)

re: fclean all

.PHONY: all clean fclean re