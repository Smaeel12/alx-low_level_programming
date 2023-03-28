#include <string.h>
/**
 * rev_string- function that prints a string, in reverse,
 * followed by a new line.
 * @s: string
 */
void rev_string(char *s)
{
	int r, i, j, tmp;

	r = strlen(s);
	for (i = 0; i < r / 2; i++)
	{
		j = r - i - 1;
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
	}
}
