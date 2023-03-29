#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 * Return: numbers in the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s && (*s < '0' ||  *s > '9'))
	{
	if (*s == '-')
		sign *= -1;
	s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
