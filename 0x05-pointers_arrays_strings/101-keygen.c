#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random code for 101-crackme
 * Return: always 0.
 */
int main(void)
{
	int passwd[128], sum = 0, i;

	srand(time(NULL));

	for (i = 0; i < 128; i++)
	{
		if (2772 - sum - 94 < 32)
		{
			passwd[i] = 2772 - sum - 94;
			sum += passwd[i] + 94;
			putchar(passwd[i] + 94);
			break;
		}
		passwd[i] = rand() % 32;
		sum += passwd[i] + 94;
		putchar(passwd[i] + 94);
	}
	/* printf("\n%i\n", sum); */
	return (0);
}
