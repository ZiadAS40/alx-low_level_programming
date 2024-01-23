#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog.
 * @name: the name of it.
 * @age: the age of it.
 * @owner: the owner of it.
 * Return: a new dog.
 * Description: structure that contain a dog properties like
 * name, age and owner.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr != NULL)
	{
		ptr->name = strdup(name);
		if (ptr->name == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->age = age;
		ptr->owner = strdup(owner);
		if (ptr->owner == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	free(ptr);
	return (NULL);
}
