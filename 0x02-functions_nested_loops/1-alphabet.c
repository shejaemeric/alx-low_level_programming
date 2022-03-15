#include "main.h"

/**
*print_alphabet - prints alphabets
* Return: void
*/

void print_alphabet(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 26)
	{
		_putchar(letter);
		letter++;
		i++;
	}
	_putchar('\n');
}

