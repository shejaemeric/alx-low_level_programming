#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: arg1
 * @src: arg2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int count, i, j;

	for (i = 0; i >= 0; i++)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; j >= 0; j++)
			{
				dest[count + j] = src[j];
				if (src[j] == '\0')
					break;
			}
			break;
		}
		count++;
	};
	return (dest);
}
