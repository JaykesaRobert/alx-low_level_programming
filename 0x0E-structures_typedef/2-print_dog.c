#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", (*d).name ? (*d).name : NIL);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner ? (*d).owner : NIL);
}
