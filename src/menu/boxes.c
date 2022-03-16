/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void verif_box(sfEvent event, window_t *window,
    sfMouseButtonEvent coord, map_t *map)
{
    button_in_menu(window, coord, map);
    button_back(window, coord, map);
    button_save(window, coord, map);
    button_paint(window, coord, map);
    button_texture(window, coord, map);
    button_edit(window, coord, map);
    button_rander(window, coord, map);
    button_rander_tool(window, coord, map);
    button_edit_tool(window, coord, map, event);
}
