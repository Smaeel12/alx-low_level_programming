#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to struct.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0);
	}
	if (h->str != NULL)
	{
		printf("[%i] %s\n", h->len, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	if (h->next != NULL)
	{
		count++;
		print_list(h->next);
	}
	return (count);
}
