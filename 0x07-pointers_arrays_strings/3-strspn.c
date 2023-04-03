#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string.
 * @accept: substring.
 * Return: returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int num = 0;
	int notfound = strlen(accept);

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
			else
				notfound--;
		}
		if (notfound == 0)
		{
			break;
		}
		else
		{
			notfound = strlen(accept);
		}
	}
	return (num);
}
