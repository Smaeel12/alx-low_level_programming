#include "lists.h"
/**
 * print_dlistint- Write a function that prints all the elements of
 * a dlistint_t list.
 *
 * @h: doubly linked list.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t num_nodes = 0;

	current = h;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		num_nodes++;
		current = current->next;
	}
	return (num_nodes);
}
