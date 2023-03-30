#include <string.h>
/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: an integer less  than,  equal  to,  or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int r1 = strlen(s1);
	int r2 = strlen(s2);

	if (r1 < r2)
		return (-15);
	else if (r1 > r2)
		return (15);
	else
		return (0);
}
