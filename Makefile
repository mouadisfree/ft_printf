NAME = libftprintf.a

SRC = 	ft_puthexa.c ft_putchar.c ft_putnbr.c \
		ft_putstr.c ft_putptr.c \
		ft_printf.c ft_putunsigned.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)  

all: $(NAME) 

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re