#include "main.h"

/**
 * rev_string - reverse a string
 * @s: arg1
 * Return: void
 */

void rev_string(char *s)
{
	int i, count = 0;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}

	int arr[count];

	for (i = count - 1; i >= 0; i--)
	{
		arr[i] == s[count - 1 - i];
	}

	for (i = 0; i <= count - 1; i++)
	{
		s[i] == arr[i];
	}
	_putchar('\n');
}
