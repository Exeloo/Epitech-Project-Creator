/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task03 - Function my_revstr
*/

char *my_revstr(char *str)
{
    int ln = 0;
    char c;

    for (ln = 0; str[ln] != '\0'; ln++);
    for (int i = 0; i < ln / 2; i++) {
        c = str[i];
        str[i] = str[ln - i - 1];
        str[ln - i - 1] = c;
        }
    return str;
}
