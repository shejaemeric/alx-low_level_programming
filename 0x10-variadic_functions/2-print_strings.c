#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 *
 * @separator: 1st arg
 * @n: 2nd arg
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s1;
	char *s2;
	unsigned int i;
	char *s = NULL;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		s1 = (va_arg(ap, char *) != s) ? va_arg(ap, char *) : "(nil)";
		s2 = (*separator != '\0') ? separator : "";
		printf("%s%s", s1, s2);
	}

	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
