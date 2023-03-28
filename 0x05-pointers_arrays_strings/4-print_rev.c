#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int r, i;

	r = strlen(s);
	for (i = r; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
