#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
