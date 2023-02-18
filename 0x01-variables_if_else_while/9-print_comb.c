#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i + 1 != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
