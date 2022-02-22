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

    all_textures->red_sand = init_struct_red_sand();
    all_textures->white_sand = init_struct_white_sand();
    return all_textures;
}
