#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");

		for  (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				 printf("%d\n", array[i]);
			}
		}
		if (value == array[mid])
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			if (array[mid] > value)
				right = mid - 1;
	}
	return (-1);
}
