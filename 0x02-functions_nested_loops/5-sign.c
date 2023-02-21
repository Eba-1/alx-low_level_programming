#include "main.h"
#include<stdio.h>
/**
 * print_sign - return the sign of the number
 *
 * @n: the number passed from the main function
 *
 * Return: the sign of n
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0 - 1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
	return (0);
}
