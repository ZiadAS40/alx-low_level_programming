#include "dog.h"
#include <stdio.h>
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
	dog_t sam;
	dog_t *ptr;
	char *cpyname = sam.name;
	char *cpyowner = sam.owner;

	ptr = &sam;
	if (ptr != NULL)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
		return (ptr);
	}
		return (0);
}
