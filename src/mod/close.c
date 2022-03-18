/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void mod_close(sfEvent event, window_t *window, map_t *map)
{
    if (event.type == sfEvtKeyReleased) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->wd);
    }
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window->wd);
}
