#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array -function that creates an array of chars, and initializes it with a specific cha
 *@size:size
 *@c:char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c){
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(c) * size);
	while (size > 0)
	{
		str[size] = c;
		size--;
	}
	return (str);
}
