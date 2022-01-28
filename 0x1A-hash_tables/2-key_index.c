#include "hash_tables.h"

/**
 *key_index - The function index of the key in the hash table
 *@key: The key of the key in the hash table
 *@size: The size of the key in the hash
 *Return: The index of the key
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int idx;


	idx = hash_djb2(key) % size;
	return (idx);
}