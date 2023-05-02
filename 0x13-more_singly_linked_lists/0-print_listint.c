#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that Prints all elements of a listint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		printf("%i\n", current->n);
		current = current->next;
	}
	return (count);
}
