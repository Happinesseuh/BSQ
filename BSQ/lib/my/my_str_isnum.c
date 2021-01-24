/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** testing if the char is a number
*/

#include <stdio.h>

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 1;
        }
    }
    return 0;
}
