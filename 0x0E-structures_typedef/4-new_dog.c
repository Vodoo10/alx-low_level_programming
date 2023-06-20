#include <stdlib.h>
#include "dog.h"

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int size, i;

	size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size1, size2;

	size1 = _strlen(name);
	size2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (size1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (size2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

