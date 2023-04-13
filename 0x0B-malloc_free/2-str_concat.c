#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer point to a newly allocated space in memory which
  * contains the contents of s1, followed by the contents of s2, and
   * null terminated and should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concstr;
	int i = 0, j;
	int len;

	/* calculating the lenght */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2);

	/* allocating the memory */
	concstr = malloc(sizeof(char) * len + 1);
	if (concstr == NULL)
	{
		return (NULL);
	}

	/* concating the strings to the new pointer */
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concstr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			concstr[i + j] = s2[j];
		}
	}
	concstr[len] = '\0';

	return (concstr);
}
