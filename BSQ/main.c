/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c for bsq
*/

#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "./includes/my.h"
#include "./includes/bsq.h"

char *read_file(char *path)
{
    int fd = 0;
    struct stat stack;
    char *buffer = NULL;
    int len = 0;

    fd = open(path, O_RDONLY);
    if (fd == -1)
        return NULL;
    if (stat(path, &stack))
        return NULL;
    buffer = malloc(sizeof(char) * stack.st_size + 1);
    len = read(fd, buffer, stack.st_size + 1);
    if (len == -1)
        return NULL;
    buffer[len] = '\0';
    return (buffer);
}

int error_case(char *buffer, square_t *square)
{
    int k = 0;
    int i = 0;
    int check = 0;
    int nb = my_getnbr(buffer);
    square->nb_lines = 0;

    for (; buffer[k] != '\0'; k++)
        if (buffer[k] == '\n')
            square->nb_lines += 1;
    for (; buffer[i] != '\n'; i++);
    if ((nb + 1) != square->nb_lines)
        return 1;
    for (int j = my_intlen(nb) + 2; buffer[j] != '\n'; j++)
        if (nb <= 0 || (buffer[j] != '.' && buffer[j] != 'o'))
            return 1;
    return 0;
}

int **buffer_to_double_int_tab(char *buffer, square_t *square)
{
    int **tab = NULL;
    int check = 0;

    square->nb_columns = 0;
    square->nb_lines = my_getnbr(buffer);
    buffer += my_intlen(square->nb_lines) + 1;
    for (int j = 0; buffer[j] != '\n'; j++)
        square->nb_columns += 1;
    tab = malloc(sizeof(int *) * (square->nb_lines));
    for (int i = 0; i <= square->nb_lines - 1; i++)
        tab[i] = malloc(sizeof(int) * (square->nb_columns));
    for (int k = 0; k < square->nb_lines; k++, check++)
        for (int j = 0; j < square->nb_columns; j++, check++) {
            if (buffer[check] == '.')
                tab[k][j] = 1;
            else if (buffer[check] == 'o')
                tab[k][j] = 0;
        }
    return (tab);
}

char **buffer_to_double_char_tab(char *buffer, square_t *square)
{
    char **tab = NULL;
    int j = 0;
    int k = 0;
    int b = 0;

    square->nb_lines = my_getnbr(buffer);
    buffer += my_intlen(square->nb_lines) + 1;
    for (j = 0; buffer[j] != '\n'; j++)
        square->nb_columns += 1;
    tab = malloc(sizeof(char *) * (square->nb_lines + 1));
    for (int i = 0; i <= square->nb_lines; i++) {
        tab[i] = malloc(sizeof(char) * (square->nb_columns / 2 + 2));
    }
    j = 0;
    while (buffer[b] != '\0') {
        if (buffer[b + 1] == '\n') {
            tab[j][k] = buffer[b];
            tab[j][k + 1] = '\n';
            tab[j][k + 2] = '\0';
            j++;
            b += 2;
            k = 0;
        }
        tab[j][k] = buffer[b];
        b++;
        k++;
    }
    tab[square->nb_lines] = NULL;
    return (tab);
}

int main(int ac, char **av)
{
    int **tab_int = 0;
    int **result = 0;
    char **tab_char = NULL;
    square_t square;
    char *buffer = NULL;

    if (ac != 2)
        return 84;
    buffer = read_file(av[1]);
    if (buffer == NULL)
        return 84;
    if (error_case(buffer, &square) == 1)
        return 84;
    tab_int = buffer_to_double_int_tab(buffer, &square);
    tab_char = buffer_to_double_char_tab(buffer, &square);
    result = find_square(tab_int, &square);
    my_show_word_array(transform_square_x(tab_char, &square));
    return (0);
}