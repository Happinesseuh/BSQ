/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** hjgiugiug
*/

int my_strlen(char const *str)
{
    int x = 0;
    while (str[x] != '\0') {
        x++;
    }
    return x;
}

