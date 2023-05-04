#include "main.h"

/**
 * flip_bits - Function that returns the number of bits to be flipped.
 * @n: Parameter (First number).
 * @m: Parameter (Second number).
 * Return: Number of bits needed to flip number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask = 0, i = 63, counter = 0;

	while (i >= 0)
	{
		mask = n ^ m;
		if ((mask >> i) & 1)
			counter++;
		i--;
	}
	return (counter);
}
