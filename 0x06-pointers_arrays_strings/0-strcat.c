#include "main.h"
/**
 * *_strcat - Function that concatenates @src to @dest
 * @src: Parameter (string 1)
 * @dest: Parameter (string 2)
 * Return: Returns the pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int size = strlen(dest), itr = 0;
	
	while (*(src + itr) != '\0')
	{
		dest[size++] = *(src + itr);
		size++;
		itr++:
	}
	return (dest);
}
