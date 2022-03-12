/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void button_save(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 196 && coord.x <= 356) && 
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false)
        save_map(map);
}
