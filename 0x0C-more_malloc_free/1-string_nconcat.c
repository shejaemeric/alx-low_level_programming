#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - copies memory area
*@s1: first string
*@s2: second string
*@n: number
* Return: a pointer to the memory area
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, num1, total;
	char *a;

	num1 = _strlen(s1);
	total = (num1 + n + 1);
	a = malloc(sizeof(char) * total);

	if (a == NULL)
		return (NULL);

	a[total] = '\0';
	while (i < num1)
	{
		a[i] = s1[i];
		i++;
	}
	while (i < total - 1)
	{
		a[i] = s2[i - num1];
		i++;
	}
	return (a);
}

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
