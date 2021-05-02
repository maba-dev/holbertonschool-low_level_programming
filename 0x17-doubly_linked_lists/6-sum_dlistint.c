#include "lists.h"

/**
*sum_dlistint - a function that returns the sum of all the data (n) of a list
*@head: head of node
*Return: sum of all the data
*/

int sum_dlistint(dlistint_t *head)
{
	int result;

	result = 0;
	dlistint_t *actual_node;

	if (head == NULL)
		return (0);
	actual_node = head;
	while (actual_node != NULL)
	{
		result += actual_node->n;
		actual_node = actual_node->next;
	}
	return (result);
}
