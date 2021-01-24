/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** capitalizes the first letter of each word
*/

#include <stdio.h>
#include <unistd.h>

char *my_strcapitalize(char *str)
{
    int i = 0;
    int j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 90 && str[i] >= 65) {
            str[i] = str[i] + 32;
        }
    }
    for (j = 0 ; str[j] != '\0'; j++) {
        if ( str[j] >= 97 && str[j] <= 122){
            if (!(str[j - 1] > 65 && str[j - 1] < 90) &&
                !(str[j - 1] > 97 && str[j - 1] < 122) &&
                !(str[j - 1] > 48 && str[j - 1] <  57)) {
                str[j] = str[j] - 32;
            }
        }
    }
    return str;
}
