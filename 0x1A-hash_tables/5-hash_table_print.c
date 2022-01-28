#include "hash_tables.h"
/**
 * hash_table_print - a function a function that prints a hash table.
 * @ht: a hash table
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{   unsigned int i, j;

	i = 0;
	j = 0;
	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			j = 1;
		}
		i++;
	}
	printf("}\n");
}
