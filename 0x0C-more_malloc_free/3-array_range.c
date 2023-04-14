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

	/* condition */
	if (min > max)
		return (NULL);

	/* allocate the memory */
	narr = malloc(sizeof(int) * (max - min + 1));
	if (narr == NULL)
		return (NULL);

	/* set memory */
	for (i = 0; i < max + 1 ; i++)
		narr[i] = min++;

	return (narr);
}
