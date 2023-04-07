#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int div, mod;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	div = n / 10;
	if (div > 0)
		print_number(div);
	mod = n % 10;
	_putchar(mod + '0');
}
