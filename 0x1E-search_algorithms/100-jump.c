#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (left < size && array[left] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left - step, left);
	/* linear search  the new subarray*/
	for (i = left - step; i <= left && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
