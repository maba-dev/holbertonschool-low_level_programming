#include "lists.h"
/**
*add_dnodeint_end -  a function that adds a new node at the end of a  list
*@head: pointer of pointer to header
*@n: integer
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *actual_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	actual_node = *head;
	while (actual_node && actual_node->next != NULL)
		actual_node = actual_node->next;
	if (actual_node != NULL)
	{
		actual_node->next = new_node;
		new_node->prev = actual_node;
	}
	else
		*head = new_node;
	return (new_node);
}
