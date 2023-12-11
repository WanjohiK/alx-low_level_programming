#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if int is a uppercase letter.
 * @c: is the int to be checked if upper
 * Return: Always 0.
 */

int _isupper(int c)
{

		if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
		else
		{
		return (0);
		}
}
