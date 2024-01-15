#include <string.h>
/**
 * _strncat - function  copies  the  string pointed to by src
 * @dest: first string
 * @src: second string
 * @n: n bytes of src are copied
 * Return: a pointer to the resulting string dest
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
