#include "lists.h"

/**
* get_dnodeint_at_index - return nth node of the list
* @head: pointer to the nodes of the list
* @index: number to return node of in list
*
* Return: head at position of index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
