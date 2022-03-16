#include "main.h"

/**
*_isalpha- checks if char us lower case
*@c: integer c to check
* Return: int
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

