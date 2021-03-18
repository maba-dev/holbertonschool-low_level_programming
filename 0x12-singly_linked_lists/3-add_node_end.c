#include "lists.h"

/**
*add_node_end - a function that adds a new node at the end of a list_t
*@head: pointer of the lis
*@str: string for the node
*Return: the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *actual_node;
	int len;

	len = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	if (*head != NULL)
	{
		actual_node = *head;
		while (actual_node->next != NULL)
			actual_node = actual_node->next;
	actual_node->next = new_node;
	}
	else
		*head = new_node;
	new_node->len = len;
	new_node->next = NULL;
	new_node->str = strdup(str);
	return (new_node);

}
