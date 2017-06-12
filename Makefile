##
## Makefile for Makefile in /home/benjamin.g/save/nouveau_projet
##
## Made by Benjamin GAYMAY
## Login   <benjamin.g@epitech.net>
##
## Started on  Sun Nov 20 13:42:20 2016 Benjamin GAYMAY
## Last update Thu Apr  6 10:38:47 2017 Benjamin GAYMAY

CC	=	gcc -Wall -Wextra

NAME	=

SRC	=	./my_printf/flag.c \
                ./my_printf/hexa.c \
                ./my_printf/octal_bin.c \
                ./my_printf/my_printf.c \
                ./my_printf/my_putstr_printf.c \
                ./my_printf/my_strlen_printf.c \
		./my_printf/my_put_nbr_printf.c \
		./my_printf/my_putchar_printf.c \
                ./my_printf/my_put_nbr_unsigned.c \
                ./my_fprintf/fflag.c \
                ./my_fprintf/fhexa.c \
                ./my_fprintf/my_fprintf.c \
                ./my_fprintf/foctal_bin.c \
                ./my_fprintf/my_putstr_fprintf.c \
                ./my_fprintf/my_strlen_fprintf.c \
		./my_fprintf/my_putchar_fprintf.c \
                ./my_fprintf/my_put_nbr_fprintf.c \
                ./my_fprintf/my_put_nbr_funsigned.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS +=	-I./include

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
