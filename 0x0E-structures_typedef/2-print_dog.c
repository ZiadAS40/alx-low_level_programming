#include "dog.h"
#include <stdlib.h>
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
		printf("Name: (nil)");
	else
	printf("Name: %s", d->name);
	if (d->age == 0.0)
		printf("Age: (nil)");
	else
		printf("Age: %lf", d->age);
	if(d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
	}
}
