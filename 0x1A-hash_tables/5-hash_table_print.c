#include "hash_tables.h"

/**
*hash_table_print - a function that prints a hash table
*@ht: pointer
*Return: list
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list;
	unsigned int i, j = 0;

	if (!ht)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		list = ht->array[i];
		while (list != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", list->key, list->value);
			list = list->next;
			j = 1;
		}
	i++;
	}
	printf("}\n");
}
