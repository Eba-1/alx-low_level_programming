#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Parameter (the value to get its bit for).
 * @index: Parameter (the index to find its bit for).
 * Return: value for success, -1 for error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int check = (n & 1 << (index));

	if (!(index <= 63))
		return (-1);
	return (check >> index);
}
