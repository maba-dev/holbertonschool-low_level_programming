#include "lists.h"

/**
*listint_len - a function that returns the number of elements in a linked
*@h: head of element
*Return: number of element
*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
