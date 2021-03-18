#include "lists.h"

/**
*list_len - a function that returns the number of elements in a linked list_t
*@h: list_t pointer to head
*
*Return: size of list
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

