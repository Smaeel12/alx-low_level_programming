#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to struct.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int n = 1;

	if (h->str != NULL)
	{
		printf("[%i]", h->len);
		printf("%s\n", h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	if (h->next != NULL)
	{
		n++;
		print_list(h->next);
	}
	return (n);
}
