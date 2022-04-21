/*
** EPITECH PROJECT, 2018
** printf
** File description:
** project
*/
#include "my.h"

int	my_printf(char *string, ...)
{
    va_list arg;
    va_start(arg, string);

    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i - 1] == '%') {
            switch(string[i]) {
            case 'c':
                my_putchar((char) va_arg(arg, int));
                break;
            case 's':
                my_putstr(va_arg(arg, char*));
                break;
            case 'd':
                my_put_nbr_base(va_arg(arg, int), "0123456789");
                break;
            case 'b':
                my_put_nbr_base(va_arg(arg, unsigned int), "01");
                break;
            case 'o':
                my_put_nbr_base(va_arg(arg, int), "01234567");
                break;
            case 'x':
                my_put_nbr_base(va_arg(arg, int), "0123456789abcdef");
                break;
            case 'X':
                my_put_nbr_base(va_arg(arg, int), "0123456789ABCDEF");
                break;
            case 'i':
                my_put_nbr_base(va_arg(arg, int), "0123456789");
                break;
            default:
                my_putchar(string[i-1]);
                my_putchar(string[i]);
                break;
            }
        } else if (string[i] == '%')
            continue;
        else
            my_putchar(string[i]);
    }
    va_end(arg);
    return (0);
}
