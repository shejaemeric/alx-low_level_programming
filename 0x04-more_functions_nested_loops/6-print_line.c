#include "main.h"

/**
*print_line- prints number 0 to 9
*@n:number of _ to print
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
