/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

color_t init_struct_colors(void)
{
    sfColor first = {150, 150, 150, 255};
    sfColor second = {180, 180, 180, 255};
    sfColor third = {210, 210, 210, 255};
    sfColor four = {150, 150, 150, 120};
    sfColor five = {180, 180, 180, 120};
    sfColor six = {210, 210, 210, 120};
    color_t colors;

    colors.first = first;
    colors.second = second;
    colors.third = third;
    colors.four = four;
    colors.five = five;
    colors.six = six;
    return colors;
}
