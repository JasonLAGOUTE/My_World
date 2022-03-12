/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

camera_t init_struct_cam(camera_t *cam)
{
    cam->zoom = 64;
    cam->offset = (sfVector2i){WIDTH / 2, LENGTH / 4};
    cam->angle = (sfVector2i){45, 35};
    cam->edit_strenght = 1;
    cam->radius = 100;
    return *cam;
}
