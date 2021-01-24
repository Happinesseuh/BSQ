/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sorts an integer array in ascending order
*/

#include <stddef.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb);

int my_strlen(char const *str);

static int my_show_word_array(char * const *tab)
{
    int i = 0;

    for (i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}

void my_sort_int_array (int *array, int size)
{
    int stock = 0;
    int ind_min = 0;
    int a = 0;

    for (int i = 1; i <= size; i++) {
        if (array[i] < array[i - 1]) {
            stock = array[i];
            array[i] = array[i -1];
            array[i -1] = stock;
            i = 0;
        }
    }
}
