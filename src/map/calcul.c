/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfVector2f to2d(sfVector3f p, map_t *map)
{
    float angle_x = degrees_to_radiant(map->cam.angle.x);
    float angle_y = degrees_to_radiant(map->cam.angle.y);
    sfVector2f return_point = {0,0};

    return_point.x = (cos(angle_x) * p.x - cos(angle_x) * p.y);
    return_point.y = (sin(angle_y) * p.y + sin(angle_y) * p.x - (p.z/8));
    return_point.x = map->cam.zoom * return_point.x + map->cam.offset.x;
    return_point.y = map->cam.zoom * return_point.y + map->cam.offset.y;
    return return_point;
}
