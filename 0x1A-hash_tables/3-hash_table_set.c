#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht    :is the hash table you want to add or update the key/value to
 * @key   :is the key. key can not be an empty string
 * @value :is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx = key_index((const unsigned char *) key, ht->size);
	char *value_copy;
	hash_node_t *new_node;

	if (key == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = value_copy;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;
	return (1);
}
