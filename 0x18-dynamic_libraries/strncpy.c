#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function  copies  the  string pointed to by src
 * @dest: first string
 * @src: second string
 * @n: n bytes of src are copied
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
