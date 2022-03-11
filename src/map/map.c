/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static int **create_map(int heigth, int width)
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

    if (map_pos == NULL)
        return NULL;
    map_pos->points = (sfVector2f){0, 0};
    map_pos->points2 = (sfVector2f){0, 0};
    map_pos->points3d = (sfVector3f){0, 0, 0};
    map_pos->map = create_map(MAP_X, MAP_Y);
    map_pos->texture_map = create_map(MAP_X, MAP_Y);
    map_pos->cam = camera;
    map_pos->actual = 0;
    map_pos->is_editing = 1;
    map_pos->points3 = (sfVector2f){0, 0};
    map_pos->texture = init_struct_all_textures();
    map_pos->button = init_struct_all_buttons();
    return map_pos;
}

void update_map(camera_t camera, map_t *map)
{
    map->points = (sfVector2f){0, 0};
    map->points2 = (sfVector2f){0, 0};
    map->points3d = (sfVector3f){0, 0, 0};
    map->cam = camera;
}