#include "main.h"
/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y.
 * @x: the value
 * @y: the power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y > 0)
	{
		result = x;
		result = result * _pow_recursion(x, y - 1);
	}
	else if (y < 0)
		result = -1;

	return (result);
}
