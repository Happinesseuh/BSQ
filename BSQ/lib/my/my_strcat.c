/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenates two strings
*/

#include <stdio.h>

int len(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x++;
    }
    return (x);
}

char *my_strcat(char *dest, char const *src)
{
    int i = len(dest);
    int j = 0;

    for (j = 0; src[j] != '\0'; j++){
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
