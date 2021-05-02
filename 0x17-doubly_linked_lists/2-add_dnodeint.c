#include "lists.h"

/**
*add_dnodeint - a function that adds a new node at the beginning of a  list
*@head: pointer of pointer to head
*@n: integer
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head != NULL)
	{
		new_node->next = (*head);
		new_node->next->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
