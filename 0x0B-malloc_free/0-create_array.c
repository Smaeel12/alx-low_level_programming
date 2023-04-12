#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: initializer
 * Return: NULL if size = 0 and a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size + 1);
		if (arr == NULL)
			return (NULL);
		arr[size] = '\0';
		for (i = size - 1; i >= 0; i--)
			arr[i] = c;
		return (arr);
	}


}
