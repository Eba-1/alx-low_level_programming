#include<stdio.h>
#include "main.h"
/**
* _puts - Function that prints a string
* @str: Parameter (string to print)
* Return: Void functions don't return anything
*/
void _puts(char *str)
{
	int var = 0;

	while (*(str + var) != '\0')
	{
		putchar(*(str + var));
		var++;
	}
	putchar('\n');
}
