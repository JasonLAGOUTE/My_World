/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header of libmy
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int nb, int p);
int my_getnbr(char const *str);
int *my_intdup(int const *nb, size_t size);
void my_printf(char *str, ...);
void my_put_nbr(int nb);
void my_putchar(char c);
void my_putnbr_base(int nb, char const *base);
void my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(const char *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, size_t nb);
char *my_strncpy(char *dest, char const *src, size_t n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void print_str(va_list list);
void print_char(va_list list);
void print_mod(va_list list);
void print_nb(va_list list);
void print_nb_b8(va_list list);
void print_nb_b(va_list list);
void print_nb_hexamin(va_list list);
void print_nb_hexamaj(va_list list);
char **my_str_to_word_array(char *str, char separ);

struct flags {
    char flag;
    void (*fn)(va_list);
};
extern const struct flags UTILS[];

#endif
