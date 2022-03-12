/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void first_part_cube(sfRenderWindow *window, map_t *map)
{
    for (int i = 0; i < MAP_X - 1; i++) {
        map->points3d = (sfVector3f){i, MAP_X - 1, map->map[i][MAP_X - 1]};
        map->points = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i + 1, MAP_X - 1, 
            map->map[i + 1][MAP_X - 1]};
        map->points2 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i, MAP_X - 1, 0};
        map->points3 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){i + 1, MAP_X - 1, 0};
        map->points4 = to2d(map->points3d, map);
        map->points3.y+= MAP_X * 3/4 * map->cam.zoom;
        map->points4.y+= MAP_X * 3/4 * map->cam.zoom;
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->points, &map->points3, &map->points2,
                (sfColor){178, 78, 45, 255}), NULL);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->points2, &map->points4, &map->points3,
                (sfColor){178, 78, 45, 255}), NULL);
    }
}

void second_part_cube(sfRenderWindow *window, map_t *map)
{
    for (int i = 0; i < MAP_X - 1; i++) {
        map->points3d = (sfVector3f){MAP_X - 1, i, map->map[MAP_X - 1][i]};
        map->points = to2d(map->points3d, map);
        map->points3d = (sfVector3f){MAP_X - 1, i + 1,
            map->map[MAP_X - 1][i + 1]};
        map->points2 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){MAP_X - 1, i, 0};
        map->points3 = to2d(map->points3d, map);
        map->points3d = (sfVector3f){MAP_X - 1, i + 1, 0};
        map->points4 = to2d(map->points3d, map);
        map->points3.y+= MAP_X * 3/4 * map->cam.zoom;
        map->points4.y+= MAP_X * 3/4 * map->cam.zoom;
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->points, &map->points3, &map->points2,
                (sfColor){197, 96, 62, 255}), NULL);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->points2, &map->points4, &map->points3,
                (sfColor){197, 96, 62, 255}), NULL);
    }
}
