/*
** EPITECH PROJECT, 2022
** struct.c
** File description:
** struct for printf
*/

#include "my.h"

const struct flags UTILS[] = {
        {'d', &print_nb},
        {'i', &print_nb},
        {'b', &print_nb_b},
        {'u', &print_nb},
        {'x', &print_nb_hexamin},
        {'X', &print_nb_hexamaj},
        {'o', &print_nb_b8},
        {'s', &print_str},
        {'c', &print_char},
        {'%', &print_mod},
};
