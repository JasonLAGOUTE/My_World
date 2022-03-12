/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfCircleShape *create_circle(float pos1, float pos2, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setPosition(circle,
        (sfVector2f){pos1-(radius), pos2-(radius)});
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, (sfColor){255, 255, 255, 0});
    sfCircleShape_setOutlineColor(circle, (sfColor){255, 255, 255, 255});
    sfCircleShape_setOutlineThickness(circle, 2);
    return circle;
}
