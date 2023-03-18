#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int c = 97;
	int C = 65;

	while (c <= 122)
	{
	putchar(c);
	c++;
	}
	while (C <= 90)
	{
	putchar(C);
	C++;
	}
	putchar('\n');
	return (0);
}
