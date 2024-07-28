#include "main.h"

/**
 * recur_print_number - recursive function to print an integer
 * @n: integer
 */
void recur_print_number(unsigned int n)
{
	char c;

	if (n >= 10)
		recur_print_number(n / 10);
	c = n % 10 + '0';
	_putchar(c);
}
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		recur_print_number(-n);
		return;
	}
	recur_print_number(n);
}
