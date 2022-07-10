#include <stdio.h>

/**
 * printing combination of three digits
 *
 */

int main()
{
    int i, j, k;

    for (i = 48; i < 58; i++)
    {
        for (j = 49; j < 58; j++)
        {
            for (k = 50; k < 58; k++)
            {
                if (k > j && j > i)
                {
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return 0;
}