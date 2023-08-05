#include "main.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
