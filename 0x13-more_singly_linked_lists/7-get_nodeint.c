#include "lists.h"

/**
*get_nodeint_at_index - a function that returns the nth node of a list
*@head: head of element
*@index: index of nth
*
*Return: nth of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (head)
		return (head);
	return (NULL);
}
