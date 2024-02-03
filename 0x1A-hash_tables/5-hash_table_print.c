#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 *
 * Description: Nothing is printed if ht is NULL.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *sep = NULL;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (sep)
				printf("%s", sep);
			sep = ", ";
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}

	}
	printf("}\n");
}
