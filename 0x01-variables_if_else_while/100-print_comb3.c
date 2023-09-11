#include <stdio.h>

/**
 * main - prints different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, k;

	for (i = 48; i <= 56; i++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > i)
			{
				putchar(i);
				putchar(k);
				if (i != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
