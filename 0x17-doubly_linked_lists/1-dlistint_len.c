#include "lists.h"
/**
 * dlistint_len -function that returns the number of
 * elements in a linked dlistint_t list.
 *
 * @h: doubly linked list.
 *
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num_elements = 0;

	current = h;
	while (current != NULL)
	{
		num_elements++;
		current = current->next;
	}
	return (num_elements);
}
