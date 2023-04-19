#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two positive numbers.
 * mul: calculate the multiplication.
 * num1: first number.
 * num2: second number.
 * Return:
 * 
 * Print the result, followed by a new line
 * 
 * If the number of arguments is incorrect, print Error, followed by a new line, and exi
 * with a status of 98
 * 
 * num1 and num2 should only be composed of digits. If not, print Error, followed by a 
 * new line, and exit with a status of 98
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}
	else if (!(num1 < -1 && num1 > 10) && !(num2 < -1 && num2 > 10))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int *mul = malloc(sizeof(int));
		int num1 = malloc(
		mul = num1 * num2;
		printf("%i\n", mul);
		free(mul);
	}
	return (0);
}


int main(void)
{
        char *argv[] = {"10", "98"};
        int len1 = strlen(argv[0]);
        int len2 = strlen(argv[1]);
        int *num1 = malloc(sizeof(int) * len1);
        int *num2= malloc(sizeof(int) * len2);
        int *mul =malloc(sizeof(int) * len2 * len1);
        memset(mul, 0, len2 * len1);
        num1 = argv[0];
        num2 = argv[1];
        printf("%i\n", mul);
        free(mul);
        free(num1);
        free(num2);

        return (0);
}
