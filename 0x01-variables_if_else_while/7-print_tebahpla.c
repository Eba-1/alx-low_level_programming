#include<stdio.h>
int main(void)
{
	char ch = 'z';
	int i;
	for(i = 26; i > 0; i--)
	{
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
