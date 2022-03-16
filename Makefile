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
		src/map/read_map.c	\
		src/map/draw/draw.c \
		src/map/map.c \
		src/map/reset.c \
		src/map/cube.c \
		src/map/draw/barre_navig.c \
		src/map/draw/paint.c \
		src/map/draw/circle.c \
		src/map/draw/line.c \
		src/map/draw/draw_water.c \
		src/map/draw/draw_map.c \
		src/map/draw/edit.c \
		src/map/draw/rander.c \
		src/map/shade.c \
		src/map/effect/shuffle.c \
		src/map/effect/smooth.c \
		src/map/effect/save.c \
		src/utils/radiant.c \
		src/utils/circle.c \
		src/window/window.c \
		src/menu/display.c \
		src/init_struct/map.c \
		src/init_struct/menu.c \
		src/init_struct/cam.c \
		src/init_struct/point.c \
		src/menu/boxes.c \
		src/texture/set_texture.c \
		src/texture/init_texture.c \
		src/init_struct/all_texture.c \
		src/init_struct/all_buttons.c \
		src/init_struct/bool_render.c \
		src/button/button.c \
		src/button/rander.c \
		src/button/back.c \
		src/button/in_menu.c \
		src/button/paint.c \
		src/button/save.c \
		src/button/texture.c \
		src/button/render_tools.c \
		src/button/edit_tools.c \
		src/button/text.c \
		src/button/edit.c \
		src/mod/angle.c \
		src/mod/close.c \
		src/mod/offset.c \
		src/mod/radius.c \
		src/mod/save.c \
		src/mod/shuffle.c \
		src/mod/smooth.c \
		src/mod/zoom.c

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
