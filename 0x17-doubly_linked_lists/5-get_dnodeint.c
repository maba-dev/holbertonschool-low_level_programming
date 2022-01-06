#include "lists.h"
/**
 * 
 * 
 * 
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *actual_node;
    unsigned int i;

    i = 0;
    if (head == NULL)
        return (NULL);
    actual_node = head;
    while(i < index && actual_node)
    {
        actual_node = actual_node->next;
        i++;
    }
    if (i < index)
        return actual_node;
    return actual_node;
}
