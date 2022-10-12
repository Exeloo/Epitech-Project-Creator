/*
** EPITECH PROJECT, 2022
** CPool-Day07
** File description:
** Task03 - Function my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int	i = 0;
    int j = 0;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0' && j < nb; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}
