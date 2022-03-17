
#include "main.h"

/**
*print_square- prints a square of #
*@size:number of \ to print
* Return: void
*/

void print_square(int size)
{
	int c = 1;
	int b;

	while (c <= size)
	{
		b = 1;
		while (b <= size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
