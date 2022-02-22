/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void gather(window_t *window, framebuffer_t *fb, camera_t cam, map_t *map)
{
    if (window->menu == true) {
        display_menu(window, fb);
    } else {
        sfRenderWindow_clear(window->wd, sfBlack);
        draw_map(window->wd, cam, map);
        sfRenderWindow_display(window->wd);
    }
}

int main(void)
{
    sfEvent event;
    window_t *window = window_unit();
    framebuffer_t *framebuffer = framebuffer_create(WIDTH, LENGTH);
    camera_t cam = {64, (sfVector2i){WIDTH/2, LENGTH/4}, (sfVector2i){45,35}};

    if (!window->wd)
        return 84;
    sfSprite_setTexture(framebuffer->sprite, framebuffer->texture, sfTrue);
    sfRenderWindow_setFramerateLimit(window->wd, 60);
    map_t *map = create_struct_map(cam);
    while (sfRenderWindow_isOpen(window->wd)) {
        while (sfRenderWindow_pollEvent(window->wd, &event)) {
            even(event, window);
            keyboard_control(event, &cam);
        }
        update_map(cam, map);
        gather(window, framebuffer, cam, map);
    }
    sfRenderWindow_destroy(window->wd);
    return 0;
}
