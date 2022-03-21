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
		if (str[i] == '\0')
			break;
		count++;
	}
	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (i = n ; i <= count - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
