#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Parameter (the array to be reversed)
 * @n: Parameter (the number of elements in the array)
 * Return: Void functions don't return nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n/2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
