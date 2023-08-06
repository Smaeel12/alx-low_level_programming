/**
 * flip_bits - write a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int index = 0;
	unsigned int num_flips = 0;
	unsigned long int checker = 1;

	while (checker <= n || checker <= m)
	{
		checker = 1 << index;
		if (checker & m || checker & n)
		{
			if ((checker & m) ^ (checker & n))
				num_flips++;

		}
		index++;

	}
	return (num_flips);
}
