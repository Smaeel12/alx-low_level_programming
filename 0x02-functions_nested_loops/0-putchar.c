#include "main.h"

/**
 * main - entry point
 * _putchar - writes the character to stdout
 * Return: On success 1.
 */
int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	do {
		_putchar(str[i]);
		i++;
	} while (str[i] != '\0');
	_putchar('\n');
	return (0);
}
