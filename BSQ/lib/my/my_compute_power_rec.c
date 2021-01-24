/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** hiiihhi
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0){
        result = 1;
        return (1);
    }else if (p == 1) {
        return (nb);
    }else {
        if (p < 0) {
            return (0);
        }else {
            result = 1;
            return (nb * my_compute_power_rec(nb, p-1));
        }
    }
    return (result);
}

