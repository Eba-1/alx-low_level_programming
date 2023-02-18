#include<stdio.h>
int main(void)
{
	int i;
	char ch = 'a';
	for(i = 0; i < 26; i++)
	{
		if(i == 5 || i == 15)
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
