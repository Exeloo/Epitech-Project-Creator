/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task05 - Function my_strstr
*/

int check_str(char *str, char const *to_find, int i)
{
    int j;

    for (j = 0; to_find[j] != '\0' && str[j + i] != '\0'; j++) {
        if (str[j + i] != to_find[j])
            return 0;
    }
    if (str[j + i] == '\0' && to_find[j] != '\0')
        return 0;
    return i;
}

char *my_strstr(char *str, char const *to_find)
{
    int ln;
    int r = 0;

    if (to_find[0] == '\0')
        return str;
    if (str[0] == '\0')
        return 0;
    for (ln = 1; str[ln - 1] != '\0'; ln++);
    for (int i = 0; i < ln; i++) {
        if (to_find[0] == str[i])
            r = check_str(str, to_find, i);
        if (r)
            break;
    }
    if (!r)
        return 0;
    return &str[r];
}
