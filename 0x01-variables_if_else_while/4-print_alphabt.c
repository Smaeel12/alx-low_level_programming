#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
	if (c != 101 && c != 113)
		putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
