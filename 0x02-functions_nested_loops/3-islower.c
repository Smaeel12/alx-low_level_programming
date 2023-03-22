#include <stdio.h>
/**
 * _islower - entry point
 * @c: The character entred
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
