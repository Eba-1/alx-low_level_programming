#include "main.h"

/**
 * binary_to_uint - Function that converts binary to decimal.
 * @b: Parameter (pointer to the character array).
 * Return: Decimal equivalent of the binary.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, converted_decimal = 0, size = 0;

	if (b == NULL)
		return (0);
	for (i = 0; *(b + i); i++)
	{
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			converted_decimal += 1 << (size - i - 1);
		else if (b[i] != '0')
			return (0);
	}
	return (converted_decimal);
}
