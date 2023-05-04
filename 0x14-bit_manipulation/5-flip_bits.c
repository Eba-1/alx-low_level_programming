#include "main.h"

/**
 * flip_bits - Function that returns the number of bits to be flipped.
 * @n: Parameter (First number).
 * @m: Parameter (Second number).
 * Return: Number of bits needed to flip number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask = n ^ m, counter = 0;
	int i = 63;

	while (i >= 0)
	{
		if ((mask >> i) & 1)
			counter++;
		i--;
	}
	return (counter / 2);
}
