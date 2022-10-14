#include <stdio.h>

int main(void)
{
	char c;
	char s;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar(s);
	}
	putchar('\n');
return (0);
}
