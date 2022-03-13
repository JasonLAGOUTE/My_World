/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_world(sfRenderWindow *window, map_t *map)
{
    first_part_cube(window, map);
    second_part_cube(window, map);
    draw_map(map, window);
    draw_navig_barre(map, window);
    draw_button_paint(map, window);
    draw_edit(map, window);
}
