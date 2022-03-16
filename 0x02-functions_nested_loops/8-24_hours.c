#include "main.h"

/**
*jack_bauer- checks if char us lower case
* Return: void
*/

void jack_bauer(void)
{
	int a = 48, b, c, d;

	while (a < 51)
	{
		b = 48;
		while (b <= 57)
		{
			if (a == 50 && b == 52)
				break;
			c = 48;

			while (c < 54)
			{
				d = 48;

				while (d <= 57)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

}
