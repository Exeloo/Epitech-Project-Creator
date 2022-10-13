/*
** EPITECH PROJECT, 2022
** CPool-Day09
** File description:
** Task02 - MY_H
*/

#include <criterion/criterion.h>
#include "my_params_to_array.h"

#ifndef MY_H_
    #define MY_H_

int add_nbr(int isN, int n, char c, int *itsOver);

int check_str(char *str, char const *to_find, int i);

char *convert_base(char const *nbr, char const *base_from, char const *base_to);

int count_alpha(char const *str, int *words);

int count_non_alpha(char const *str);

char *get_hexa_chars(char *str, char c, char *base);

int get_nb_in_base(char c, char const *base, int ln);

char *get_printable_char(char *str, char c);

int int_add_overflow(int a, int b);

int int_sub_overflow(int a, int b);

int int_mul_overflow(int a, int b);

int is_alpha_num(char c);

int is_printable_char(char c);

int make_sum(int *n, int p, int e, int isN);

void malloc_array(char const *str, int *nWordArray, int nWords, char **words);

int my_compute_power_it(int nb, int p);

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_compute_square_root_rec(int nb, int i);

int my_find_prime_sup(int nb);

int my_getnbr_base(char const *str, char const *base);

int my_getnbr(char const *str);

int my_is_prime(int nb);

int my_is_prime_rec(int nb, int i);

int my_isneg(int n);

int my_put_nbr(int nb);

void my_putchar(char c);

char *my_putnbr_base(int nbr, char const *base);

int my_putstr(char const *str);

char *my_revstr(char *str);

int my_show_word_array(char * const *tab);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

void my_sort_int_array(int *array, int size);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

char **my_str_to_word_array(char const *str);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

void print_adress(unsigned int c, char *base);

void print_char(char c, int *hasSpace, char *base, int isEnd);

void print_str(char const *str, int s, int size);

int toggle_negativ(int isN, char c);

#endif
