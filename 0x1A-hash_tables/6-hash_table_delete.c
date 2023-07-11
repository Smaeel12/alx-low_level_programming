#include "hash_tables.h"
/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current;

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current != NULL)
		{
			ht->array[idx] = ht->array[idx]->next;
			free(current->value);
			free(current->key);
			free(current);
			current = ht->array[idx];
		}
	}
	free(ht->array);
	free(ht);
}
