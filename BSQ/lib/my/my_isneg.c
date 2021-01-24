/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** nkljbk
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c,  1);
}

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
