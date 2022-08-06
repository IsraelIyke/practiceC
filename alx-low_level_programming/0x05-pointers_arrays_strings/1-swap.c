#include "main.h"

void swap_int(int *a, int *b)
{
    int i = *a, j = *b;

    *a = j;
    *b = i;
}
