/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string.
 * @accept: substring.
 * Return: returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int num = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			num++;
	}
	return (num);
}
