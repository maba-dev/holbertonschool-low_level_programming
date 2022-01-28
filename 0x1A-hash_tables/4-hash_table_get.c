#include "hash_tables.h"
/**
 *
 * 
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *list_tab = NULL;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	list_tab = ht->array[idx];
	while (list_tab)
	{
		if (strcmp(list_tab->key, key) == 0)

		    return (list_tab->value);

	}
    return NULL;
}
