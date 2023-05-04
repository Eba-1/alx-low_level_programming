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

	while (mask)
	{
		counter++;
		mask &= (mask - 1);
	}
	return (counter);
}
