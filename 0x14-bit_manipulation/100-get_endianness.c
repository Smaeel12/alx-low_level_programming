#include <stdio.h>
#include <string.h>

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *representing = (char *) &n;

	/* printf("%02X", *representing); */
	if (*representing)
		return (1);
	else
		return (0);
}
