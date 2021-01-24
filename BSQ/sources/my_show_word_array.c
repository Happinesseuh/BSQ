/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** displays the content of an array words
*/

#include "../includes/my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;
    for (i = 0; tab[i] != NULL; i++) {
        write(1, tab[i], my_strlen(tab[i]));
    }
    return (0);
}
