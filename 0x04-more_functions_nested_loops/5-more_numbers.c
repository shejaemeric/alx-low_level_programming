void more_numbers(void);
#include "main.h"

/**
*more_numbers(void)- prints number 0 to 9
* Return: void
*/

void more_numbers(void)
{
	int b = 0;
	int a;
	int c;

	while (b <= 10){
		a = 48;
		while (a <= 62)
		{
			if (a > 57)
			{
				a = a - 9;
				_putchar(49);
			}
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}

}
