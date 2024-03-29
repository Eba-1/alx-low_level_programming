#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = strlen(src), itr = 0;

	while (itr < n && dest[itr] != '\0')
	{
		dest[itr] = *(src + itr);
		itr++;
	}

	for (itr = size; itr < n; itr++)
		dest[itr] = '\0';

	return (dest);
}
