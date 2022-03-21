#include "main.h"

/**
 * print_rev - print reverse
 * @s: arg1
 * Return: void
 */

void print_rev(char *s);
{
	int i, count = 0;
	char arr[];

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
			break;
		arr[i] = str[i];
		_putchar(str[i]);
		count++;

	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
}
