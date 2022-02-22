/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(map_t *map, sfRenderWindow *window, int i, int j)
{
    if (i + 1 < MAP_X) {
        map->points3d = (sfVector3f){i + 1, j, map->map[i + 1][j]};
        map->points2 = to2d(map->points3d, map->cam);
        sfRenderWindow_drawVertexArray(window, 
            create_line(&map->points, &map->points2), NULL);
    }
    if (j + 1 < MAP_Y) {
        map->points3d = (sfVector3f){i, j + 1, 
            map->map[i][j + 1]};
        map->points2 = to2d(map->points3d, map->cam);
        sfRenderWindow_drawVertexArray(window, 
            create_line(&map->points, &map->points2), NULL);
    }
}

void draw_map(sfRenderWindow *window, camera_t cam, map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->points3d = (sfVector3f){i, j, map->map[i][j]};
            map->points = to2d(map->points3d, cam);
            condit(map, window, i, j);
        }
    }
}
