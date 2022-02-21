/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int main(void)
{
    sfEvent event;
    window_t *window = window_unit();
    camera_t cam = {64,(sfVector2i){WIDTH/2, LENGTH/4},(sfVector2i){45,35}};

    if (!window->wd)
        return 84;
    sfRenderWindow_setFramerateLimit(window->wd, 64);
    while (sfRenderWindow_isOpen(window->wd)) {
        while (sfRenderWindow_pollEvent(window->wd, &event)) {
            even(event, window);
            keyboard_control(event, &cam);
        }
        sfRenderWindow_clear(window->wd, sfBlack);
        draw_map(window->wd, cam);
        sfRenderWindow_display(window->wd);
    }
    sfRenderWindow_destroy(window->wd);
    return 0;
}
