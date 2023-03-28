#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: array of integers
 * @n: elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i = 0;

	do {
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
		i++;
	} while (i < n);
	printf("\n");
}
