#include "function_pointers.h"

/**
 * int_index - prints a name
 * @array: array
 * @size: size of array
 * @cmp: compare function
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size != 0 && comp != 0)
	{
		if (size <= 0)
			return (-1);
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
}
