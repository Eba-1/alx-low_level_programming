#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: Parameter (string to be reversed)
 * Return: Void functions don't return anything
 */
void rev_string(char *s)
{
	char tmp = s[0];
	int i = 0, size = strlen(s);
	
	while(size-- && i < size)
	{
		tmp = s[i];
		s[i] = s[size];
		s[size] = tmp;
		i++;
	}
}
