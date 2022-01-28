#include "hash_tables.h"
/*
*
*
*/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    int idx;
    idx = hash_djb2(key) % size;
    return idx;
}