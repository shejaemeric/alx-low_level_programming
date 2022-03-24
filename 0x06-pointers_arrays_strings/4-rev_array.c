#include "main.h"

/**
 * reverse_array - reverse array
 * @a: arg1
 * @n: arg1
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, pos;
	int b;

	n--;
	for (i = 0; i < n - i; i++)
	{
		b = a[i];
		a[i] = a[n - i];
		a[n - i] = b;
	}
}
