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
    while(head != NULL)
    {
        result += head->n;
        head = head->next;
    }
    return result;
}
