#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main()
{
    char alpha;

    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        if (alpha == 'e')
            continue;
        if (alpha == 'q')
            continue;
        putchar(alpha);
    }
    putchar('\n');
    return 0;
}