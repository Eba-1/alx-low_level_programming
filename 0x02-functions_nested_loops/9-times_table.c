#include "main.h"
#include<stdio.h>
/**
 * times_table - returns the time table of 9
 *
 * Return: an array of digits divisible by 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				printf("%d$", i * j);
			}
			else
			{
				printf("%d, ", i * j);
			}
		}
		printf("\n");
	}
}
