#include <stdio.h>

/**
 * @brief
 *
 */

int main()
{
    int i;
    int j;

    for (i = 0; i <= 5; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}