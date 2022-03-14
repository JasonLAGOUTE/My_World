/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void reset_map(map_t *map)
{
    map->points = (sfVector2f){0, 0};
    map->points2 = (sfVector2f){0, 0};
    map->points3d = (sfVector3f){0, 0, 0};
    map->actual = 0;
    map->is_editing = 1;
    map->points3 = (sfVector2f){0, 0};
    map->map = create_map(MAP_X, MAP_Y);
    map->water_map = create_map(MAP_X, MAP_Y);
    map->texture_map = create_map(MAP_X, MAP_Y);
    map->texture = init_struct_all_textures();
    map->btn_t = init_struct_all_buttons();
    map->btn = init_struct_buttons_navig();
    map->cam = (camera_t){64, (sfVector2i){WIDTH / 2, LENGTH / 4},
        (sfVector2i){45, 35}, 1, 100};
    map->actual = 0;
    map->is_editing = 1;
    map->btn_e = init_struct_buttons_edit();
    map->btn_r = init_struct_buttons_rander();
}
