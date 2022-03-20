/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_world(window_t *window, map_t *map)
{
    if (map->bool_r->cube == 0)
        third_part_cube(window->wd, map);
    draw_map(map, window->wd);
    if (map->bool_r->cube == 0) {
        first_part_cube(window->wd, map);
        second_part_cube(window->wd, map);
    }
    if (map->bool_r->point == 1)
        draw_circle(window->wd, map);
    if (map->bool_r->line == 1)
        draw_line(window->wd, map);
    draw_navig_barre(map, window->wd);
    draw_button_paint(map, window->wd);
    draw_edit(map, window->wd);
    draw_render(map, window->wd);
}
