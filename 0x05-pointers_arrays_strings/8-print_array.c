#include "main.h"
/**
 * print_array - print n elements of a string
 * @a: arg1
 * @n: arg2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, n, count = 0;
//////////
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}

	_putchar('\n');
}
