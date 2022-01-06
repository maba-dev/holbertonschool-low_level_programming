#include "lists.h"
/**
* dlistint_len - a function that returns the number of elements
* @h: head of element
* Return: number of element
*/

size_t	dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
