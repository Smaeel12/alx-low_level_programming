#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int r = strlen(dest);

	while (i < n && *(src + i) != '\0')
	{
		*(dest + (r + i)) = *(src + i);
		i++;
	}
	return (dest);
}
