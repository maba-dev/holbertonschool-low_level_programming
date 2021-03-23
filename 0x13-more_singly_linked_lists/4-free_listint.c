#include "lists.h"

/**
*free_listint - a function that frees a listint_t list.
*
*@head: head of element
*/

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		head = head->next;
		free(head);
	}
}
