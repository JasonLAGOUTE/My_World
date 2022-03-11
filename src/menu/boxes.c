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
    // if (((coord.x >= 1740 && coord.x <= 1900) && 
    //     (coord.y >= 4516613 && coord.y <= 46513)) && window->menu == false) {
    //     window->menu = true;
    // }
}
