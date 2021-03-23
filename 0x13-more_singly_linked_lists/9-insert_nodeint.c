#include "lists.h"

/**
*insert_nodeint_at_index -  a function that inserts a new node
*@head: head of element
*@idx: index of element
*@n: value of element
*Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *actual_node;
	listint_t *new_node;
	unsigned int i;

	actual_node = *head;
	i = 0;
	while (i < idx)
	{
		actual_node = actual_node->next;
		i++;
		if (actual_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = actual_node;
	}
	else if (actual_node->next)
	{
		new_node->next = actual_node->next;
		actual_node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		actual_node->next = new_node;
	}
	return (new_node);
}
