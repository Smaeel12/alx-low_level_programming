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
	unsigned int i = 0;
	dlistint_t *new, *next, *current;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
