#include "main.h"

/**
*print_last_digit- checks if char us lower case
*@n: integer c to check
* Return: int
*/

int print_last_digit(int n)
{
	n = n % 10;
	n = n * 11;
	return (n);
}
