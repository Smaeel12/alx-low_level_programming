#include <stddef.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to a struct.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;
	const list_t *current;

	current = h;
	while (current->next != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
