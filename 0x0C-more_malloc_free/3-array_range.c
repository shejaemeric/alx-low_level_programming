#include <stdlib.h>
#include "main.h"
/**
* *array_range - copies memory area
* @min: minimum
* @max: maximum
* Return: a pointer to the memory area
*/

int *array_range(int min, int max)
{
	int *a, i = 0, total;

	if (min > max)
		return (NULL);

	total = max - min + 2;

	a = malloc(sizeof(int) * total);
	while (i < total)
	{
		a[i] = min;
		min++;
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
