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
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *current, *new;

	if (key == NULL || *key == '\0')
		return (0);
	if (ht == NULL || ht->array == NULL)
		return (0);

	current = ht->array[index];
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *) key;
	new->value = strdup(value);
	new->next = NULL;
	if (current == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (1);
}
