#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - put teo strings together
 *@s1:string
 *@s2:string
 * Return: pointer cpy.
 */

char *str_concat(char *s1, char *s2)
{
	char *cpy;
	int i, len = 0;

	cpy = malloc(sizeof(s1) + sizeof(s2)) + 1);
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
