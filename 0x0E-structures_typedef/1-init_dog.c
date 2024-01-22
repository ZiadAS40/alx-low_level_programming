#include <stdio.h>
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
	struct Dog dog;

	d = &dog;
	(*d).name = "Bob";
	(*d).age = 3.5;
	d->owner = "Ali";
}
