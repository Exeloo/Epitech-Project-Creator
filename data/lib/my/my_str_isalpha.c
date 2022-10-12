/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task12 - Function my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' > str[i] || ('Z' < str[i] && 'a' > str[i]) || 'z' < str[i])
            return 0;
    }
    return 1;
}
