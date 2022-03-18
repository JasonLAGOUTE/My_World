/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my_world.h"

static int for_random(FILE *file)
{
    unsigned int seed = 0;

    if (!file)
        return 1;
    if (fread(&seed, sizeof(seed), 1, file)) {
        fclose(file);
        srand(8);
        return 0;
    }
    fclose(file);
    return 1;
}

int random_manuel(void)
{
    if ((!for_random(fopen("/dev/urandom", "r")))
        || (!for_random(fopen("/dev/arandom", "r")))
        || (!for_random(fopen("/dev/random", "r"))))
        return 0;
    return 1;
}
