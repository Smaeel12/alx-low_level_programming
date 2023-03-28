#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int r, i;

	r = strlen(s);
	for (i = (r - 1); i >= 0; i--)
			_putchar(*(s + i));
	_putchar('\n');
}
