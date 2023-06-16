#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: doubly linked list.
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t num_element = 0;

	if (head == NULL || *head == NULL)
		return (-1)
	if (index == 0)
		*head = (*head)->next;
	current = *head;
	while (num_element != index)
	{
		current = current->next;
		num_element++;
	}
	if (index > num_element)
		return (-1);
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
