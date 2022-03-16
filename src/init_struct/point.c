/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

point_t *create_struct_point(void)
{
    point_t *point = malloc(sizeof(point_t));

    point->points = (sfVector2f){0, 0};
    point->points2 = (sfVector2f){0, 0};
    point->points3d = (sfVector3f){0, 0, 0};
    point->points3 = (sfVector2f){0, 0};
    return point;
}
