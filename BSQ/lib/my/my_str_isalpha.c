/*
** EPITECH PROJECT, 2020
** my_isalpha
** File description:
** tests alphabetical contains
*/

#include <stdio.h>
#include <unistd.h>

int my_str_isalpha(char const *str)
{
    int ok = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97)) {
            ok = 1;
        }
    }
    if (ok == 1) {
        return (1);
    }else {
        return (0);
    }
}
