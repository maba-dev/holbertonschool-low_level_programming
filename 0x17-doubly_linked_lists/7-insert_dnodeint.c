#include "lists.h"

/**
*insert_dnodeint_at_index - that inserts a new node at a given position
*@h: pointer of noeud
*@idx: index
*@n: integer
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *actual_node;
	unsigned int i = 0;

	actual_node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		actual_node = actual_node->next;
		if (actual_node == NULL)
			return (NULL);
		i++;
	}
	if (actual_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (actual_node != NULL)
	{
		new_node->n = n;
		new_node->next = actual_node->next;
		new_node->prev = actual_node;
		actual_node->next->prev = new_node;
		actual_node->next = new_node;
	}
	return (new_node);
}
