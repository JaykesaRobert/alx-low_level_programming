#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: member name
 * @age: member age
 * @owner: member owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
