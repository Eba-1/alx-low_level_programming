#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: return the sum of even terms in a fibonacci sequence
 */
int main(void)
{
	long i, f3, f1 = 1, f2 = 2, sum = 2;

	for (i = 0; f2 < 4000000; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		if (f3 % 2 == 0)
		{
			sum += f3;
		}
	}
	printf("%d\n", sum);
	return (0);
}
