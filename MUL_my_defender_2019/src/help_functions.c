/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** writing functions for the help display
*/

#include "defender.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int my_strcmp(char const *str1, char const *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (0);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (0);
    }
    return (1);
}
