/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** ihoihoi
*/

#include "unistd.h"

int my_strlen(char const *str)
{
    int x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return x;
}

char *my_strcpy( char *dest, char const *src)
{
    int i = 0;

    for (i = 0; src[i] != '\0' ; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
