/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** compares two string
*/

int my_strcmp(char const *s1, char const *s2)
{
    for (size_t pos = 0; s1[pos] != '\0' || s2[pos] != '\0'; pos++) {
        if (s1[pos] < s2[pos] || s1[pos] > s2[pos])
            return (s1[pos] - s2[pos]);
    }
    return 0;
}
