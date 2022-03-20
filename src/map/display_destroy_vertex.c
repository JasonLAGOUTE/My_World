/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void display_vertex(sfRenderWindow *window, sfVertexArray *triangle_1,
    sfVertexArray *triangle_2, sfRenderStates *states)
{
    sfRenderWindow_drawVertexArray(window, triangle_1, states);
    sfRenderWindow_drawVertexArray(window, triangle_2, states);
    sfVertexArray_destroy(triangle_1);
    sfVertexArray_destroy(triangle_2);
}
