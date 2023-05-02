#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - deletes the node at index in a
 * listint_t linked list
* @head: double pointer to the head of the linked list
* @index: index of the node that should be deleted (starts at 0)
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *next_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	next_node = current->next->next;
	free(current->next);
	current->next = next_node;
	return (1);
}
