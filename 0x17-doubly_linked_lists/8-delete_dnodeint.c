#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: dlistint_t list.
 * @index: is the index of the node that should be deleted.
 * Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *first;
	dlistint_t *current;
	dlistint_t *last;

	if (*head == NULL)
		return (-1);

	current = *head;
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);
	first = current->prev;
	last = current->next;
	first->next = last;
	last->prev = first;
	printf("result\n");
	print_dlistint(*head);
	printf("result\n");
	print_dlistint(first);
	printf("result\n");
	print_dlistint(last);
	printf("result\n");
	return (0);
}
