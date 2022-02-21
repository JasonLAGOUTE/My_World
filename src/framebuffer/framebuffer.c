/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

framebuffer_t *framebuffer_create(size_t width, size_t height)
{
    framebuffer_t *fb = malloc(sizeof(framebuffer_t));

    fb->width = width;
    fb->height = height;
    fb->texture = sfTexture_createFromFile("src/img/menu.jpg", NULL);
    fb->sprite = sfSprite_create();
    return fb;
}