#include "main.h"

/**
 * create_array - creates an array of char and initialize
 * it with specific char
 * @size: size
 * @c: character
 *
 * Return: size == 0 ? NULL : array pinter
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size < 1 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(array + i) = c;

	*(array + i) = END;

	return (array);
}
