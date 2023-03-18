#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48 ; num <= 57 ; num++)
	{
		putchar(num);
	}
	putchar ('\n');
}
