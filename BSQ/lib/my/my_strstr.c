/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find string on other string
*/

#include <unistd.h>
#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int letter = 1;
    for (; str[i] != '\0'; i++) {
        if (str[i] == to_find[0]) {
            letter = 1;
        }
        for (j = 0; to_find[j] != '\0' && letter == 1; j++) {
            if (str[i + j] == to_find[j]) {
                letter = 1;
            }else {
                letter = 0;
            }
        }
        if (letter == 1) {
            return &str[i];
        }
    }
    return (0);
}
