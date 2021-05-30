#include "hash_tables.h"

/**
*hash_table_set - a function that adds an element to the hash table
*@ht: pointer
*@key: const char
*@value: const char
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *list = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	list = ht->array[index];
	while (list)
	{
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			return (1);
		}
		list = list->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
