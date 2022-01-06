#include "lists.h"
/**
*
*
* 
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *actual_node = NULL;

    if (head == NULL)
        return NULL;
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;
    new_node->next = NULL;
    actual_node = *head;
    while (actual_node && actual_node->next != NULL)
        actual_node = actual_node->next;
    if (actual_node != NULL)
    {
        actual_node->next = new_node;
        new_node->prev = actual_node;
    }
    else
        *head = new_node;
    return new_node;
}
