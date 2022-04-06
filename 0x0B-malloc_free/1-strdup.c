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
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	cpy = malloc((sizeof(str[1]) * len) + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (len >= 0)
	{
		cpy[len] = str[len];
		len--;
	}
	return (cpy);
}
