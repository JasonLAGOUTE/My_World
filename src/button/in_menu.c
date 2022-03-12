/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void button_in_menu(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 815 && coord.x <= 1790) && 
        (coord.y >= 125 && coord.y <= 255)) && window->menu == true)
        window->menu = false;
    if (((coord.x >= 818 && coord.x <= 1789) && 
        (coord.y >= 288 && coord.y <= 414)) && window->menu == true) {
        load_map(map);
        window->menu = false;
    }
}
