#include "main.h"

void print_rev(char *s){
    int i, k;
 
    for(k = 0; s[k] != '\0'; k++){}

    for (i = k; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}