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
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	char *value = NULL;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	if ((ht->array)[index] == NULL)
		return (NULL);

	current = ht->array[index];
	while (value == NULL)
	{
		if (strcmp(current->key, key) == 0)
			value = current->value;
		current = current->next;
	}
	return (value);
}
