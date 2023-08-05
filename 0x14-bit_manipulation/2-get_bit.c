#include "main.h"
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
			result *= a;
		a = a * a;
		n = n >> 1;
	}
	return (result);
}
/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n & powerof2(index))
		return (1);
	else
		return (0);
}
