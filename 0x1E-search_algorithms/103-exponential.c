#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * recursive_binary - searches for a value in an array of integers
 * using the binary search
 * @array: pointer to the first element of the array to search in
 * @left: start point
 * @right: end point size -1
 * @value: value to search for
 * Return: valuue or -1
*/
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t i;
	size_t  mid;

	if (array == NULL)
		return (-1);
	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for  (i = left; i <= right; i++)
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (recursive_binary(array, left, mid, value));
		}
		else if (array[mid] < value)
		{
			return (recursive_binary(array, mid + 1, right, value));
		}
		else
		{
			return (recursive_binary(array, left, mid - 1, value));
		}
	}
	return (-1);
}


/**
 * exponential_search - searches for a value in an array of integers
 * using the exponential search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t left;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	left = i / 2;
	right = (i > size - 1) ? size - 1 : i;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (recursive_binary(array, left, right, value));
}
