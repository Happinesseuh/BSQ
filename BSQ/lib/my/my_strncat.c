/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concatenates n characters of the src string
*/

#include <stdio.h>
#include <unistd.h>

int lenstr(char const *str)
{
    int x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return x;
}

char  *my_strncat(char *dest, char const *src, int nb)
{
    int i = lenstr(dest);
    int j = 0;
    for (j = 0; src[j] != src[nb]; j++){
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
