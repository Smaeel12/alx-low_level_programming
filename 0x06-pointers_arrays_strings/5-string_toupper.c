/**
 * string_toupper -  function that changes all lowercase letters of a string
 * to uppercase.
 * @s: lowercase string
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
