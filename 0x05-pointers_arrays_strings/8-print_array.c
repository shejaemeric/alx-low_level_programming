#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of a string
 * @a: arg1
 * @n: arg2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n - 2 ; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
