#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n:  number of bytes of s2 to concatenate.
 * Return: returne a pointer points to a newly allocated space in memory,
  * which contains s1, followed by the first n bytes of s2,
   * and null terminated.
  * If the function fails, it should return NULL.
  * If n is greater or equal to the length of s2 then use the entire string s2.
  * if NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0;
	unsigned int i, j;
	char *concstr;

	/* treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate the string lenght */
	lens1 = strlen(s1);
	lens2 = strlen(s2);

	/* n conditions */
	if (n >= lens2)
		n = lens2;

	/* allocate memory to the new string */
	concstr = malloc(sizeof(char) * (lens1 + n + 1) + 1);
	if (concstr == NULL)
		return (NULL);

	/*copy s1 and n byte of s2 to new address */
	for (i = 0; i < lens1; i++)
		concstr[i] = s1[i];
	for (j = 0; j < n + 1; j++)
		concstr[lens1 + j] = s2[j];
	concstr[lens1 + n + 1] = '\0';
	/* return the new str */
	return (concstr);
}
