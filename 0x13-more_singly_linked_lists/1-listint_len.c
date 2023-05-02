#include "lists.h"
/**
 * listint_len - function that returns the number of
  * elements in a linked listint_t list.
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
