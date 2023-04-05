/**
 * _strstr -  function that locates a substring.
 * @haystack: first string.
 * @needle: second string.
 * Return: Returns a pointer or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 0; haystack[i + j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					if (needle[j + 1] == '\0')
						return (haystack + i);
				}
				else
					break;
			}
		}
	}
	return (0);

}
