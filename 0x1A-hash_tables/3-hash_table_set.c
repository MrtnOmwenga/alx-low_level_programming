#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 *
 * @ht: hash table
 * @key: the key(string)
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
hash_node_t *curr_node;
unsigned long int i;

if (ht == NULL)
{
return (0);
}
if (key == NULL || key[0] == '\0')
{
return (0);
}
if (ht->size == 0 || ht->array == NULL)
{
return (0);
}

i = key_index((unsigned char *)key, ht->size);
curr_node = ht->array[i];

while (curr_node != NULL)
{
if (strcmp(curr_node->key, key) == 0)
{
free(curr_node->value);
curr_node->value = strdup(value);
return (1);
}
curr_node = curr_node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}

new_node->key = strdup(key);
new_node->value = strdup(value);

if (ht->array[i] != NULL)
{
new_node->next = ht->array[i];
}
else
{
new_node->next = NULL;
}

ht->array[i] = new_node;
return (1);
}
