#include "main.h"

/**
*print_alphabet_x10 - prints alphabets 10 times
* Return: void
*/

void print_alphabet_x10(void)
{
	char letter = 'a';
	int j = 0;

	while (j < 10)
	{
		int i = 0;

		while (i < 26)
		{
			_putchar(letter);
			letter++;
			i++;
		}
		_putchar('\n');
		j++;
	}
}
