#include "main.h"

/**
 * struct specs_id - structure definition of a printTypeStruct
 * @spec: type
 * @outs: function to print
 */
typedef struct specs_id
{
char *spec;
int (*outs)(va_list);
} specs_id;

/**
 * out_specs - prints special characters
 * @nt: character after the %
 * @args: argument for the spec
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int out_specs(char nt, va_list args)
{
	int index;

	specs_id cmp[] = {
		{"c", specs_c},
		{"s", specs_s},
        {"d", specs_d},
		{"i", specs_d},
        {"u", specs_u},
        {"o", specs_o},
		{"x", specs_h},
		{"X", specs_H},
        {"S", specs_S},
		{NULL, NULL}
	};

	for (index = 0; cmp[index].spec != NULL; index++)
	{
		if (cmp[index].spec[0] == nt)
			return (cmp[index].outs(args));
	}
	return (0);
}
