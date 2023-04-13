#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
  * array of integers.
 * @width:  width of the array
 * @height: height of the array
 * Return: NULL on failure and If width or height is 0 or negative, return NULL
  * on success return a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, row, column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}

	return (array);
}
