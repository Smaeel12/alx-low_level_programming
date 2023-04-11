#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int coin = 0;

	if (argc == 2)
	{
		int x = atoi(argv[1]);

		if (x < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				coin += x / coins[i];
				x %= coins[i];
				if (x == 0)
					break;
			}
		printf("%i\n", coin);
		}
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
