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
        play_sound(map);
        if (map->bool_barre == 2 && event.mouseButton.button == sfMouseLeft)
            map->cam.edit_strenght += 3;
        if (map->bool_barre == 2 && event.mouseButton.button == sfMouseRight)
            map->cam.edit_strenght -= 3;
    }
}

static void condit3(window_t *window, sfMouseButtonEvent coord,
    map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 575 && coord.y <= 648)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->water_height == 1)
            map->bool_e->water_height = 0;
        else if (map->bool_barre == 2 && map->bool_e->water_height == 0) {
            map->bool_e->water_height = 1;
        }
        play_sound(map);
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
        else if (map->bool_barre == 2 && map->bool_e->ran_gen == 0) {
            map->bool_e->ran_gen = 1;
            shuffle_map(map);
        }
        play_sound(map);
    }
    condit3(window, coord, map);
    condit2(window, coord, map, event);
}

static void condit4(window_t *window, sfMouseButtonEvent coord,
    map_t *map)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 263 && coord.y <= 336)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->reset == 0)
            map->bool_e->reset = 1;
        else if (map->bool_barre == 2 && map->bool_e->reset == 1) {
            map->bool_e->reset = 0;
            reset_map(map);
        }
        play_sound(map);
    }
}

void button_edit_tool(window_t *window, sfMouseButtonEvent coord,
    map_t *map, sfEvent event)
{
    if (((coord.x >= 1740 && coord.x <= 1900) &&
        (coord.y >= 110 && coord.y <= 180)) && window->menu == false
        && window->settings == false) {
        if (map->bool_barre == 2 && map->bool_e->radius == 0)
            map->bool_e->radius = 1;
        else if (map->bool_barre == 2 && map->bool_e->radius == 1) {
            map->bool_e->radius = 0;
            map->cam.radius += 100;
        }
        play_sound(map);
    }
    condit4(window, coord, map);
    condit(window, coord, map, event);
}
