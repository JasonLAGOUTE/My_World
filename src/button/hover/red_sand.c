/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void hover_red_sand(window_t *window, sfMouseMoveEvent co, map_t *map)
{
    if (((co.x >= 1740 && co.x <= 1900)
        && (co.y >= 50 && co.y <= 110)) && window->menu == false) {
        sfRectangleShape_setFillColor(map->btn_t->tab[RED_SAND]->rec,
            (sfColor){255, 255, 255, 120});
        map->btn_t->tab[RED_SAND]->cursor =
            sfCursor_createFromSystem(sfCursorHand);
        sfRenderWindow_setMouseCursor(window->wd,
            map->btn_t->tab[RED_SAND]->cursor);
    } else {
        sfRectangleShape_setFillColor(map->btn_t->tab[RED_SAND]->rec, sfWhite);
        map->btn_t->tab[RED_SAND]->cursor =
            sfCursor_createFromSystem(sfCursorArrow);
        sfRenderWindow_setMouseCursor(window->wd,
            map->btn_t->tab[RED_SAND]->cursor);
    }
}
