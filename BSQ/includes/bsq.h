/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** prototypes bsq
*/

#ifndef BSQ_H_
#define BSQ_H_

typedef struct square_s {
    int nb_lines;
    int nb_columns;
    int column_square;
    int max_square;
    int max_line;
    int max_column;
}square_t;

int my_show_int_array(int **tab);
int my_intlen(int nb);
int check_min(int **tab, int line, int column);
int **find_square(int **tab, square_t *square);
char **transform_square_x(char **tab, square_t *square);
int my_show_word_array(char * const *tab);

#endif /* !BSQ_H_ */
