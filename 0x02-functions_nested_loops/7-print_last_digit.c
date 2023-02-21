#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 *
 * @n: the number that we need the last digit of
 *
 * Return: last Digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (0 - n % 10);
	}
	return (n % 10);
}
