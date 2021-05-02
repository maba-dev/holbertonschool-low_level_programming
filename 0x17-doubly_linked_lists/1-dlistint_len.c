#include "lists.h"

/**
*dlistint_len - a function that prints all the elements of a dlistint_t list
*@h: pointer of noed
*Return: the number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
	}
	return (i);
}
