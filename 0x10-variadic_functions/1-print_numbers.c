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
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(ap, int), (*separator != '\0') ? separator:"");
	}

	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
