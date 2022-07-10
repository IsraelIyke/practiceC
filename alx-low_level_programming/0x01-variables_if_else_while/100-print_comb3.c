#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */

int main()
{
    int n;
    int m;
    int p;

    for (p = 0; p <= 1; n++)
    {
        for (n = 48; n < 58; n++)
        {
            putchar(n);
            for (m = 49; m < 58; m++)
            {
                putchar(m);
            }
            putchar(',');
            putchar(' ');
        }
    }

    return 0;
}