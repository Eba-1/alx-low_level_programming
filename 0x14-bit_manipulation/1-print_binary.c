#include "main.h"

/**
 * print_binary - Function that prints the binary equivalent of n.
 * @n: Parameter (the decimal we want its binary for).
 * Return: Void function doesn't return anything.
 */

void print_binary(unsigned long int n)
{
	int i, mask, checker = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 31; i >= 0; i--)
	{
		mask = n >> i;

		if (mask & 1)
		{
			_putchar('1');
			checker = 1;
		}
		else if (checker == 1)
		{
			_putchar('0');
		}
	}
}
