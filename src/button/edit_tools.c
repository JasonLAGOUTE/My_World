/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

static void condit2(window_t *window, sfMouseButtonEvent coord,
    map_t *map, sfEvent event)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 731 && coord.y <= 804)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && event.mouseButton.button == sfMouseLeft)
            map->cam.edit_strenght += 1;
        if (map->bool_barre == 2 && event.mouseButton.button == sfMouseRight)
            map->cam.edit_strenght -= 1;
    }
}

static void condit(window_t *window, sfMouseButtonEvent coord,
    map_t *map, sfEvent event)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 419 && coord.y <= 492)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->ran_gen == 1)
            map->bool_e->ran_gen = 0;
        else if (map->bool_barre == 2 && map->bool_e->ran_gen == 0)
            map->bool_e->ran_gen = 1;
    } if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 575 && coord.y <= 648)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->water_height == 1)
            map->bool_e->water_height = 0;
        else if (map->bool_barre == 2 && map->bool_e->water_height == 0)
            map->bool_e->water_height = 1;
    }
    condit2(window, coord, map, event);
}

void button_edit_tool(window_t *window, sfMouseButtonEvent coord,
    map_t *map, sfEvent event)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 110 && coord.y <= 180)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->radius == 0)
            map->bool_e->radius = 1;
        else if (map->bool_barre == 2 && map->bool_e->radius == 1)
            map->bool_e->radius = 0;
    } if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 263 && coord.y <= 336)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->size == 0)
            map->bool_e->size = 1;
        else if (map->bool_barre == 2 && map->bool_e->size == 1)
            map->bool_e->size = 0;
    }
    condit(window, coord, map, event);
}
