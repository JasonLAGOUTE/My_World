/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"
#include <math.h>

const unsigned int perm[] =
    {151,160,137,91,90,15,131,13,201,95,96,53,194,233,7,225,140,36,103,30,69,
    142,8,99,37,240,21,10,23,190,6,148,247,120,234,75,0,26,197,62,94,252,
    219,203,117,35,11,32,57,177,33,88,237,149,56,87,174,20,125,136,171,168,
    68,175,74,165,71,134,139,48,27,166,77,146,158,231,83,111,229,122,60,211,
    133,230,220,105,92,41,55,46,245,40,244,102,143,54,65,25,63,161,1,216,80,
    73,209,76,132,187,208,89,18,169,200,196,135,130,130,188,159,86,164,100,
    109,198,173,186,3,64,52,217,226,250,124,123,5,202,38,147,118,126,255,82,
    85,212,207,206,59,227,47,16,58,17,182,189,28,42,223,183,170,213,119,248,
    152,2,44,154,163,70,221,153,101,155,167,43,172,9,129,22,39,253,19,98,
    108,110,79,113,224,232,178,185,112,104,218,246,97,228,251,34,242,193,238
    ,210,144,12,191,179,162,241,81,51,145,235,249,14,239,107,49,192,214,31,
    181,199,106,157,184,84,204,176,115,121,50,45,127,4,150,254,138,236,205,
    93,222,114,67,29,24,72,243,141,128,195,78,66,215,61,
    156,180};

static void condit(float x, float y, perlin_t *perlin)
{
    float g[][2] = {{1, 1}, {-1, 1}, {1, -1},
        {-1, -1}, {1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    perlin->gi0 = perm[(int)(x) + perm[(int)(y)]] % 8;
    perlin->gi1 = perm[(int)(x) + 1 + perm[(int)(y)]] % 8;
    perlin->gi2 = perm[(int)(x) + perm[(int)(y) + 1]] % 8;
    perlin->gi3 = perm[(int)(x) + 1 + perm[(int)(y) + 1]] % 8;
    perlin->s = g[perlin->gi0][0] * (x - (int)(x)) +
        g[perlin->gi0][1] * (y - (int)(y));
    perlin->t = g[perlin->gi1][0] * (x - ((int)(x) + 1))
        + g[perlin->gi1][1] * (y - (int)(y));
    perlin->u = g[perlin->gi2][0] * (x - (int)(x))
        + g[perlin->gi2][1] * (y - ((int)(y) + 1));
    perlin->v = g[perlin->gi3][0] * (x - ((int)(x) + 1))
        + g[perlin->gi3][1] * (y - ((int)(y) + 1));
    perlin->tmp = x - (int)(x);
}

float perlin(float x, float y, float res)
{
    perlin_t *perlin = init_struct_perlin();

    x /= res;
    y /= res;
    condit(x, y, perlin);
    perlin->Cx = 3 * perlin->tmp * perlin->tmp - 2 * perlin->tmp *
        perlin->tmp * perlin->tmp;
    perlin->Li1 = perlin->s + perlin->Cx * (perlin->t - perlin->s);
    perlin->Li2 = perlin->u + perlin->Cx * (perlin->v - perlin->u);
    perlin->tmp = y - (int)(y);
    perlin->Cy = 3 * perlin->tmp * perlin->tmp - 2 * perlin->tmp *
        perlin->tmp * perlin->tmp;
    return perlin->Li1 + perlin->Cy * (perlin->Li2 - perlin->Li1);
}

void shuffle_map(map_t *map)
{
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++)
            map->map[i][j] = (int){perlin(i, j, 10) * 180};
    }
}

void water_shuffle_map(map_t *map)
{
    srand(time(NULL));
    for (int i = 0; i < MAP_X; i++) {
        for (int j = 0; j < MAP_Y; j++) {
            map->water_map[i][j] = rand()%5;
        }
    }
    smooth_water_map(map);
}
