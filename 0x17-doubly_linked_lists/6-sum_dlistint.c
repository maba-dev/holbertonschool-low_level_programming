#include "lists.h"
/**
 *sum_dlistint -  a function that returns the sum of all the data (n)
 *@head: head node of element
 *Return: sum value of node
 */

int	sum_dlistint(dlistint_t *head)
{
	int result;

	result = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
