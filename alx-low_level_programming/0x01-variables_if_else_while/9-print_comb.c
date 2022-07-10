#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */

int main()
{
    int n;

    for (n = 48; n < 58; n++)
    {
        putchar(n);
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
    return 0;
}