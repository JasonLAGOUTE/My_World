/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void verif_box(window_t *window, sfMouseButtonEvent coord)
{
    if ((coord.x >= 815 && coord.x <= 1790) && 
        (coord.y >= 125 && coord.y <= 255))
        window->menu = false;
}