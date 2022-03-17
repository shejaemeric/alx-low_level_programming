#include "main.h"

/**
*print_triangle- prints a triangle of #
*@size:number of \ to print
* Return: void
*/

void print_triangle(int size)
{
	int c = size;
	int b;

	while (c > 0)
	{
		b = 1;

		while (b <= size)
		{
			if (b >= c)
				_putchar('#');
			else
			    _putchar(' ');
			b++;
		}
		_putchar('\n');
		c--;
	}
	_putchar('\n');
}
