#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string given as a parameter.
 * Return: NULL if str = NULL and On success returns a pointer to
 * the duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *newstr;
	int len = strlen(str);
	int i;


	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		newstr = malloc(sizeof(char) * len + 1);
		for (i = 0; i < len; i++)
			newstr[i] = str[i];
		if (newstr == NULL)
			return (NULL);
		else
			return (newstr);
	}
}
