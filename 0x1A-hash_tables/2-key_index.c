#include "hash_tables.h"

/**
 * key_index - get the index by key
 * @key: hash table key
 * @size: hash table size
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
