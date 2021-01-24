/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** testing if a char is printable
*/

#include <stdio.h>

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int nb = 0;
    int len = my_strlen(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 32 && str[i] <= 127))
            return (0);
    }
    return (1);
}
