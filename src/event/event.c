/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void even(sfEvent event, window_t *window)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window->wd);
    if (event.type == sfEvtKeyReleased) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->wd);
    }
}

void keyboard_control(sfEvent event, camera_t *cam)
{
    if (event.key.code == sfKeyDown)
        cam->offset.y += 10;
    if (event.key.code == sfKeyUp)
        cam->offset.y -= 10;
    if (event.key.code == sfKeyRight)
        cam->offset.x += 10;
    if (event.key.code == sfKeyLeft)
        cam->offset.x -= 10;
    if (event.key.code == sfKeyE)
        cam->angle.y -= 1;
    if (event.key.code == sfKeyA)
        cam->angle.y += 1;
}