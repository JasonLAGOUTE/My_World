/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void even(sfEvent event, window_t *window, map_t *map)
{
    keyboard_control(event, map, window);
    if (event.type == sfEvtMouseButtonReleased) {
        if (event.mouseButton.button == sfMouseLeft && window->menu == false)
            edit_map(map, event);
        if (event.mouseButton.button == sfMouseRight && window->menu == false) {
            map->cam.edit_strenght *= -1;
            edit_map(map, event);
        }
        if (event.mouseButton.button == sfMouseLeft)
            verif_box(window, event.mouseButton, map);
    }
}

void keyboard_control(sfEvent event, map_t *map, window_t *window)
{
    if (event.type == sfEvtKeyPressed) {
        mod_offset(event, map);
        mod_angle(event, map);
        mod_zoom(event, map);
        mod_radius(event, map);
        mod_save(event, map);
        mod_shuffle(event, map);
        mod_smooth(event, map);
    }
    mod_close(event, window);
}
