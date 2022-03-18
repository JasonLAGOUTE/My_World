/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

window_t *window_unit(void)
{
    window_t *wid = malloc(sizeof(window_t));
    wid->mode.width = WIDTH;
    wid->mode.height = LENGTH;
    wid->mode.bitsPerPixel = 32;
    wid->wd = sfRenderWindow_create(wid->mode, "My_World",
        sfResize | sfClose, NULL);
    wid->menu = true;
    wid->settings = false;
    return wid;
}
