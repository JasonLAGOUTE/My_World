/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_world(sfRenderWindow *window, map_t *map)
{
    third_part_cube(window, map);
    draw_map(map, window);
    first_part_cube(window, map);
    second_part_cube(window, map);
    /*
    draw_circle(window, map);
    draw_line(window, map);*/
    draw_navig_barre(map, window);
    draw_button_paint(map, window);
    draw_edit(map, window);
    draw_render(map, window);
}
