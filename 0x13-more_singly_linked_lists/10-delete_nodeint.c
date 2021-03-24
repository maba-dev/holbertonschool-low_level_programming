#include "lists.h"

/**
*delete_nodeint_at_index - a function that deletes the node at index
*@head: head of element
*@index: index of element
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual_node;
	listint_t *new_node;
	unsigned int i;

	actual_node = *head;
	new_node = NULL;
	i = 0;
	if (*head == NULL)
		return (-1);
	while (i < index && actual_node)
	{
		new_node = actual_node;
		actual_node = actual_node->next;
		i++;
		if (actual_node == NULL)
			return (-1);
	}
	if (index == 0)
		*head = actual_node->next;
	else if (actual_node->next)
		new_node->next = actual_node->next;
	else
		new_node->next = NULL;
	return (1);
}
