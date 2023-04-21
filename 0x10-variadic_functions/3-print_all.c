#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - print a character.
 * @args: the character.
 */
void print_char(va_list args)
{
	char ch = va_arg(args, int);

	printf("%c", ch);
}

/**
 * print_int - print a integer.
 * @args: the integer.
 */
void print_int(va_list args)
{
	int in = va_arg(args, int);

	printf("%i", in);
}

/**
 * print_float - print a float number.
 * @args: the float number.
 */
void print_float(va_list args)
{
	float fl = va_arg(args, double);

	printf("%f", fl);
}

/**
 * print_string - print a string.
 * @args: the string.
 */
void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list args;
	type_t placeholder[] = {{'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_string}
				};

	va_start(args, format);
	while (format && format[i])
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
	va_end(args);
}
