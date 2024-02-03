#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated
 * with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *current;
	(void) index;

	current = ht->array[index];
	while (current != NULL)
	{
		if (!(strcmp(current->key, key)))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
