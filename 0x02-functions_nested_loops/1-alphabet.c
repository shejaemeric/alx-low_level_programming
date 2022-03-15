#include "main.h"

/**
* main - prints alphabets
* Return: 0
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
	return (0);
}
