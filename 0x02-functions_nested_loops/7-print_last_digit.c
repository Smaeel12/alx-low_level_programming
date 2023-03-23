#include "main.h"
/**
 * print_last_digit - entry point
 * @n: The character entred
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int mod;

	if (n < 0)
	{
		mod = n % 10;
		mod *= -1;
		_putchar(mod + '0');
	}
	else
	{
		mod = n % 10;
		_putchar(mod + '0');
	}
	return (mod);
}
