/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2)
{
    sfVertexArray *vertex_array = sfVertexArray_create();

    sfVertex vertex1 = {.position = *point1, .color = sfWhite};
    sfVertex vertex2 = {.position = *point2, .color = sfWhite};
    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
    return vertex_array;
}

sfVertexArray *crt_triangle_r(sfVector2f *point1, sfVector2f *point2,
    sfVector2f *point3, sfColor colors)
{
    sfVertexArray *vertex_array = sfVertexArray_create();

    sfVertex vertex1 = {.position = *point1, .color = colors,
        .texCoords = {0, 0}};
    sfVertex vertex2 = {.position = *point2, .color = colors,
        .texCoords = {32, 32}};
    sfVertex vertex3 = {.position = *point3, .color = colors,
        .texCoords = {32, 0}};
    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_append(vertex_array, vertex3);
    sfVertexArray_setPrimitiveType(vertex_array, sfTriangles);
    return vertex_array;
}

sfVertexArray *crt_triangle_l(sfVector2f *point1, sfVector2f *point2,
    sfVector2f *point3, sfColor colors)
{
    sfVertexArray *vertex_array = sfVertexArray_create();

    sfVertex vertex1 = {.position = *point1, .color = colors,
        .texCoords = {0, 0}};
    sfVertex vertex2 = {.position = *point2, .color = colors,
        .texCoords = {32, 32}};
    sfVertex vertex3 = {.position = *point3, .color = colors,
        .texCoords = {0, 32}};
    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_append(vertex_array, vertex3);
    sfVertexArray_setPrimitiveType(vertex_array, sfTriangles);
    return vertex_array;
}
