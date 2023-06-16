#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of
 * a dlistint_t list.
 * @head: doubly linked list.
 * @n: the node value.
 * Return:  the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;

	}
	return (new);
}
