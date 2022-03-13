/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void verif_box(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    button_in_menu(window, coord, map);
    button_back(window, coord, map);
    button_save(window, coord, map);
    button_paint(window, coord, map);
    button_texture(window, coord, map);
    button_edit(window, coord, map);
}
