/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task07 - Function my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int	i = 0;

    while (s1[i] != '\0' && i < n - 1) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}
