#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy a string
 *@str:string
 * Return: pointer cpy.
 */

char *_strdup(char *str)
{
	char *cpy;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	cpy = malloc((sizeof(c) * len) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	str[len + 1] = '\0';
	while (len > 0)
	{
		cpy[len] = c;
		len--;
	}
	return (cpy);
}
