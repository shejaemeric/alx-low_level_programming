#include "main.h"

/**
 * cap_string - cap all words
 * @a: arg1
 * Return: char
 */

char *cap_string(char *a)
{
	int b[] = {
		9,
		10,
		34,
		32,
		33,
		63,
		44,
		59,
		46,
		123,
		124,
		125,
		126,
	};
	int i, j;
	int c, d;

	for (i = 0; i >= 0; i++)
	{
		if (a[i] == '\0')
			break;
		c = a[i];
		for (j = 0; j < 13; j++)
		{
			if (c == b[j])
			{
				d == b[j++];
				d = d + 32;
				b[j++] = d;
			}
		}
	};
	return (a);
}
