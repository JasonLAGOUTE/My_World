/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int display_menu(window_t *window, menu_t *menu)
{
    sfRenderWindow_drawSprite(window->wd, menu->sprite, NULL);
    sfRenderWindow_display(window->wd);
    return 0;
}

int display_settings(window_t *w, image_t *set)
{
    sfRenderWindow_drawSprite(w->wd, set->sprite, NULL);
    sfRenderWindow_display(w->wd);
    return 0;
}
