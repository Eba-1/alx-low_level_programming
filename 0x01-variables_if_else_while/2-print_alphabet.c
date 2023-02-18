#include<stdio.h>
int main(void)
{
	int i;
	char ch = 'a';
	for(i = 0; i < 26; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
