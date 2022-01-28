#include "hash_tables.h"

/**
 * 
 * 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *node = NULL;
    unsigned long int idx;

    if (!ht || !key || !value)
        return 0;
    
    node = malloc(sizeof(hash_node_t));
    idx = key_index((const unsigned char *)key, ht->size);
    if (!node)
        return 0;

    while(ht->array[idx])
    {
        if (ht->array[idx]->key == key)
        {
            ht->array[idx]->value = strdup(value);
            return(1);
        }
        ht->array[idx] = ht->array[idx]->next;

    }
    return(1);
}
