/**
 * rot13 - rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char LET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char let[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
	{
		for (j = 0; j <= 25; j++)
		{
		if (s[i] == LET[j])
		{
			s[i] = LET[j + 13];
			break;
		}
		else if (s[i] == let[j])
		{
			s[i] = let[j + 13];
			break;
		}
		}
	}
	return (s);
}
