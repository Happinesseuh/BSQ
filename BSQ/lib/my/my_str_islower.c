/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** testing if the string contains lower letter
*/

#include <stdio.h>

int my_strlen(char const *str);

int my_str_islower(char const *str)
{
    int nb = 0;
    int alpha = my_strlen(str);
    if (str[0] == '\0') {
        return (1);
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            nb++;
        }
    }
    if (nb == alpha) {
        return (1);
    } else {
        return (0);
    }
}
