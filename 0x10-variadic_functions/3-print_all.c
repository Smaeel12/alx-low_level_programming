#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_char - print a character.
 * @args: the character.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print a integer.
 * @args: the integer.
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - print a float number.
 * @args: the float number.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string.
 * @args: the string.
 */
void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int len = strlen(format);
	int i = 0, j = 0;
	char *separator = "";
	va_list args;
	type_t placeholder[] = {{'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_string}
				};
	va_start(args, format);
	while (i < len)
	{
		j = 0;
		while (j < 4 && format[i] != placeholder[j].format)
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			placeholder[j].func(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
}
