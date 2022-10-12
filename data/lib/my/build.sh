#!/usr/bin/env bash
##
## EPITECH PROJECT, 2022
## CPool-Day07
## File description:
## Task01 - Lib Builder
##

gcc *.c -c
ar rc libmy.a *.o
rm *.o
