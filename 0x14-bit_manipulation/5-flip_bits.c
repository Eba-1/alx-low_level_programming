#include "main.h"

/**
 * flip_bits - Function that returns the number of bits to be flipped.
 * @n: Parameter (First number).
 * @m: Parameter (Second number).
 * Return: Number of bits needed to flip number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask, counter = 0;
	int i = 63;

	while (i >= 0)
	{
		unsigned long int temp = mask >> i;

		mask = n ^ m;
		if (temp & 1)
			counter++;
		i--;
	}
	return (counter / 2);
}
