#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 *  If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_htable;

	new_htable = malloc(sizeof(hash_table_t));
	if (new_htable == NULL)
		return (NULL);
	new_htable->size = size;
	new_htable->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (new_htable->array == NULL)
	{
		free(new_htable);
		return (NULL);
	}
	return (new_htable);
}
