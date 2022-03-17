/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void hover_snow(window_t *window, sfMouseMoveEvent co, map_t *map)
{
    if (((co.x >= 1740 && co.x <= 1900)
        && (co.y >= 500 && co.y <= 560)) && window->menu == false) {
        sfRectangleShape_setFillColor(map->btn_t->tab[SNOW]->rec,
            (sfColor){255, 255, 255, 120});
    } else
        sfRectangleShape_setFillColor(map->btn_t->tab[SNOW]->rec, sfWhite);
}
