#include "main.h"

/**
 * main - entry
 * 
 * @*s: parameter
 * 
 * Return: success
 */

void _print_rev_recursion(char *s)
{
    if(*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
    
}
