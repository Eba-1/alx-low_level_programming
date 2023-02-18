#include<stdio.h>

int main(void)
{
	int i;
	char ch = 'a';
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(ch);
		ch++;	
	}
	putchar('\n');
	return (0);
}
