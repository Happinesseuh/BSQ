/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverse string
*/

int len(char const *str)
{
    int x;

    x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return (x);
}

char *my_revstr(char *str)
{
    int i = 0;
    int n = len(str) - 1;
    int x;
    while (i < n) {
        x = str[i];
        str[i] = str[n];
        str[n] = x;
        i++;
        n--;
    }
    return (str);
}
