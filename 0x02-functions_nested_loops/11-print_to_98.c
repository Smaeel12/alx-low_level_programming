#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: number entred
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98 ; i++)
		{
		if (i != n)
			putchar(' ');
		printf("%d", i);
		if (i != 98)
			putchar(',');
		}
	}



	else
	{
		for (i = n; i >= 98; i--)
		{
		if (i != n)
			putchar(' ');
		printf("%d", i);
		if (i != 98)
			putchar(',');
		}
	}
	putchar('\n');
}
