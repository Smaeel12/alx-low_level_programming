#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: dlistint_t list.
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current;

	current = h;
	for (; current != NULL;  counter++)
		current = current->next;
	return (counter);
}
