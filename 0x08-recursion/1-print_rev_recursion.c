#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s);
	if (*(s + len) != '\0')
		_putchar(*(s + len));
	_print_rev_recursion(s + 1);
}
