#include "main.h"
/**
 * _abs - calculate the absolute value of a number
 *
 * @n: the number passed from the main function
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (0 - n);
	}
	return (n);
}
