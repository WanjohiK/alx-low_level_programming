#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using the interpolation search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		/*value is in the right array */
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			/*value is in the left array*/
			high = pos - 1;
		}
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
