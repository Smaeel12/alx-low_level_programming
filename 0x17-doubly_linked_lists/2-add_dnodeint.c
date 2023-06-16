#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a dlistint_t list.
 * @head: doubly linked list.
 * @n: the value of node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	return (new);
}
