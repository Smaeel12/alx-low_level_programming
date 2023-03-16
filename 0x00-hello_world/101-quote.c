#include <stdio.h>
/**
 * main - function
 * Return: 1
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (str[i] != '\0')
	{
		putc(str[i], stderr);
		i++;
	}

	return (1);
}
