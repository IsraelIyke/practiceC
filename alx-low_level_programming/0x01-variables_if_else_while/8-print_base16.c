#include <stdio.h>

/**
 * @brief
 *
 */

int main()
{
    int n;
    char alpha;

    for (n = 48; n < 58; n++)
        putchar(n);
    for (alpha = 'a'; alpha <= 'f'; alpha++)
        putchar(alpha);
    putchar('\n');
    return 0;
}