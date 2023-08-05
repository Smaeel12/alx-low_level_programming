#include "main.h"
#include <stdio.h>
/**
 * powerof2 - function that calculate the power of 2
	* using binary exponentiation
 * @n: the number.
 * Return: the result.
 */
unsigned long int powerof2(int n)
{
	unsigned long int result = 1;
	unsigned long int a = 2;

	while (n > 0)
	{
		if (n & 1)
		{
			result *= a;
		}
		a = a * a;
		n = n >> 1;
	}
	return (result);
}
/**
 *  * print_binary - function that prints the binary
	* representation of a number.
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int e = 65;

	while ((n & powerof2(e)) == 0 && e)
	{
		e--;
	}
	while (e >= 0)
	{
		if (n & powerof2(e))
			_putchar('1');
		else
			_putchar('0');
		e--;
	}
}
