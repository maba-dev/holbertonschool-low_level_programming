#include "lists.h"

/**
*add_nodeint - a function that adds a new node at the beginning of a listint_t
*@head: head of element
*@n: value of new node
*Return: a new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *actual_node;

	actual_node = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	*head = new_node;
	new_node->next = actual_node;
	return (new_node);
}
