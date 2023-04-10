#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: Parameter (the number to set its bit to 1).
 * @index: Parameter (the index of the bit you want to set).
 * Return: 1 for success, -1 for error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1 << index;

	*n |= check;
	return (1);
}
