/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

all_textures_t *init_struct_all_textures()
{
    all_textures_t *all_textures = malloc(sizeof(all_textures_t));

    all_textures->textures_tab = malloc(sizeof(textures_t *) * LAST);
    all_textures->textures_tab[RED_SAND] = init_struct_red_sand();
    all_textures->textures_tab[WHITE_SAND] = init_struct_white_sand();
    return all_textures;
}
