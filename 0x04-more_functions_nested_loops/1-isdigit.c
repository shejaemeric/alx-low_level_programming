#include "main.h"

/**
*_isdigit(int c)- checks if char is a digit case
*@c: integer c to check if it is a digit
* Return: int
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
