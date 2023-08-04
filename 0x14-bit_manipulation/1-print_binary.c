#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;
	int exp = 0, idx = 0;

	if (n == 0 || n == 1)
		_putchar(n + '0');
	else
	{
		while (bit * 2 <= n)
		{
			exp++;
			bit = bit * 2;
		}
		n -= bit;
		_putchar('1');
		while (exp != 0)
		{
			idx = exp - 1;
			bit = 1;
			while (idx != 0)
			{
				bit = bit * 2;
				idx--;
			}
			if (n >= bit)
			{
				_putchar('1');
				n -= bit;
			}
			else
				_putchar('0');
			exp--;
		}
	}
}
