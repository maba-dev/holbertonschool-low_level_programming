#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: None
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
