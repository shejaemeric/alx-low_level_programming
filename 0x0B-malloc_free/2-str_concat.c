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
	int len1 = 0, len2 = 0, total, start;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	total = len1 + len2 + 1;

	cpy = malloc(sizeof(char) * total);

	if (cpy == NULL)
		return (NULL);

	start = total - 1;
	cpy[start] = '\0';

	while (start >= len2)
	{
		cpy[start] = s2[start];
		start--;
	}
	while (start >= 0)
	{
		cpy[total] = s1[start];
		start--;
	}
	return (cpy);
}
