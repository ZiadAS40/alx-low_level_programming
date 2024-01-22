#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - assign a values to the strucure dog.
 * @d: the structure.
 * @name: the name of the dog.
 * @age: the age of it.
 * @owner: it's owner.
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	} else
	{
	(*d).name = name;
	(*d).age = age;
	d->owner = owner;
	}
}
