#include "lists.h"

/**
*print_listint - a function that prints all the elements of a listint_t list
*@h: head elements
*
*Return: the nombre of element
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
