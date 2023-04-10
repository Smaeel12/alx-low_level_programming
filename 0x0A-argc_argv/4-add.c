#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 */
int main(int argc, char *argv[])
{


	int i, j;
	int sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]); 
	}
	printf("%i\n", sum);
	return (0);
}
