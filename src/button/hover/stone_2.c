/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void hover_stone_2(window_t *window, sfMouseMoveEvent co, map_t *map)
{
    if (((co.x >= 1740 && co.x <= 1900)
        && (co.y >= 650 && co.y <= 710)) && window->menu == false) {
        sfRectangleShape_setFillColor(map->btn_t->tab[STONE]->rec,
            (sfColor){255, 255, 255, 120});
    } else
        sfRectangleShape_setFillColor(map->btn_t->tab[STONE]->rec, sfWhite);
}
