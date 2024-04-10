#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: sorted singly linked list to search
 * @value: value to find in list
 * Return: position of value on success, -1 on failure
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *jump;

	if (!list)
		return (NULL);
	jump = list->express;
	curr = list;

	/*Traverse the express lane until jump->n is >= to value*/
	while (jump)
	{
		/*Print the value checked at the current index*/
		printf("Value checked at index [%lu] = [%d]\n",
			jump->index, jump->n);

		/*If jump's value is >= to the target value, break*/
		if (jump->n >= value)
			break;
		curr = jump;/*Update curr to the current jump node*/
		/*If there is no more express lane, move to the last node*/
		if (!jump->express)
		{
			while (jump->next)
				jump = jump->next;
			break;
		}
		jump = jump->express; /*Move to next express node*/
	}
		printf("Value found between indexes [%lu] and [%lu]\n",
		curr->index, jump->index);
	while (curr) /*Linear search within the identified range*/
	{
		/*Print the value checked at the current index*/
		printf("Value checked at index [%lu] = [%d]\n",
			curr->index, curr->n);
		/*If the value is found, return the current node*/
		if (curr->n == value)
			return (curr);
		curr = curr->next;/*else Move to the next node*/
	}
	return (NULL);/*If the value is not found, return NULL*/
}
