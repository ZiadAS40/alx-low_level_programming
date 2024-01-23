#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print dog's members.
 * @d: the structure of the dog.
 * Description: a dog structure contain name, age and owner.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	}
}
