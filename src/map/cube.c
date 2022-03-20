/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/
 
#include "my_world.h"

static sfVertexArray *to_fill_tr_2(map_t *m, sfColor color)
{
    sfVertexArray *triangle;

    triangle = crt_triangle_l(&m->point->points2, &m->point->points4,
                &m->point->points3, color);
    return triangle;
}

static sfVertexArray *to_fill_tr_3(map_t *m, sfColor color)
{
    sfVertexArray *triangle;

    triangle = crt_triangle_l(&m->point->points2, &m->point->points,
                &m->point->points4, color);
    return triangle;
}

void first_part_cube(sfRenderWindow *window, map_t *m)
{
    sfVertexArray *triangle_1;
    sfVertexArray *triangle_2;

    for (int i = 0; i < MAP_X - 1; i++) {
        m->point->points3d = (sfVector3f){i, MAP_X - 1, m->map[i][MAP_X - 1]};
        m->point->points = to2d(m->point->points3d, m);
        m->point->points3d = (sfVector3f){i + 1, MAP_X - 1,
            m->map[i + 1][MAP_X - 1]};
        m->point->points2 = to2d(m->point->points3d, m);
        m->point->points3d = (sfVector3f){i, MAP_X - 1, 0};
        m->point->points3 = to2d(m->point->points3d, m);
        m->point->points3d = (sfVector3f){i + 1, MAP_X - 1, 0};
        m->point->points4 = to2d(m->point->points3d, m);
        m->point->points3.y += MAP_X * 3 / 4 * m->cam.zoom;
        m->point->points4.y += MAP_X * 3 / 4 * m->cam.zoom;
        triangle_1 = to_fill_triangle(m, (sfColor){178, 78, 45, 255});
        triangle_2 = to_fill_tr_2(m, (sfColor){178, 78, 45, 255});
        display_vertex(window, triangle_1, triangle_2, NULL);
    }
}
 
void second_part_cube(sfRenderWindow *window, map_t *m)
{
    sfVertexArray *triangle_1;
    sfVertexArray *triangle_2;
    
    for (int i = 0; i < MAP_X - 1; i++) {
        m->point->points3d = (sfVector3f){MAP_X - 1, i, m->map[MAP_X - 1][i]};
        m->point->points = to2d(m->point->points3d, m);
        m->point->points3d = (sfVector3f){MAP_X - 1, i + 1, m->map[MAP_X - 1][i + 1]};
        m->point->points2 = to2d(m->point->points3d, m);
        m->point->points3d = (sfVector3f){MAP_X - 1, i, 0};
        m->point->points3 = to2d(m->point->points3d, m);
        m->point->points3d = (sfVector3f){MAP_X - 1, i + 1, 0};
        m->point->points4 = to2d(m->point->points3d, m);
        m->point->points3.y += MAP_X * 3 / 4 * m->cam.zoom;
        m->point->points4.y += MAP_X * 3 / 4 * m->cam.zoom;
        triangle_1 = to_fill_triangle(m, (sfColor){197, 96, 62, 255});
        triangle_2 = to_fill_tr_2(m, (sfColor){197, 96, 62, 255});
        display_vertex(window, triangle_1, triangle_2, NULL);
    }
}
 
void third_part_cube(sfRenderWindow *window, map_t *map)
{
    sfVertexArray *triangle_1;
    sfVertexArray *triangle_2;

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
    triangle_1 = to_fill_triangle(map, (sfColor){130, 72, 53, 255});
    triangle_2 = to_fill_tr_3(map, (sfColor){130, 72, 53, 255});
    display_vertex(window, triangle_1, triangle_2, NULL);
}
