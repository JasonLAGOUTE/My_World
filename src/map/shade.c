/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my_world.h"

sfColor get_right_color(map_t *map, int i, int j)
{   
    if (map->map[i][j] > (map->map[i + 1][j+1] + 1) * 2 &&
        map->map[i][j] > (map->map[i + 1][j] + 1) * 2) {
        return sfWhite;
    }
    if ((map->map[i][j] < map->map[i + 1][j] || map->map[i][j] > 
        map->map[i + 1][j + 1]) && map->map[i + 1][j] > map->map[i + 1][j + 1])
        return (sfColor){150, 150, 150, 255};
    if (map->map[i][j] < map->map[i + 1][j + 1])
        return (sfColor){180, 180, 180, 255};
    return (sfColor){210, 210, 210, 255};
}

sfColor get_left_color(map_t *map, int i, int j)
{
    if (map->map[i][j] < map->map[i + 1][j + 1]
        && map->map[i][j] < map->map[i][j + 1])
        return (sfColor){180, 180, 180, 255};
    if (map->map[i][j] > map->map[i + 1][j + 1]
        && map->map[i][j] > map->map[i][j + 1])
        return (sfColor){150, 150, 150, 255};
    if (map->map[i][j] > (map->map[i + 1][j+1] + 1) * 2
        && map->map[i][j + 1] > (map->map[i + 1][j + 1] + 1) * 2)
        return sfWhite;
    if ((map->map[i][j] < map->map[i][j + 1]
        || map->map[i][j] > map->map[i + 1][j + 1])
        && map->map[i][j + 1] > map->map[i + 1][j + 1])
        return sfWhite;
    if (map->map[i][j] < map->map[i + 1][j + 1]
        || (map->map[i][j] > map->map[i][j + 1]
        && map->map[i][j] > map->map[i + 1][j + 1]))
        return (sfColor){150, 150, 150, 255};
    return (sfColor){210, 210, 210, 255};
}
