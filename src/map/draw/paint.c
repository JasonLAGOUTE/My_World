/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_button_paint(map_t *map, sfRenderWindow *window) 
{
    if (map->bool_barre == 1) {
        for (int i = 0; i < LAST; i++) {
            sfRenderWindow_drawRectangleShape(window, map->button->tab[i]->rect, NULL);
            sfRenderWindow_drawText(window, map->button->tab[i]->text, NULL);
        }
    }
}
