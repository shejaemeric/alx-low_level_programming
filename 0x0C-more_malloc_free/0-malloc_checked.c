#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - copies memory area
* @b: first variable
*
* Return: a pointer to the memory area
*/
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
