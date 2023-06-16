#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position.
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @h: doubly linkde list.
 * @n: the new node value.
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * the new node not added and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *prev_node, *new;
	size_t num_element = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && num_element != idx)
	{
		current = current->next;
		num_element++;
	}
	if (idx > num_element)
		return (NULL);
	prev_node = current->prev;
	new = add_dnodeint(&current, n);
	prev_node->next = new;
	new->prev = prev_node;
	return (current);
}
