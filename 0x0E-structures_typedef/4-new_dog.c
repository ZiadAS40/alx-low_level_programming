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

	if (name == NULL || owner == NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (ptr != NULL)
	{
		ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
		if (ptr->name == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (ptr->owner == NULL)
		{
			free(ptr->name);
			free(ptr);
			return (NULL);
		}
		ptr->name = strcpy(ptr->name, name);
		ptr->age = age;
		ptr->owner = strcpy(ptr->owner, owner);
		return (ptr);
	}
	return (NULL);
}
