/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static camera_t reset_cam(camera_t cam)
{
    sfVector2i offset = {WIDTH / 2, LENGTH / 4};
    sfVector2i angle = {45, 35};

    cam.zoom = 64;
    cam.offset = offset;
    cam.angle = angle;
    cam.edit_strenght = 1;
    cam.radius = 100;
    return cam;
}

void reset_map(map_t *map)
{
    map->point = create_struct_point();
    map->actual = 0;
    map->is_editing = 1;
    map->point->points3 = (sfVector2f){0, 0};
    map->map = create_map(MAP_X, MAP_Y);
    map->water_map = create_map(MAP_X, MAP_Y);
    map->texture_map = create_map(MAP_X, MAP_Y);
    map->texture = init_struct_all_textures();
    map->last_time = 0;
    map->counter = 0;
    map->actual_time = sfClock_create();
    map->btn_t = init_struct_all_buttons();
    map->btn = init_struct_buttons_navig();
    map->cam = reset_cam(map->cam);
    map->actual = 0;
    map->is_editing = 1;
    map->btn_e = init_struct_buttons_edit();
    map->btn_r = init_struct_buttons_rander();
    map->bool_r = init_struct_bool_render();
}
