#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    float x, y;
    string s;
    printf ("Вас приветствует калькулятор!\n");
    printf ("Введите первое число: ");
    x = get_float();
    printf ("\n");
    do
    {
        do
        {
         printf ("Введите арифметическую операцию + - / *\n");
        s = get_string();
        }
        while (strlen(s)!=1);
    }
    while (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/');
    do
    {
        printf ("Введите следующее число: ");
        y = get_float();
        printf ("\n");
        if (s[0]== '+')
        {
            x = x+y;
        }
        if (s[0]== '-')
        {
            x = x-y;
        }
        if (s[0]== '*')
        {
            x = x*y;
        }
         if (s[0]== '/')
        {
            if (y==0)
            {
                do
                {
                    printf("Деление на 0\n");
                    printf("Введите корректное число: ");
                    y = get_float();
                }
                while (y == 0);
            }
            else
            x = x/y;
        }
        printf ("Промежуточный результат %f\n", x);
        do
        {
            printf ("Если хотите продолжить, введите операцию + - / *, если хотите выйти введите q?\n");
            do
            {
                s = get_string();
            }
            while (strlen(s)!=1);
        }
         while (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/' && s[0] != 'q');
    }
    while (s[0] != 'q');

        printf ("Результат %f\n", x);
    }
