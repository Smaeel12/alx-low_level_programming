#include <stdio.h>
/**
 * flip_bits - write a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_num = n ^ m;
	unsigned long int checker = 1;
	unsigned int index = 0;
	unsigned int num_flips = 0;

	while (checker <= xor_num && index < sizeof(unsigned long int) * 8)
	{
		checker = 1UL << index;
		if (checker & xor_num)
			num_flips++;
		index++;
	}
	return (num_flips);
}
