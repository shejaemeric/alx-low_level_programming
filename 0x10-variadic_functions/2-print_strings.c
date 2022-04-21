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
	char *s;

	va_start(ap, n);
	if (separator == NULL)
		nosep();
	else
		sep();
	if (*s == '\0')
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(ap);
}

/**
 * nosep - print with no separator
 *
 * Return: void
 */
void nosep(void)
{
	s = va_arg(ap, char *);
	for (i = 1; i < n; i++)
	{
		if (*s == '\0')
			printf("(nil)");
		else
			printf("%s", s);
		s = va_arg(ap, char *);
	}
}

/**
 * sep - print with separator
 *
 * Return: void
 */
void sep(void)
{
	s = va_arg(ap, char *);
	for (i = 1; i < n; i++)
	{
		if (*s == '\0')
		{
			printf("(nil)");
			printf("%s", separator);
		}
		else
		{
			printf("%s", s);
			printf("%s", separator);
		}
		s = va_arg(ap, char *);
	}
}
