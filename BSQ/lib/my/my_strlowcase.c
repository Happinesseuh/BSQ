/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** puts every letter of every word in lowercase
*/

#include <stdio.h>
#include <unistd.h>

char *my_strlowcase(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 90 && str[i] >= 65) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

