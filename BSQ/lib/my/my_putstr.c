/*
** EPITECH PROJECT, 2020
** my_pustr
** File description:
** jbljbl
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c,  1);
}

int my_putstr(char const *str)
{
    int x = 0;
    while (str[x] != '\0') {
        my_putchar(str[x]);
        x++;
    }
    return x;
}
