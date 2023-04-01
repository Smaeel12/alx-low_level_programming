/**
 * leet - function that encodes a string to 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == letter[j] - 32)
				s[i] = replace[j];
		}
	}
	return (s);
}
