#include "lists.h"
/**
 * get_dnodeint_at_index - a function that that returns the nth node of a list
 * @head: head node of element
 * @index: index element to node return
 * Return: node element
 */


dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual_node;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
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
