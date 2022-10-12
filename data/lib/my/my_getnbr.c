/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task05 - Function my_getnbr
*/

int my_strlen(char const *str);

int toggle_negativ(int isN, char c)
{
    if (c == '-') {
        isN = isN ? 0 : 1;
    }
    return isN;
}

int add_nbr(int isN, int n, char c, int *itsOver)
{
    int newN;

    if (n == 0) {
        newN = n * 10 - '0' + c;
        if (isN)
            newN = -newN;
    } else if (n > 0)
        newN = n * 10 - '0' + c;
    else
        newN = n * 10 + '0' - c;

    if ((newN <= n && n > 0) || (newN >= n && n < 0)) {
        *itsOver = 1;
        return (0);
    }
    return newN;
}

int my_getnbr(char const *str)
{
    int i;
    int state = 0;
    int itsOver = 0;
    int isN = 0;
    int n = 0;

    for (i = 0; i < my_strlen(str); i++) {
        if (!itsOver && !state && (str[i] == '+' || str[i] == '-'))
            isN = toggle_negativ(isN, str[i]);
        if (!itsOver && str[i] > 47 && str[i] < 58) {
            state = 1;
            n = add_nbr(isN, n, str[i], &itsOver);
        }
        if (itsOver || (state && !(str[i] > 47 && str[i] < 58)) ||
            (!state && !(str[i] == '+' || str[i] == '-')))
            break;
    }
    if (itsOver)
        return (0);
    return n;
}
