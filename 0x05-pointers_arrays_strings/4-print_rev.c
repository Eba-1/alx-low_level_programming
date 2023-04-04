#include<stdio.h>
#include<string.h>
#include "main.h"
/**
* print_rev - Function that prints a string in reverse
* @s: Parameter (string to print in reverse)
* Return: Void functions don't return nothing
*/
void print_rev(char *s)
{
	int size = strlen(s);

	while (size--)
		putchar(*(size + s));
	putchar('\n');
}
