#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that performs simple operations.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	int (*operator)(int, int);
	int calc;



	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num2 = atoi(argv[3]);
	num1 = atoi(argv[1]);

	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%i\n", calc);
	return (0);
}
