#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a structure of dog's members.
 * @d: the structure.
 * Description: structure of a dog's name, age and owner.
 * Return: 0.
 */
void free_dog(dot_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
