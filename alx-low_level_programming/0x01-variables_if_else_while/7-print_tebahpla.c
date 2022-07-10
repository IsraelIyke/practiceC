#include <stdio.h>

/**
 * prints the alphabet in reverse
 *
 * Return: 0 if successful
 */

int main()
{
    char alpha;

    for (alpha = 'z'; alpha >= 'a'; alpha--)
    {
        putchar(alpha);
    }
    putchar('\n');
    return 0;
}