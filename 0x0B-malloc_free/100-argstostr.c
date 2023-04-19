#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: NULL if ac == 0 or av == NULL
  * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *newstr;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
	{
		return(NULL);
	}
	for (i = 0; i < len;)
	{
		for (j = 0; j < ac; j++)
		{
			for (k = 0; av[j][k] != '\0'; k++)
			{
				newstr[i] = av[j][k];
				i++;
			}
			newstr[i] = '\n';
		}	
	}
	newstr[len] = '\0';
	return (newstr);
}
