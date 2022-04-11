#include "dog.h"
#include <stdio.h>

/**
 * init_dog - writes the character c to stdout
 *
 * @d: variable to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
