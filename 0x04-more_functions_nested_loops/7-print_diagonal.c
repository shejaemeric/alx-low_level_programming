#include "main.h"

/**
*print_diagonal- prints number 0 to 9
*@n:number of _ to print
* Return: void
*/

void print_diagonal(int n)
{
	int c = 1;
	int b;

	while (c <= n)
	{
		b = c;
		while (b > 1)
		{
			_putchar('_');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
