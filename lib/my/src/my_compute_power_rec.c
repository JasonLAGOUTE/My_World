/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** power in recursive
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    else if (p == 1)
        return nb;
    else {
        result = nb * my_compute_power_rec(nb, p - 1);
        return result;
    }
    return 0;
}
