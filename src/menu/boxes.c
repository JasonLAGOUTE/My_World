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
    if (((coord.x >= 220 && coord.x <= 385) && 
        (coord.y >= 265 && coord.y <= 335)) && window->menu == false) {
        map->texture->textures_tab[ACTUAL] = init_struct_white_sand();
    }
}
