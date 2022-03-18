/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"
#include <SFML/System/Time.h>

static void gather(window_t *windo, font_map_t *font, menu_t *menu, map_t *map)
{
    update_map(map);
    if (windo->menu == true && windo->settings == false) {
        display_menu(windo, menu);
    } else if (windo->menu == false && windo->settings == true) {
        display_settings(windo, menu->settings);
    } else {
        sfRenderWindow_drawSprite(windo->wd, font->sprite, NULL);
        draw_world(windo, map);
        sfRenderWindow_display(windo->wd);
    }
}

int main(void)
{
    sfEvent event;
    window_t *window = window_unit();
    camera_t cam = init_struct_cam(&cam);
    font_map_t *font_map = init_struct_map();
    menu_t *menu = init_struct_menu();
    map_t *map = create_struct_map(cam);

    if (!window->wd)
        return 84;
    set_texture(font_map, menu);
    sfRenderWindow_setFramerateLimit(window->wd, 60);
    while (sfRenderWindow_isOpen(window->wd)) {
        while (sfRenderWindow_pollEvent(window->wd, &event))
            even(event, window, map);
        hover_texture(window, event.mouseMove, map);
        gather(window, font_map, menu, map);
    }
    sfRenderWindow_destroy(window->wd);
    return 0;
}
