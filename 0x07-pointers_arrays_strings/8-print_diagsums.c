#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *a;
		a += (size + 1);
	}
	a -= (size + 1);
	a -= (size - 1);
	for (j = (size - 1); j >= 0; j--)
	{
		sum2 += *a;
		a -= (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);

}
