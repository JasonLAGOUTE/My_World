/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverses string
*/

#include "my.h"

static int nb_for_malloc_tab(char *str, char separ)
{
    size_t counter = 0;

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == separ)
            counter++;
    }
    return counter + 1;
}

static int nb_for_malloc_tab_line(char *str, size_t i, char separ)
{
    size_t idx = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == separ)
            break;
        idx++;
    }
    return idx;
}

char **my_str_to_word_array(char *str, char separ)
{
    char **tab = malloc(sizeof(char *) * (nb_for_malloc_tab(str, separ) + 1));
    size_t k = 0;
    size_t j = 0;
    size_t idx = nb_for_malloc_tab_line(str, 0, separ) + 2;

    if (!tab)
        return NULL;
    tab[j] = malloc(sizeof(char) * idx);
    for (size_t i = 0; str[i] != '\0'; i++, k++) {
        if (str[i] == separ) {
            tab[j][k] = '\0';
            k = 0;
            i++;
            j++;
            idx = nb_for_malloc_tab_line(str, i, separ) + 2;
            tab[j] = malloc(sizeof(char) * idx);
        }
        tab[j][k] = str[i];
    }
    tab[j][k] = '\0';
    tab[j + 1] = NULL;
    return tab;
}
