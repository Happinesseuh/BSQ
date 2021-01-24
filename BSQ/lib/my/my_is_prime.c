/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** testing if a number is prime or not
*/

#include <stdio.h>

int my_is_prime (int nb)
{
    if (nb <= 1) {
        return (0);
    } else if (nb <= 3) {
        return (1);
    }
    for (int i = 2; i <= (nb / i); i++) {
        if (nb % i == 0) {
            return (0);
        }
    }
    return (1);
}
