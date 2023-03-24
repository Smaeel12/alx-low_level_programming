#include "main.h"
/**
 * print_triangle - check the code
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;
	if (size > 0)
	{	i = size;
		while (i > 0)
		{
			for (j = 0; j < (i - 1); j++)
				_putchar(' ');
			for (k = (size - j); k > 0; k--)
				_putchar('#');
			_putchar('\n');
			i--;
		}
	}
	else
		_putchar('\n');
}
