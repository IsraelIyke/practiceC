#include "main.h"
#include <stdio.h>

void puts_half(char *str){
    int n, len, i, half;

    for(len = 0; str[len] != '\0'; len++){

    }
    
    n = (len - 1) / 2;

    half = len/2;
    if((len % 2) != 0){
        for (i = n; i <= len; i++)
        {
            _putchar(str[i]);
        }
    }
    else{
        for (i = half; i <= len; i++)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
    printf("%d", len);
    
}