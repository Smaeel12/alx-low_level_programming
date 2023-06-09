#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct type - struct type.
 * @format: type.
 * @func: The function associated.
 */
typedef struct type
{
	char format;
	void (*func)(va_list args);
} type_t;
void print_all(const char * const format, ...);


#endif
