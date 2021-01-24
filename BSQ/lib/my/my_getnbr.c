/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** Takes a string and turn it into an int if possible.
*/

#include <unistd.h>

static int handle_neg(char const *str, int i)
{
    int neg = 0;

    for (; str[i] == '-'  || str[i] == '+'; i++) {
        if (str[i] == '-')
            neg++;
    }
    if (neg % 2 == 0)
        return (0);
    else
        return (1);
}

static int handle_size(int a, long long result)
{
    if (a == 0 && (result >= (-2147483648) && result <= 2147483647))
        return (result);
    else if (a == 1 && (result >= (-2147483648) && result <= 2147483648))
        return ((result) * (-1));
    else {
        return (0);
    }
}

int my_getnbr(char const *str)
{
    long long result = 0;
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (; str[i] < '0' && str[i] > '9'; i++);
        if (str[i - 1] == '-')
            a = handle_neg(str, i - 1);
        if (str[i] >= '0' && str[i] <= '9') {
            result += str[i] - '0';
            result *= 10;
        }
        if ((str[i] >= '0' && str[i] <= '9')
            && (str[i + 1] < '0' || str[i + 1] > '9')) {
            result /= 10;
            return (result = handle_size(a, result));
        }
    }
    return (0);
}