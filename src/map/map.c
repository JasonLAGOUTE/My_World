/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int **create_map(int heigth, int width)
{
    int **map = malloc(sizeof(int *) * (heigth + 1));

    for (int i = 0; i < heigth; i++) {
        map[i] = malloc(sizeof(int) * (width + 1));
        for (int j = 0; j < width; j++)
            map[i][j] = 0;
        map[i][width] = '\0';
    }
    map[heigth] = NULL;
    return map;
}

map_t *create_struct_map(camera_t camera)
{
    map_t *map = malloc(sizeof(map_t));

    map->point = create_struct_point();
    map->map = create_map(MAP_X, MAP_Y);
    map->texture_map = create_map(MAP_X, MAP_Y);
    map->water_map = create_map(MAP_X, MAP_Y);
    map->cam = camera;
    map->actual = 0;
    map->is_editing = 1;
    map->bool_barre = 0;
    map->counter = 0;
    map->last_time = 0;
    map->actual_time = sfClock_create();
    map->texture = init_struct_all_textures();
    map->btn_t = init_struct_all_buttons();
    map->btn = init_struct_buttons_navig();
    map->btn_r = init_struct_buttons_rander();
    map->btn_e = init_struct_buttons_edit();
    map->bool_r = init_struct_bool_render();
    map->bool_e = init_struct_bool_edit();
    return map;
}