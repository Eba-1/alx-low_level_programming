#include "main.h"

/**
 * binary_to_uint - Function that converts binary to decimal.
 * @b: Parameter (pointer to the character array).
 * Return: Decimal equivalent of the binary.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, decimal = 0, size = 0;

	if (b == NULL)
	{
		return (0);
	}
    /*  Finding the length of the binary numbers  */
	while (*(b + i) != '\0')
	{
		size++;
		i++;
	}

	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += 1 << (size - i - 1);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (decimal);
}
