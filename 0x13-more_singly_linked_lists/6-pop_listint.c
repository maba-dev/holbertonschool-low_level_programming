#include "lists.h"

/**
*pop_listint - a function that deletes the head node of a listint_t linked list
*@head: head of element
*Return:  the head nodes data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	i = 0;
	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
