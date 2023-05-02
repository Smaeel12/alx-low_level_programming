#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - function that frees a listint_t list and sets the head pointer to NULL.
* @head: Pointer to a pointer to the head of the linked list.
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
