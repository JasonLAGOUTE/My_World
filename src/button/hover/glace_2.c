/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void hover_glace_2(window_t *window, sfMouseMoveEvent co, map_t *map)
{
    if (((co.x >= 1740 && co.x <= 1900)
        && (co.y >= 800 && co.y <= 860)) && window->menu == false) {
        sfRectangleShape_setFillColor(map->btn_t->tab[WATER2]->rec,
            (sfColor){255, 255, 255, 120});
    } else
        sfRectangleShape_setFillColor(map->btn_t->tab[WATER2]->rec, sfWhite);
}
