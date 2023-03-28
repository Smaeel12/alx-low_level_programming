#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int i, r;

	r = strlen(str);
	for (i = r / 2; i < r; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
