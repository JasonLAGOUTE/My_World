/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit(map_t *map, int i, int j)
{
    map->point->points3d = (sfVector3f){i, j, map->water_map[i][j]};
    map->point->points = to2d(map->point->points3d, map);
    map->point->points3d = (sfVector3f){i, j + 1, map->water_map[i][j + 1]};
    map->point->points2 = to2d(map->point->points3d, map);
    map->point->points3d = (sfVector3f){i + 1, j, map->water_map[i + 1][j]};
    map->point->points3 = to2d(map->point->points3d, map);
    map->point->points3d = (sfVector3f){i + 1, j + 1,
        map->water_map[i + 1][j + 1]};
    map->point->points4 = to2d(map->point->points3d, map);
}

void draw_water(map_t *m, sfRenderWindow *window, int i, int j)
{
    sfColor colors_1 = sfWhite;
    sfColor colors_2 = sfWhite;
    sfVertexArray *triangle_1;
    sfVertexArray *triangle_2;

    if ((j + 1 < MAP_Y) && (i + 1 < MAP_X)) {
        water_shuffle_map(m);
        if (m->map[i][j] < 2 && m->map[i + 1][j] < 2 &&
            m->map[i][j + 1] < 2 && m->map[i + 1][j + 1] < 2 ) {
            condit(m, i, j);
            colors_1 = water_get_right_color(m, i, j);
            colors_2 = water_get_left_color(m, i, j);
            triangle_1 = crt_triangle_r(&m->point->points, &m->point->points4,
            &m->point->points3, colors_1);
            triangle_2 = crt_triangle_l(&m->point->points, &m->point->points4,
            &m->point->points2, colors_2);
            sfRenderWindow_drawVertexArray(window,
            triangle_1, m->texture->tab[WATER3]->state);
            sfRenderWindow_drawVertexArray(window,
            triangle_2, m->texture->tab[WATER3]->state);
            sfVertexArray_destroy(triangle_1);
            sfVertexArray_destroy(triangle_2);
        }
    }
}
