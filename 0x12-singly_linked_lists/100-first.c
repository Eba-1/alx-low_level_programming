#include <stdio.h>

/**
 * first - Function that will be executed
 * before the main function
 * Return: Void function with no returns
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,"
			"\nI bore my house upon my back!\n");
}
