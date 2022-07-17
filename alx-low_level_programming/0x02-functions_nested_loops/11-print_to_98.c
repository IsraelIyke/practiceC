#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
    int a;
    if (n <= 98)
    {
        for (a = n; a <= 98; a++)
        {
            printf("%d, ", a);
        }
        _putchar('\n');
    }
    else
    {
        for (a = n; a >= 98; a--)
        {
            printf("%d, ", a);
        }
        _putchar('\n');
    }
}
