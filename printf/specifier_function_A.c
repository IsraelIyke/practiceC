#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @args: argument
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int specs_c(va_list args)
{
	return (_putchar(va_arg(args, int)));
}


/**
 * print_str - prints a string with a `s` (lower case) specifier
 * @args: argument
 * Return: number of character printed
 */

int specs_s(va_list args)
{
int k;
char *str = va_arg(args, char*);

if (str == NULL)
	str = "(null)";
else if (*str == '\0')
	return (-1);

for (k = 0; str[k]; k++)
	_putchar(str[k]);

return (k);
}

/**
 * print_int - prints an integer.
 * @args: argument
 * Return: 0
 */

int specs_d(va_list args)
{

unsigned int divisor = 1, k, resp, c_out = 0;
int n = va_arg(args, int);

if (n < 0)
{
	_putchar('-');
	c_out++;
	n *= -1;
}

for (k = 0; n / divisor > 9; k++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10, c_out++)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (c_out);
}



/**
 * print_unsigned - prints an unsigned int.
 * @args: argument
 * Return: 0
 */

int specs_u(va_list args)
{
int divisor = 1, k, resp;
unsigned int n = va_arg(args, unsigned int);

for (k = 0; n / divisor > 9; k++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (k + 1);
}


/**
 * print_hex_base - base function for printing hexadecimal numbers
 * @args: argument list containing hexadecimal
 * @s: a  in caps on lower, printing the hex number in caps in lower
 * Return: number of digits printed
 */

int specs_hex(va_list args, char s)
{
	unsigned int count = va_arg(args, unsigned int);
	int n;

	if (count == 0)
		return (_putchar('0'));
	n = specs_u_h(count, s);

	return (n);
}
