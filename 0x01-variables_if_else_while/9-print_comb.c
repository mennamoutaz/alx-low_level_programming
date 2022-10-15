#include <stdio.h>
int main(void)
{
	int i;

	putchar ('0');
	for (i = 1; i <= 9; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}
return (0);
}
