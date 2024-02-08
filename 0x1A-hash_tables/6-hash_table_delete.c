#include "hash_tables.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to struct.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = current;
	}
}
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;

	if (ht)
	{
		if (ht->array)
		{
			for (i = 0; i < ht->size; i++)
			{
				current = ht->array[i];
				if (current != NULL)
					free_list(current);
			}
			free(ht->array);
		}
		free(ht);
	}
}
