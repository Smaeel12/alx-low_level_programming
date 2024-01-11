#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: dlistint_t list.
 * @idx: the index of the list where the new
 * node should be added. Index starts at 0
 * @n: integer.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current;
	dlistint_t *new;

	current = *h;
	for (i = 0; current != NULL && i != idx - 1; i++)
		current = current->next;
	new = current->next;
	add_dnodeint(&new, n);
	current->next = new;
	return (new);
}
