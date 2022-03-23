#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int count, i, j;

	for (i = 0; i >= 0; i++)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; j < n; j++)
			{
				if (src[j] == '\0')
					break;
				dest[count + j] = src[j];
			}
			break;
		}
		count++;
	};
	return (dest);
}
