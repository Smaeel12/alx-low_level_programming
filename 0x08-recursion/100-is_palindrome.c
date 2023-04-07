#include <string.h>
/**
 * checklenght - checks if two chars of a string are equal
 * @s: string to be checked
 * @start: first index
 * @end: last index
 * Return: 1 if equal, else 0
 */

int checklenght(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (checklenght(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s:  pointer to string
 * Return: 1 if string is palindrome  else 0
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (checklenght(s, 0, len - 1));
}
