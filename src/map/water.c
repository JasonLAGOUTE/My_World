/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(sfRenderWindow *window, map_t *map)
{
    sfVertexArray *triangle_1;
    sfVertexArray *triangle_2;

    triangle_1 = crt_triangle_l(&map->point->points, &map->point->points3,
            &map->point->points2, (sfColor){50, 50, 100, 5});
    triangle_2 = crt_triangle_l(&map->point->points2, &map->point->points4,
        &map->point->points3, (sfColor){50, 50, 100, 5});
    sfRenderWindow_drawVertexArray(window,
        triangle_1,  NULL);
    sfRenderWindow_drawVertexArray(window,
        triangle_2,  NULL);

    sfVertexArray_destroy(triangle_1);
    sfVertexArray_destroy(triangle_2);
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
    sfVertexArray *triangle_1 = crt_triangle_l(&map->point->points,
        &map->point->points3, &map->point->points2, (sfColor){50, 50, 100, 5});
    sfVertexArray *triangle_2 = crt_triangle_l(&map->point->points2,
        &map->point->points4, &map->point->points3, (sfColor){50, 50, 100, 5});

    sfRenderWindow_drawVertexArray(window, triangle_1, NULL);
    sfRenderWindow_drawVertexArray(window, triangle_2, NULL);
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
