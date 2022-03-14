/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void even(sfEvent event, window_t *windo, map_t *map)
{
    keyboard_control(event, map, windo);
    if (event.type == sfEvtMouseButtonReleased) {
        if (event.mouseButton.button == sfMouseLeft && windo->menu == false) {
            map->cam.edit_strenght = (map->cam.edit_strenght < 0) ?
            map->cam.edit_strenght * -1 : map->cam.edit_strenght;
            edit_map(map, event);
        }
        if (event.mouseButton.button == sfMouseRight && windo->menu == false) {
            map->cam.edit_strenght = (map->cam.edit_strenght > 0) ?
            map->cam.edit_strenght * -1 : map->cam.edit_strenght;
            edit_map(map, event);
        }
        if (event.mouseButton.button == sfMouseLeft)
            verif_box(windo, event.mouseButton, map);
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
