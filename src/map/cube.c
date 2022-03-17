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
        map->point->points3d = (sfVector3f){i, MAP_X - 1,
            map->map[i][MAP_X - 1]};
        map->point->points = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){i + 1, MAP_X - 1,
            map->map[i + 1][MAP_X - 1]};
        map->point->points2 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){i, MAP_X - 1, 0};
        map->point->points3 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){i + 1, MAP_X - 1, 0};
        map->point->points4 = to2d(map->point->points3d, map);
        map->point->points3.y += MAP_X * 3 / 4 * map->cam.zoom;
        map->point->points4.y += MAP_X * 3 / 4 * map->cam.zoom;
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points, &map->point->points3,
                &map->point->points2, (sfColor){178, 78, 45, 255}), NULL);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points2, &map->point->points4,
            &map->point->points3, (sfColor){178, 78, 45, 255}), NULL);
    }
}

void second_part_cube(sfRenderWindow *window, map_t *map)
{
    for (int i = 0; i < MAP_X - 1; i++) {
        map->point->points3d = (sfVector3f){MAP_X - 1, i,
            map->map[MAP_X - 1][i]};
        map->point->points = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){MAP_X - 1, i + 1,
            map->map[MAP_X - 1][i + 1]};
        map->point->points2 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){MAP_X - 1, i, 0};
        map->point->points3 = to2d(map->point->points3d, map);
        map->point->points3d = (sfVector3f){MAP_X - 1, i + 1, 0};
        map->point->points4 = to2d(map->point->points3d, map);
        map->point->points3.y += MAP_X * 3 / 4 * map->cam.zoom;
        map->point->points4.y += MAP_X * 3 / 4 * map->cam.zoom;
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points, &map->point->points3,
                &map->point->points2, (sfColor){197, 96, 62, 255}), NULL);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points2, &map->point->points4,
                &map->point->points3, (sfColor){197, 96, 62, 255}), NULL);
    }
}

void third_part_cube(sfRenderWindow *window, map_t *map)
{
    map->point->points3d = (sfVector3f){MAP_X - 1, 0, 0};
    map->point->points = to2d(map->point->points3d, map);
    map->point->points.y += MAP_X * 3 / 4 * map->cam.zoom;
    map->point->points3d = (sfVector3f){0, MAP_X - 1, 0};
    map->point->points2 = to2d(map->point->points3d, map);
    map->point->points2.y += MAP_X * 3 / 4 * map->cam.zoom;
    map->point->points3d = (sfVector3f){0, 0, 0};
    map->point->points3 = to2d(map->point->points3d, map);
    map->point->points3.y += MAP_X * 3 / 4 * map->cam.zoom;
    map->point->points3d = (sfVector3f){MAP_X - 1, MAP_X - 1, 0};
    map->point->points4 = to2d(map->point->points3d, map);
    map->point->points4.y += MAP_X * 3 / 4 * map->cam.zoom;
    sfRenderWindow_drawVertexArray(window,
        crt_triangle_l(&map->point->points, &map->point->points3,
        &map->point->points2, (sfColor){130, 72, 53, 255}), NULL);
    sfRenderWindow_drawVertexArray(window,
        crt_triangle_l(&map->point->points2, &map->point->points,
        &map->point->points4, (sfColor){130, 72, 53, 255}), NULL);
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
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points, &map->point->points3,
                &map->point->points2, (sfColor){50, 50, 100, 5}),  NULL);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points2, &map->point->points4,
            &map->point->points3, (sfColor){50, 50, 100, 5}),  NULL);
    }
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
        map->map[MAP_X - 1][i - 1]};
        map->point->points4 = to2d(map->point->points3d, map);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points, &map->point->points3,
                &map->point->points2, (sfColor){50, 50, 100, 5}), NULL);
        sfRenderWindow_drawVertexArray(window,
            crt_triangle_l(&map->point->points2, &map->point->points4,
                &map->point->points3, (sfColor){50, 50, 100, 5}), NULL);
    }
}
