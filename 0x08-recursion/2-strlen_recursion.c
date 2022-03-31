#include "main.h"

/**
*_strlen_recursion - function........
*@s: arg1
*Return: void
*/

int _strlen_recursion(char *s)
{
	int count = 0;
	if (*s == '\0')
	{
		return (count);
	}
	count++;
	return (count + _strlen_recursion(s + 1));
}
