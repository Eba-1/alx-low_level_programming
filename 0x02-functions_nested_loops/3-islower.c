#include "main.h"
/**
 * _islower - check if the character is in lower case or not
 *
 * @ch - the character that will be provided from the main function
 *
 * Return: 1 if yes, 0 if no
 */
int _islower(int ch)
{
	return ('a' <= ch && ch <= 'z');
}
