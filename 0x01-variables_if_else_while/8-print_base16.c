#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char NumChar;
	char Letter;

	for (NumChar = '0' ; NumChar <= '9' ; NumChar++)
	{
		putchar(NumChar);
	}
	for (Letter = 'a' ; Letter <= 'f' ; Letter++)
	{
		putchar(Letter);
	}
	putchar('\n');
	return (0);
}
