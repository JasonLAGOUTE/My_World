/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

menu_t *init_struct_menu(void)
{
    menu_t *menu = malloc(sizeof(framebuffer_t));

    menu->sprite = sfSprite_create();
    menu->texture = sfTexture_createFromFile("img/menu.jpg", NULL);
    return menu;
}