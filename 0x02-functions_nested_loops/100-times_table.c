#include "main.h"
/**
 * print_times_table - check the code.
 * @n: variable
 * Description
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j, multi;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;
				if (multi >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
				else if (multi >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
					_putchar(multi + '0');
				}
			}
			_putchar('\n');
		}
	}
}
