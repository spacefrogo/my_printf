/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** my_strlen.c
*/
#include "my.h"

int	my_strlen(char const *str)
{
    int k;

    k = 0;
    if (str == NULL)
        return 0;
    while (str[k] != '\0') {
        k++;
    }
    return k;
}
