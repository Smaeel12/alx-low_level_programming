#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			multi = i * j;
			if (multi == 0 && j == 0)
			{
				_putchar ('0');
				_putchar (',');
			}
			else if (multi <= 9)
			{
				_putchar (' ');
				_putchar (' ');
				_putchar (multi + '0');
				_putchar (',');
			}
			else
			{
				_putchar (' ');
				_putchar ((multi / 10) + '0');
				_putchar ((multi % 10) + '0');
				_putchar (',');
			}
		}
	_putchar('\n');
	}
}
