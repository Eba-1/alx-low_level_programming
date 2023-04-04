#include "main.h"
#include <string.h>
/**
 * string_toupper - Function that changes all lowercase letters of a string to uppercase.
 * @str: Parameter (the string to be changed)
 * Return: Pointer to the changed string
 */
char *string_toupper(char *str)
{
	for(int i = 0; i < strlen(str) - 1; i++)
	{
		if(*(str + i) > 97 && *(str + i) < 122)
		{
			*(str + i) -= 32;
		}
	}

	return (str);
}
