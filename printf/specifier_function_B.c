#include "main.h"

/**
 * print_hex - prints a hexadecimal in lower case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int print_hex(va_list arg)
{
	return (print_hex_base(arg, 'a'));
}

/**
 * print_HEX - prints a hexadecimal in upper case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int print_HEX(va_list arg)
{
	return (print_hex_base(arg, 'A'));
}


/**
 * print_oct - prints number in octal base.
 * @arg: list containing octal number to be printed
 * Return: number of octals printed
 */

int print_oct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int copy;
	char *octa;
	int i, j, charPrinted = 0;

	if (num == 0)
		return (_putchar('0'));
	for (copy = num; copy != 0; j++)
	{
		copy = copy / 8;
	}
	octa = malloc(j);
	if (!octa)
		return (-1);

	for (i = j - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}

	for (i = 0; i < j && octa[i] == '0'; i++)
		;
	for (; i < j; i++)
	{
		_putchar(octa[i]);
		charPrinted++;
	}
	free(octa);
	return (charPrinted);
}


/**
 * print_STR - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * Return: number of character printed
 */

int print_STR(va_list arg)
{
int i;
char *str = va_arg(arg, char*);

if (str == NULL)
	str = "(null)";
else if (*str == '\0')
	return (-1);

for (i = 0; str[i]; i++)
{
	if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
	{
		_putchar('\\');
		_putchar('x');
		if (i < 16)
			_putchar('0');

		print_unsignedIntToHex(str[i], 'A');
	}
	else
		_putchar(str[i]);
}

return (i);
}