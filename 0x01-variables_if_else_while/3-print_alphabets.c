#include<stdio.h>
int main(void)
{
	int i;
	char ch1 = 'a', ch2 = 'A';
	for(i = 0; i < 26; i++)
	{
		putchar(ch1);
		ch1++;
	}
	for(i = 0; i < 26; i++)
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
