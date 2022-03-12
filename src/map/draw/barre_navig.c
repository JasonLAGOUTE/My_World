/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_navig_barre(map_t *map, sfRenderWindow *wind)
{
    for (int i = 0; i < LAST_BARRE; i++) {
        sfRenderWindow_drawRectangleShape(wind, map->btn->tab[i]->rec, NULL);
        sfRenderWindow_drawText(wind, map->btn->tab[i]->text, NULL);
    }
}
