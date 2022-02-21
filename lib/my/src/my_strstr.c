/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** search word or letter in string
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    size_t r = 0;

    for (;str[0] != '\0'; str++) {
        for (r = 0; str[r] == to_find[r] && to_find[r] != '\0'; r++);
        if (to_find[r] == '\0')
            return str;
        if (my_strlen(str) == 1)
            return NULL;
    }
    return NULL;
}
