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

    for (n = 48; n < 58; n++)
    {

        for (m = 49; m < 58; m++)
        {
            if (m > n)
            {
                putchar(n);
                putchar(m);
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}