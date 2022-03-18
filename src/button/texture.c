/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(window_t *window, sfMouseButtonEvent co, map_t *map, int i)
{
    if (((co.x >= 1740 && co.x <= 1900)
        && (co.y >= (25 + i * 80) && co.y <= (25 + i * 80 + 60)))
        && window->menu == false && window->settings == false) {
        map->actual = i;
        map->is_editing = 0;
    }
}

void button_texture(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (map->bool_barre == 1) {
        for (int i = 0; i < LAST; i++) {
            condit(window, coord, map, i);
        }
    }
}
