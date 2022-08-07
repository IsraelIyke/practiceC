#include "main.h"

/**
 * specs_c - ouput single character
 * @args: variadic args
 * Return: variadic args
 */
int specs_c(va_list args)
{
	return (_putchar(va_arg(args, int)));
}


/**
 * specs_s - output multi_character/strings
 * @args: variadic args
 * Return: variadic args
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
 * specs_d - outputs numbers/integers
 * @args: variadic args
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
 * specs_u - outputs variable without negative sign
 * @args: variadic args
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
 * specs_hex - handles bases for hex
 * @args: variadic args
 * @s: argument
 * Return: output
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
