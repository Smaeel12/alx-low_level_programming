#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Old Size, in bytes, of the allocated space.
 * @new_size: New size, in bytes, of the new memory block.
 * Return: Pointer to the reallocated memory block.
  * If new_size > old_size, the “added” memory should not be initialized
  * If new_size == old_size, returns ptr.
  * If new_size == 0 and ptr is not NULL, returns NULL and frees ptr.
  * If ptr is NULL, returns a pointer to the newly allocated memory block.
  * returns NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newptr;

	/* If nddew_size > old_size, do not initialized the new memory */
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);

		free(ptr);
		memset(newptr, 0, old_size);
		return (newptr);
	}
	/* If new_size == old_size do not do anything and return ptr */
	else if (new_size == old_size)
	{
		return (ptr);
	}
	/* If ptr is NULL */
	else if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	/* If new_size is equal to zero, and ptr is not NULL */
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (0);
}
