/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

void free_buttons(map_t *map)
{
    for (int i = 0; i < LAST_BARRE; i++) {
        sfTexture_destroy(map->btn->tab[i]->texture);
        sfText_destroy(map->btn->tab[i]->text);
        sfRectangleShape_destroy(map->btn->tab[i]->rec);
    }
    for (int i = 0; i < LAST_EDIT; i++) {
        sfTexture_destroy(map->btn_e->tab[i]->texture);
        sfText_destroy(map->btn_e->tab[i]->text);
        sfRectangleShape_destroy(map->btn_e->tab[i]->rec);
    }
    for (int i = 0; i < LAST_RANDER; i++) {
        sfTexture_destroy(map->btn_r->tab[i]->texture);
        sfText_destroy(map->btn_r->tab[i]->text);
        sfRectangleShape_destroy(map->btn_r->tab[i]->rec);
    }
    for (int i = 0; i < LAST - 1; i++) {
        sfTexture_destroy(map->btn_t->tab[i]->texture);
        sfText_destroy(map->btn_t->tab[i]->text);
        sfRectangleShape_destroy(map->btn_t->tab[i]->rec);
    }
}

void free_texture(map_t *map)
{
    for (int i = 0; i < LAST; i++) {
        free(map->texture->tab[i]->state);
        free(map->texture->tab[i]);
    }
    free(map->texture);
}
