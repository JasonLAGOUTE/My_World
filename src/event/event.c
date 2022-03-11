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
        if (event.mouseButton.button == sfMouseLeft && window->menu == false)
            edit_map(map, event);
        if (event.mouseButton.button == sfMouseRight && window->menu == false) {
            map->cam.edit_strenght *= -1;
            edit_map(map, event);
        }
        if (event.mouseButton.button == sfMouseLeft && window->menu == false)
            verif_box(window, event.mouseButton, map);
        if (event.mouseButton.button == sfMouseLeft && window->menu == true)
            verif_box(window, event.mouseButton, map);
    }
}

void keyboard_control(sfEvent event,  map_t *map)
{
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyDown)
            map->cam.offset.y += 10;
        if (event.key.code == sfKeyUp)
            map->cam.offset.y -= 10;
        if (event.key.code == sfKeyRight)
            map->cam.offset.x += 10;
        if (event.key.code == sfKeyLeft)
            map->cam.offset.x -= 10;
        if (event.key.code == sfKeyE)
            map->cam.angle.y -= 1;
        if (event.key.code == sfKeyA)
            map->cam.angle.y += 1;
        if (event.key.code == sfKeyAdd)
            map->cam.zoom += 2;
        if (event.key.code == sfKeySubtract)
            map->cam.zoom -= 2;
        if (event.key.code == sfKeyK)
            map->cam.radius -= 50;
        if (event.key.code == sfKeyJ)
            map->cam.radius += 50;
        if (event.key.code == sfKeyS) {
            save_map(map);
        }
        if (event.key.code == sfKeyR) {
            shuffle_map(map);
        }
        if (event.key.code == sfKeyL) {
            smooth_map(map);
        }
    }
}
