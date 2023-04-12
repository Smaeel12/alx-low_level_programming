#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously
  * created by your alloc_grid function.
 * @grid: previous grid.
 * @height: height of the array.
 * Return: NULL on failure and If width or height is 0 or negative, return NULL
  * on success return a pointer to a 2 dimensional array of integers.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
