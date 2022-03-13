/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_edit(map_t *m, sfRenderWindow *w)
{
    if (m->bool_barre == 2) {
        for (int i = 0; i < LAST_EDIT; i++) {
            sfRenderWindow_drawRectangleShape(w, m->btn_e->tab[i]->rec, NULL);
            sfRenderWindow_drawText(w, m->btn_e->tab[i]->text, NULL);
        }
    }
}
