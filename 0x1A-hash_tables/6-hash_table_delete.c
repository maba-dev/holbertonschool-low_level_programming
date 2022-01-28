#include "hash_tables.h"
/**
 *  
 * 
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    i = 0;
	while (i < ht->size)
    {
		if (ht->array[i])
			free(ht->array[i]);
        i++;
    }
	free(ht->array);
	free(ht);
}
