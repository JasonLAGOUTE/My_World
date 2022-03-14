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
    map_t *map_pos = malloc(sizeof(map_t));

    map_pos->points = (sfVector2f){0, 0};
    map_pos->points2 = (sfVector2f){0, 0};
    map_pos->points3d = (sfVector3f){0, 0, 0};
    map_pos->map = create_map(MAP_X, MAP_Y);
    map_pos->texture_map = create_map(MAP_X, MAP_Y);
    map_pos->water_map = create_map(MAP_X, MAP_Y);
    map_pos->cam = camera;
    map_pos->actual = 0;
    map_pos->is_editing = 1;
    map_pos->bool_barre = 0;
    map_pos->points3 = (sfVector2f){0, 0};
    map_pos->texture = init_struct_all_textures();
    map_pos->btn_t = init_struct_all_buttons();
    map_pos->btn = init_struct_buttons_navig();
    map_pos->btn_r = init_struct_buttons_rander();
    map_pos->btn_e = init_struct_buttons_edit();
    map_pos->bool_r = init_struct_bool_render();
    return map_pos;
}

void update_map(map_t *map)
{
    map->points = (sfVector2f){0, 0};
    map->points2 = (sfVector2f){0, 0};
    map->points3d = (sfVector3f){0, 0, 0};
    map->cam = map->cam;
}
