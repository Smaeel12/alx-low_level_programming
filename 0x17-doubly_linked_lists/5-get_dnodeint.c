#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list.
 * @head: doubly linked list.
 * @index: is the index of the node, starting from 0
 * Return: the nth node of a dlistint_t if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t num_element = 0;
	dlistint_t *current;

	current = head;
	while (num_element != index)
	{
		num_element++;
		current = current->next;
	}
	return (current);
}
