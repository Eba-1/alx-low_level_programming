#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int mask = 1;

	char *check_endian = (char *)&mask;

	return (*check_endian);
}
