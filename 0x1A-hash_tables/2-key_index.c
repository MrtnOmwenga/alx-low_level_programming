#include "hash_tables.h"

/**
 *key_index- Generates insex from key
 *
 *@key: Key
 *@size: Size of array
 *
 *Return: hash
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash, index;

hash = hash_djb2(key);
index = hash % size;

return (index);
}
