#include <string.h>
/**
 * _strcat - function appends the src string to the dest string
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char /*new[100],*/ i = 0/* j = 0, k = 0*/;
	int r = strlen(dest);

	while (*(src + i) != '\0')
	{
		*(dest + (r + i)) = *(src + i);
		i++;
	}
	return (dest);
}
