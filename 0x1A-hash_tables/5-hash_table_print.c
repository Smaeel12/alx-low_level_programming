#include "hash_tables.h"
/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht: is the hash table
 * Description: the key/value printed in the order that they appear
  * in the array of hash table
  * Order: array, list
  * if ht is NULL, nothing printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	char *sep = "";

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (current->key != NULL)
			{
				printf("%s\'%s\': \'%s\'", sep, current->key, current->value);
				sep = ", ";
			}
			current = current->next;
		}
	}
	printf("}\n");
}
