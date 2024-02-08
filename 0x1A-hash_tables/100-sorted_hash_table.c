#include "shash_tables.h"
/**
* hash_table_create - function that creates a hash table.
* @size: the size of the array
* Return: pointer to the newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size);
{
hash_table_t *new_table;
unsigned long int i;

new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);
new_table->size = size;
new_table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
if (new_table->array == NULL)
return (NULL);

for (i = 0; i < size; i++)
new_table->array[i] = NULL;

return (new_table);
}
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
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
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
/**
* hash_table_get - function that retrieves a value associated
* with a key.
* @ht: the hash table you want to look into
* @key: the key you are looking for
*
* Return: the value associated with the element,
* or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key);
{
unsigned long int index;
char *value = NULL;
hash_node_t *current;

if (ht == NULL || key == NULL)
return (value);
else if (strlen(key) == 0)
return (value);

index = key_index((unsigned char *)key, ht->size);
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
/**
* hash_table_print - function that prints a hash table.
* @ht: the hash table
*
* Description: Nothing is printed if ht is NULL.
*/
void shash_table_print(const shash_table_t *ht);
{
unsigned long int i;
hash_node_t *current;
char *sep = NULL;

if (ht == NULL)
{
return;
}

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
void shash_table_print_rev(const shash_table_t *ht);
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
void shash_table_delete(shash_table_t *ht);
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
