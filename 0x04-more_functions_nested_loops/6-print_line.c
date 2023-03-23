#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		do {
			_putchar('_');
			i++;
		} while (i < n);
	_putchar('\n');
	}
	else
		_putchar('\n');
}
