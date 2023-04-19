#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array : array of element
 * @size: the number of elements in the array (array)
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which
  * the cmp function does not return 0
  * If no element matches, return -1
  * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rtn;

	if (array != NULL && cmp != NULL)
	{
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			rtn = cmp(array[i]);
			if (rtn == 1)
			{
				return (i);
			}
		}
	return (-1);
	}
	}
}

