/*
** EPITECH PROJECT, 2020
** find_square.c
** File description:
** functions for find the biggest square
*/

#include <stdio.h>
#include "../includes/my.h"
#include "../includes/bsq.h"

int check_min(int **tab, int line, int column)
{
    int min = tab[line][column - 1];

    if (tab[line - 1][column] < min)
        return (tab[line - 1][column]);
    if (tab[line - 1][column - 1] < min)
        return (tab[line - 1][column - 1]);
    return (min);
}

int **find_square(int **tab, square_t *square)
{
    square->max_square = 0;
    int line = 0;
    int column = 0;
    square->nb_columns = square->nb_columns / 2;
    while (line <= square->nb_lines - 1) {
        column = 0;
        while (column <= square->nb_columns - 1) {
            if (tab[line][column] != 0 && line != 0 && column != 0) {
                if (tab[line][column - 1] != 0 && tab[line - 1][column] != 0
                    && tab[line - 1][column - 1] != 0) {
                    tab[line][column] = 1 + check_min(tab, line, column);
                    if (tab[line][column] > square->max_square) {
                        square->max_square = tab[line][column];
                        square->max_line = line;
                        square->max_column = column;
                    }
                }
            }
            column++;
        }
        line++;
    }
    return (tab);
}

char **transform_square_x(char **tab, square_t *square)
{
    int pos_line = square->max_line - (square->max_square - 1);
    int pos_column = square->max_column - (square->max_square - 1);

    for (int i = square->max_line; i >= pos_line; i--)
        for (int j = square->max_column; j >= pos_column; j--)
            tab[i][j] = 'x';
    return (tab);
}
