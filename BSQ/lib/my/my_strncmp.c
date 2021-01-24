/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** compare two strings and return the differences
*/


#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int diff = 0;
    int equal = 1;
    for (i = 0; s1[i] != s1[n] &&  s2[i] != s2[n]; i++) {
        if (s1[i] == s2[i]) {
                equal = 0;
        }
        if (s1[i] - s2[i] != 0){
                diff++;
        }
    }
    return diff;
}
