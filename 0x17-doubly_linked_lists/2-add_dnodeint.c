#include "lists.h"

/**
* add_dnodeint - add a node to the beginning of the list with info
* @head: double pointer to the nodes in the list
* @n: new node data
*
* Return: new node, added to list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
