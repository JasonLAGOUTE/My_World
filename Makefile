##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for this project
##

SRC =	src/main.c \
		src/event/event.c \
		src/line/line.c \
		src/map/calcul.c \
		src/map/edit.c	\
		src/map/save.c	\
		src/map/draw.c \
		src/map/map.c \
		src/utils/radiant.c \
		src/window/window.c \
		src/menu/display.c \
		src/init_struct/map.c \
		src/init_struct/menu.c \
		src/init_struct/cam.c \
		src/menu/boxes.c \
		src/texture/set_texture.c \
		src/texture/sand.c \
		src/init_struct/all_texture.c \
		src/button/button.c \
		src/button/text.c 

OBJ = $(SRC:.c=.o)

NAME = my_world

CFLAGS += -W -Wall -Wextra -I include -I lib/my/include

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) -Llib/my -lmy -lcsfml-window -lcsfml-system -lcsfml-graphics -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: fclean $(NAME)

.PHONY: all clean fclean re debug
