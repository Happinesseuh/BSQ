/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** hvjvhvjj
*/

int my_compute_square_root(int nb)
{
    int rc = 1;
    while (nb != rc*rc ) {
        rc++;
        if (rc > nb) {
            return 0;
        }
    }
    return rc;
}
