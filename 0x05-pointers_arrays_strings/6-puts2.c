#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 */
void puts2(char *str)
{
	int i, r;

	r = strlen(str);
	for (i = 0; i < r; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
