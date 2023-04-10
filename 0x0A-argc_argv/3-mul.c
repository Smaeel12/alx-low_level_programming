#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);	       
		int y = atoi(argv[2]);
		printf("%i\n", x*y);
		return (0);
	}
}
