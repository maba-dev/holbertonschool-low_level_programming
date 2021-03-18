#include "lists.h"

/**
*print_list -  a function that prints all the elements of a list_t list
*@h: linked list to print
*Return: message to stdout
*/

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
return (i);
}
