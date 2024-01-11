#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: dlistint_t list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current;

	current = h;
	for (; current != NULL; counter++)
	{
		printf("%i\n", current->n);
		current = current->next;
	}
	return (counter);
}
