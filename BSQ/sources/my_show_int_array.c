/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** displays the content of an array int
*/

#include "../includes/my.h"

int my_show_int_array(int **tab)
{
    int nb_lines = 3;
    int nb_columns = 4;

    for (int i = 0; i < nb_lines; i++) {
        for (int j = 0; j < nb_columns; j++)
            my_putchar(tab[i][j] + '0');
        my_putchar('\n');
    }
    return (0);
}
