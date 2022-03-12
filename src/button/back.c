/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void button_back(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 20 && coord.x <= 180) &&
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        window->menu = true;
        reset_map(map);
    }
}
