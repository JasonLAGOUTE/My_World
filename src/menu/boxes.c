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
    if (((coord.x >= 20 && coord.x <= 180) && 
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        window->menu = true;
        reset_map(map);
    }
    if (((coord.x >= 558 && coord.x <= 725) && 
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        if (map->bool_barre == 1) {
            map->is_editing = 1;
            map->bool_barre = 0;
        } else {
            map->bool_barre = 1;
            map->is_editing = 0;
        }
    }
    if (((coord.x >= 196 && coord.x <= 356) && 
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false)
        save_map(map);
    if (map->bool_barre == 1) {
        for (int i = 0; i < LAST; i++) {
            if (((coord.x >= 1740 && coord.x <= 1900)
                && (coord.y >= (25 + i * 80) && coord.y <= (25 + i * 80 + 75)))
                && window->menu == false) {
                map->actual = i;
                map->is_editing = 0;
            }
        }
    }
}
