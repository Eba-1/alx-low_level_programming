#include "main.h"
#include <math.h>

/**
 * binary_to_uint - Function that converts binary to decimal.
 * @b: Parameter (pointer to the character array).
 * Return: Decimal equivalent of the binary.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, number = 0, count = 0;

	while (*(b + i) != '\0')
	{
		count++;
		i++;
	}
	for (i = count - 1; i >=0; i--)
	{
		if ((int)*(b + i) > 49 && ((int)*(b + i) != 48 || (int)*(b + i) != 49))
		{
			return (0);
		}
		else
		{
			if (*(b + i) == '1')
			{
				number += pow(2, count - i - 1);
			}
		}
	}
	return (number);
}
