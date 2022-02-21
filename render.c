/*
** EPITECH PROJECT, 2022
** render.c
** File description:
** group the function with goal of render
*/

#include <math.h>
#include "Include/my_project.h"

sfVector2f to2d(sfVector3f points, camera cam)
{
    int x = points.x;
    int y = points.y;
    int z = points.z;
    float angle_x = cam.angle.x*3.14/180;
    float angle_y = cam.angle.y*3.14/180;
    sfVector2f return_point = {0,0};

    return_point.x = (cos(angle_x) * x - cos(angle_x) * y);
    return_point.y = (sin(angle_y) * y + sin(angle_y) * x - z);
    return_point.x = cam.zoom * return_point.x + cam.offset.x;
    return_point.y = cam.zoom * return_point.y + cam.offset.y;
    return return_point;
}
