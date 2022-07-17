#include "main.h"

void print_times_table(int n)
{
    if (n < 0 || n > 15)
    {
    }
    else
    {
        int i, j;

        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                int alpha = (i * j);
                if (alpha < 10)
                {
                    _putchar(alpha + '0');
                    _putchar(',');
                    _putchar(' ');
                }
                else if (alpha >= 10 && alpha < 100)
                {
                    _putchar((alpha / 10) + '0');
                    _putchar((alpha % 10) + '0');
                    _putchar(',');
                    _putchar(' ');
                }
                else
                {
                    _putchar((alpha / 100) + '0');
                    _putchar(((alpha % 100) / 10) + '0');
                    _putchar((alpha % 10) + '0');
                    _putchar(',');
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
}
