#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long div = 2;
	long prime;
	long mod;

	while (num != 1)
	{
		mod = num % div;
		if (mod == 0)
		{
			num = num / div;
			prime = div;
		}
		div++;
	}
	printf("%li\n", prime);
	return (0);
}
