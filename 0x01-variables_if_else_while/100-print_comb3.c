#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int Num1 = 0;
	int Num2;

	do {
		for (Num2 = Num1 + 1 ; Num2 <= 9 ; Num2++)
		{
			putchar(Num1 + '0');
			putchar(Num2 + '0');
		if (Num1 != 8 ||  Num2 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	Num1++;
	} while (Num1 <= 8);
	putchar('\n');
	return (0);
}
