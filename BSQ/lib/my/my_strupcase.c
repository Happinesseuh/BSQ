/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** puts every letter of word in it in uppercase
*/

#include <stdio.h>
#include <unistd.h>

char *my_strupcase(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 122 && str[i] >= 97) {
            str[i] = str[i]- 32;
        }
    }
    return str;
}
