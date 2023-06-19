/**
 * _memcpy - function that copies memory area.
 * @dest: the address of memory to copy to
 * @src: the address of the memory to copy from
 * @n: the number of bytes to copy
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
