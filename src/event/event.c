/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void even(sfEvent event, window_t *window, map_t *map)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window->wd);
    if (event.type == sfEvtKeyReleased) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->wd);
    }
    if (event.type == sfEvtMouseButtonReleased) {
        if (event.mouseButton.button == sfMouseLeft)
            verif_box(window, event.mouseButton);
        if (event.mouseButton.button == sfMouseLeft && window->menu == false)
            edit_map( map);
    }
}

void keyboard_control(sfEvent event, camera_t *cam)
{
    if (event.type == sfEvtKeyPressed) {
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
        if (event.key.code == sfKeyAdd)
            cam->zoom += 2;
        if (event.key.code == sfKeySubtract)
            cam->zoom -= 2;
    }
}
