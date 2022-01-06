#include "lists.h"
/**
 * 
 * 
 * 
 */

void free_dlistint(dlistint_t *head)
{
    if (head == NULL)
        return;
    if (head != NULL)
    free (head);

}