#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed_ptr;

	freed_ptr = head;
	while (freed_ptr != NULL)
	{
		head = head->next;
		free(freed_ptr);
		freed_ptr = head;
	}
}
