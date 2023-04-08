#include "main.h"

/**
 * binary_to_uint - Function that converts binary to decimal.
 * @b: Parameter (pointer to the character array).
 * Return: Decimal equivalent of the binary.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, number = 0, count = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*(b + i) != '\0')
	{
		count++;
		i++;
	}
	for (i = count - 1; i >=0; i--)
	{
		if (b[i] == '1')
		{
			number += 1 << (count - i - 1);
		}
		else if (b[i] != '0')
		{
			return(0);
		}
	}
	return (number);
}
