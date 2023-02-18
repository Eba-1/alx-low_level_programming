#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		i += '0';
		putchar("%c, ", i);
	}
	return (0);
}
