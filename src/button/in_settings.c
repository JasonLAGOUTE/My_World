/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

int button_in_setting(window_t *window, sfMouseButtonEvent coord)
{
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 125 && coord.y <= 255)) && window->menu == false
        && window->settings == true)
        printf("sound");
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 288 && coord.y <= 414)) && window->menu == false
        && window->settings == true) {
        printf("music");
    }
    if (((coord.x >= 815 && coord.x <= 1790) &&
        (coord.y >= 447 && coord.y <= 573)) && window->menu == false
        && window->settings == true) {
        window->menu = true;
        window->settings = false;
        return 1;
    }
    return 0;
}
