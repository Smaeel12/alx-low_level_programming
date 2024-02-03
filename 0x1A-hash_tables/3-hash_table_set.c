#include "hash_tables.h"
/**
 * hash_table_set -  function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the
 * key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Description: In case of collision, add the new node at the
 * beginning of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_dup = NULL, *key_dup = NULL;
	hash_node_t *new = NULL, *current = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = key_dup;
	new->value = value_dup;
	new->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key_dup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_dup;
				free(key_dup);
				free(new);
				return (1);
			}
			current = current->next;
		}
		current = ht->array[index];
		new->next = current;
		ht->array[index] = new;
	}
	else
		ht->array[index] = new;
	return (1);
}
