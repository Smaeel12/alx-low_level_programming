/**
 * _memset - function that fills memory with a constant byte.
 * @s: the address of memory to print
 * @n: the size of the memory to fill
 * @b: constant filled by
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
