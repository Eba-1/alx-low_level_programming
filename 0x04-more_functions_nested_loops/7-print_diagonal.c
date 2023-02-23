#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal
* @n: parameter
* Return: returns nothing
*/

void print_diagonal(int n)
{
	int i, j, n = 2;

	if (n == 0)
	{
		putchar('$');
	}
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j + 1 == i)
			{
				putchar('\\');
				putchar('$');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
