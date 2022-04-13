#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: array
 * @size: size of array
 * @action: function to peform on each item
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
