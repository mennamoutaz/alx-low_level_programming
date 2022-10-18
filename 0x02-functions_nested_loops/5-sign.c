#include <stdio.h>
#include "main.h"
/**
 * print_sign - determines the sign of a number
 * @n: the number whose sign is to be determined
 *
 * Return:1 if positive, 0 if zero, -1 if negative
 **/
int print_sign(int n)
{
	int t;

	if (n > 0)
	{
		_putchar('+');
		t = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		t = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		t = -1;
	}
return (t);
}
