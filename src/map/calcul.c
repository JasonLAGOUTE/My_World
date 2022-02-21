/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfVector2f to2d(sfVector3f p, camera_t cam)
{
    float angle_x = degrees_to_radiant(cam.angle.x);
    float angle_y = degrees_to_radiant(cam.angle.y);
    sfVector2f return_point = {0,0};

    return_point.x = (cos(angle_x) * p.x - cos(angle_x) * p.y);
    return_point.y = (sin(angle_y) * p.y + sin(angle_y) * p.x - p.z);
    return_point.x = cam.zoom * return_point.x + cam.offset.x;
    return_point.y = cam.zoom * return_point.y + cam.offset.y;
    return return_point;
}
