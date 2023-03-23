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
		n *= -1;
		mod = n % 10;
		_putchar(mod + '0');
		return (mod);
	}
	else
	{
		mod = n % 10;
		_putchar(mod + '0');
		return (mod);
	}
}
