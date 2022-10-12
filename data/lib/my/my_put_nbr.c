/*
** EPITECH PROJECT, 2022
** CPool-Day03
** File description:
** Task06 - Function my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
    }
    if (nb / 10 != 0) {
        if (nb / 10 > 0)
            my_put_nbr(nb / 10);
        else
            my_put_nbr(-(nb / 10));
    }
    if (nb % 10 < 0)
        my_putchar(-(nb % 10) + 48);
    else
        my_putchar(nb % 10 + 48);
    return (0);
}
