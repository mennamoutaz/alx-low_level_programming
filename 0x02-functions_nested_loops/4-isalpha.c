#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if a character is alphabet or not
 * @c: charracter to be checked
 *
 * Return: 1 if c is letter 0 if not
 **/
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
