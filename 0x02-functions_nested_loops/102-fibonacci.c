#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: first 50 fibonacci numbers
 */
int main(void)
{
	int i, f1 = 1, f2 = 2, f3;

	printf("%d, %d, ", f1, f2);
	for (i = 0; i < 46; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		printf("%d ,", f3);
	}
	printf("%d\n", f1 + f3);
	return (0);
}
