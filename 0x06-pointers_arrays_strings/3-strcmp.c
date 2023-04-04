#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative difference of the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int itr = 0, res = 0;
	while (s1[itr] || s2[itr])
	{
		if(s1[itr] != s2[itr])
		{
			res = s1[itr] - s2[itr];
			break;
		}
		itr++;
	}

	return (res);
}
