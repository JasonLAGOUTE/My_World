/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_button_paint(map_t *m, sfRenderWindow *w)
{
    if (m->bool_barre == 1) {
        for (int i = 0; i < LAST; i++) {
            sfRenderWindow_drawRectangleShape(w, m->button->tab[i]->rec, NULL);
            sfRenderWindow_drawText(w, m->button->tab[i]->text, NULL);
        }
    }
}
