#include "main.h"

void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            int alpha = i * j;
            if (alpha < 10)
            {
                _putchar((i * j) + '0');
            }
            else
            {
                _putchar((alpha / 10) + '0');
                _putchar((alpha % 10) + '0');
            }
            _putchar(',');
            _putchar(' ');
        }
        _putchar('\n');
    }
}