#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
		{
			printf("%s", string);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
