#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key.
 *@ht: the hash table
 *@key: the key associated
 *Return: the value associated
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list_tab = NULL;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	list_tab = ht->array[idx];
	if (idx >= ht->size)
		return (NULL);
	while (list_tab)
	{
		if (strcmp(list_tab->key, key) == 0)
			return (list_tab->value);
		list_tab = list_tab->next;
	}
	return (NULL);
}
