/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_navig_barre(map_t *map, sfRenderWindow *window)
{
    for (int i = 0; i < LAST_BARRE; i++) {
        sfRenderWindow_drawRectangleShape(window, map->btn->tab[i]->rect, NULL);
        sfRenderWindow_drawText(window, map->btn->tab[i]->text, NULL);
    }
}
