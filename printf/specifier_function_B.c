#include "main.h"

/**
 * specs_h - outputs lower case
 * @args: variadic args
 * Return: output
 */

int specs_h(va_list args)
{
	return (specs_hex(args, 'a'));
}

/**
 * specs_H - prints a hexadecimal in upper case
 * @args: variadic args
 * Return: output
 */

int specs_H(va_list args)
{
	return (specs_hex(args, 'A'));
}


/**
 * specs_o - outputs octal.
 * @args: variadic args
 * Return: output
 */

int specs_o(va_list args)
{
	unsigned int count = va_arg(args, unsigned int);
	unsigned int cp;
	char *o;
	int k, j, c_out = 0;

	if (count == 0)
		return (_putchar('0'));
	for (cp = count; cp != 0; j++)
	{
		cp = cp / 8;
	}
	o = malloc(j);
	if (!o)
		return (-1);

	for (k = j - 1; k >= 0; k--)
	{
		o[k] = count % 8 + '0';
		count = count / 8;
	}

	for (k = 0; k < j && o[k] == '0'; k++)
		;
	for (; k < j; k++)
	{
		_putchar(o[k]);
		c_out++;
	}
	free(o);
	return (c_out);
}

/**
 * specs_u_h - output unsigned
 * @count: number to print
 * @s: letter `a` on the case to print it (upper or lower)
 * Return: output
 */
int specs_u_h(unsigned int count, char s)
{
	unsigned int counts;
	int i, j, r, n = 0;
	char *num;

	for (counts = count; counts != 0; n++, counts /= 16)
	;

	num = malloc(n);
	for (i = 0; count != 0; i++)
	{
		r = count % 16;
		if (r < 10)
			num[i] = r + '0';
		else
			num[i] = r - 10 + s;
		count = count / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(num[j]);
	free(num);
	return (n);
}


/**
 * specs_S - ouput upper case string
 * @args: variadic args
 * Return: output
 */

int specs_S(va_list args)
{
int k;
char *s = va_arg(args, char*);

if (s == NULL)
	s = "(null)";
else if (*s == '\0')
	return (-1);

for (k = 0; s[k]; k++)
{
	if ((s[k] < 32 && s[k] > 0) || s[k] >= 127)
	{
		_putchar('\\');
		_putchar('x');
		if (k < 16)
			_putchar('0');

		specs_u_h(s[k], 'A');
	}
	else
		_putchar(s[k]);
}

return (k);
}
