/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(sfRenderWindow *window, map_t *map)
{
    sfRenderWindow_drawVertexArray(window,
        crt_triangle_l(&map->point->points, &map->point->points3,
            &map->point->points2, (sfColor){50, 50, 100, 5}),  NULL);
    sfRenderWindow_drawVertexArray(window,
        crt_triangle_l(&map->point->points2, &map->point->points4,
        &map->point->points3, (sfColor){50, 50, 100, 5}),  NULL);
}

void first_water_cube(sfRenderWindow *window, map_t *map)
{
    for (int i = 0; i < MAP_X - 1; i++) {
        map->point->points3d = (sfVector3f){i, MAP_X - 1,
            map->water_map[i][MAP_X - 1]};
        map->point->points = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){i + 1, MAP_X - 1,
            map->water_map[i + 1][MAP_X - 1]};
        map->point->points2 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){i, MAP_X - 1,
        map->map[i][MAP_X - 1]};
        map->point->points3 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){i + 1, MAP_X - 1, map->map[i + 1]
        [MAP_X - 1]};
        map->point->points4 = to2d(map->point->points3d, map);
        condit(window, map);
    }
}

static void condit2(sfRenderWindow *window, map_t *map)
{
    sfRenderWindow_drawVertexArray(window,
        crt_triangle_l(&map->point->points, &map->point->points3,
            &map->point->points2, (sfColor){50, 50, 100, 5}), NULL);
    sfRenderWindow_drawVertexArray(window,
        crt_triangle_l(&map->point->points2, &map->point->points4,
            &map->point->points3, (sfColor){50, 50, 100, 5}), NULL);
}

void second_water_cube(sfRenderWindow *window, map_t *map)
{
    for (int i = 0; i < MAP_X - 1; i++) {
        map->point->points3d = (sfVector3f){MAP_X - 1, i,
            map->water_map[MAP_X - 1][i]};
        map->point->points = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){MAP_X - 1, i + 1,
            map->water_map[MAP_X - 1][i + 1]};
        map->point->points2 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){MAP_X - 1, i, map->map[MAP_X - 1]
        [i]};
        map->point->points3 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){MAP_X - 1, i + 1,
        map->map[MAP_X - 1][i + 1]};
        map->point->points4 = to2d(map->point->points3d, map);
        condit2(window, map);
    }
}
