/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int button_in_menu(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 125 && coord.y <= 255)) && window->menu == true
        && window->settings == false) {
        window->menu = false;
        play_sound(map);
    }
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 288 && coord.y <= 414)) && window->menu == true
        && window->settings == false) {
        load_map(map);
        window->menu = false;
        play_sound(map);
    }
    if (((coord.x >= 818 && coord.x <= 1789) &&
        (coord.y >= 447 && coord.y <= 573)) && window->menu == true
        && window->settings == false) {
        window->settings = true;
        window->menu = false;
        play_sound(map);
        return 1;
    }
    return 0;
}
