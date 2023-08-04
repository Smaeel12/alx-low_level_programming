#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;

	if (n == 0 || n == 1)
		_putchar(n + '0');

	else
	{
		while (bit * 2 <= n)
		bit *= 2;
		while (bit != 0)
		{
			if (n & bit)
			{
				_putchar('1');
				n -= bit;
			}
			else
				_putchar('0');
			bit /= 2;
		}
	}
}
