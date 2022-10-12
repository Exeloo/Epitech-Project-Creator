/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task03 - Function my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
