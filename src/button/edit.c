/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void button_edit(window_t *window, sfMouseButtonEvent coord, map_t *map)
{
    if (((coord.x >= 372 && coord.x <= 542) &&
        (coord.y >= 18 && coord.y <= 91)) && window->menu == false) {
        if (map->bool_barre == 2) {
            map->bool_barre = 0;
            sfRectangleShape_setFillColor(map->btn->tab[EDIT]->rec, sfWhite);
        } else if (map->bool_barre == 0) {
            map->bool_barre = 2;
            sfRectangleShape_setFillColor(map->btn->tab[EDIT]->rec,
                (sfColor){150, 150, 150, 255});
        }
    }
}
