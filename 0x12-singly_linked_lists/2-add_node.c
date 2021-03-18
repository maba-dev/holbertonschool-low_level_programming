#include "lists.h"

/**
*add_node - a function that adds a new node at the beginning of a list_t
*@head: pointer of pointer
*@str: string
*Return: the list of element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	len = 0;
	new_node = malloc(sizeof(list_t));
	if (head == NULL || str == NULL || new_node == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
