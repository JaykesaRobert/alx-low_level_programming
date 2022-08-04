#include "dog.h"

/**
 * _strdup - duplicate a string
 * @str: string
 *
 * Return: pointer to newely allocated space in memory
 */
char *_strdup(char *str)
{
	char *temp;
	int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	temp = malloc(sizeof(char) * ++i);

	if (!temp)
		return (NULL);

	for (j = 0; j < i; j++)
		temp[j] = str[j];

	return (temp);
}

/**
 * new_dog - structure
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || !owner)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
