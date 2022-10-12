/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task09 - Function my_strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && 'Z' >= str[i])
            str[i] = str[i] + 32;
    }
    return str;
}
