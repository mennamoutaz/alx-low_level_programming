#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
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
