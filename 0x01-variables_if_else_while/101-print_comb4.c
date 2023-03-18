#include <stdio.h>
#include <unistd.h>
/**
 * main - entrey point
 * Return: 0
 */
int main(void)
{
	int Num1;
	int Num2;
	int Num3;

	for (Num1 = 0 ; Num1 <= 7 ; Num1++)
	{
		for (Num2 = 1 ; Num2 <= 8 ; Num2++)
		{
			for (Num3 = 2 ; Num3 <= 9 ; Num3++)
			{
			if (Num1 != Num2 && Num2 != Num3)
			{
				putchar(Num1 + '0');
				putchar(Num2 + '0');
				putchar(Num3 + '0');
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
