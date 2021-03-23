#include "lists.h"

/**
*add_nodeint_end - a function that adds a new node at the beginning of a list
*@head: head of element
*@n: value of new node
*Return: the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *actual_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head != NULL)
	{
		actual_node = *head;
		while (actual_node->next != NULL)
			actual_node = actual_node->next;
	actual_node->next = new_node;
	}
	else
		*head = new_node;
	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
