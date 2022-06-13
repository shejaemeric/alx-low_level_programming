#include "main.h"

/**
 * _strlen - count char in a string
 * @s: month in number format
 * Return: int
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}

	return (count);
}
