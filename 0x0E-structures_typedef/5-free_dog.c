#include "dog.h"

/**
 * free_dog - free memory of struct dog
 * @d: dog loc
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}
