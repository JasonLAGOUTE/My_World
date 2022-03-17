/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void hover_texture(window_t *window, sfMouseMoveEvent co, map_t *map)
{
    if (map->bool_barre == 1) {
        hover_red_sand(window, co, map);
        hover_dirt(window, co, map);
        hover_dirt_broke(window, co, map);
        hover_glace_1(window, co, map);
        hover_glace_2(window, co, map);
        hover_grass(window, co, map);
        hover_mars_dirt(window, co, map);
        hover_snow(window, co, map);
        hover_stone_1(window, co, map);
        hover_stone_2(window, co, map);
        hover_white_sand(window, co, map);
    }
}
