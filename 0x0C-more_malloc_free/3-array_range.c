#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: first byte.
 * @max: last byte.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *narr;
	int i;
	int size;

	/* condition */
	if (min > max)
		return (NULL);
	else
		size = max - min + 1;

	/* allocate the memory */
	narr = malloc(sizeof(int) * size);
	if (narr == NULL)
		return (NULL);

	/* set memory */
	for (i = 0; i < size; i++)
		narr[i] = min++;

	return (narr);
}
