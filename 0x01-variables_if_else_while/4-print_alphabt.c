#include<stdio.h>
int main(void)
{
	int i;
	char ch = 'a';
	for(i = 0; i < 24; i++)
	{
		if(i == 4 || i == 15)
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
