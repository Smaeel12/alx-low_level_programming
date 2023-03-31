/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: an integer less  than,  equal  to,  or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] != '\0' || s2[i] != '\0')
	{	
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			break;
		}
		else
			i++;
	}
	return (0);
}
