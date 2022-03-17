#include "main.h"

/**
*_isupper- checks if char us lower case
*@c: integer c to check if it is upper
* Return: int
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 95)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
