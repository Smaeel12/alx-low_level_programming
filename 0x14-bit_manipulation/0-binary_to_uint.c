#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
	* there is one or more chars in the string b that is not 0 or 1
	* b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit = 1, uint = 0;
	int len, e, idx = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	len--;
	while (len != -1)
	{
		for (e = 0; e < idx; e++)
			bit = bit * 2;
		if (b[len] == '1')
			uint += bit;
		else if (b[len] == '0')
			;
		else
			return (0);
		len--;
		idx++;
		bit = 1;
	}
	return (uint);
}
