/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** search number in str
*/

#include <unistd.h>

static size_t research_number(char c)
{
    if (c >= '0' && c <= '9')
        return 0;
    return 1;
}

static size_t count_sign(char const *str)
{
    size_t count = 0;

    for (size_t i = 0; str[i] == '-'; i++)
        count++;
    return count;
}

int my_getnbr(char const *str)
{
    long int total = 0;

    for (size_t i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z'))
            return 0;
        while (research_number(str[i]) == 1)
            i++;
        while (research_number(str[i]) == 0 && str[i] != '\0') {
            total = total * 10 + (str[i] - 48);
            i++;
        }
        if (count_sign(str) % 2 != 0)
            total = total * (-1);
        if (total != 0 && (total >= -2147483648 && total <= 2147483647))
            return (int)total;
        return 0;
    }
    return 0;
}
