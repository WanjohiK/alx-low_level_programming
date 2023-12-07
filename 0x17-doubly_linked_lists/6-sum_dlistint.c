#include "lists.h"

/**
* sum_dlistint - add all data in nodes of list
* @head: pointer to the nodes in the list
*
* Return: sum of data
*/


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
