#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? d->name = "(nil)" : d->name;
		d->owner == NULL ? d->owner = "(nil)" : d->owner;

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
