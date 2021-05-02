#include "lists.h"
/**
*get_dnodeint_at_index - a function that returns the nth node of a list
*@head: head node
*@index: index of node
*Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual_node;
	unsigned int i = 0;

	actual_node = head;
	while (i < index && actual_node)
	{
		actual_node = actual_node->next;
		i++;
	}
	if (i < index)
		return (actual_node);
	return (actual_node);
}
