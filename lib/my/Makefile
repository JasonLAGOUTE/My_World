##
## EPITECH PROJECT, 2022
## makefile
## File description:
## Librairy makefile
##

SRC = 	src/my_compute_power_rec.c\
		src/my_getnbr.c\
		src/my_intdup.c\
		src/my_printf.c\
		src/my_putchar.c\
		src/my_putnbr_base.c\
		src/my_put_nbr.c\
		src/my_putstr.c\
		src/my_revstr.c\
		src/my_strcapitalize.c\
		src/my_strcat.c\
		src/my_strcmp.c\
		src/my_strcpy.c\
		src/my_strlen.c\
		src/my_strlowcase.c\
		src/my_strncat.c\
		src/my_strncpy.c\
		src/my_strstr.c\
		src/my_strupcase.c\
		src/my_swap.c\
		src/print_char.c\
		src/print_nb.c\
		src/my_strdup.c\
		src/struc.c \
		src/my_str_to_word_array.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CFLAGS += -W -Wall -Wextra -I include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: re

.PHONY: all clean fclean re debug
