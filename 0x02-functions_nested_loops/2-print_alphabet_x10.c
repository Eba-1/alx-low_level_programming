#include "main.h"
/**
 * print_alphabet_x10 - print alphabet lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		_putchar('\n');
	}
}
