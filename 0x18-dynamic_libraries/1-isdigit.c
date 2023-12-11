#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: the nt to be checked
 * Return: 0 if not digit and 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
