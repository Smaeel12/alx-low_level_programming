/**
 * rot13 - rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
	{
		for (j = 0;(s[j] <= 'Z' && s[j] >= 'A') && (s[j] <= 'Z' && s[j] >= 'A') ; j++)

		{
		if (s[i] <= 'Z' && s[i] >= 'A')
		{
			s[i] = (s[i] - 65) + 13;
			if (s[i] > 26)
				s[i] = (((s[i] - 65) + 13) % 26) + 65;
		}
		else
		{
			s[i] = (s[i] - 97) + 13;
			if (s[i] > 26)
				s[i] = (((s[i] - 97) + 13) % 26) + 97;
		}
		}
	}
	return (s);
}
