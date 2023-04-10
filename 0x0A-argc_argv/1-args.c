#include <stdio.h>
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	putchar((argc - 1) + '0');
	putchar('\n');
	return (0);
}
