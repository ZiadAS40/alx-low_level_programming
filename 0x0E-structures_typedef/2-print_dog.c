#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print dog's members.
 * @d: the structure of the dog.
 * Description: a dog structure contain name, age and owner.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	printf("Name: %s", d->neme);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f", d->age);
	if(d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
