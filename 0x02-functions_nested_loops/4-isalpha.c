#include "main.h"
/**
 * _isalpha - check if it is a letter or not
 *
 * @ch: the character from main function
 *
 * Return: 1 for letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
