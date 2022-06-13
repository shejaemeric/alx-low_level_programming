#include "main.h"
/**
 * _strcpy - copy str
 * @src: arg1
 * @dest: arg2
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; i >= 0; i++)
	{
		count++;
		if (src[i] == '\0')
			break;
	}
	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
