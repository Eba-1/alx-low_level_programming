#include "main.h"
#include <stdio.h>

/**
 * puts - print every other character
 * @str: a string reference as a parameter
 * Return nothing
 */

void puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
		{
			putchar(*(str + len));
		}
		len++;
	}
	putchar(10);
}
