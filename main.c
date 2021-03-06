/*
** EPITECH PROJECT, 2019
** CPool_infinadd_2019
** File description:
** Adding stuff together
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

char *modifstr(char *str, char *base, char *spec);

char *eval_expr(char const *s, char *base, char *spec);

int error_test(char *str, char *base, char *spec);

int main(int argc, char **argv)
{
    int nb =  my_getnbr(argv[3]);
    char expression[nb + 2];
    read(0, expression, nb + 2);
    expression[nb] = '\n';
    expression[nb + 1] = '\0';
    char *base = argv[1];
    char *spec = argv[2];
    if (argc >= 4) {
        if (error_test(expression, base, spec))
            exit(84);
        my_putstr(eval_expr(modifstr(expression, base, spec), base, spec));
        return 0;
    }
    return (84);
}