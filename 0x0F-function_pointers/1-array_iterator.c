#include "function_pointers.h"

/**
 * array_iterator - execute a func on each array
 * @array: array
 * @size: size of array
 * @action: pointer to a func
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
