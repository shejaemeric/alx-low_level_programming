#include "main.h"

/**
*_print_rev_recursion - function........
*@s: arg1
*Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		return;
	}
	_putchar(*s);
}
