#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linkedlist
 * @h: head pointer in the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *) h;
	int i;

	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	return (i);
}
