#include <stdio.h>
#include <unistd.h>
/**
 * main - entrey point
 * Return: 0
 */
int main(void)
{
	int Num;

	for (Num = '0' ; Num <= '9' ; Num++)
	{
		putchar(Num);
		if (Num != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
