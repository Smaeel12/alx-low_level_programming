#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: unsigned long int number to print in binary.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int remainder;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	remainder = n & 1;
	print_binary(n >> 1);
	_putchar(remainder + '0');
}
