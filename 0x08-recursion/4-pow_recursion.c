#include "main.h"

/**
*_pow_recursion - function........
*@x: arg1
*@y: arg1
*Return: void
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (1 / (x * _pow_recursion(x, -(y++))));
	return (x * _pow_recursion(x, y - 1));
}
