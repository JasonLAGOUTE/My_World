/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void draw_render(map_t *m, sfRenderWindow *w)
{
    if (m->bool_barre == 3) {
        for (int i = 0; i < LAST_RANDER; i++) {
            sfRenderWindow_drawRectangleShape(w, m->btn_r->tab[i]->rec, NULL);
            sfRenderWindow_drawText(w, m->btn_r->tab[i]->text, NULL);
        }
    }
}
