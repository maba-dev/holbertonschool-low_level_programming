#include "lists.h"
/**
 * 
 * 
 * 
 * 
 */

int sum_dlistint(dlistint_t *head)
{
    int result;

    result = 0;
    if (head == NULL)
        return 0;
    while(head->next != NULL)
    {
        head = head->next;
        result += head->n;
    }
    return result;
}
