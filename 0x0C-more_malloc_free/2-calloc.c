#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array.
 * @size: size of byte on the array.
 * Return: returns a pointer to the allocated memory.
  * The memory is set to zero
  * If nmemb or size is 0, then _calloc returns NULL
  * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	/* case size or nmemeb equal 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate the memory */
	arr = malloc(size * nmemb + 1);
	if (arr == NULL)
		return (NULL);

	/* set memory to zero */
	memset(arr, 0, size * nmemb + 1);

	/* return a pointer */
	return (arr);
}
