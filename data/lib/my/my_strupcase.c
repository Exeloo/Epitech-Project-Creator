/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task08 - Function my_strupcase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && 'z' >= str[i])
            str[i] = str[i] - 32;
    }
    return str;
}
