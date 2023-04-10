#include <stdio.h>
/**
 * main - entry point
 * Return: the number of arguments passed into it.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	putchar((argc - 1) + '0');
	putchar('\n');
	return(0);
}
