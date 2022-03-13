/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void button_rander(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 741 && coord.x <= 911) &&
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        if (map->bool_barre == 3) {
            map->bool_barre = 0;
        } else if (map->bool_barre == 0)
            map->bool_barre = 3;
    }
}
