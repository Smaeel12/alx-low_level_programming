#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void main(void)
{
	int i, c1, c2, c1r, c2r;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}
