/*
** EPITECH PROJECT, 2020
** my_intlen.c
** File description:
** int len
*/

int my_intlen(int nb)
{
    int x = 0;

    for (; nb != 0; x++) {
        nb /= 10;
    }
    return x;
}