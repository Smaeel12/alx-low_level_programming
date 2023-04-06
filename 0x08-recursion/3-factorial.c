#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: given number.
 * Return: returns the factorial.
 */
int factorial(int n)
{
	int result = 1;

	if (n > 0)
	{
		result = n;
		result = result * factorial(n - 1);
	}
	else if (n < 0)
		result = -1;

	return (result);
}
