#include "main.h"

/**
 * string_toupper - stringfrom lowercase to uppercase
 * @a: arg1
 * Return: char
 */

char *string_toupper(char *a)
{
	int i, pos;
	int b;

	for (i = 0; i >= 0; i++)
	{
		if (a[i] == '\0')
			break;
		b = a[i];
		if (b >= 65 || b <= 97)
		{
			b = b + 32;
			a[i] = b;
		}
	};
	return (a);
}
