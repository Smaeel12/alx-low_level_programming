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
	int Num4;
	int x = 0;

	for (Num1 = 0 ; Num1 <= 9 ; Num1++)
	{
		for (Num2 = 0 ; Num2 <= 8 ; Num2++)
		{
			for (Num3 = Num1 ; Num3 <= 9 ; Num3++)
			{
				for (Num4 = x ; Num4 <= 9 ; Num4++)
				{
				if (Num1 != Num2 != Num3 != Num4)
				{	
					putchar(Num1 + '0');
					putchar(Num2 + '0');
					putchar(' ');
					putchar(Num3 + '0');
					putchar(Num4 + '0');
						if (Num1 != 9 || Num2 != 8 || Num3 != 9 || Num4 != 9)
						{
							putchar(',');
							putchar(' ');
						}
				}
				}
			}
		Num2 == 0 ? x = Num2 + 2 : Num2 + 1;
		}
	}
	putchar('\n');
	return (0);
}
