#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freeing a dog
 * @d: structure to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
