#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: first 50 fibonacci numbers
 */
int main(void)
{
	int i;
	long f1 = 1, f2 = 2, f3;

	printf("%li, %li, ", f1, f2);
	for (i = 0; i < 47; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		printf("%li, ", f3);
	}
	printf("%li\n", f1 + f3);
	return (0);
}
