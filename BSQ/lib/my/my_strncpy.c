/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** knhilio
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

char *my_strncpy( char *dest, char const *src, int n)
{
    int i = 0;
    int stock = my_strlen(dest);
    for (i = 0; src[i] != '\0' && i < n ; i++){
        dest[i] = src[i];
    }
    if (n > stock){
        dest[i] = '\0';
    }
    return dest;
}
