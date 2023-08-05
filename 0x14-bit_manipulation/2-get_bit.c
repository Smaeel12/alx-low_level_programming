#include "main.h"
#include <stdbool.h>

/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((unsigned long int) (1 << index) > n)
		return (-1);
	return (!((bool) n & (1 << index)));
}
