#include "hash_tables.h"

/**
*hash_table_get - a function that retrieves a value associated with a key
*@ht: const
*@key: const char
*Return: the value associated with the element, or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list;
	unsigned long int index = 0;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	list = ht->array[index];
	while (list != NULL)
	{
		if (strcmp(list->key, key) == 0)
			return (list->value);
		list = list->next;
	}
	return (0);
}
