#include "main.h"
/**
 * puts_half - print half of string
 * @str: arg1
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}
	if (count % 2 == 0)
		n = length_of_the_string / 2;
	else
		n = (length_of_the_string - 1) / 2;

	for (i = n - 1; i <= count - 1; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
