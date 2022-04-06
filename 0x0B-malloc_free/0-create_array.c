#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array -function that creates an array of chars
 *@size:size
 *@c:char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(c) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	while (size > 0)
	{
		str[size] = c;
		size--;
	}
	str[0] = c;
	return (str);
}
