/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfVertexArray *to_fill_triangle(map_t *m, sfColor color)
{
    sfVertexArray *triangle;

    triangle = crt_triangle_l(&m->point->points, &m->point->points3,
                &m->point->points2, color);
    return triangle;
}

sfVertexArray *fill_tri_map(map_t *m, sfColor color,
    sfVector2f first, sfVector2f second)
{
    sfVertexArray *triangle;

    triangle = crt_triangle_r(&m->point->points, &first, &second, color);
    return triangle;
}
