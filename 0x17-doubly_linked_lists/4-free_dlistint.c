#include "lists.h"
/**
*free_dlistint - a function that frees a dlistint_t list
*@head: head of node
*
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_dlistint (head->next);
	free(head);
}
