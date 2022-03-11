/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void verif_box(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 815 && coord.x <= 1790) && 
        (coord.y >= 125 && coord.y <= 255)) && window->menu == true)
        window->menu = false;
    if (((coord.x >= 818 && coord.x <= 1789) && 
        (coord.y >= 288 && coord.y <= 414)) && window->menu == true) {
        load_map(map);
        window->menu = false;
    }
    for (int i = 0; i < LAST; i++) {
        if (((coord.x >= 1740 && coord.x <= 1900)
            && (coord.y >= (25 + i * 80) && coord.y <= (25 + i * 80 + 75)))
            && window->menu == false) {
            map->actual = i;
            map->is_editing = 0;
        }
    }
    if (((coord.x >= 20 && coord.x <= 180) && 
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        window->menu = true;
        reset_map(map);
    }
}

/**
 * X : 20 Y : 18 | X : 180 Y : 18
 * X : 20 Y : 91 | X : 180 Y : 91
 */

/**
 * X : 196 Y : 18 | X : 196 + 160 Y : 18
 * 
 */