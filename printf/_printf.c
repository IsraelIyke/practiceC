#include "main.h"


/**
 * _printf function for printing outputs
 * Description: prints output
 * @format: string argument
 * Return: output
 */

int _printf(const char *format, ...)
{
	unsigned int k;
	int out = 0, c_out = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (k = 0; format[k] != '\0'; k++)
	{
		if (format[k] != '%')
		{
			_putchar(format[k]);
			c_out++;
			continue;
		}
		if (format[k + 1] == '%')
		{
			_putchar('%');
			c_out++;
			k++;
			continue;
		}
		if (format[k + 1] == '\0')
			return (-1);

		out = out_specs(format[k + 1], args);
		if (out == -1 || out != 0)
			k++;
		if (out > 0)
			c_out += out;

		if (out == 0)
		{
			_putchar('%');
			c_out++;
		}
	}
	va_end(args);
	return (c_out);
}
