#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table
 * @key: the key of the element
 * @value: the value of the element
 * Return: 1 if succesful else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	hash_node_t *list_tab = NULL;
	unsigned long int idx;

	if (!ht || !key || !value)
		return (0);

	node = malloc(sizeof(hash_node_t));
	idx = key_index((const unsigned char *)key, ht->size);
	if (!node)
		return (0);
	list_tab = ht->array[idx];
	while (list_tab)
	{
		if (strcmp(list_tab->key, key) == 0)
		{
			list_tab->value = strdup(value);
			return (1);
		}
		list_tab = list_tab->next;

	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
