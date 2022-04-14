#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 *
 * @separator: 1st arg
 * @n: 2nd arg
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s = NULL;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%s%s", (va_arg(ap, char *) != s) ? va_arg(ap, char *) : "(nil)", (*separator != '\0') ? separator : "");
	}

	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
