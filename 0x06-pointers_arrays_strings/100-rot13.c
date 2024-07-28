/**
 * rot13 - rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] && s[i] != '\n'; i++)
	{
		while ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
		{
			if (s[i] <= 'Z' && s[i] >= 'A')
				s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
			else
				s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
			i++;
		}
	}
	return (s);
}
