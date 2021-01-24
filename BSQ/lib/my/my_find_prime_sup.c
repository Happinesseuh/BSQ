/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** return the prime number
*/

#include <stdio.h>

int my_is_prime(int nb);
int my_find_prime_sup (int nb)
{
    int test = 0;

    for (int i = nb; i >= nb; i++) {
        test = my_is_prime(i);
        if (test == 1) {
            return (i);
        }
    }
    return (nb);
}
